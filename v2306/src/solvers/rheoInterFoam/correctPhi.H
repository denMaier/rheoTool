// Calculate absolute flux
// from the mapped surface velocity
phi = mesh.Sf() & Uf();

correctUphiBCs(U, phi);

if (divU.valid())
{
    CorrectPhi
    (
        U,
        phi,
        p_rgh,
        surfaceScalarField("rAUf", fvc::interpolate(rAU())),
        divU(),
        pimple
    );
}
else
{
    CorrectPhi
    (
        U,
        phi,
        p_rgh,
        surfaceScalarField("rAUf", fvc::interpolate(rAU())),
        geometricZeroField(),
        pimple
    );
}

#include "continuityErrs.H"

// Make the flux relative to the mesh motion
fvc::makeRelative(phi, U);
