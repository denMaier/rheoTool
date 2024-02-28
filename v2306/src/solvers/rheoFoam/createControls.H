pimpleControl pimple(mesh);
pimpleControl dummyPimple(mesh, "pimple");

#include "createTimeControls.H"

bool correctPhi
(
    pimple.dict().lookupOrDefault("correctPhi", mesh.dynamic())
);

bool checkMeshCourantNo
(
    pimple.dict().lookupOrDefault("checkMeshCourantNo", false)
);

bool moveMeshOuterCorrectors
 (
     pimple.dict().lookupOrDefault("moveMeshOuterCorrectors", false)
 );

// Read extra-controls
int    nInIter = pimple.dict().lookupOrDefault<int>("nInIter", 1);

