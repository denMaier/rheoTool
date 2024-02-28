/*static const wordHashSet compressionSchemes
{
    "interfaceCompression",
    "noInterfaceCompression",
    "PLIC",
    "PLICU",
    "MPLIC",
    "MPLICU"
};*/

//static const word divAlphaName("div(phi,alpha)");

//const word alphaScheme(mesh.divScheme(divAlphaName)[1].wordToken());
    word alphaScheme("div(phi,alpha)");
    word alpharScheme("div(phirb,alpha)");
/*ITstream compressionScheme
(
  compressionSchemes.found(alphaScheme)
  ?
  mesh.divScheme(divAlphaName)
  : ITstream
    (
        divAlphaName,
        tokenList
        {
            word("Gauss"),
            word("interfaceCompression"),
            alphaScheme,
            alphaControls.lookup<scalar>("cAlpha")
        }
    )
);*/
