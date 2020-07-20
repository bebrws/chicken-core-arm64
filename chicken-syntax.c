/* Generated from chicken-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.2.0 (rev 317468e4)
   macosx-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: chicken-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file chicken-syntax.c
   unit: chicken-syntax
   uses: expand internal library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[282];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,12),40,116,97,107,101,32,108,115,116,32,110,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,16),40,97,53,54,54,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,16),40,97,53,55,49,56,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,13),40,97,53,56,48,55,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,97,53,56,50,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,120,115,32,118,97,114,115,32,98,115,32,118,97,108,115,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,16),40,97,53,56,57,48,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,120,115,32,118,97,114,115,32,118,97,108,115,32,114,101,115,116,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,97,54,48,56,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,13),40,103,51,48,51,48,32,118,110,97,109,101,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,7),40,103,51,48,53,54,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,108,111,116,115,32,105,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,53,48,32,103,51,48,54,50,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,48,50,57,32,103,51,48,51,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,48,51,32,103,51,48,49,53,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,16),40,97,54,50,53,55,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,16),40,97,54,54,57,54,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,11),40,103,101,110,118,97,114,115,32,110,41,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,110,32,112,114,101,118,32,110,111,100,101,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,7),40,97,54,57,52,48,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,57,50,54,32,103,50,57,51,56,32,103,50,57,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,19),40,98,117,105,108,100,32,118,97,114,115,50,32,118,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,19),40,97,54,57,53,48,32,118,97,114,115,49,32,118,97,114,115,50,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,22),40,97,54,57,50,48,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,14),40,103,50,56,56,51,32,99,32,98,111,100,121,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,17),40,102,111,108,100,114,50,56,55,56,32,103,50,56,55,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,22),40,97,55,49,56,50,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,51,53,32,103,50,56,52,55,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,16),40,97,54,56,49,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,97,114,103,115,32,118,97,114,100,101,102,115,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,16),40,97,55,50,53,54,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,16),40,97,55,52,49,54,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,36),40,114,101,99,117,114,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,115,32,110,111,110,45,100,101,102,97,117,108,116,115,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,45),40,109,97,107,101,45,105,102,45,116,114,101,101,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,115,32,98,111,100,121,45,112,114,111,99,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,23),40,112,114,101,102,105,120,45,115,121,109,32,112,114,101,102,105,120,32,115,121,109,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,9),40,103,50,54,56,56,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,11),40,103,50,55,52,53,32,118,97,114,41,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,42),40,114,101,99,117,114,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,45,110,97,109,101,115,32,100,101,102,115,32,110,101,120,116,45,103,117,121,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,51,57,32,103,50,55,53,49,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,49,48,32,103,50,55,50,50,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,56,50,32,103,50,54,57,52,41,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,53,50,32,103,50,54,54,52,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,16),40,97,55,52,57,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,14),40,102,111,108,100,32,98,115,32,108,97,115,116,41,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,16),40,97,55,57,52,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,24),40,113,117,111,116,105,102,121,45,112,114,111,99,50,53,53,50,32,120,115,32,105,100,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,16),40,97,56,48,56,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,16),40,97,56,49,56,55,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,13),40,97,56,50,51,49,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,53,48,48,32,103,50,53,49,50,32,103,50,53,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,53,50,32,103,50,52,54,52,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,13),40,97,56,52,50,57,32,97,32,95,32,95,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,23),40,102,111,108,100,108,50,52,55,53,32,103,50,52,55,54,32,103,50,52,55,52,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,50,51,32,103,50,52,51,53,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,57,55,32,103,50,52,48,57,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,16),40,97,56,50,53,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,16),40,102,111,108,100,32,118,98,105,110,100,105,110,103,115,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,16),40,97,56,53,49,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,18),40,97,112,112,101,110,100,42,50,50,48,51,32,105,108,32,108,41,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,17),40,109,97,112,42,50,50,48,52,32,112,114,111,99,32,108,41,0,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,9),40,103,50,50,54,52,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,10),40,108,111,111,107,117,112,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,9),40,103,50,51,49,53,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,48,57,32,103,50,51,50,49,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,26),40,102,111,108,100,32,108,108,105,115,116,115,32,101,120,112,115,32,108,108,105,115,116,115,50,41,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,52,52,32,103,50,51,53,54,41,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,108,108,105,115,116,115,32,97,99,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,50,53,56,32,103,50,50,55,48,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,108,108,105,115,116,115,32,97,99,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,50,50,48,32,103,50,50,51,50,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,16),40,97,56,53,54,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,49,53,57,32,103,50,49,55,49,41,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,52,57,32,103,50,49,53,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,22),40,97,57,48,55,57,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,16),40,97,57,48,52,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,16),40,97,57,49,55,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,16),40,97,57,49,57,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,16),40,97,57,50,50,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,7),40,97,57,50,54,48,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,48),40,97,57,50,54,54,32,110,97,109,101,50,48,56,54,32,108,105,98,50,48,56,56,32,95,50,48,57,48,32,95,50,48,57,48,32,95,50,48,57,48,32,95,50,48,57,48,41};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,9),40,103,50,48,55,52,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,48,54,56,32,103,50,48,56,48,41,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,13),40,97,57,50,52,53,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,9),40,103,49,54,53,57,32,122,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,7),40,103,49,54,56,55,41,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,7),40,103,49,55,49,53,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,14),40,103,49,56,51,56,32,115,32,116,101,109,112,41,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,48,50,52,32,103,50,48,51,54,32,103,50,48,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,57,56,56,32,103,50,48,48,48,32,103,50,48,48,49,41,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,49,57,52,54,32,103,49,57,53,56,32,103,49,57,53,57,32,103,49,57,54,48,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,57,49,48,32,103,49,57,50,50,32,103,49,57,50,51,41,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,56,55,52,32,103,49,56,56,54,32,103,49,56,56,55,41,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,49,56,51,50,32,103,49,56,52,52,32,103,49,56,52,53,32,103,49,56,52,54,41};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,56,48,49,32,103,49,56,49,51,32,103,49,56,49,52,41,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,55,55,48,32,103,49,55,56,50,32,103,49,55,56,51,41,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,55,51,57,32,103,49,55,53,49,32,103,49,55,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,48,57,32,103,49,55,50,49,41,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,56,49,32,103,49,54,57,51,41,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,53,51,32,103,49,54,54,53,41,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,50,54,32,103,49,54,51,56,41,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,53,57,57,32,103,49,54,49,49,41,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,16),40,97,57,51,50,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,7),40,103,49,51,48,50,41,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,7),40,103,49,51,51,48,41,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,53,51,32,103,49,53,54,53,32,103,49,53,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,49,55,32,103,49,53,50,57,32,103,49,53,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,56,49,32,103,49,52,57,51,32,103,49,52,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,52,53,32,103,49,52,53,55,32,103,49,52,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,49,49,32,103,49,52,50,51,32,103,49,52,50,52,41,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,110,41};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,51,53,52,32,103,49,51,54,54,32,103,49,51,54,55,41,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,55,53,32,103,49,51,56,55,41,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,50,52,32,103,49,51,51,54,41,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,50,57,54,32,103,49,51,48,56,41,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,50,54,57,32,103,49,50,56,49,41,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,17),40,97,49,48,50,53,57,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,49,50,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,50,57,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,52,54,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,54,55,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,56,49,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,12),40,103,49,49,53,54,32,115,108,111,116,41,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,18),40,109,97,112,115,108,111,116,115,32,115,108,111,116,115,32,105,41,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,49,53,48,32,103,49,49,54,50,41,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,14),40,97,49,49,48,55,52,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,49,48,56,56,32,108,32,108,101,110,41};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,49,48,56,56,32,108,32,108,101,110,41};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,29),40,97,49,49,52,54,57,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,29),40,97,49,49,54,49,55,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,17),40,97,49,49,55,49,52,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,14),40,97,49,49,55,52,51,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,14),40,97,49,49,55,55,51,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,14),40,97,49,49,55,57,48,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,13),40,103,57,55,52,32,99,108,97,117,115,101,41,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,54,56,32,103,57,56,48,41,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,14),40,97,49,49,56,53,48,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,57,49,51,32,103,57,50,53,32,103,57,50,54,41,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,55,57,32,103,56,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,50,32,97,110,97,109,101,115,32,105,41};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,97,114,103,115,32,97,110,97,109,101,115,32,97,116,121,112,101,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,14),40,97,49,49,57,55,51,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,17),40,97,49,50,52,48,56,32,116,121,112,101,32,118,97,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,49,48,32,103,56,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,56,50,32,103,55,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,55,51,52,32,108,32,108,101,110,41,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,55,51,52,32,108,32,108,101,110,41,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,29),40,97,49,50,51,52,48,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,14),40,97,49,50,54,52,57,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,8),40,97,49,50,55,48,55,41};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,32),40,97,49,50,55,49,55,32,116,121,112,101,54,57,49,32,112,114,101,100,54,57,51,32,112,117,114,101,54,57,53,41};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,14),40,97,49,50,54,56,55,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,6),40,103,54,50,51,41,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,49,55,32,103,54,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,16),40,112,97,114,115,101,45,99,108,97,117,115,101,32,99,41};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,52,56,32,103,54,54,48,41,0,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,17),40,97,49,50,55,57,56,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,17),40,97,49,51,48,55,49,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_10038)
static void C_fcall f_10038(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10086)
static void C_fcall f_10086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10111)
static void C_ccall f_10111(C_word c,C_word *av) C_noret;
C_noret_decl(f_10120)
static void C_fcall f_10120(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10145)
static void C_ccall f_10145(C_word c,C_word *av) C_noret;
C_noret_decl(f_10154)
static void C_fcall f_10154(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10179)
static void C_ccall f_10179(C_word c,C_word *av) C_noret;
C_noret_decl(f_10188)
static void C_fcall f_10188(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10222)
static void C_fcall f_10222(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10258)
static void C_ccall f_10258(C_word c,C_word *av) C_noret;
C_noret_decl(f_10260)
static void C_ccall f_10260(C_word c,C_word *av) C_noret;
C_noret_decl(f_10264)
static void C_ccall f_10264(C_word c,C_word *av) C_noret;
C_noret_decl(f_10278)
static void C_ccall f_10278(C_word c,C_word *av) C_noret;
C_noret_decl(f_10282)
static void C_fcall f_10282(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10290)
static void C_ccall f_10290(C_word c,C_word *av) C_noret;
C_noret_decl(f_10293)
static void C_ccall f_10293(C_word c,C_word *av) C_noret;
C_noret_decl(f_10297)
static void C_fcall f_10297(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10305)
static void C_ccall f_10305(C_word c,C_word *av) C_noret;
C_noret_decl(f_10308)
static void C_ccall f_10308(C_word c,C_word *av) C_noret;
C_noret_decl(f_10315)
static void C_ccall f_10315(C_word c,C_word *av) C_noret;
C_noret_decl(f_10339)
static void C_ccall f_10339(C_word c,C_word *av) C_noret;
C_noret_decl(f_10351)
static void C_ccall f_10351(C_word c,C_word *av) C_noret;
C_noret_decl(f_10355)
static void C_ccall f_10355(C_word c,C_word *av) C_noret;
C_noret_decl(f_10367)
static void C_ccall f_10367(C_word c,C_word *av) C_noret;
C_noret_decl(f_10377)
static void C_fcall f_10377(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10425)
static void C_fcall f_10425(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10483)
static void C_ccall f_10483(C_word c,C_word *av) C_noret;
C_noret_decl(f_10498)
static void C_ccall f_10498(C_word c,C_word *av) C_noret;
C_noret_decl(f_10502)
static void C_ccall f_10502(C_word c,C_word *av) C_noret;
C_noret_decl(f_10514)
static void C_ccall f_10514(C_word c,C_word *av) C_noret;
C_noret_decl(f_10524)
static void C_fcall f_10524(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10572)
static void C_fcall f_10572(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10628)
static void C_ccall f_10628(C_word c,C_word *av) C_noret;
C_noret_decl(f_10637)
static void C_ccall f_10637(C_word c,C_word *av) C_noret;
C_noret_decl(f_10644)
static void C_ccall f_10644(C_word c,C_word *av) C_noret;
C_noret_decl(f_10653)
static void C_ccall f_10653(C_word c,C_word *av) C_noret;
C_noret_decl(f_10655)
static void C_fcall f_10655(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10705)
static void C_fcall f_10705(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10719)
static void C_ccall f_10719(C_word c,C_word *av) C_noret;
C_noret_decl(f_10725)
static void C_fcall f_10725(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10773)
static void C_fcall f_10773(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10807)
static void C_fcall f_10807(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10832)
static void C_ccall f_10832(C_word c,C_word *av) C_noret;
C_noret_decl(f_10841)
static void C_fcall f_10841(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10866)
static void C_ccall f_10866(C_word c,C_word *av) C_noret;
C_noret_decl(f_10875)
static void C_fcall f_10875(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10911)
static void C_ccall f_10911(C_word c,C_word *av) C_noret;
C_noret_decl(f_10913)
static void C_ccall f_10913(C_word c,C_word *av) C_noret;
C_noret_decl(f_10917)
static void C_ccall f_10917(C_word c,C_word *av) C_noret;
C_noret_decl(f_10928)
static void C_ccall f_10928(C_word c,C_word *av) C_noret;
C_noret_decl(f_10930)
static void C_ccall f_10930(C_word c,C_word *av) C_noret;
C_noret_decl(f_10934)
static void C_ccall f_10934(C_word c,C_word *av) C_noret;
C_noret_decl(f_10945)
static void C_ccall f_10945(C_word c,C_word *av) C_noret;
C_noret_decl(f_10947)
static void C_ccall f_10947(C_word c,C_word *av) C_noret;
C_noret_decl(f_10951)
static void C_ccall f_10951(C_word c,C_word *av) C_noret;
C_noret_decl(f_10966)
static void C_ccall f_10966(C_word c,C_word *av) C_noret;
C_noret_decl(f_10968)
static void C_ccall f_10968(C_word c,C_word *av) C_noret;
C_noret_decl(f_10980)
static void C_ccall f_10980(C_word c,C_word *av) C_noret;
C_noret_decl(f_10982)
static void C_ccall f_10982(C_word c,C_word *av) C_noret;
C_noret_decl(f_10986)
static void C_ccall f_10986(C_word c,C_word *av) C_noret;
C_noret_decl(f_11008)
static void C_ccall f_11008(C_word c,C_word *av) C_noret;
C_noret_decl(f_11073)
static void C_ccall f_11073(C_word c,C_word *av) C_noret;
C_noret_decl(f_11075)
static void C_ccall f_11075(C_word c,C_word *av) C_noret;
C_noret_decl(f_11079)
static void C_ccall f_11079(C_word c,C_word *av) C_noret;
C_noret_decl(f_11085)
static void C_ccall f_11085(C_word c,C_word *av) C_noret;
C_noret_decl(f_11088)
static void C_ccall f_11088(C_word c,C_word *av) C_noret;
C_noret_decl(f_11091)
static void C_ccall f_11091(C_word c,C_word *av) C_noret;
C_noret_decl(f_11097)
static void C_ccall f_11097(C_word c,C_word *av) C_noret;
C_noret_decl(f_11100)
static void C_ccall f_11100(C_word c,C_word *av) C_noret;
C_noret_decl(f_11103)
static void C_ccall f_11103(C_word c,C_word *av) C_noret;
C_noret_decl(f_11107)
static void C_fcall f_11107(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11120)
static void C_fcall f_11120(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11135)
static void C_ccall f_11135(C_word c,C_word *av) C_noret;
C_noret_decl(f_11167)
static void C_ccall f_11167(C_word c,C_word *av) C_noret;
C_noret_decl(f_11198)
static void C_ccall f_11198(C_word c,C_word *av) C_noret;
C_noret_decl(f_11200)
static void C_fcall f_11200(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11216)
static void C_ccall f_11216(C_word c,C_word *av) C_noret;
C_noret_decl(f_11219)
static void C_ccall f_11219(C_word c,C_word *av) C_noret;
C_noret_decl(f_11222)
static void C_ccall f_11222(C_word c,C_word *av) C_noret;
C_noret_decl(f_11236)
static void C_ccall f_11236(C_word c,C_word *av) C_noret;
C_noret_decl(f_11248)
static void C_ccall f_11248(C_word c,C_word *av) C_noret;
C_noret_decl(f_11252)
static void C_fcall f_11252(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11345)
static void C_ccall f_11345(C_word c,C_word *av) C_noret;
C_noret_decl(f_11349)
static void C_ccall f_11349(C_word c,C_word *av) C_noret;
C_noret_decl(f_11364)
static void C_ccall f_11364(C_word c,C_word *av) C_noret;
C_noret_decl(f_11384)
static void C_ccall f_11384(C_word c,C_word *av) C_noret;
C_noret_decl(f_11390)
static void C_ccall f_11390(C_word c,C_word *av) C_noret;
C_noret_decl(f_11410)
static void C_ccall f_11410(C_word c,C_word *av) C_noret;
C_noret_decl(f_11418)
static void C_fcall f_11418(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11443)
static void C_ccall f_11443(C_word c,C_word *av) C_noret;
C_noret_decl(f_11453)
static void C_ccall f_11453(C_word c,C_word *av) C_noret;
C_noret_decl(f_11460)
static void C_ccall f_11460(C_word c,C_word *av) C_noret;
C_noret_decl(f_11464)
static void C_ccall f_11464(C_word c,C_word *av) C_noret;
C_noret_decl(f_11468)
static void C_ccall f_11468(C_word c,C_word *av) C_noret;
C_noret_decl(f_11470)
static void C_ccall f_11470(C_word c,C_word *av) C_noret;
C_noret_decl(f_11480)
static void C_ccall f_11480(C_word c,C_word *av) C_noret;
C_noret_decl(f_11493)
static void C_ccall f_11493(C_word c,C_word *av) C_noret;
C_noret_decl(f_11509)
static void C_ccall f_11509(C_word c,C_word *av) C_noret;
C_noret_decl(f_11515)
static void C_ccall f_11515(C_word c,C_word *av) C_noret;
C_noret_decl(f_11518)
static void C_ccall f_11518(C_word c,C_word *av) C_noret;
C_noret_decl(f_11524)
static void C_ccall f_11524(C_word c,C_word *av) C_noret;
C_noret_decl(f_11533)
static void C_fcall f_11533(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11540)
static void C_ccall f_11540(C_word c,C_word *av) C_noret;
C_noret_decl(f_11554)
static void C_ccall f_11554(C_word c,C_word *av) C_noret;
C_noret_decl(f_11565)
static void C_ccall f_11565(C_word c,C_word *av) C_noret;
C_noret_decl(f_11568)
static void C_ccall f_11568(C_word c,C_word *av) C_noret;
C_noret_decl(f_11574)
static void C_ccall f_11574(C_word c,C_word *av) C_noret;
C_noret_decl(f_11583)
static void C_fcall f_11583(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11590)
static void C_ccall f_11590(C_word c,C_word *av) C_noret;
C_noret_decl(f_11604)
static void C_ccall f_11604(C_word c,C_word *av) C_noret;
C_noret_decl(f_11616)
static void C_ccall f_11616(C_word c,C_word *av) C_noret;
C_noret_decl(f_11618)
static void C_ccall f_11618(C_word c,C_word *av) C_noret;
C_noret_decl(f_11638)
static void C_ccall f_11638(C_word c,C_word *av) C_noret;
C_noret_decl(f_11652)
static void C_fcall f_11652(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11665)
static void C_ccall f_11665(C_word c,C_word *av) C_noret;
C_noret_decl(f_11713)
static void C_ccall f_11713(C_word c,C_word *av) C_noret;
C_noret_decl(f_11715)
static void C_ccall f_11715(C_word c,C_word *av) C_noret;
C_noret_decl(f_11719)
static void C_ccall f_11719(C_word c,C_word *av) C_noret;
C_noret_decl(f_11726)
static void C_ccall f_11726(C_word c,C_word *av) C_noret;
C_noret_decl(f_11734)
static void C_ccall f_11734(C_word c,C_word *av) C_noret;
C_noret_decl(f_11742)
static void C_ccall f_11742(C_word c,C_word *av) C_noret;
C_noret_decl(f_11744)
static void C_ccall f_11744(C_word c,C_word *av) C_noret;
C_noret_decl(f_11748)
static void C_ccall f_11748(C_word c,C_word *av) C_noret;
C_noret_decl(f_11751)
static void C_ccall f_11751(C_word c,C_word *av) C_noret;
C_noret_decl(f_11772)
static void C_ccall f_11772(C_word c,C_word *av) C_noret;
C_noret_decl(f_11774)
static void C_ccall f_11774(C_word c,C_word *av) C_noret;
C_noret_decl(f_11778)
static void C_ccall f_11778(C_word c,C_word *av) C_noret;
C_noret_decl(f_11789)
static void C_ccall f_11789(C_word c,C_word *av) C_noret;
C_noret_decl(f_11791)
static void C_ccall f_11791(C_word c,C_word *av) C_noret;
C_noret_decl(f_11795)
static void C_ccall f_11795(C_word c,C_word *av) C_noret;
C_noret_decl(f_11804)
static void C_ccall f_11804(C_word c,C_word *av) C_noret;
C_noret_decl(f_11807)
static void C_ccall f_11807(C_word c,C_word *av) C_noret;
C_noret_decl(f_11810)
static void C_ccall f_11810(C_word c,C_word *av) C_noret;
C_noret_decl(f_11833)
static void C_ccall f_11833(C_word c,C_word *av) C_noret;
C_noret_decl(f_11849)
static void C_ccall f_11849(C_word c,C_word *av) C_noret;
C_noret_decl(f_11851)
static void C_ccall f_11851(C_word c,C_word *av) C_noret;
C_noret_decl(f_11855)
static void C_ccall f_11855(C_word c,C_word *av) C_noret;
C_noret_decl(f_11861)
static void C_ccall f_11861(C_word c,C_word *av) C_noret;
C_noret_decl(f_11864)
static void C_ccall f_11864(C_word c,C_word *av) C_noret;
C_noret_decl(f_11888)
static void C_fcall f_11888(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11892)
static void C_ccall f_11892(C_word c,C_word *av) C_noret;
C_noret_decl(f_11899)
static void C_ccall f_11899(C_word c,C_word *av) C_noret;
C_noret_decl(f_11926)
static void C_ccall f_11926(C_word c,C_word *av) C_noret;
C_noret_decl(f_11928)
static void C_fcall f_11928(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11953)
static void C_ccall f_11953(C_word c,C_word *av) C_noret;
C_noret_decl(f_11972)
static void C_ccall f_11972(C_word c,C_word *av) C_noret;
C_noret_decl(f_11974)
static void C_ccall f_11974(C_word c,C_word *av) C_noret;
C_noret_decl(f_11984)
static void C_ccall f_11984(C_word c,C_word *av) C_noret;
C_noret_decl(f_11993)
static void C_ccall f_11993(C_word c,C_word *av) C_noret;
C_noret_decl(f_11997)
static void C_ccall f_11997(C_word c,C_word *av) C_noret;
C_noret_decl(f_12000)
static void C_ccall f_12000(C_word c,C_word *av) C_noret;
C_noret_decl(f_12003)
static void C_ccall f_12003(C_word c,C_word *av) C_noret;
C_noret_decl(f_12006)
static void C_ccall f_12006(C_word c,C_word *av) C_noret;
C_noret_decl(f_12014)
static void C_fcall f_12014(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12024)
static void C_ccall f_12024(C_word c,C_word *av) C_noret;
C_noret_decl(f_12027)
static void C_ccall f_12027(C_word c,C_word *av) C_noret;
C_noret_decl(f_12033)
static void C_ccall f_12033(C_word c,C_word *av) C_noret;
C_noret_decl(f_12068)
static void C_ccall f_12068(C_word c,C_word *av) C_noret;
C_noret_decl(f_12070)
static void C_fcall f_12070(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12128)
static void C_ccall f_12128(C_word c,C_word *av) C_noret;
C_noret_decl(f_12132)
static void C_ccall f_12132(C_word c,C_word *av) C_noret;
C_noret_decl(f_12165)
static void C_ccall f_12165(C_word c,C_word *av) C_noret;
C_noret_decl(f_12167)
static void C_fcall f_12167(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12192)
static void C_ccall f_12192(C_word c,C_word *av) C_noret;
C_noret_decl(f_12209)
static void C_ccall f_12209(C_word c,C_word *av) C_noret;
C_noret_decl(f_12211)
static void C_fcall f_12211(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12229)
static void C_ccall f_12229(C_word c,C_word *av) C_noret;
C_noret_decl(f_12265)
static void C_fcall f_12265(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12282)
static void C_ccall f_12282(C_word c,C_word *av) C_noret;
C_noret_decl(f_12339)
static void C_ccall f_12339(C_word c,C_word *av) C_noret;
C_noret_decl(f_12341)
static void C_ccall f_12341(C_word c,C_word *av) C_noret;
C_noret_decl(f_12351)
static void C_ccall f_12351(C_word c,C_word *av) C_noret;
C_noret_decl(f_12368)
static void C_ccall f_12368(C_word c,C_word *av) C_noret;
C_noret_decl(f_12389)
static void C_ccall f_12389(C_word c,C_word *av) C_noret;
C_noret_decl(f_12399)
static void C_ccall f_12399(C_word c,C_word *av) C_noret;
C_noret_decl(f_12407)
static void C_ccall f_12407(C_word c,C_word *av) C_noret;
C_noret_decl(f_12409)
static void C_ccall f_12409(C_word c,C_word *av) C_noret;
C_noret_decl(f_12425)
static void C_ccall f_12425(C_word c,C_word *av) C_noret;
C_noret_decl(f_12435)
static void C_fcall f_12435(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12469)
static void C_fcall f_12469(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12513)
static void C_ccall f_12513(C_word c,C_word *av) C_noret;
C_noret_decl(f_12519)
static void C_ccall f_12519(C_word c,C_word *av) C_noret;
C_noret_decl(f_12522)
static void C_ccall f_12522(C_word c,C_word *av) C_noret;
C_noret_decl(f_12528)
static void C_ccall f_12528(C_word c,C_word *av) C_noret;
C_noret_decl(f_12537)
static void C_fcall f_12537(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12544)
static void C_ccall f_12544(C_word c,C_word *av) C_noret;
C_noret_decl(f_12558)
static void C_ccall f_12558(C_word c,C_word *av) C_noret;
C_noret_decl(f_12569)
static void C_ccall f_12569(C_word c,C_word *av) C_noret;
C_noret_decl(f_12572)
static void C_ccall f_12572(C_word c,C_word *av) C_noret;
C_noret_decl(f_12578)
static void C_ccall f_12578(C_word c,C_word *av) C_noret;
C_noret_decl(f_12587)
static void C_fcall f_12587(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12594)
static void C_ccall f_12594(C_word c,C_word *av) C_noret;
C_noret_decl(f_12606)
static void C_fcall f_12606(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12617)
static void C_ccall f_12617(C_word c,C_word *av) C_noret;
C_noret_decl(f_12648)
static void C_ccall f_12648(C_word c,C_word *av) C_noret;
C_noret_decl(f_12650)
static void C_ccall f_12650(C_word c,C_word *av) C_noret;
C_noret_decl(f_12654)
static void C_ccall f_12654(C_word c,C_word *av) C_noret;
C_noret_decl(f_12670)
static void C_ccall f_12670(C_word c,C_word *av) C_noret;
C_noret_decl(f_12686)
static void C_ccall f_12686(C_word c,C_word *av) C_noret;
C_noret_decl(f_12688)
static void C_ccall f_12688(C_word c,C_word *av) C_noret;
C_noret_decl(f_12692)
static void C_ccall f_12692(C_word c,C_word *av) C_noret;
C_noret_decl(f_12701)
static void C_ccall f_12701(C_word c,C_word *av) C_noret;
C_noret_decl(f_12708)
static void C_ccall f_12708(C_word c,C_word *av) C_noret;
C_noret_decl(f_12716)
static void C_ccall f_12716(C_word c,C_word *av) C_noret;
C_noret_decl(f_12718)
static void C_ccall f_12718(C_word c,C_word *av) C_noret;
C_noret_decl(f_12743)
static void C_ccall f_12743(C_word c,C_word *av) C_noret;
C_noret_decl(f_12747)
static void C_fcall f_12747(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12797)
static void C_ccall f_12797(C_word c,C_word *av) C_noret;
C_noret_decl(f_12799)
static void C_ccall f_12799(C_word c,C_word *av) C_noret;
C_noret_decl(f_12803)
static void C_ccall f_12803(C_word c,C_word *av) C_noret;
C_noret_decl(f_12806)
static void C_ccall f_12806(C_word c,C_word *av) C_noret;
C_noret_decl(f_12809)
static void C_ccall f_12809(C_word c,C_word *av) C_noret;
C_noret_decl(f_12812)
static void C_ccall f_12812(C_word c,C_word *av) C_noret;
C_noret_decl(f_12815)
static void C_ccall f_12815(C_word c,C_word *av) C_noret;
C_noret_decl(f_12818)
static void C_ccall f_12818(C_word c,C_word *av) C_noret;
C_noret_decl(f_12820)
static void C_fcall f_12820(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12830)
static void C_fcall f_12830(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12855)
static C_word C_fcall f_12855(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_12869)
static void C_ccall f_12869(C_word c,C_word *av) C_noret;
C_noret_decl(f_12871)
static void C_fcall f_12871(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12950)
static void C_ccall f_12950(C_word c,C_word *av) C_noret;
C_noret_decl(f_12975)
static void C_ccall f_12975(C_word c,C_word *av) C_noret;
C_noret_decl(f_12982)
static void C_ccall f_12982(C_word c,C_word *av) C_noret;
C_noret_decl(f_12986)
static void C_ccall f_12986(C_word c,C_word *av) C_noret;
C_noret_decl(f_13006)
static void C_fcall f_13006(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13031)
static void C_ccall f_13031(C_word c,C_word *av) C_noret;
C_noret_decl(f_13070)
static void C_ccall f_13070(C_word c,C_word *av) C_noret;
C_noret_decl(f_13072)
static void C_ccall f_13072(C_word c,C_word *av) C_noret;
C_noret_decl(f_13076)
static void C_ccall f_13076(C_word c,C_word *av) C_noret;
C_noret_decl(f_13079)
static void C_ccall f_13079(C_word c,C_word *av) C_noret;
C_noret_decl(f_13082)
static void C_ccall f_13082(C_word c,C_word *av) C_noret;
C_noret_decl(f_13093)
static void C_ccall f_13093(C_word c,C_word *av) C_noret;
C_noret_decl(f_4206)
static void C_ccall f_4206(C_word c,C_word *av) C_noret;
C_noret_decl(f_4209)
static void C_ccall f_4209(C_word c,C_word *av) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word *av) C_noret;
C_noret_decl(f_4322)
static void C_fcall f_4322(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4340)
static void C_ccall f_4340(C_word c,C_word *av) C_noret;
C_noret_decl(f_4380)
static void C_fcall f_4380(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4394)
static void C_ccall f_4394(C_word c,C_word *av) C_noret;
C_noret_decl(f_5494)
static void C_ccall f_5494(C_word c,C_word *av) C_noret;
C_noret_decl(f_5497)
static void C_ccall f_5497(C_word c,C_word *av) C_noret;
C_noret_decl(f_5500)
static void C_ccall f_5500(C_word c,C_word *av) C_noret;
C_noret_decl(f_5503)
static void C_ccall f_5503(C_word c,C_word *av) C_noret;
C_noret_decl(f_5507)
static void C_ccall f_5507(C_word c,C_word *av) C_noret;
C_noret_decl(f_5510)
static void C_ccall f_5510(C_word c,C_word *av) C_noret;
C_noret_decl(f_5513)
static void C_ccall f_5513(C_word c,C_word *av) C_noret;
C_noret_decl(f_5516)
static void C_ccall f_5516(C_word c,C_word *av) C_noret;
C_noret_decl(f_5519)
static void C_ccall f_5519(C_word c,C_word *av) C_noret;
C_noret_decl(f_5522)
static void C_ccall f_5522(C_word c,C_word *av) C_noret;
C_noret_decl(f_5525)
static void C_ccall f_5525(C_word c,C_word *av) C_noret;
C_noret_decl(f_5528)
static void C_ccall f_5528(C_word c,C_word *av) C_noret;
C_noret_decl(f_5532)
static void C_ccall f_5532(C_word c,C_word *av) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word *av) C_noret;
C_noret_decl(f_5538)
static void C_ccall f_5538(C_word c,C_word *av) C_noret;
C_noret_decl(f_5541)
static void C_ccall f_5541(C_word c,C_word *av) C_noret;
C_noret_decl(f_5544)
static void C_ccall f_5544(C_word c,C_word *av) C_noret;
C_noret_decl(f_5547)
static void C_ccall f_5547(C_word c,C_word *av) C_noret;
C_noret_decl(f_5550)
static void C_ccall f_5550(C_word c,C_word *av) C_noret;
C_noret_decl(f_5554)
static void C_ccall f_5554(C_word c,C_word *av) C_noret;
C_noret_decl(f_5557)
static void C_ccall f_5557(C_word c,C_word *av) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word *av) C_noret;
C_noret_decl(f_5563)
static void C_ccall f_5563(C_word c,C_word *av) C_noret;
C_noret_decl(f_5566)
static void C_ccall f_5566(C_word c,C_word *av) C_noret;
C_noret_decl(f_5569)
static void C_ccall f_5569(C_word c,C_word *av) C_noret;
C_noret_decl(f_5572)
static void C_ccall f_5572(C_word c,C_word *av) C_noret;
C_noret_decl(f_5575)
static void C_ccall f_5575(C_word c,C_word *av) C_noret;
C_noret_decl(f_5578)
static void C_ccall f_5578(C_word c,C_word *av) C_noret;
C_noret_decl(f_5581)
static void C_ccall f_5581(C_word c,C_word *av) C_noret;
C_noret_decl(f_5584)
static void C_ccall f_5584(C_word c,C_word *av) C_noret;
C_noret_decl(f_5587)
static void C_ccall f_5587(C_word c,C_word *av) C_noret;
C_noret_decl(f_5590)
static void C_ccall f_5590(C_word c,C_word *av) C_noret;
C_noret_decl(f_5594)
static void C_ccall f_5594(C_word c,C_word *av) C_noret;
C_noret_decl(f_5597)
static void C_ccall f_5597(C_word c,C_word *av) C_noret;
C_noret_decl(f_5600)
static void C_ccall f_5600(C_word c,C_word *av) C_noret;
C_noret_decl(f_5603)
static void C_ccall f_5603(C_word c,C_word *av) C_noret;
C_noret_decl(f_5606)
static void C_ccall f_5606(C_word c,C_word *av) C_noret;
C_noret_decl(f_5609)
static void C_ccall f_5609(C_word c,C_word *av) C_noret;
C_noret_decl(f_5612)
static void C_ccall f_5612(C_word c,C_word *av) C_noret;
C_noret_decl(f_5615)
static void C_ccall f_5615(C_word c,C_word *av) C_noret;
C_noret_decl(f_5618)
static void C_ccall f_5618(C_word c,C_word *av) C_noret;
C_noret_decl(f_5621)
static void C_ccall f_5621(C_word c,C_word *av) C_noret;
C_noret_decl(f_5624)
static void C_ccall f_5624(C_word c,C_word *av) C_noret;
C_noret_decl(f_5627)
static void C_ccall f_5627(C_word c,C_word *av) C_noret;
C_noret_decl(f_5630)
static void C_ccall f_5630(C_word c,C_word *av) C_noret;
C_noret_decl(f_5633)
static void C_ccall f_5633(C_word c,C_word *av) C_noret;
C_noret_decl(f_5636)
static void C_ccall f_5636(C_word c,C_word *av) C_noret;
C_noret_decl(f_5639)
static void C_ccall f_5639(C_word c,C_word *av) C_noret;
C_noret_decl(f_5642)
static void C_ccall f_5642(C_word c,C_word *av) C_noret;
C_noret_decl(f_5645)
static void C_ccall f_5645(C_word c,C_word *av) C_noret;
C_noret_decl(f_5648)
static void C_ccall f_5648(C_word c,C_word *av) C_noret;
C_noret_decl(f_5651)
static void C_ccall f_5651(C_word c,C_word *av) C_noret;
C_noret_decl(f_5655)
static void C_ccall f_5655(C_word c,C_word *av) C_noret;
C_noret_decl(f_5658)
static void C_ccall f_5658(C_word c,C_word *av) C_noret;
C_noret_decl(f_5661)
static void C_ccall f_5661(C_word c,C_word *av) C_noret;
C_noret_decl(f_5664)
static void C_ccall f_5664(C_word c,C_word *av) C_noret;
C_noret_decl(f_5668)
static void C_ccall f_5668(C_word c,C_word *av) C_noret;
C_noret_decl(f_5670)
static void C_ccall f_5670(C_word c,C_word *av) C_noret;
C_noret_decl(f_5674)
static void C_ccall f_5674(C_word c,C_word *av) C_noret;
C_noret_decl(f_5717)
static void C_ccall f_5717(C_word c,C_word *av) C_noret;
C_noret_decl(f_5719)
static void C_ccall f_5719(C_word c,C_word *av) C_noret;
C_noret_decl(f_5723)
static void C_ccall f_5723(C_word c,C_word *av) C_noret;
C_noret_decl(f_5734)
static void C_ccall f_5734(C_word c,C_word *av) C_noret;
C_noret_decl(f_5737)
static void C_fcall f_5737(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5760)
static void C_fcall f_5760(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5779)
static void C_ccall f_5779(C_word c,C_word *av) C_noret;
C_noret_decl(f_5789)
static void C_ccall f_5789(C_word c,C_word *av) C_noret;
C_noret_decl(f_5796)
static void C_ccall f_5796(C_word c,C_word *av) C_noret;
C_noret_decl(f_5806)
static void C_ccall f_5806(C_word c,C_word *av) C_noret;
C_noret_decl(f_5808)
static void C_ccall f_5808(C_word c,C_word *av) C_noret;
C_noret_decl(f_5816)
static void C_ccall f_5816(C_word c,C_word *av) C_noret;
C_noret_decl(f_5824)
static void C_ccall f_5824(C_word c,C_word *av) C_noret;
C_noret_decl(f_5826)
static void C_ccall f_5826(C_word c,C_word *av) C_noret;
C_noret_decl(f_5830)
static void C_ccall f_5830(C_word c,C_word *av) C_noret;
C_noret_decl(f_5889)
static void C_ccall f_5889(C_word c,C_word *av) C_noret;
C_noret_decl(f_5891)
static void C_ccall f_5891(C_word c,C_word *av) C_noret;
C_noret_decl(f_5895)
static void C_ccall f_5895(C_word c,C_word *av) C_noret;
C_noret_decl(f_5898)
static void C_ccall f_5898(C_word c,C_word *av) C_noret;
C_noret_decl(f_5901)
static void C_ccall f_5901(C_word c,C_word *av) C_noret;
C_noret_decl(f_5904)
static void C_ccall f_5904(C_word c,C_word *av) C_noret;
C_noret_decl(f_5911)
static void C_fcall f_5911(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5921)
static void C_ccall f_5921(C_word c,C_word *av) C_noret;
C_noret_decl(f_5924)
static void C_ccall f_5924(C_word c,C_word *av) C_noret;
C_noret_decl(f_5930)
static void C_ccall f_5930(C_word c,C_word *av) C_noret;
C_noret_decl(f_5941)
static void C_ccall f_5941(C_word c,C_word *av) C_noret;
C_noret_decl(f_5957)
static void C_ccall f_5957(C_word c,C_word *av) C_noret;
C_noret_decl(f_5967)
static void C_ccall f_5967(C_word c,C_word *av) C_noret;
C_noret_decl(f_5990)
static void C_ccall f_5990(C_word c,C_word *av) C_noret;
C_noret_decl(f_5993)
static void C_ccall f_5993(C_word c,C_word *av) C_noret;
C_noret_decl(f_6010)
static void C_ccall f_6010(C_word c,C_word *av) C_noret;
C_noret_decl(f_6016)
static void C_ccall f_6016(C_word c,C_word *av) C_noret;
C_noret_decl(f_6033)
static void C_ccall f_6033(C_word c,C_word *av) C_noret;
C_noret_decl(f_6056)
static void C_ccall f_6056(C_word c,C_word *av) C_noret;
C_noret_decl(f_6084)
static void C_ccall f_6084(C_word c,C_word *av) C_noret;
C_noret_decl(f_6086)
static void C_ccall f_6086(C_word c,C_word *av) C_noret;
C_noret_decl(f_6090)
static void C_ccall f_6090(C_word c,C_word *av) C_noret;
C_noret_decl(f_6093)
static void C_ccall f_6093(C_word c,C_word *av) C_noret;
C_noret_decl(f_6096)
static void C_ccall f_6096(C_word c,C_word *av) C_noret;
C_noret_decl(f_6099)
static void C_ccall f_6099(C_word c,C_word *av) C_noret;
C_noret_decl(f_6106)
static void C_fcall f_6106(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6116)
static void C_ccall f_6116(C_word c,C_word *av) C_noret;
C_noret_decl(f_6119)
static void C_ccall f_6119(C_word c,C_word *av) C_noret;
C_noret_decl(f_6125)
static void C_ccall f_6125(C_word c,C_word *av) C_noret;
C_noret_decl(f_6132)
static void C_ccall f_6132(C_word c,C_word *av) C_noret;
C_noret_decl(f_6148)
static void C_ccall f_6148(C_word c,C_word *av) C_noret;
C_noret_decl(f_6158)
static void C_ccall f_6158(C_word c,C_word *av) C_noret;
C_noret_decl(f_6181)
static void C_ccall f_6181(C_word c,C_word *av) C_noret;
C_noret_decl(f_6184)
static void C_ccall f_6184(C_word c,C_word *av) C_noret;
C_noret_decl(f_6201)
static void C_ccall f_6201(C_word c,C_word *av) C_noret;
C_noret_decl(f_6207)
static void C_ccall f_6207(C_word c,C_word *av) C_noret;
C_noret_decl(f_6256)
static void C_ccall f_6256(C_word c,C_word *av) C_noret;
C_noret_decl(f_6258)
static void C_ccall f_6258(C_word c,C_word *av) C_noret;
C_noret_decl(f_6262)
static void C_ccall f_6262(C_word c,C_word *av) C_noret;
C_noret_decl(f_6268)
static void C_ccall f_6268(C_word c,C_word *av) C_noret;
C_noret_decl(f_6271)
static void C_ccall f_6271(C_word c,C_word *av) C_noret;
C_noret_decl(f_6283)
static void C_ccall f_6283(C_word c,C_word *av) C_noret;
C_noret_decl(f_6286)
static void C_ccall f_6286(C_word c,C_word *av) C_noret;
C_noret_decl(f_6292)
static void C_ccall f_6292(C_word c,C_word *av) C_noret;
C_noret_decl(f_6295)
static void C_ccall f_6295(C_word c,C_word *av) C_noret;
C_noret_decl(f_6304)
static void C_ccall f_6304(C_word c,C_word *av) C_noret;
C_noret_decl(f_6305)
static void C_fcall f_6305(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6321)
static void C_ccall f_6321(C_word c,C_word *av) C_noret;
C_noret_decl(f_6352)
static void C_ccall f_6352(C_word c,C_word *av) C_noret;
C_noret_decl(f_6354)
static void C_fcall f_6354(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6373)
static void C_fcall f_6373(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6379)
static void C_fcall f_6379(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6386)
static void C_fcall f_6386(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6390)
static void C_ccall f_6390(C_word c,C_word *av) C_noret;
C_noret_decl(f_6394)
static void C_fcall f_6394(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6398)
static void C_ccall f_6398(C_word c,C_word *av) C_noret;
C_noret_decl(f_6426)
static void C_ccall f_6426(C_word c,C_word *av) C_noret;
C_noret_decl(f_6447)
static void C_ccall f_6447(C_word c,C_word *av) C_noret;
C_noret_decl(f_6526)
static void C_ccall f_6526(C_word c,C_word *av) C_noret;
C_noret_decl(f_6569)
static C_word C_fcall f_6569(C_word t0,C_word t1);
C_noret_decl(f_6582)
static void C_ccall f_6582(C_word c,C_word *av) C_noret;
C_noret_decl(f_6584)
static void C_fcall f_6584(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6622)
static void C_fcall f_6622(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6632)
static void C_ccall f_6632(C_word c,C_word *av) C_noret;
C_noret_decl(f_6645)
static void C_fcall f_6645(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6680)
static void C_ccall f_6680(C_word c,C_word *av) C_noret;
C_noret_decl(f_6687)
static void C_ccall f_6687(C_word c,C_word *av) C_noret;
C_noret_decl(f_6691)
static void C_ccall f_6691(C_word c,C_word *av) C_noret;
C_noret_decl(f_6695)
static void C_ccall f_6695(C_word c,C_word *av) C_noret;
C_noret_decl(f_6697)
static void C_ccall f_6697(C_word c,C_word *av) C_noret;
C_noret_decl(f_6701)
static void C_ccall f_6701(C_word c,C_word *av) C_noret;
C_noret_decl(f_6709)
static void C_ccall f_6709(C_word c,C_word *av) C_noret;
C_noret_decl(f_6718)
static void C_ccall f_6718(C_word c,C_word *av) C_noret;
C_noret_decl(f_6721)
static void C_ccall f_6721(C_word c,C_word *av) C_noret;
C_noret_decl(f_6724)
static void C_ccall f_6724(C_word c,C_word *av) C_noret;
C_noret_decl(f_6746)
static void C_ccall f_6746(C_word c,C_word *av) C_noret;
C_noret_decl(f_6753)
static void C_ccall f_6753(C_word c,C_word *av) C_noret;
C_noret_decl(f_6757)
static void C_ccall f_6757(C_word c,C_word *av) C_noret;
C_noret_decl(f_6768)
static void C_ccall f_6768(C_word c,C_word *av) C_noret;
C_noret_decl(f_6771)
static void C_ccall f_6771(C_word c,C_word *av) C_noret;
C_noret_decl(f_6774)
static void C_ccall f_6774(C_word c,C_word *av) C_noret;
C_noret_decl(f_6788)
static void C_ccall f_6788(C_word c,C_word *av) C_noret;
C_noret_decl(f_6795)
static void C_ccall f_6795(C_word c,C_word *av) C_noret;
C_noret_decl(f_6799)
static void C_ccall f_6799(C_word c,C_word *av) C_noret;
C_noret_decl(f_6811)
static void C_ccall f_6811(C_word c,C_word *av) C_noret;
C_noret_decl(f_6813)
static void C_ccall f_6813(C_word c,C_word *av) C_noret;
C_noret_decl(f_6817)
static void C_ccall f_6817(C_word c,C_word *av) C_noret;
C_noret_decl(f_6819)
static void C_fcall f_6819(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6825)
static void C_fcall f_6825(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6839)
static void C_ccall f_6839(C_word c,C_word *av) C_noret;
C_noret_decl(f_6843)
static void C_ccall f_6843(C_word c,C_word *av) C_noret;
C_noret_decl(f_6851)
static void C_ccall f_6851(C_word c,C_word *av) C_noret;
C_noret_decl(f_6854)
static void C_ccall f_6854(C_word c,C_word *av) C_noret;
C_noret_decl(f_6857)
static void C_ccall f_6857(C_word c,C_word *av) C_noret;
C_noret_decl(f_6860)
static void C_ccall f_6860(C_word c,C_word *av) C_noret;
C_noret_decl(f_6863)
static void C_ccall f_6863(C_word c,C_word *av) C_noret;
C_noret_decl(f_6866)
static void C_ccall f_6866(C_word c,C_word *av) C_noret;
C_noret_decl(f_6869)
static void C_ccall f_6869(C_word c,C_word *av) C_noret;
C_noret_decl(f_6872)
static void C_ccall f_6872(C_word c,C_word *av) C_noret;
C_noret_decl(f_6875)
static void C_ccall f_6875(C_word c,C_word *av) C_noret;
C_noret_decl(f_6878)
static void C_ccall f_6878(C_word c,C_word *av) C_noret;
C_noret_decl(f_6885)
static void C_ccall f_6885(C_word c,C_word *av) C_noret;
C_noret_decl(f_6901)
static void C_ccall f_6901(C_word c,C_word *av) C_noret;
C_noret_decl(f_6903)
static void C_fcall f_6903(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6911)
static void C_fcall f_6911(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6921)
static void C_ccall f_6921(C_word c,C_word *av) C_noret;
C_noret_decl(f_6925)
static void C_ccall f_6925(C_word c,C_word *av) C_noret;
C_noret_decl(f_6935)
static void C_fcall f_6935(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6939)
static void C_ccall f_6939(C_word c,C_word *av) C_noret;
C_noret_decl(f_6941)
static void C_ccall f_6941(C_word c,C_word *av) C_noret;
C_noret_decl(f_6949)
static void C_ccall f_6949(C_word c,C_word *av) C_noret;
C_noret_decl(f_6951)
static void C_ccall f_6951(C_word c,C_word *av) C_noret;
C_noret_decl(f_6955)
static void C_ccall f_6955(C_word c,C_word *av) C_noret;
C_noret_decl(f_6977)
static void C_ccall f_6977(C_word c,C_word *av) C_noret;
C_noret_decl(f_6979)
static void C_fcall f_6979(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7027)
static void C_fcall f_7027(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7080)
static void C_ccall f_7080(C_word c,C_word *av) C_noret;
C_noret_decl(f_7091)
static void C_ccall f_7091(C_word c,C_word *av) C_noret;
C_noret_decl(f_7128)
static void C_ccall f_7128(C_word c,C_word *av) C_noret;
C_noret_decl(f_7156)
static void C_ccall f_7156(C_word c,C_word *av) C_noret;
C_noret_decl(f_7183)
static void C_ccall f_7183(C_word c,C_word *av) C_noret;
C_noret_decl(f_7193)
static void C_ccall f_7193(C_word c,C_word *av) C_noret;
C_noret_decl(f_7195)
static void C_fcall f_7195(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7220)
static void C_ccall f_7220(C_word c,C_word *av) C_noret;
C_noret_decl(f_7255)
static void C_ccall f_7255(C_word c,C_word *av) C_noret;
C_noret_decl(f_7257)
static void C_ccall f_7257(C_word c,C_word *av) C_noret;
C_noret_decl(f_7261)
static void C_ccall f_7261(C_word c,C_word *av) C_noret;
C_noret_decl(f_7273)
static void C_ccall f_7273(C_word c,C_word *av) C_noret;
C_noret_decl(f_7276)
static void C_ccall f_7276(C_word c,C_word *av) C_noret;
C_noret_decl(f_7279)
static void C_ccall f_7279(C_word c,C_word *av) C_noret;
C_noret_decl(f_7282)
static void C_ccall f_7282(C_word c,C_word *av) C_noret;
C_noret_decl(f_7293)
static void C_ccall f_7293(C_word c,C_word *av) C_noret;
C_noret_decl(f_7295)
static void C_fcall f_7295(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7321)
static void C_ccall f_7321(C_word c,C_word *av) C_noret;
C_noret_decl(f_7332)
static void C_ccall f_7332(C_word c,C_word *av) C_noret;
C_noret_decl(f_7415)
static void C_ccall f_7415(C_word c,C_word *av) C_noret;
C_noret_decl(f_7417)
static void C_ccall f_7417(C_word c,C_word *av) C_noret;
C_noret_decl(f_7421)
static void C_ccall f_7421(C_word c,C_word *av) C_noret;
C_noret_decl(f_7424)
static void C_ccall f_7424(C_word c,C_word *av) C_noret;
C_noret_decl(f_7454)
static void C_ccall f_7454(C_word c,C_word *av) C_noret;
C_noret_decl(f_7464)
static void C_ccall f_7464(C_word c,C_word *av) C_noret;
C_noret_decl(f_7492)
static void C_ccall f_7492(C_word c,C_word *av) C_noret;
C_noret_decl(f_7494)
static void C_ccall f_7494(C_word c,C_word *av) C_noret;
C_noret_decl(f_7498)
static void C_ccall f_7498(C_word c,C_word *av) C_noret;
C_noret_decl(f_7517)
static void C_ccall f_7517(C_word c,C_word *av) C_noret;
C_noret_decl(f_7521)
static void C_ccall f_7521(C_word c,C_word *av) C_noret;
C_noret_decl(f_7525)
static void C_ccall f_7525(C_word c,C_word *av) C_noret;
C_noret_decl(f_7527)
static void C_fcall f_7527(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7548)
static void C_ccall f_7548(C_word c,C_word *av) C_noret;
C_noret_decl(f_7566)
static void C_ccall f_7566(C_word c,C_word *av) C_noret;
C_noret_decl(f_7574)
static void C_ccall f_7574(C_word c,C_word *av) C_noret;
C_noret_decl(f_7578)
static void C_ccall f_7578(C_word c,C_word *av) C_noret;
C_noret_decl(f_7588)
static void C_fcall f_7588(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7594)
static void C_fcall f_7594(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7608)
static void C_ccall f_7608(C_word c,C_word *av) C_noret;
C_noret_decl(f_7634)
static void C_ccall f_7634(C_word c,C_word *av) C_noret;
C_noret_decl(f_7658)
static void C_ccall f_7658(C_word c,C_word *av) C_noret;
C_noret_decl(f_7666)
static void C_ccall f_7666(C_word c,C_word *av) C_noret;
C_noret_decl(f_7674)
static void C_ccall f_7674(C_word c,C_word *av) C_noret;
C_noret_decl(f_7678)
static void C_ccall f_7678(C_word c,C_word *av) C_noret;
C_noret_decl(f_7681)
static void C_ccall f_7681(C_word c,C_word *av) C_noret;
C_noret_decl(f_7684)
static void C_ccall f_7684(C_word c,C_word *av) C_noret;
C_noret_decl(f_7693)
static void C_ccall f_7693(C_word c,C_word *av) C_noret;
C_noret_decl(f_7694)
static void C_fcall f_7694(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7702)
static void C_ccall f_7702(C_word c,C_word *av) C_noret;
C_noret_decl(f_7706)
static void C_ccall f_7706(C_word c,C_word *av) C_noret;
C_noret_decl(f_7710)
static void C_fcall f_7710(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7718)
static void C_ccall f_7718(C_word c,C_word *av) C_noret;
C_noret_decl(f_7724)
static void C_ccall f_7724(C_word c,C_word *av) C_noret;
C_noret_decl(f_7730)
static void C_ccall f_7730(C_word c,C_word *av) C_noret;
C_noret_decl(f_7733)
static void C_ccall f_7733(C_word c,C_word *av) C_noret;
C_noret_decl(f_7736)
static void C_ccall f_7736(C_word c,C_word *av) C_noret;
C_noret_decl(f_7740)
static void C_fcall f_7740(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7748)
static void C_ccall f_7748(C_word c,C_word *av) C_noret;
C_noret_decl(f_7751)
static void C_ccall f_7751(C_word c,C_word *av) C_noret;
C_noret_decl(f_7754)
static void C_ccall f_7754(C_word c,C_word *av) C_noret;
C_noret_decl(f_7757)
static void C_ccall f_7757(C_word c,C_word *av) C_noret;
C_noret_decl(f_7764)
static void C_ccall f_7764(C_word c,C_word *av) C_noret;
C_noret_decl(f_7790)
static void C_fcall f_7790(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7815)
static void C_ccall f_7815(C_word c,C_word *av) C_noret;
C_noret_decl(f_7824)
static void C_fcall f_7824(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7858)
static void C_fcall f_7858(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7883)
static void C_ccall f_7883(C_word c,C_word *av) C_noret;
C_noret_decl(f_7892)
static void C_fcall f_7892(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7940)
static void C_ccall f_7940(C_word c,C_word *av) C_noret;
C_noret_decl(f_7942)
static void C_ccall f_7942(C_word c,C_word *av) C_noret;
C_noret_decl(f_7946)
static void C_ccall f_7946(C_word c,C_word *av) C_noret;
C_noret_decl(f_7956)
static void C_fcall f_7956(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7983)
static void C_ccall f_7983(C_word c,C_word *av) C_noret;
C_noret_decl(f_7986)
static void C_ccall f_7986(C_word c,C_word *av) C_noret;
C_noret_decl(f_8001)
static void C_ccall f_8001(C_word c,C_word *av) C_noret;
C_noret_decl(f_8009)
static void C_ccall f_8009(C_word c,C_word *av) C_noret;
C_noret_decl(f_8018)
static void C_ccall f_8018(C_word c,C_word *av) C_noret;
C_noret_decl(f_8033)
static void C_ccall f_8033(C_word c,C_word *av) C_noret;
C_noret_decl(f_8043)
static void C_ccall f_8043(C_word c,C_word *av) C_noret;
C_noret_decl(f_8046)
static void C_ccall f_8046(C_word c,C_word *av) C_noret;
C_noret_decl(f_8062)
static void C_ccall f_8062(C_word c,C_word *av) C_noret;
C_noret_decl(f_8082)
static void C_ccall f_8082(C_word c,C_word *av) C_noret;
C_noret_decl(f_8084)
static void C_ccall f_8084(C_word c,C_word *av) C_noret;
C_noret_decl(f_8086)
static void C_ccall f_8086(C_word c,C_word *av) C_noret;
C_noret_decl(f_8090)
static void C_ccall f_8090(C_word c,C_word *av) C_noret;
C_noret_decl(f_8099)
static void C_fcall f_8099(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8102)
static void C_ccall f_8102(C_word c,C_word *av) C_noret;
C_noret_decl(f_8111)
static void C_fcall f_8111(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8127)
static void C_ccall f_8127(C_word c,C_word *av) C_noret;
C_noret_decl(f_8131)
static void C_ccall f_8131(C_word c,C_word *av) C_noret;
C_noret_decl(f_8174)
static void C_ccall f_8174(C_word c,C_word *av) C_noret;
C_noret_decl(f_8186)
static void C_ccall f_8186(C_word c,C_word *av) C_noret;
C_noret_decl(f_8188)
static void C_ccall f_8188(C_word c,C_word *av) C_noret;
C_noret_decl(f_8192)
static void C_ccall f_8192(C_word c,C_word *av) C_noret;
C_noret_decl(f_8195)
static void C_ccall f_8195(C_word c,C_word *av) C_noret;
C_noret_decl(f_8214)
static void C_ccall f_8214(C_word c,C_word *av) C_noret;
C_noret_decl(f_8230)
static void C_ccall f_8230(C_word c,C_word *av) C_noret;
C_noret_decl(f_8232)
static void C_ccall f_8232(C_word c,C_word *av) C_noret;
C_noret_decl(f_8236)
static void C_ccall f_8236(C_word c,C_word *av) C_noret;
C_noret_decl(f_8239)
static void C_ccall f_8239(C_word c,C_word *av) C_noret;
C_noret_decl(f_8252)
static void C_ccall f_8252(C_word c,C_word *av) C_noret;
C_noret_decl(f_8254)
static void C_ccall f_8254(C_word c,C_word *av) C_noret;
C_noret_decl(f_8258)
static void C_ccall f_8258(C_word c,C_word *av) C_noret;
C_noret_decl(f_8272)
static void C_ccall f_8272(C_word c,C_word *av) C_noret;
C_noret_decl(f_8278)
static void C_ccall f_8278(C_word c,C_word *av) C_noret;
C_noret_decl(f_8300)
static void C_ccall f_8300(C_word c,C_word *av) C_noret;
C_noret_decl(f_8306)
static void C_ccall f_8306(C_word c,C_word *av) C_noret;
C_noret_decl(f_8310)
static void C_ccall f_8310(C_word c,C_word *av) C_noret;
C_noret_decl(f_8320)
static void C_ccall f_8320(C_word c,C_word *av) C_noret;
C_noret_decl(f_8322)
static void C_fcall f_8322(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8351)
static void C_ccall f_8351(C_word c,C_word *av) C_noret;
C_noret_decl(f_8370)
static void C_fcall f_8370(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8404)
static void C_fcall f_8404(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8428)
static void C_ccall f_8428(C_word c,C_word *av) C_noret;
C_noret_decl(f_8430)
static void C_ccall f_8430(C_word c,C_word *av) C_noret;
C_noret_decl(f_8434)
static void C_ccall f_8434(C_word c,C_word *av) C_noret;
C_noret_decl(f_8440)
static void C_fcall f_8440(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8474)
static void C_fcall f_8474(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8510)
static void C_ccall f_8510(C_word c,C_word *av) C_noret;
C_noret_decl(f_8512)
static void C_ccall f_8512(C_word c,C_word *av) C_noret;
C_noret_decl(f_8516)
static void C_ccall f_8516(C_word c,C_word *av) C_noret;
C_noret_decl(f_8524)
static void C_ccall f_8524(C_word c,C_word *av) C_noret;
C_noret_decl(f_8529)
static void C_fcall f_8529(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8554)
static void C_ccall f_8554(C_word c,C_word *av) C_noret;
C_noret_decl(f_8564)
static void C_ccall f_8564(C_word c,C_word *av) C_noret;
C_noret_decl(f_8566)
static void C_ccall f_8566(C_word c,C_word *av) C_noret;
C_noret_decl(f_8570)
static void C_ccall f_8570(C_word c,C_word *av) C_noret;
C_noret_decl(f_8576)
static void C_ccall f_8576(C_word c,C_word *av) C_noret;
C_noret_decl(f_8597)
static void C_ccall f_8597(C_word c,C_word *av) C_noret;
C_noret_decl(f_8604)
static void C_ccall f_8604(C_word c,C_word *av) C_noret;
C_noret_decl(f_8627)
static void C_ccall f_8627(C_word c,C_word *av) C_noret;
C_noret_decl(f_8631)
static void C_ccall f_8631(C_word c,C_word *av) C_noret;
C_noret_decl(f_8652)
static void C_ccall f_8652(C_word c,C_word *av) C_noret;
C_noret_decl(f_8655)
static void C_ccall f_8655(C_word c,C_word *av) C_noret;
C_noret_decl(f_8659)
static void C_fcall f_8659(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8667)
static void C_ccall f_8667(C_word c,C_word *av) C_noret;
C_noret_decl(f_8671)
static void C_ccall f_8671(C_word c,C_word *av) C_noret;
C_noret_decl(f_8677)
static void C_ccall f_8677(C_word c,C_word *av) C_noret;
C_noret_decl(f_8678)
static void C_ccall f_8678(C_word c,C_word *av) C_noret;
C_noret_decl(f_8689)
static void C_ccall f_8689(C_word c,C_word *av) C_noret;
C_noret_decl(f_8704)
static void C_ccall f_8704(C_word c,C_word *av) C_noret;
C_noret_decl(f_8706)
static void C_fcall f_8706(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8725)
static void C_fcall f_8725(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8733)
static void C_ccall f_8733(C_word c,C_word *av) C_noret;
C_noret_decl(f_8739)
static void C_ccall f_8739(C_word c,C_word *av) C_noret;
C_noret_decl(f_8741)
static void C_fcall f_8741(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8766)
static void C_ccall f_8766(C_word c,C_word *av) C_noret;
C_noret_decl(f_8790)
static void C_ccall f_8790(C_word c,C_word *av) C_noret;
C_noret_decl(f_8827)
static void C_ccall f_8827(C_word c,C_word *av) C_noret;
C_noret_decl(f_8855)
static void C_fcall f_8855(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8889)
static void C_fcall f_8889(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8920)
static void C_ccall f_8920(C_word c,C_word *av) C_noret;
C_noret_decl(f_8927)
static void C_ccall f_8927(C_word c,C_word *av) C_noret;
C_noret_decl(f_8933)
static void C_fcall f_8933(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8958)
static void C_ccall f_8958(C_word c,C_word *av) C_noret;
C_noret_decl(f_8967)
static void C_fcall f_8967(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8980)
static void C_ccall f_8980(C_word c,C_word *av) C_noret;
C_noret_decl(f_9005)
static void C_fcall f_9005(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9041)
static void C_ccall f_9041(C_word c,C_word *av) C_noret;
C_noret_decl(f_9043)
static void C_ccall f_9043(C_word c,C_word *av) C_noret;
C_noret_decl(f_9047)
static void C_ccall f_9047(C_word c,C_word *av) C_noret;
C_noret_decl(f_9054)
static void C_ccall f_9054(C_word c,C_word *av) C_noret;
C_noret_decl(f_9058)
static void C_ccall f_9058(C_word c,C_word *av) C_noret;
C_noret_decl(f_9066)
static void C_ccall f_9066(C_word c,C_word *av) C_noret;
C_noret_decl(f_9080)
static void C_ccall f_9080(C_word c,C_word *av) C_noret;
C_noret_decl(f_9086)
static void C_ccall f_9086(C_word c,C_word *av) C_noret;
C_noret_decl(f_9093)
static void C_ccall f_9093(C_word c,C_word *av) C_noret;
C_noret_decl(f_9099)
static void C_ccall f_9099(C_word c,C_word *av) C_noret;
C_noret_decl(f_9112)
static void C_fcall f_9112(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9146)
static void C_fcall f_9146(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9156)
static void C_ccall f_9156(C_word c,C_word *av) C_noret;
C_noret_decl(f_9171)
static void C_ccall f_9171(C_word c,C_word *av) C_noret;
C_noret_decl(f_9173)
static void C_ccall f_9173(C_word c,C_word *av) C_noret;
C_noret_decl(f_9177)
static void C_ccall f_9177(C_word c,C_word *av) C_noret;
C_noret_decl(f_9192)
static void C_ccall f_9192(C_word c,C_word *av) C_noret;
C_noret_decl(f_9194)
static void C_ccall f_9194(C_word c,C_word *av) C_noret;
C_noret_decl(f_9198)
static void C_ccall f_9198(C_word c,C_word *av) C_noret;
C_noret_decl(f_9220)
static void C_ccall f_9220(C_word c,C_word *av) C_noret;
C_noret_decl(f_9222)
static void C_ccall f_9222(C_word c,C_word *av) C_noret;
C_noret_decl(f_9226)
static void C_ccall f_9226(C_word c,C_word *av) C_noret;
C_noret_decl(f_9244)
static void C_ccall f_9244(C_word c,C_word *av) C_noret;
C_noret_decl(f_9246)
static void C_ccall f_9246(C_word c,C_word *av) C_noret;
C_noret_decl(f_9255)
static void C_fcall f_9255(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9261)
static void C_ccall f_9261(C_word c,C_word *av) C_noret;
C_noret_decl(f_9267)
static void C_ccall f_9267(C_word c,C_word *av) C_noret;
C_noret_decl(f_9281)
static void C_ccall f_9281(C_word c,C_word *av) C_noret;
C_noret_decl(f_9290)
static void C_ccall f_9290(C_word c,C_word *av) C_noret;
C_noret_decl(f_9292)
static void C_fcall f_9292(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9317)
static void C_ccall f_9317(C_word c,C_word *av) C_noret;
C_noret_decl(f_9328)
static void C_ccall f_9328(C_word c,C_word *av) C_noret;
C_noret_decl(f_9330)
static void C_ccall f_9330(C_word c,C_word *av) C_noret;
C_noret_decl(f_9349)
static void C_ccall f_9349(C_word c,C_word *av) C_noret;
C_noret_decl(f_9357)
static void C_ccall f_9357(C_word c,C_word *av) C_noret;
C_noret_decl(f_9366)
static void C_ccall f_9366(C_word c,C_word *av) C_noret;
C_noret_decl(f_9372)
static void C_ccall f_9372(C_word c,C_word *av) C_noret;
C_noret_decl(f_9376)
static void C_fcall f_9376(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9384)
static void C_ccall f_9384(C_word c,C_word *av) C_noret;
C_noret_decl(f_9390)
static void C_ccall f_9390(C_word c,C_word *av) C_noret;
C_noret_decl(f_9394)
static void C_fcall f_9394(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9402)
static void C_ccall f_9402(C_word c,C_word *av) C_noret;
C_noret_decl(f_9405)
static void C_ccall f_9405(C_word c,C_word *av) C_noret;
C_noret_decl(f_9409)
static void C_fcall f_9409(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9417)
static void C_ccall f_9417(C_word c,C_word *av) C_noret;
C_noret_decl(f_9420)
static void C_ccall f_9420(C_word c,C_word *av) C_noret;
C_noret_decl(f_9433)
static void C_ccall f_9433(C_word c,C_word *av) C_noret;
C_noret_decl(f_9450)
static void C_ccall f_9450(C_word c,C_word *av) C_noret;
C_noret_decl(f_9461)
static void C_ccall f_9461(C_word c,C_word *av) C_noret;
C_noret_decl(f_9509)
static void C_ccall f_9509(C_word c,C_word *av) C_noret;
C_noret_decl(f_9513)
static void C_ccall f_9513(C_word c,C_word *av) C_noret;
C_noret_decl(f_9525)
static void C_ccall f_9525(C_word c,C_word *av) C_noret;
C_noret_decl(f_9537)
static void C_ccall f_9537(C_word c,C_word *av) C_noret;
C_noret_decl(f_9539)
static void C_fcall f_9539(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9587)
static void C_fcall f_9587(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9635)
static void C_fcall f_9635(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9642)
static void C_fcall f_9642(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9712)
static C_word C_fcall f_9712(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3);
C_noret_decl(f_9730)
static void C_ccall f_9730(C_word c,C_word *av) C_noret;
C_noret_decl(f_9734)
static void C_ccall f_9734(C_word c,C_word *av) C_noret;
C_noret_decl(f_9750)
static void C_ccall f_9750(C_word c,C_word *av) C_noret;
C_noret_decl(f_9754)
static void C_ccall f_9754(C_word c,C_word *av) C_noret;
C_noret_decl(f_9766)
static void C_ccall f_9766(C_word c,C_word *av) C_noret;
C_noret_decl(f_9776)
static void C_fcall f_9776(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9824)
static void C_fcall f_9824(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9872)
static void C_fcall f_9872(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9879)
static void C_fcall f_9879(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9942)
static void C_fcall f_9942(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9990)
static void C_fcall f_9990(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10038)
static void C_ccall trf_10038(C_word c,C_word *av) C_noret;
static void C_ccall trf_10038(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10038(t0,t1,t2,t3);}

C_noret_decl(trf_10086)
static void C_ccall trf_10086(C_word c,C_word *av) C_noret;
static void C_ccall trf_10086(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10086(t0,t1,t2);}

C_noret_decl(trf_10120)
static void C_ccall trf_10120(C_word c,C_word *av) C_noret;
static void C_ccall trf_10120(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10120(t0,t1,t2);}

C_noret_decl(trf_10154)
static void C_ccall trf_10154(C_word c,C_word *av) C_noret;
static void C_ccall trf_10154(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10154(t0,t1,t2);}

C_noret_decl(trf_10188)
static void C_ccall trf_10188(C_word c,C_word *av) C_noret;
static void C_ccall trf_10188(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10188(t0,t1,t2);}

C_noret_decl(trf_10222)
static void C_ccall trf_10222(C_word c,C_word *av) C_noret;
static void C_ccall trf_10222(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10222(t0,t1,t2);}

C_noret_decl(trf_10282)
static void C_ccall trf_10282(C_word c,C_word *av) C_noret;
static void C_ccall trf_10282(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10282(t0,t1);}

C_noret_decl(trf_10297)
static void C_ccall trf_10297(C_word c,C_word *av) C_noret;
static void C_ccall trf_10297(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10297(t0,t1);}

C_noret_decl(trf_10377)
static void C_ccall trf_10377(C_word c,C_word *av) C_noret;
static void C_ccall trf_10377(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10377(t0,t1,t2,t3);}

C_noret_decl(trf_10425)
static void C_ccall trf_10425(C_word c,C_word *av) C_noret;
static void C_ccall trf_10425(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10425(t0,t1,t2,t3);}

C_noret_decl(trf_10524)
static void C_ccall trf_10524(C_word c,C_word *av) C_noret;
static void C_ccall trf_10524(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10524(t0,t1,t2,t3);}

C_noret_decl(trf_10572)
static void C_ccall trf_10572(C_word c,C_word *av) C_noret;
static void C_ccall trf_10572(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10572(t0,t1,t2,t3);}

C_noret_decl(trf_10655)
static void C_ccall trf_10655(C_word c,C_word *av) C_noret;
static void C_ccall trf_10655(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10655(t0,t1,t2,t3);}

C_noret_decl(trf_10705)
static void C_ccall trf_10705(C_word c,C_word *av) C_noret;
static void C_ccall trf_10705(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10705(t0,t1,t2);}

C_noret_decl(trf_10725)
static void C_ccall trf_10725(C_word c,C_word *av) C_noret;
static void C_ccall trf_10725(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10725(t0,t1,t2,t3);}

C_noret_decl(trf_10773)
static void C_ccall trf_10773(C_word c,C_word *av) C_noret;
static void C_ccall trf_10773(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10773(t0,t1,t2);}

C_noret_decl(trf_10807)
static void C_ccall trf_10807(C_word c,C_word *av) C_noret;
static void C_ccall trf_10807(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10807(t0,t1,t2);}

C_noret_decl(trf_10841)
static void C_ccall trf_10841(C_word c,C_word *av) C_noret;
static void C_ccall trf_10841(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10841(t0,t1,t2);}

C_noret_decl(trf_10875)
static void C_ccall trf_10875(C_word c,C_word *av) C_noret;
static void C_ccall trf_10875(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10875(t0,t1,t2);}

C_noret_decl(trf_11107)
static void C_ccall trf_11107(C_word c,C_word *av) C_noret;
static void C_ccall trf_11107(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11107(t0,t1,t2);}

C_noret_decl(trf_11120)
static void C_ccall trf_11120(C_word c,C_word *av) C_noret;
static void C_ccall trf_11120(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11120(t0,t1);}

C_noret_decl(trf_11200)
static void C_ccall trf_11200(C_word c,C_word *av) C_noret;
static void C_ccall trf_11200(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11200(t0,t1,t2,t3);}

C_noret_decl(trf_11252)
static void C_ccall trf_11252(C_word c,C_word *av) C_noret;
static void C_ccall trf_11252(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11252(t0,t1);}

C_noret_decl(trf_11418)
static void C_ccall trf_11418(C_word c,C_word *av) C_noret;
static void C_ccall trf_11418(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11418(t0,t1,t2);}

C_noret_decl(trf_11533)
static void C_ccall trf_11533(C_word c,C_word *av) C_noret;
static void C_ccall trf_11533(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11533(t0,t1,t2,t3);}

C_noret_decl(trf_11583)
static void C_ccall trf_11583(C_word c,C_word *av) C_noret;
static void C_ccall trf_11583(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11583(t0,t1,t2,t3);}

C_noret_decl(trf_11652)
static void C_ccall trf_11652(C_word c,C_word *av) C_noret;
static void C_ccall trf_11652(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11652(t0,t1);}

C_noret_decl(trf_11888)
static void C_ccall trf_11888(C_word c,C_word *av) C_noret;
static void C_ccall trf_11888(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11888(t0,t1,t2);}

C_noret_decl(trf_11928)
static void C_ccall trf_11928(C_word c,C_word *av) C_noret;
static void C_ccall trf_11928(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11928(t0,t1,t2);}

C_noret_decl(trf_12014)
static void C_ccall trf_12014(C_word c,C_word *av) C_noret;
static void C_ccall trf_12014(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_12014(t0,t1,t2,t3,t4);}

C_noret_decl(trf_12070)
static void C_ccall trf_12070(C_word c,C_word *av) C_noret;
static void C_ccall trf_12070(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12070(t0,t1,t2,t3);}

C_noret_decl(trf_12167)
static void C_ccall trf_12167(C_word c,C_word *av) C_noret;
static void C_ccall trf_12167(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12167(t0,t1,t2);}

C_noret_decl(trf_12211)
static void C_ccall trf_12211(C_word c,C_word *av) C_noret;
static void C_ccall trf_12211(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12211(t0,t1,t2,t3);}

C_noret_decl(trf_12265)
static void C_ccall trf_12265(C_word c,C_word *av) C_noret;
static void C_ccall trf_12265(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12265(t0,t1);}

C_noret_decl(trf_12435)
static void C_ccall trf_12435(C_word c,C_word *av) C_noret;
static void C_ccall trf_12435(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12435(t0,t1,t2);}

C_noret_decl(trf_12469)
static void C_ccall trf_12469(C_word c,C_word *av) C_noret;
static void C_ccall trf_12469(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12469(t0,t1,t2);}

C_noret_decl(trf_12537)
static void C_ccall trf_12537(C_word c,C_word *av) C_noret;
static void C_ccall trf_12537(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12537(t0,t1,t2,t3);}

C_noret_decl(trf_12587)
static void C_ccall trf_12587(C_word c,C_word *av) C_noret;
static void C_ccall trf_12587(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12587(t0,t1,t2,t3);}

C_noret_decl(trf_12606)
static void C_ccall trf_12606(C_word c,C_word *av) C_noret;
static void C_ccall trf_12606(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12606(t0,t1);}

C_noret_decl(trf_12747)
static void C_ccall trf_12747(C_word c,C_word *av) C_noret;
static void C_ccall trf_12747(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12747(t0,t1);}

C_noret_decl(trf_12820)
static void C_ccall trf_12820(C_word c,C_word *av) C_noret;
static void C_ccall trf_12820(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12820(t0,t1,t2);}

C_noret_decl(trf_12830)
static void C_ccall trf_12830(C_word c,C_word *av) C_noret;
static void C_ccall trf_12830(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12830(t0,t1);}

C_noret_decl(trf_12871)
static void C_ccall trf_12871(C_word c,C_word *av) C_noret;
static void C_ccall trf_12871(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12871(t0,t1,t2);}

C_noret_decl(trf_13006)
static void C_ccall trf_13006(C_word c,C_word *av) C_noret;
static void C_ccall trf_13006(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13006(t0,t1,t2);}

C_noret_decl(trf_4322)
static void C_ccall trf_4322(C_word c,C_word *av) C_noret;
static void C_ccall trf_4322(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4322(t0,t1,t2);}

C_noret_decl(trf_4380)
static void C_ccall trf_4380(C_word c,C_word *av) C_noret;
static void C_ccall trf_4380(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4380(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5737)
static void C_ccall trf_5737(C_word c,C_word *av) C_noret;
static void C_ccall trf_5737(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5737(t0,t1);}

C_noret_decl(trf_5760)
static void C_ccall trf_5760(C_word c,C_word *av) C_noret;
static void C_ccall trf_5760(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5760(t0,t1);}

C_noret_decl(trf_5911)
static void C_ccall trf_5911(C_word c,C_word *av) C_noret;
static void C_ccall trf_5911(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_5911(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_6106)
static void C_ccall trf_6106(C_word c,C_word *av) C_noret;
static void C_ccall trf_6106(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_6106(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6305)
static void C_ccall trf_6305(C_word c,C_word *av) C_noret;
static void C_ccall trf_6305(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6305(t0,t1,t2);}

C_noret_decl(trf_6354)
static void C_ccall trf_6354(C_word c,C_word *av) C_noret;
static void C_ccall trf_6354(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6354(t0,t1,t2,t3);}

C_noret_decl(trf_6373)
static void C_ccall trf_6373(C_word c,C_word *av) C_noret;
static void C_ccall trf_6373(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6373(t0,t1);}

C_noret_decl(trf_6379)
static void C_ccall trf_6379(C_word c,C_word *av) C_noret;
static void C_ccall trf_6379(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6379(t0,t1);}

C_noret_decl(trf_6386)
static void C_ccall trf_6386(C_word c,C_word *av) C_noret;
static void C_ccall trf_6386(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6386(t0,t1);}

C_noret_decl(trf_6394)
static void C_ccall trf_6394(C_word c,C_word *av) C_noret;
static void C_ccall trf_6394(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6394(t0,t1);}

C_noret_decl(trf_6584)
static void C_ccall trf_6584(C_word c,C_word *av) C_noret;
static void C_ccall trf_6584(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6584(t0,t1,t2);}

C_noret_decl(trf_6622)
static void C_ccall trf_6622(C_word c,C_word *av) C_noret;
static void C_ccall trf_6622(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6622(t0,t1,t2);}

C_noret_decl(trf_6645)
static void C_ccall trf_6645(C_word c,C_word *av) C_noret;
static void C_ccall trf_6645(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6645(t0,t1,t2);}

C_noret_decl(trf_6819)
static void C_ccall trf_6819(C_word c,C_word *av) C_noret;
static void C_ccall trf_6819(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6819(t0,t1,t2);}

C_noret_decl(trf_6825)
static void C_ccall trf_6825(C_word c,C_word *av) C_noret;
static void C_ccall trf_6825(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6825(t0,t1,t2);}

C_noret_decl(trf_6903)
static void C_ccall trf_6903(C_word c,C_word *av) C_noret;
static void C_ccall trf_6903(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6903(t0,t1,t2);}

C_noret_decl(trf_6911)
static void C_ccall trf_6911(C_word c,C_word *av) C_noret;
static void C_ccall trf_6911(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6911(t0,t1,t2,t3);}

C_noret_decl(trf_6935)
static void C_ccall trf_6935(C_word c,C_word *av) C_noret;
static void C_ccall trf_6935(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6935(t0,t1);}

C_noret_decl(trf_6979)
static void C_ccall trf_6979(C_word c,C_word *av) C_noret;
static void C_ccall trf_6979(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6979(t0,t1,t2,t3);}

C_noret_decl(trf_7027)
static void C_ccall trf_7027(C_word c,C_word *av) C_noret;
static void C_ccall trf_7027(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7027(t0,t1,t2,t3);}

C_noret_decl(trf_7195)
static void C_ccall trf_7195(C_word c,C_word *av) C_noret;
static void C_ccall trf_7195(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7195(t0,t1,t2);}

C_noret_decl(trf_7295)
static void C_ccall trf_7295(C_word c,C_word *av) C_noret;
static void C_ccall trf_7295(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7295(t0,t1,t2,t3);}

C_noret_decl(trf_7527)
static void C_ccall trf_7527(C_word c,C_word *av) C_noret;
static void C_ccall trf_7527(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7527(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7588)
static void C_ccall trf_7588(C_word c,C_word *av) C_noret;
static void C_ccall trf_7588(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7588(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7594)
static void C_ccall trf_7594(C_word c,C_word *av) C_noret;
static void C_ccall trf_7594(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7594(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7694)
static void C_ccall trf_7694(C_word c,C_word *av) C_noret;
static void C_ccall trf_7694(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7694(t0,t1,t2);}

C_noret_decl(trf_7710)
static void C_ccall trf_7710(C_word c,C_word *av) C_noret;
static void C_ccall trf_7710(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7710(t0,t1,t2);}

C_noret_decl(trf_7740)
static void C_ccall trf_7740(C_word c,C_word *av) C_noret;
static void C_ccall trf_7740(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7740(t0,t1,t2);}

C_noret_decl(trf_7790)
static void C_ccall trf_7790(C_word c,C_word *av) C_noret;
static void C_ccall trf_7790(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7790(t0,t1,t2);}

C_noret_decl(trf_7824)
static void C_ccall trf_7824(C_word c,C_word *av) C_noret;
static void C_ccall trf_7824(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7824(t0,t1,t2);}

C_noret_decl(trf_7858)
static void C_ccall trf_7858(C_word c,C_word *av) C_noret;
static void C_ccall trf_7858(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7858(t0,t1,t2);}

C_noret_decl(trf_7892)
static void C_ccall trf_7892(C_word c,C_word *av) C_noret;
static void C_ccall trf_7892(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7892(t0,t1,t2);}

C_noret_decl(trf_7956)
static void C_ccall trf_7956(C_word c,C_word *av) C_noret;
static void C_ccall trf_7956(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7956(t0,t1,t2,t3);}

C_noret_decl(trf_8099)
static void C_ccall trf_8099(C_word c,C_word *av) C_noret;
static void C_ccall trf_8099(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8099(t0,t1);}

C_noret_decl(trf_8111)
static void C_ccall trf_8111(C_word c,C_word *av) C_noret;
static void C_ccall trf_8111(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8111(t0,t1);}

C_noret_decl(trf_8322)
static void C_ccall trf_8322(C_word c,C_word *av) C_noret;
static void C_ccall trf_8322(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8322(t0,t1,t2,t3);}

C_noret_decl(trf_8370)
static void C_ccall trf_8370(C_word c,C_word *av) C_noret;
static void C_ccall trf_8370(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8370(t0,t1,t2);}

C_noret_decl(trf_8404)
static void C_ccall trf_8404(C_word c,C_word *av) C_noret;
static void C_ccall trf_8404(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8404(t0,t1,t2,t3);}

C_noret_decl(trf_8440)
static void C_ccall trf_8440(C_word c,C_word *av) C_noret;
static void C_ccall trf_8440(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8440(t0,t1,t2);}

C_noret_decl(trf_8474)
static void C_ccall trf_8474(C_word c,C_word *av) C_noret;
static void C_ccall trf_8474(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8474(t0,t1,t2);}

C_noret_decl(trf_8529)
static void C_ccall trf_8529(C_word c,C_word *av) C_noret;
static void C_ccall trf_8529(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8529(t0,t1,t2);}

C_noret_decl(trf_8659)
static void C_ccall trf_8659(C_word c,C_word *av) C_noret;
static void C_ccall trf_8659(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8659(t0,t1,t2);}

C_noret_decl(trf_8706)
static void C_ccall trf_8706(C_word c,C_word *av) C_noret;
static void C_ccall trf_8706(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8706(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8725)
static void C_ccall trf_8725(C_word c,C_word *av) C_noret;
static void C_ccall trf_8725(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8725(t0,t1,t2);}

C_noret_decl(trf_8741)
static void C_ccall trf_8741(C_word c,C_word *av) C_noret;
static void C_ccall trf_8741(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8741(t0,t1,t2);}

C_noret_decl(trf_8855)
static void C_ccall trf_8855(C_word c,C_word *av) C_noret;
static void C_ccall trf_8855(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8855(t0,t1,t2);}

C_noret_decl(trf_8889)
static void C_ccall trf_8889(C_word c,C_word *av) C_noret;
static void C_ccall trf_8889(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8889(t0,t1,t2,t3);}

C_noret_decl(trf_8933)
static void C_ccall trf_8933(C_word c,C_word *av) C_noret;
static void C_ccall trf_8933(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8933(t0,t1,t2);}

C_noret_decl(trf_8967)
static void C_ccall trf_8967(C_word c,C_word *av) C_noret;
static void C_ccall trf_8967(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8967(t0,t1,t2,t3);}

C_noret_decl(trf_9005)
static void C_ccall trf_9005(C_word c,C_word *av) C_noret;
static void C_ccall trf_9005(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9005(t0,t1,t2);}

C_noret_decl(trf_9112)
static void C_ccall trf_9112(C_word c,C_word *av) C_noret;
static void C_ccall trf_9112(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9112(t0,t1,t2);}

C_noret_decl(trf_9146)
static void C_ccall trf_9146(C_word c,C_word *av) C_noret;
static void C_ccall trf_9146(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9146(t0,t1,t2);}

C_noret_decl(trf_9255)
static void C_ccall trf_9255(C_word c,C_word *av) C_noret;
static void C_ccall trf_9255(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9255(t0,t1,t2);}

C_noret_decl(trf_9292)
static void C_ccall trf_9292(C_word c,C_word *av) C_noret;
static void C_ccall trf_9292(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9292(t0,t1,t2);}

C_noret_decl(trf_9376)
static void C_ccall trf_9376(C_word c,C_word *av) C_noret;
static void C_ccall trf_9376(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9376(t0,t1,t2);}

C_noret_decl(trf_9394)
static void C_ccall trf_9394(C_word c,C_word *av) C_noret;
static void C_ccall trf_9394(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9394(t0,t1);}

C_noret_decl(trf_9409)
static void C_ccall trf_9409(C_word c,C_word *av) C_noret;
static void C_ccall trf_9409(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9409(t0,t1);}

C_noret_decl(trf_9539)
static void C_ccall trf_9539(C_word c,C_word *av) C_noret;
static void C_ccall trf_9539(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9539(t0,t1,t2,t3);}

C_noret_decl(trf_9587)
static void C_ccall trf_9587(C_word c,C_word *av) C_noret;
static void C_ccall trf_9587(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9587(t0,t1,t2,t3);}

C_noret_decl(trf_9635)
static void C_ccall trf_9635(C_word c,C_word *av) C_noret;
static void C_ccall trf_9635(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9635(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9642)
static void C_ccall trf_9642(C_word c,C_word *av) C_noret;
static void C_ccall trf_9642(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9642(t0,t1);}

C_noret_decl(trf_9776)
static void C_ccall trf_9776(C_word c,C_word *av) C_noret;
static void C_ccall trf_9776(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9776(t0,t1,t2,t3);}

C_noret_decl(trf_9824)
static void C_ccall trf_9824(C_word c,C_word *av) C_noret;
static void C_ccall trf_9824(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9824(t0,t1,t2,t3);}

C_noret_decl(trf_9872)
static void C_ccall trf_9872(C_word c,C_word *av) C_noret;
static void C_ccall trf_9872(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9872(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9879)
static void C_ccall trf_9879(C_word c,C_word *av) C_noret;
static void C_ccall trf_9879(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9879(t0,t1);}

C_noret_decl(trf_9942)
static void C_ccall trf_9942(C_word c,C_word *av) C_noret;
static void C_ccall trf_9942(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9942(t0,t1,t2,t3);}

C_noret_decl(trf_9990)
static void C_ccall trf_9990(C_word c,C_word *av) C_noret;
static void C_ccall trf_9990(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9990(t0,t1,t2,t3);}

/* map-loop1739 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_fcall f_10038(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10038,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1709 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_fcall f_10086(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10086,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:503: g1715 */
t4=((C_word*)t0)[4];
f_9409(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10109 in map-loop1709 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_ccall f_10111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10111,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10086(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1681 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_fcall f_10120(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10120,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:502: g1687 */
t4=((C_word*)t0)[4];
f_9394(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10143 in map-loop1681 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_10145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10145,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10120(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1653 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in ... */
static void C_fcall f_10154(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10154,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:501: g1659 */
t4=((C_word*)t0)[4];
f_9376(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10177 in map-loop1653 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_10179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10179,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10154(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1626 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in ... */
static void C_fcall f_10188(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10188,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop1599 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_fcall f_10222(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10222,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10256 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_10258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10258,c,av);}
/* chicken-syntax.scm:455: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[181];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_10260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10260,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10264,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:459: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[181];
av2[3]=t2;
av2[4]=lf[182];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in ... */
static void C_ccall f_10264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_10264,c,av);}
a=C_alloc(19);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t2,lf[65]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10278,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10875,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li115),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_10875(t14,t10,t2);}

/* k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in ... */
static void C_ccall f_10278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_10278,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10282,a[2]=((C_word*)t0)[2],a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10841,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li114),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10841(t11,t7,((C_word*)t0)[5]);}

/* g1302 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in ... */
static void C_fcall f_10282(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_10282,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10290,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:463: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10288 in g1302 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_ccall f_10290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10290,c,av);}
/* chicken-syntax.scm:463: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in ... */
static void C_ccall f_10293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_10293,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10297,a[2]=((C_word*)t0)[2],a[3]=((C_word)li104),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10308,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10807,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li113),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10807(t11,t7,((C_word*)t0)[6]);}

/* g1330 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_fcall f_10297(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_10297,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10305,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:464: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10303 in g1330 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in ... */
static void C_ccall f_10305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10305,c,av);}
/* chicken-syntax.scm:464: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_ccall f_10308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_10308,c,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10628,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=t5,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10773,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_10773(t15,t11,((C_word*)t0)[6]);}

/* k10313 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in ... */
static void C_ccall f_10315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,4)))){
C_save_and_reclaim((void *)f_10315,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[65]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10498,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10572,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li108),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10572(t12,t8,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k10337 in k10481 in k10313 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_10339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_10339,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[20],t2);
t4=C_a_i_list(&a,4,lf[177],((C_word*)t0)[2],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10349 in k10481 in k10313 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_10351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_10351,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10355,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10367,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10377,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10377(t11,t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10353 in k10349 in k10481 in k10313 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_10355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10355,c,av);}
/* chicken-syntax.scm:465: ##sys#append */
t2=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k10365 in k10349 in k10481 in k10313 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_10367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10367,c,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[163]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:465: ##sys#append */
t4=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop1553 in k10349 in k10481 in k10313 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_fcall f_10377(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_10377,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[178],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1517 in k10481 in k10313 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_fcall f_10425(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_10425,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[178],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k10481 in k10313 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in ... */
static void C_ccall f_10483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,4)))){
C_save_and_reclaim((void *)f_10483,c,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[20],t2);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[20],t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10339,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10351,a[2]=t6,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10425,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_10425(t15,t11,((C_word*)t0)[7],((C_word*)t0)[5]);}

/* k10496 in k10313 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in ... */
static void C_ccall f_10498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_10498,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10502,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10514,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10524,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10524(t11,t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10500 in k10496 in k10313 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_10502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10502,c,av);}
/* chicken-syntax.scm:465: ##sys#append */
t2=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k10512 in k10496 in k10313 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_10514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10514,c,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[163]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:465: ##sys#append */
t4=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop1481 in k10496 in k10313 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_fcall f_10524(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_10524,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[178],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1445 in k10313 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in ... */
static void C_fcall f_10572(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_10572,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[178],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k10626 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in ... */
static void C_ccall f_10628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_10628,c,av);}
a=C_alloc(13);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t3=C_i_check_list_2(t1,lf[65]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10637,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10725,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],a[5]=((C_word)li111),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_10725(t8,t4,((C_word*)t0)[2],t1);}

/* k10635 in k10626 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in ... */
static void C_ccall f_10637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_10637,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10644,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t7=C_u_i_length(((C_word*)t0)[4]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10705,a[2]=t9,a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_10705(t11,t6,t7);}

/* k10642 in k10635 in k10626 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_10644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_10644,c,av);}
a=C_alloc(12);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t3=C_i_check_list_2(t1,lf[65]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10653,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10655,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=((C_word*)t0)[6],a[5]=((C_word)li109),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_10655(t8,t4,((C_word*)t0)[2],t1);}

/* k10651 in k10642 in k10635 in k10626 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_10653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10653,c,av);}
/* chicken-syntax.scm:465: ##sys#append */
t2=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1411 in k10642 in k10635 in k10626 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_fcall f_10655(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10655,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* loop in k10635 in k10626 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_fcall f_10705(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10705,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10719,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:471: loop */
t6=t4;
t7=C_fixnum_difference(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}

/* k10717 in loop in k10635 in k10626 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_10719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10719,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1354 in k10626 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in ... */
static void C_fcall f_10725(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10725,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1375 in k10306 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in ... */
static void C_fcall f_10773(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10773,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop1324 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_fcall f_10807(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10807,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:464: g1330 */
t4=((C_word*)t0)[4];
f_10297(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10830 in map-loop1324 in k10291 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in ... */
static void C_ccall f_10832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10832,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10807(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1296 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in ... */
static void C_fcall f_10841(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10841,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:463: g1302 */
t4=((C_word*)t0)[4];
f_10282(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10864 in map-loop1296 in k10276 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_ccall f_10866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10866,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10841(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1269 in k10262 in a10259 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in ... */
static void C_fcall f_10875(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10875,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10909 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_10911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10911,c,av);}
/* chicken-syntax.scm:448: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[183];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10912 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_10913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10913,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10917,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:452: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[183];
av2[3]=t2;
av2[4]=lf[186];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10915 in a10912 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_10917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10917,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[184],t2,*((C_word*)lf[185]+1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10926 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in ... */
static void C_ccall f_10928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10928,c,av);}
/* chicken-syntax.scm:441: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[187];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10929 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in ... */
static void C_ccall f_10930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10930,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10934,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:445: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[187];
av2[3]=t2;
av2[4]=lf[188];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10932 in a10929 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_10934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10934,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[184],t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10943 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in ... */
static void C_ccall f_10945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10945,c,av);}
/* chicken-syntax.scm:433: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[189];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10946 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in ... */
static void C_ccall f_10947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10947,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10951,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:438: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[189];
av2[3]=t2;
av2[4]=lf[191];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10949 in a10946 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in ... */
static void C_ccall f_10951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_10951,c,av);}
a=C_alloc(15);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[190],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10964 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in ... */
static void C_ccall f_10966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10966,c,av);}
/* chicken-syntax.scm:427: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[192];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10967 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in ... */
static void C_ccall f_10968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10968,c,av);}
a=C_alloc(3);
t5=C_i_cdr(t2);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,lf[193],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k10978 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in ... */
static void C_ccall f_10980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10980,c,av);}
/* chicken-syntax.scm:408: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[194];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a10981 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in ... */
static void C_ccall f_10982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10982,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10986,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:413: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[194];
av2[3]=t2;
av2[4]=lf[197];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10984 in a10981 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in ... */
static void C_ccall f_10986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_10986,c,av);}
a=C_alloc(15);
t2=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,lf[20],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[25],t5,lf[195]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:417: ##sys#check-syntax */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[194];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[196];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k11006 in k10984 in a10981 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in ... */
static void C_ccall f_11008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_11008,c,av);}
a=C_alloc(24);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_i_pairp(t2);
t8=(C_truep(t7)?C_i_nullp(C_u_i_cdr(t2)):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_i_car(t2);
t10=C_a_i_list(&a,2,t9,t3);
t11=C_a_i_list(&a,1,t10);
t12=C_a_i_cons(&a,2,t11,t6);
t13=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_a_i_cons(&a,2,lf[35],t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t9=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t3);
t10=C_a_i_cons(&a,2,t2,t6);
t11=C_a_i_cons(&a,2,lf[20],t10);
t12=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_a_i_list(&a,3,lf[25],t9,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}

/* k11071 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in ... */
static void C_ccall f_11073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11073,c,av);}
/* chicken-syntax.scm:336: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[198];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in ... */
static void C_ccall f_11075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11075,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11079,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:340: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[198];
av2[3]=t2;
av2[4]=lf[208];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in ... */
static void C_ccall f_11079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11079,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:342: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in ... */
static void C_ccall f_11085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11085,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:343: scheme#symbol->string */
t3=*((C_word*)lf[119]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in ... */
static void C_ccall f_11088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_11088,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11453,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:344: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in ... */
static void C_ccall f_11091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11091,c,av);}
a=C_alloc(9);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11097,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:349: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_11097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11097,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:350: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[207];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_11100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11100,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11103,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:351: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[78];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in ... */
static void C_ccall f_11103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_11103,c,av);}
a=C_alloc(28);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li122),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[65]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11167,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11418,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li124),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_11418(t12,t8,((C_word*)t0)[4]);}

/* g1156 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in ... */
static void C_fcall f_11107(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_11107,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_symbolp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11120,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11135,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:356: c */
t5=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_u_i_car(t2);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* chicken-syntax.scm:362: chicken.syntax#syntax-error */
t4=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[198];
av2[3]=lf[199];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}}

/* k11118 in g1156 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in ... */
static void C_fcall f_11120(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_11120,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-syntax.scm:362: chicken.syntax#syntax-error */
t2=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[198];
av2[3]=lf[199];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k11133 in g1156 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in ... */
static void C_ccall f_11135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11135,c,av);}
if(C_truep(t1)){
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])))){
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t2))){
t3=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(C_u_i_cdr(t3)))){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_cadr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-syntax.scm:362: chicken.syntax#syntax-error */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[198];
av2[3]=lf[199];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
/* chicken-syntax.scm:362: chicken.syntax#syntax-error */
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[198];
av2[3]=lf[199];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}
else{
t2=((C_word*)t0)[4];
f_11120(t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
f_11120(t2,C_SCHEME_FALSE);}}

/* k11165 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in ... */
static void C_ccall f_11167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_11167,c,av);}
a=C_alloc(28);
t2=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11390,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11410,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
t6=*((C_word*)lf[204]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[206];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k11196 in k11362 in k11388 in k11165 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in ... */
static void C_ccall f_11198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_11198,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[26],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* mapslots in k11362 in k11388 in k11165 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in ... */
static void C_fcall f_11200(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_11200,4,t0,t1,t2,t3);}
a=C_alloc(11);
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=C_i_symbolp(t5);
t7=C_i_not(t6);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11216,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t7,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t7)){
/* chicken-syntax.scm:380: scheme#symbol->string */
t9=*((C_word*)lf[119]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cadr(t5);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* chicken-syntax.scm:380: scheme#symbol->string */
t9=*((C_word*)lf[119]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}}

/* k11214 in mapslots in k11362 in k11388 in k11165 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in ... */
static void C_ccall f_11216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_11216,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_11219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11349,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:381: scheme#string-append */
t4=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[202];
av2[4]=t1;
av2[5]=lf[203];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k11217 in k11214 in mapslots in k11362 in k11388 in k11165 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_11219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_11219,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11345,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:382: scheme#string-append */
t4=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[201];
av2[4]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k11220 in k11217 in k11214 in mapslots in k11362 in k11388 in k11165 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_11222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(79,c,2)))){
C_save_and_reclaim((void *)f_11222,c,av);}
a=C_alloc(79);
t2=C_a_i_list(&a,2,lf[77],lf[200]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[71],lf[77],t3);
t5=C_a_i_list(&a,2,lf[32],t4);
t6=C_a_i_list(&a,4,lf[74],lf[77],((C_word*)t0)[3],lf[200]);
t7=C_a_i_list(&a,4,lf[20],t2,t5,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11248,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11252,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],a[6]=t7,a[7]=((C_word*)t0)[9],a[8]=t1,a[9]=t8,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t10=t9;
f_11252(t10,C_SCHEME_END_OF_LIST);}
else{
t10=C_a_i_list(&a,3,((C_word*)t0)[9],((C_word*)t0)[10],t7);
t11=t9;
f_11252(t11,C_a_i_list(&a,1,t10));}}

/* k11234 in k11246 in k11220 in k11217 in k11214 in mapslots in k11362 in k11388 in k11165 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in ... */
static void C_ccall f_11236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11236,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11246 in k11220 in k11217 in k11214 in mapslots in k11362 in k11388 in k11165 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_ccall f_11248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11248,c,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,lf[26],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11236,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:406: mapslots */
t4=((C_word*)((C_word*)t0)[3])[1];
f_11200(t4,t3,C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* k11250 in k11220 in k11217 in k11214 in mapslots in k11362 in k11388 in k11165 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_fcall f_11252(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(66,0,3)))){
C_save_and_reclaim_args((void *)trf_11252,2,t0,t1);}
a=C_alloc(66);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,1,lf[77]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[71],lf[77],t3);
t5=C_a_i_list(&a,2,lf[32],t4);
t6=C_a_i_list(&a,3,lf[72],lf[77],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[20],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[5],t7,((C_word*)t0)[6]);
t9=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t8);
t10=C_a_i_list(&a,1,t9);
/* chicken-syntax.scm:389: ##sys#append */
t11=*((C_word*)lf[53]+1);{
C_word av2[4];
av2[0]=t11;
av2[1]=((C_word*)t0)[9];
av2[2]=t1;
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t2=C_a_i_list(&a,1,lf[77]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[71],lf[77],t3);
t5=C_a_i_list(&a,2,lf[32],t4);
t6=C_a_i_list(&a,3,lf[72],lf[77],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[20],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t7);
t9=C_a_i_list(&a,1,t8);
/* chicken-syntax.scm:389: ##sys#append */
t10=*((C_word*)lf[53]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=((C_word*)t0)[9];
av2[2]=t1;
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}

/* k11343 in k11217 in k11214 in mapslots in k11362 in k11388 in k11165 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_11345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11345,c,av);}
/* chicken-syntax.scm:382: scheme#string->symbol */
t2=*((C_word*)lf[118]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k11347 in k11214 in mapslots in k11362 in k11388 in k11165 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_11349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11349,c,av);}
/* chicken-syntax.scm:381: scheme#string->symbol */
t2=*((C_word*)lf[118]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k11362 in k11388 in k11165 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_ccall f_11364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(52,c,4)))){
C_save_and_reclaim((void *)f_11364,c,av);}
a=C_alloc(52);
t2=C_a_i_list(&a,1,lf[77]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[70],lf[77],t3);
t5=C_a_i_list(&a,3,lf[20],t2,t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[3],t1,t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11198,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11200,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[8],a[7]=((C_word)li123),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_11200(t11,t7,((C_word*)t0)[9],C_fix(1));}

/* k11382 in k11388 in k11165 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_ccall f_11384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11384,c,av);}
/* chicken-syntax.scm:373: scheme#string->symbol */
t2=*((C_word*)lf[118]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k11388 in k11165 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in ... */
static void C_ccall f_11390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(43,c,3)))){
C_save_and_reclaim((void *)f_11390,c,av);}
a=C_alloc(43);
t2=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,lf[69],t3);
t5=C_a_i_list(&a,3,lf[20],((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[4],t1,t5);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11364,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11384,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
t9=*((C_word*)lf[204]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[8];
av2[3]=lf[205];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k11408 in k11165 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in ... */
static void C_ccall f_11410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11410,c,av);}
/* chicken-syntax.scm:368: scheme#string->symbol */
t2=*((C_word*)lf[118]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* map-loop1150 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in ... */
static void C_fcall f_11418(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11418,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:353: g1156 */
t4=((C_word*)t0)[4];
f_11107(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11441 in map-loop1150 in k11101 in k11098 in k11095 in k11089 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in ... */
static void C_ccall f_11443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11443,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11418(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k11451 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in ... */
static void C_ccall f_11453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11453,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11464,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:346: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_11091(2,av2);}}}

/* k11458 in k11451 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_11460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11460,c,av);}
/* chicken-syntax.scm:345: chicken.base#symbol-append */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[81];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11462 in k11451 in k11086 in k11083 in k11077 in a11074 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_11464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11464,c,av);}
/* chicken-syntax.scm:346: ##sys#module-name */
t2=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k11466 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11468,c,av);}
/* chicken-syntax.scm:307: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[209];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_11470,c,av);}
a=C_alloc(14);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11480,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11509,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11565,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:309: ##sys#list? */
t9=*((C_word*)lf[216]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_car(t5);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_11480(2,av2);}}}

/* k11478 in a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 in ... */
static void C_ccall f_11480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11480,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11493,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: rename1091 */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[210];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* chicken-syntax.scm:309: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[211]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k11491 in k11478 in a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in ... */
static void C_ccall f_11493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11493,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11507 in a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 in ... */
static void C_ccall f_11509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11509,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11515,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:309: ##sys#list? */
t3=*((C_word*)lf[216]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cdr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11480(2,av2);}}}

/* k11513 in k11507 in a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in ... */
static void C_ccall f_11515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11515,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11518,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:309: ##sys#length */
t3=*((C_word*)lf[215]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cdr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11480(2,av2);}}}

/* k11516 in k11513 in k11507 in a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in ... */
static void C_ccall f_11518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11518,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11524,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#>= */
t3=*((C_word*)lf[214]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k11522 in k11516 in k11513 in k11507 in a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in ... */
static void C_ccall f_11524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11524,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11533,a[2]=t4,a[3]=((C_word)li126),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11533(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11480(2,av2);}}}

/* loop1088 in k11522 in k11516 in k11513 in k11507 in a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in ... */
static void C_fcall f_11533(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11533,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11540,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:309: ##sys#= */
t5=*((C_word*)lf[213]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11538 in loop1088 in k11522 in k11516 in k11513 in k11507 in a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in ... */
static void C_ccall f_11540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11540,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11554,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#+ */
t4=*((C_word*)lf[212]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k11552 in k11538 in loop1088 in k11522 in k11516 in k11513 in k11507 in a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in ... */
static void C_ccall f_11554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11554,c,av);}
/* chicken-syntax.scm:309: loop1088 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11533(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k11563 in a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 in ... */
static void C_ccall f_11565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11565,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:309: ##sys#length */
t3=*((C_word*)lf[215]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11509(2,av2);}}}

/* k11566 in k11563 in a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in ... */
static void C_ccall f_11568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11568,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11574,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#>= */
t3=*((C_word*)lf[214]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k11572 in k11566 in k11563 in a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in ... */
static void C_ccall f_11574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11574,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11583,a[2]=t4,a[3]=((C_word)li127),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11583(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11509(2,av2);}}}

/* loop1088 in k11572 in k11566 in k11563 in a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in ... */
static void C_fcall f_11583(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11583,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11590,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:309: ##sys#= */
t5=*((C_word*)lf[213]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11588 in loop1088 in k11572 in k11566 in k11563 in a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in ... */
static void C_ccall f_11590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11590,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11604,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#+ */
t4=*((C_word*)lf[212]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k11602 in k11588 in loop1088 in k11572 in k11566 in k11563 in a11469 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in ... */
static void C_ccall f_11604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11604,c,av);}
/* chicken-syntax.scm:309: loop1088 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11583(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k11614 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11616,c,av);}
/* chicken-syntax.scm:299: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[217];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11617 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11618,c,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_eqp(C_i_cdr(t5),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11638,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:301: rename1057 */
t10=t3;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[218];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11652,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t9=C_i_cdr(t5);
t10=C_i_pairp(t9);
t11=t8;
f_11652(t11,(C_truep(t10)?C_eqp(C_i_cdr(t9),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}
else{
t9=t8;
f_11652(t9,C_SCHEME_FALSE);}}}

/* k11636 in a11617 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11638,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11650 in a11617 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_fcall f_11652(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11652,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11665,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:301: rename1057 */
t6=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[218];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* chicken-syntax.scm:301: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[211]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k11663 in k11650 in a11617 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 in ... */
static void C_ccall f_11665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11665,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11711 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11713,c,av);}
/* chicken-syntax.scm:288: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[219];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11714 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_11715,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11719,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:292: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[219];
av2[3]=t2;
av2[4]=lf[221];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11717 in a11714 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11719,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:293: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[220];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11724 in k11717 in a11714 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11726,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:294: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11732 in k11724 in k11717 in a11714 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 in ... */
static void C_ccall f_11734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11734,c,av);}
a=C_alloc(9);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11740 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11742,c,av);}
/* chicken-syntax.scm:280: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[220];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11743 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11744,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11748,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:284: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[220];
av2[3]=t2;
av2[4]=lf[224];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11746 in a11743 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11748,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11751,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,lf[26],t3);
/* chicken-syntax.scm:285: ##sys#register-meta-expression */
t5=*((C_word*)lf[223]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k11749 in k11746 in a11743 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11751,c,av);}
a=C_alloc(9);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[26],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[222],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11770 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11772,c,av);}
/* chicken-syntax.scm:272: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[225];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11773 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11774,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11778,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:277: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[225];
av2[3]=t2;
av2[4]=lf[227];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11776 in a11773 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11778,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[226],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11787 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11789,c,av);}
/* chicken-syntax.scm:247: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[228];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11790 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_11791,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11795,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:251: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[228];
av2[3]=t2;
av2[4]=lf[236];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11793 in a11790 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11795,c,av);}
a=C_alloc(5);
t2=C_i_memq(lf[229],*((C_word*)lf[230]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[231];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:254: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k11802 in k11793 in a11790 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11804,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11807,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:255: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[235];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11805 in k11802 in k11793 in a11790 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11807,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11810,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:256: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_caddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11808 in k11805 in k11802 in k11793 in a11790 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_11810,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],lf[232]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11833,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:262: chicken.compiler.scrutinizer#check-and-validate-type */
t5=*((C_word*)lf[234]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t1;
av2[3]=lf[228];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k11831 in k11808 in k11805 in k11802 in k11793 in a11790 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_11833,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[233],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[222],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11847 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11849,c,av);}
/* chicken-syntax.scm:222: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[237];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11850 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11851,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11855,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:226: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[237];
av2[3]=t2;
av2[4]=lf[240];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11853 in a11850 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11855,c,av);}
a=C_alloc(5);
t2=C_i_memq(lf[229],*((C_word*)lf[230]+1));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11861,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:228: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11859 in k11853 in a11850 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11861,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11864,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:229: chicken.syntax#get-line-number */
t3=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11862 in k11859 in k11853 in a11850 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_11864,c,av);}
a=C_alloc(33);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11888,a[2]=((C_word*)t0)[4],a[3]=((C_word)li134),tmp=(C_word)a,a+=4,tmp);
t10=C_u_i_cdr(((C_word*)t0)[2]);
t11=C_u_i_cdr(t10);
t12=C_i_check_list_2(t11,lf[65]);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11926,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11928,a[2]=t7,a[3]=t15,a[4]=t9,a[5]=t8,a[6]=((C_word)li135),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_11928(t17,t13,t11);}

/* g974 in k11862 in k11859 in k11853 in a11850 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_fcall f_11888(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11888,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11892,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:235: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[37]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11890 in g974 in k11862 in k11859 in k11853 in a11850 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_11892,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(t1,lf[238]);
if(C_truep(t3)){
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[26],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list2(&a,2,lf[238],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
/* chicken-syntax.scm:240: chicken.compiler.scrutinizer#check-and-validate-type */
t4=*((C_word*)lf[234]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[237];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[26],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list2(&a,2,t1,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}

/* k11897 in k11890 in g974 in k11862 in k11859 in k11853 in a11850 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11899,c,av);}
a=C_alloc(9);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[26],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list2(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11924 in k11862 in k11859 in k11853 in a11850 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_11926,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,lf[239],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop968 in k11862 in k11859 in k11853 in a11850 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_fcall f_11928(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11928,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:234: g974 */
t4=((C_word*)t0)[4];
f_11888(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11951 in map-loop968 in k11862 in k11859 in k11853 in a11850 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11953,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11928(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k11970 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11972,c,av);}
/* chicken-syntax.scm:158: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[241];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_11974,c,av);}
a=C_alloc(5);
t5=C_i_memq(lf[229],*((C_word*)lf[230]+1));
if(C_truep(C_i_not(t5))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=lf[242];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11984,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:164: ##sys#check-syntax */
t7=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[241];
av2[3]=t2;
av2[4]=lf[250];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11984,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11993,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:167: ##sys#globalize */
t5=*((C_word*)lf[249]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11993,c,av);}
a=C_alloc(8);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11997,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:169: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_11997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_11997,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12000,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:170: ##sys#globalize */
t3=*((C_word*)lf[249]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_12000,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12003,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_i_cdddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
/* chicken-syntax.scm:171: chicken.syntax#strip-syntax */
t6=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=C_u_i_car(t5);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_12003(2,av2);}}}

/* k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_12003,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12006,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:172: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_12006,c,av);}
a=C_alloc(13);
t2=(C_truep(((C_word*)t0)[2])?C_i_cadddr(((C_word*)t0)[3]):C_i_caddr(((C_word*)t0)[3]));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12014,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=t4,a[9]=((C_word*)t0)[7],a[10]=((C_word)li140),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_12014(t6,((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_fcall f_12014(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_12014,5,t0,t1,t2,t3,t4);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12024,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t3,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:176: scheme#reverse */
t6=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
if(C_truep(C_i_symbolp(t5))){
t6=C_u_i_cdr(t2);
t7=C_a_i_cons(&a,2,t5,t3);
t8=C_a_i_cons(&a,2,lf[247],t4);
/* chicken-syntax.scm:208: loop */
t10=t1;
t11=t6;
t12=t7;
t13=t8;
t1=t10;
t2=t11;
t3=t12;
t4=t13;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12265,a[2]=t2,a[3]=t5,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[8],a[7]=t1,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_listp(t5))){
t7=C_eqp(C_fix(2),C_u_i_length(t5));
t8=t6;
f_12265(t8,(C_truep(t7)?C_i_symbolp(C_i_car(t5)):C_SCHEME_FALSE));}
else{
t7=t6;
f_12265(t7,C_SCHEME_FALSE);}}}}

/* k12022 in loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_12024,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:177: scheme#reverse */
t3=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12025 in k12022 in loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_12027,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12211,a[2]=t4,a[3]=((C_word)li139),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12211(t6,t2,((C_word*)t0)[10],C_fix(1));}

/* k12031 in k12207 in k12025 in k12022 in loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in ... */
static void C_ccall f_12033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(44,c,4)))){
C_save_and_reclaim((void *)f_12033,c,av);}
a=C_alloc(44);
t2=C_a_i_list(&a,2,lf[243],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[244],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[193],t2,t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12068,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12070,a[2]=t8,a[3]=t12,a[4]=t9,a[5]=((C_word)li137),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_12070(t14,t10,((C_word*)t0)[3],((C_word*)t0)[7]);}

/* k12066 in k12031 in k12207 in k12025 in k12022 in loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in ... */
static void C_ccall f_12068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_12068,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,3,lf[35],t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[26],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop913 in k12031 in k12207 in k12025 in k12022 in loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in ... */
static void C_fcall f_12070(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_12070,4,t0,t1,t2,t3);}
a=C_alloc(21);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,lf[175],t7,C_SCHEME_TRUE,t6);
t9=C_a_i_list2(&a,2,t6,t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10);
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t10);
t14=t1;
t15=C_slot(t2,C_fix(1));
t16=C_slot(t3,C_fix(1));
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k12126 in k12207 in k12025 in k12022 in loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in ... */
static void C_ccall f_12128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12128,c,av);}
/* chicken-syntax.scm:184: ##sys#put! */
t2=*((C_word*)lf[245]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[246];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k12130 in k12207 in k12025 in k12022 in loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in ... */
static void C_ccall f_12132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_12132,c,av);}
a=C_alloc(19);
t2=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12165,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12167,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li138),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_12167(t12,t8,((C_word*)t0)[2]);}
else{
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list1(&a,1,t4);
/* chicken-syntax.scm:186: ##sys#append */
t6=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[5];
av2[2]=t1;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k12163 in k12130 in k12207 in k12025 in k12022 in loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in ... */
static void C_ccall f_12165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_12165,c,av);}
a=C_alloc(12);
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list1(&a,1,t3);
/* chicken-syntax.scm:186: ##sys#append */
t5=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop879 in k12130 in k12207 in k12025 in k12022 in loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in ... */
static void C_fcall f_12167(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12167,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[234]+1);
/* chicken-syntax.scm:192: g902 */
t6=*((C_word*)lf[234]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[241];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12190 in map-loop879 in k12130 in k12207 in k12025 in k12022 in loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in ... */
static void C_ccall f_12192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12192,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_12167(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k12207 in k12025 in k12022 in loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 in ... */
static void C_ccall f_12209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_12209,c,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12033,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12128,a[2]=t3,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12132,a[2]=((C_word*)t0)[10],a[3]=t2,a[4]=((C_word*)t0)[8],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:187: ##sys#get */
t6=*((C_word*)lf[157]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[9];
av2[3]=lf[246];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* loop2 in k12025 in k12022 in loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 in ... */
static void C_fcall f_12211(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12211,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_a_i_vector1(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12229,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:183: loop2 */
t7=t5;
t8=C_i_cdr(t2);
t9=C_fixnum_plus(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k12227 in loop2 in k12025 in k12022 in loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in ... */
static void C_ccall f_12229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12229,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12263 in loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_fcall f_12265(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,5)))){
C_save_and_reclaim_args((void *)trf_12265,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12282,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:214: chicken.compiler.scrutinizer#check-and-validate-type */
t6=*((C_word*)lf[234]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=lf[241];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* chicken-syntax.scm:218: chicken.syntax#syntax-error */
t2=*((C_word*)lf[56]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[7];
av2[2]=lf[241];
av2[3]=lf[248];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k12280 in k12263 in loop in k12004 in k12001 in k11998 in k11995 in k11991 in k11982 in a11973 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_12282,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:210: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_12014(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k12337 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12339,c,av);}
/* chicken-syntax.scm:152: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[251];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_12341,c,av);}
a=C_alloc(14);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12351,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12513,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12569,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#list? */
t9=*((C_word*)lf[216]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_car(t5);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_12351(2,av2);}}}

/* k12349 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_12351,c,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[65]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12469,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li144),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_12469(t12,t8,t6);}
else{
/* chicken-syntax.scm:154: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[211]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k12366 in k12349 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_12368,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[65]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12389,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12435,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li143),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_12435(t12,t8,t6);}

/* k12387 in k12366 in k12349 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_12389,c,av);}
a=C_alloc(7);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12399,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:154: rename737 */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[254];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k12397 in k12387 in k12366 in k12349 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_12399,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12407,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12409,a[2]=((C_word*)t0)[4],a[3]=((C_word)li142),tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#map-n */
t4=*((C_word*)lf[253]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k12405 in k12397 in k12387 in k12366 in k12349 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12407,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a12408 in k12397 in k12387 in k12366 in k12349 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12409,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12425,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: rename737 */
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[252];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k12423 in a12408 in k12397 in k12387 in k12366 in k12349 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_12425,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[2],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* map-loop810 in k12366 in k12349 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_fcall f_12435(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_12435,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
t5=C_i_car(t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t10=t1;
t11=C_slot(t2,C_fix(1));
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop782 in k12349 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_fcall f_12469(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_12469,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12511 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12513,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12519,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#list? */
t3=*((C_word*)lf[216]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cdr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12351(2,av2);}}}

/* k12517 in k12511 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12519,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12522,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#length */
t3=*((C_word*)lf[215]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cdr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12351(2,av2);}}}

/* k12520 in k12517 in k12511 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12522,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#>= */
t3=*((C_word*)lf[214]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k12526 in k12520 in k12517 in k12511 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_12528,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12537,a[2]=t4,a[3]=((C_word)li145),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12537(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12351(2,av2);}}}

/* loop734 in k12526 in k12520 in k12517 in k12511 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_fcall f_12537(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12537,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12544,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:154: ##sys#= */
t5=*((C_word*)lf[213]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k12542 in loop734 in k12526 in k12520 in k12517 in k12511 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12544,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12558,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#+ */
t4=*((C_word*)lf[212]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k12556 in k12542 in loop734 in k12526 in k12520 in k12517 in k12511 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12558,c,av);}
/* chicken-syntax.scm:154: loop734 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12537(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12567 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12569,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12572,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#length */
t3=*((C_word*)lf[215]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12513(2,av2);}}}

/* k12570 in k12567 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12572,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#>= */
t3=*((C_word*)lf[214]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k12576 in k12570 in k12567 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_12578,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12587,a[2]=t4,a[3]=((C_word)li146),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12587(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12513(2,av2);}}}

/* loop734 in k12576 in k12570 in k12567 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_fcall f_12587(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12587,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12594,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:154: ##sys#= */
t5=*((C_word*)lf[213]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k12592 in loop734 in k12576 in k12570 in k12567 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12594,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12606,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_cdr(t2);
t5=C_i_pairp(t4);
t6=t3;
f_12606(t6,(C_truep(t5)?C_eqp(C_i_cdr(t4),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}
else{
t4=t3;
f_12606(t4,C_SCHEME_FALSE);}}}

/* k12604 in k12592 in loop734 in k12576 in k12570 in k12567 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_fcall f_12606(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_12606,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12617,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#+ */
t4=*((C_word*)lf[212]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k12615 in k12604 in k12592 in loop734 in k12576 in k12570 in k12567 in a12340 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12617,c,av);}
/* chicken-syntax.scm:154: loop734 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12587(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12646 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12648,c,av);}
/* chicken-syntax.scm:141: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[252];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12649 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12650,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12654,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:145: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[252];
av2[3]=t2;
av2[4]=lf[255];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12652 in a12649 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_12654,c,av);}
a=C_alloc(4);
t2=C_i_memq(lf[229],*((C_word*)lf[230]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_caddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12670,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:148: chicken.compiler.scrutinizer#check-and-validate-type */
t4=*((C_word*)lf[234]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=lf[252];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k12668 in k12652 in a12649 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_12670,c,av);}
a=C_alloc(12);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[175],t1,C_SCHEME_TRUE,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12684 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12686,c,av);}
/* chicken-syntax.scm:118: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[256];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12687 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12688,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12692,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:122: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[256];
av2[3]=t2;
av2[4]=lf[263];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12690 in a12687 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12692,c,av);}
a=C_alloc(4);
t2=C_i_memq(lf[229],*((C_word*)lf[230]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[257];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12701,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:125: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_caddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k12699 in k12690 in a12687 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_12701,c,av);}
a=C_alloc(11);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12708,a[2]=t1,a[3]=t3,a[4]=((C_word)li149),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12718,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word)li150),tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:129: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a12707 in k12699 in k12690 in a12687 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12708,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12716,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:132: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12714 in a12707 in k12699 in k12690 in a12687 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12716,c,av);}
/* chicken-syntax.scm:130: chicken.compiler.scrutinizer#validate-type */
t2=*((C_word*)lf[258]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a12717 in k12699 in k12690 in a12687 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(30,c,5)))){
C_save_and_reclaim((void *)f_12718,c,av);}
a=C_alloc(30);
if(C_truep(C_i_not(t2))){
/* chicken-syntax.scm:134: chicken.syntax#syntax-error */
t5=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[256];
av2[3]=lf[259];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
t5=C_i_cdddr(((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[2],t6);
t8=C_a_i_list(&a,2,lf[260],t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12743,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12747,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t11=C_a_i_list(&a,2,lf[262],((C_word*)t0)[2]);
t12=t10;
f_12747(t12,C_a_i_list(&a,1,t11));}
else{
t11=t10;
f_12747(t11,C_SCHEME_END_OF_LIST);}}}

/* k12741 in a12717 in k12699 in k12690 in a12687 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12743,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[193],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12745 in a12717 in k12699 in k12690 in a12687 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_fcall f_12747(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_12747,2,t0,t1);}
a=C_alloc(15);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[261],t2);
t4=C_a_i_list(&a,1,t3);
/* chicken-syntax.scm:136: ##sys#append */
t5=*((C_word*)lf[53]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* chicken-syntax.scm:136: ##sys#append */
t2=*((C_word*)lf[53]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k12795 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12797,c,av);}
/* chicken-syntax.scm:76: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[266];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_12799,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12803,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:81: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[266];
av2[3]=t2;
av2[4]=lf[275];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12803,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:82: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[274];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12806,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12809,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:83: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[273];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12807 in k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_12809,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12812,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:84: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[272];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12810 in k12807 in k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_12812,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12815,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:85: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[264];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12813 in k12810 in k12807 in k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_12815,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12818,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:86: r */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[238];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12816 in k12813 in k12810 in k12807 in k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_12818,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12820,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li154),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12950,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:98: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[271];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* parse-clause in k12816 in k12813 in k12810 in k12807 in k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_fcall f_12820(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,2)))){
C_save_and_reclaim_args((void *)trf_12820,3,t0,t1,t2);}
a=C_alloc(23);
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=(C_truep(t4)?C_u_i_car(t2):C_SCHEME_FALSE);
t6=(C_truep(t5)?C_i_cadr(t2):C_u_i_car(t2));
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12830,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t8=C_a_i_list(&a,2,t5,((C_word*)t0)[6]);
t9=C_a_i_list(&a,1,t8);
t10=C_i_cddr(t2);
t11=C_a_i_cons(&a,2,t9,t10);
t12=t7;
f_12830(t12,C_a_i_cons(&a,2,lf[35],t11));}
else{
t8=C_u_i_cdr(t2);
t9=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t8);
t10=t7;
f_12830(t10,C_a_i_cons(&a,2,lf[35],t9));}}

/* k12828 in parse-clause in k12816 in k12813 in k12810 in k12807 in k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_fcall f_12830(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_12830,2,t0,t1);}
a=C_alloc(25);
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12855,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li152),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12869,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12871,a[2]=t6,a[3]=t4,a[4]=t10,a[5]=t5,a[6]=((C_word)li153),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_12871(t12,t8,((C_word*)t0)[2]);}}

/* g623 in k12828 in parse-clause in k12816 in k12813 in k12810 in k12807 in k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static C_word C_fcall f_12855(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,lf[36],t1);
return(C_a_i_list(&a,3,((C_word*)t0)[2],t2,((C_word*)t0)[3]));}

/* k12867 in k12828 in parse-clause in k12816 in k12813 in k12810 in k12807 in k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_12869,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,t3,((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop617 in k12828 in parse-clause in k12816 in k12813 in k12810 in k12807 in k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_fcall f_12871(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_12871,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=(
/* chicken-syntax.scm:95: g623 */
  f_12855(C_a_i(&a,15),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t4);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t8=t1;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12948 in k12816 in k12813 in k12810 in k12807 in k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(65,c,3)))){
C_save_and_reclaim((void *)f_12950,c,av);}
a=C_alloc(65);
t2=C_a_i_list(&a,2,lf[36],lf[267]);
t3=C_a_i_list(&a,3,lf[70],((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,3,lf[268],((C_word*)t0)[2],C_fix(1));
t5=C_a_i_list(&a,3,((C_word*)t0)[3],t3,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[4],t5);
t7=C_a_i_list(&a,1,t6);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_i_cddr(((C_word*)t0)[5]);
t13=C_i_check_list_2(t12,lf[65]);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12975,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13006,a[2]=t10,a[3]=t16,a[4]=((C_word*)t0)[9],a[5]=t11,a[6]=((C_word)li155),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_13006(t18,t14,t12);}

/* k12973 in k12948 in k12816 in k12813 in k12810 in k12807 in k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_12975,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:103: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[270];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12980 in k12973 in k12948 in k12816 in k12813 in k12810 in k12807 in k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_12982,c,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12986,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_assq(((C_word*)t0)[7],((C_word*)t0)[8]))){
/* chicken-syntax.scm:103: ##sys#append */
t3=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=C_a_i_list(&a,2,lf[269],((C_word*)t0)[6]);
t4=C_a_i_list(&a,2,((C_word*)t0)[7],t3);
t5=C_a_i_list(&a,1,t4);
/* chicken-syntax.scm:103: ##sys#append */
t6=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k12984 in k12980 in k12973 in k12948 in k12816 in k12813 in k12810 in k12807 in k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_12986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_12986,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t2);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[6],((C_word*)t0)[7],t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop648 in k12948 in k12816 in k12813 in k12810 in k12807 in k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_fcall f_13006(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_13006,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:102: g654 */
t4=((C_word*)t0)[4];
f_12820(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k13029 in map-loop648 in k12948 in k12816 in k12813 in k12810 in k12807 in k12804 in k12801 in a12798 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_13031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13031,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_13006(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k13068 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_13070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13070,c,av);}
/* chicken-syntax.scm:55: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[271];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13071 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_13072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_13072,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13076,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:60: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[271];
av2[3]=t2;
av2[4]=lf[281];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k13074 in a13071 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_13076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_13076,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:61: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[280];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13077 in k13074 in a13071 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_13079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13079,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13082,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:62: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[279];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13080 in k13077 in k13074 in a13071 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_13082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13082,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13093,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:63: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[276];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13091 in k13080 in k13077 in k13074 in a13071 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_13093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(114,c,1)))){
C_save_and_reclaim((void *)f_13093,c,av);}
a=C_alloc(114);
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=C_a_i_list(&a,1,t3);
t5=C_i_caddr(((C_word*)t0)[3]);
t6=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t5);
t7=C_a_i_list(&a,2,((C_word*)t0)[2],t6);
t8=C_a_i_list(&a,3,lf[20],t4,t7);
t9=C_u_i_cdr(((C_word*)t0)[3]);
t10=C_u_i_cdr(t9);
t11=C_u_i_cdr(t10);
t12=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t11);
t13=C_a_i_cons(&a,2,lf[20],t12);
t14=C_a_i_list(&a,3,lf[23],lf[24],((C_word*)t0)[4]);
t15=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t14);
t16=C_a_i_list(&a,2,((C_word*)t0)[2],t15);
t17=C_a_i_list(&a,3,lf[20],((C_word*)t0)[4],t16);
t18=C_a_i_list(&a,3,lf[25],t13,t17);
t19=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t18);
t20=C_a_i_list(&a,3,lf[278],t8,t19);
t21=C_a_i_list(&a,3,lf[20],t2,t20);
t22=C_a_i_list(&a,2,t1,t21);
t23=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t23;
av2[1]=C_a_i_list(&a,1,t22);
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}

/* k4204 */
static void C_ccall f_4206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4206,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4209,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k4207 in k4204 */
static void C_ccall f_4209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4209,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4212,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k4210 in k4207 in k4204 */
static void C_ccall f_4212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_4212,c,av);}
a=C_alloc(14);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_mutate(&lf[1] /* (set! take ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4322,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5494,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:53: ##sys#macro-environment */
t5=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* take in k4210 in k4207 in k4204 */
static void C_fcall f_4322(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_4322,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4340,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:56: take */
t7=t5;
t8=C_u_i_cdr(t2);
t9=C_fixnum_difference(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k4338 in take in k4210 in k4207 in k4204 */
static void C_ccall f_4340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4340,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k6947 in a6940 in k6933 in k6923 in a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in ... */
static void C_fcall f_4380(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_4380,5,t0,t1,t2,t3,t4);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4394,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:67: scheme#reverse */
t6=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=C_i_car(t4);
t7=C_a_i_cons(&a,2,t6,t3);
/* mini-srfi-1.scm:68: loop */
t9=t1;
t10=t5;
t11=t7;
t12=C_u_i_cdr(t4);
t1=t9;
t2=t10;
t3=t11;
t4=t12;
goto loop;}}

/* k4392 in loop in k6947 in a6940 in k6933 in k6923 in a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in ... */
static void C_ccall f_4394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4394,c,av);}
/* mini-srfi-1.scm:67: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
C_values(4,av2);}}

/* k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5494,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5497,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[276],lf[277]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13070,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13072,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:58: ##sys#er-transformer */
t7=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5497,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[264],lf[265]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12797,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12799,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:79: ##sys#er-transformer */
t7=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5500,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5503,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:110: chicken.internal#macro-subset */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5503,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#chicken.condition-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5507,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:116: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5507,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5510,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12686,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12688,a[2]=((C_word)li151),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:120: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5510,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12648,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12650,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:143: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5513,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12339,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12341,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:154: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5516,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5519,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11972,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11974,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:160: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5519,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5522,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11849,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11851,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:224: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5522,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5525,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11789,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11791,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:249: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5525,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5528,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:265: chicken.internal#macro-subset */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5528,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#chicken.type-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5532,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:270: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5532,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5535,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11772,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11774,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:275: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5535,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5538,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11742,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11744,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:282: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5538,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11713,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11715,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:290: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5541,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11616,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11618,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:301: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5544,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11468,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11470,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:309: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 */
static void C_ccall f_5547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5547,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5550,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:313: chicken.internal#macro-subset */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in k4204 in ... */
static void C_ccall f_5550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5550,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#chicken.syntax-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5554,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:319: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in k4207 in ... */
static void C_ccall f_5554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5554,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5557,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11073,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11075,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:338: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in k4210 in ... */
static void C_ccall f_5557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5557,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10980,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10982,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:411: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in k5492 in ... */
static void C_ccall f_5560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5560,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5563,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10966,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10968,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:429: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in k5495 in ... */
static void C_ccall f_5563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5563,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10945,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10947,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:436: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in k5498 in ... */
static void C_ccall f_5566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5566,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10928,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10930,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:443: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in k5501 in ... */
static void C_ccall f_5569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5569,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5572,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10911,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10913,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:450: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in k5505 in ... */
static void C_ccall f_5572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5572,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10258,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10260,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:457: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in k5508 in ... */
static void C_ccall f_5575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5575,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9328,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9330,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:489: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in ... */
static void C_ccall f_5578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5578,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9244,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9246,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:544: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in ... */
static void C_ccall f_5581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5581,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5584,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9220,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9222,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:556: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in ... */
static void C_ccall f_5584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5584,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5587,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9192,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9194,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:564: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_ccall f_5587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5587,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9171,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9173,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:573: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in ... */
static void C_ccall f_5590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5590,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9041,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9043,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:581: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in ... */
static void C_ccall f_5594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5594,c,av);}
a=C_alloc(10);
t2=C_mutate((C_word*)lf[5]+1 /* (set! chicken.syntax#define-values-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8564,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8566,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:598: ##sys#er-transformer */
t6=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_5597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5597,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5600,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8510,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8512,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:652: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_5600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5600,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5603,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8252,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8254,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:667: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_ccall f_5603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5603,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5606,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8230,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8232,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:687: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in ... */
static void C_ccall f_5606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5606,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[137],lf[138]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8186,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8188,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:696: ##sys#er-transformer */
t7=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in ... */
static void C_ccall f_5609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5609,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8082,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8084,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:706: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_ccall f_5612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5612,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5615,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7940,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7942,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:727: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_ccall f_5615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_5615,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[110],lf[111]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7492,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7494,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:834: ##sys#er-transformer */
t9=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_5618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_5618,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5621,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[110],lf[111]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7415,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7417,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:923: ##sys#er-transformer */
t9=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_5621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_5621,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5624,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[110],lf[111]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7255,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7257,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:951: ##sys#er-transformer */
t9=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_5624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(41,c,5)))){
C_save_and_reclaim((void *)f_5624,c,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5627,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[90],lf[91]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_cons(&a,2,lf[96],lf[97]);
t7=C_a_i_cons(&a,2,lf[98],lf[99]);
t8=C_a_i_list(&a,5,t3,t4,t5,t6,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6811,a[2]=t2,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6813,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:988: ##sys#er-transformer */
t11=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t9;
av2[2]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_5627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5627,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6695,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6697,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1051: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_5630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5630,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6256,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6258,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1086: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_5633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5633,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[50],lf[51]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6084,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6086,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1175: ##sys#er-transformer */
t7=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_5636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5636,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[50],lf[51]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5889,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5891,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1208: ##sys#er-transformer */
t7=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_5639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5639,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5642,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5824,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5826,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1249: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_5642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5642,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5645,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5806,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5808,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1266: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_5645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5645,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5717,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5719,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1275: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5646 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_5648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5648,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5651,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1295: chicken.internal#macro-subset */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5649 in k5646 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in ... */
static void C_ccall f_5651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5651,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#chicken.base-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5655,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1301: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5653 in k5649 in k5646 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in ... */
static void C_ccall f_5655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5655,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5658,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5668,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5670,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1305: ##sys#er-transformer */
t5=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5656 in k5653 in k5649 in k5646 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_5658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5658,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5661,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1317: chicken.internal#macro-subset */
t3=*((C_word*)lf[15]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[16]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5659 in k5656 in k5653 in k5649 in k5646 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_5661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5661,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[7]+1 /* (set! ##sys#chicken.time-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5664,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1321: chicken.platform#register-feature! */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[9];
av2[3]=lf[10];
av2[4]=lf[11];
av2[5]=lf[12];
av2[6]=lf[13];
av2[7]=lf[14];
((C_proc)(void*)(*((C_word*)t4+1)))(8,av2);}}

/* k5662 in k5659 in k5656 in k5653 in k5649 in k5646 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_5664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5664,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5666 in k5653 in k5649 in k5646 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_5668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5668,c,av);}
/* chicken-syntax.scm:1303: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[18];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5669 in k5653 in k5649 in k5646 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_5670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5670,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5674,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1307: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[27];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5672 in a5669 in k5653 in k5649 in k5646 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_5674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(57,c,1)))){
C_save_and_reclaim((void *)f_5674,c,av);}
a=C_alloc(57);
t2=C_a_i_list(&a,1,lf[19]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,lf[20],t4);
t6=C_a_i_list(&a,1,lf[21]);
t7=C_a_i_list(&a,2,lf[22],t6);
t8=C_a_i_list(&a,3,lf[23],lf[24],t1);
t9=C_a_i_list(&a,4,lf[20],t1,t7,t8);
t10=C_a_i_list(&a,3,lf[25],t5,t9);
t11=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_a_i_list(&a,3,lf[26],t2,t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* k5715 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_5717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5717,c,av);}
/* chicken-syntax.scm:1273: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[30];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5718 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_5719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5719,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5723,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1278: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[30];
av2[3]=t2;
av2[4]=lf[44];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5721 in a5718 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in ... */
static void C_ccall f_5723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5723,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?lf[31]:C_i_car(t4));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5734,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t8,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1282: r */
t10=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[42];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k5732 in k5721 in a5718 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in ... */
static void C_ccall f_5734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5734,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5737,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_stringp(((C_word*)((C_word*)t0)[5])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5789,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1284: chicken.syntax#get-line-number */
t4=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;
f_5737(t3,C_SCHEME_UNDEFINED);}}

/* k5735 in k5732 in k5721 in a5718 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_fcall f_5737(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,2)))){
C_save_and_reclaim_args((void *)trf_5737,2,t0,t1);}
a=C_alloc(25);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[32],((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5760,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t6=C_u_i_cdr(((C_word*)t0)[5]);
t7=t5;
f_5760(t7,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[6])[1],t6));}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5779,a[2]=t5,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1293: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[37]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k5758 in k5735 in k5732 in k5721 in a5718 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_fcall f_5760(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,1)))){
C_save_and_reclaim_args((void *)trf_5760,2,t0,t1);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,lf[33],t1);
t3=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5777 in k5735 in k5732 in k5721 in a5718 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_5779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_5779,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[36],t1);
t3=C_a_i_list(&a,1,t2);
t4=((C_word*)t0)[2];
f_5760(t4,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t3));}

/* k5787 in k5732 in k5721 in a5718 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_5789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5789,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5796,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1285: string-append */
t3=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[39];
av2[3]=t1;
av2[4]=lf[40];
av2[5]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t2=((C_word*)t0)[3];
f_5737(t2,C_SCHEME_FALSE);}}

/* k5794 in k5787 in k5732 in k5721 in a5718 in k5643 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_5796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5796,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5737(t3,t2);}

/* k5804 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_5806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5806,c,av);}
/* chicken-syntax.scm:1263: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[45];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5807 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_5808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5808,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5816,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1268: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[46];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5814 in a5807 in k5640 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_5816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5816,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5822 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_5824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5824,c,av);}
/* chicken-syntax.scm:1247: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[47];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5825 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_5826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5826,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5830,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1251: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[47];
av2[3]=t2;
av2[4]=lf[49];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5828 in a5825 in k5637 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_5830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_5830,c,av);}
a=C_alloc(24);
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t3=C_u_i_car(t2);
t4=C_u_i_cdr(t2);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t4,t6);
t8=C_a_i_cons(&a,2,lf[20],t7);
t9=C_a_i_list(&a,2,t3,t8);
t10=C_a_i_list(&a,1,t9);
t11=C_u_i_car(t2);
t12=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_a_i_list(&a,3,lf[48],t10,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,t2,t4);
t6=C_a_i_list(&a,1,t5);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[48],t6,t2);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k5887 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_5889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5889,c,av);}
/* chicken-syntax.scm:1205: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[52];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_5891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5891,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5895,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1210: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[50];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_5895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5895,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5898,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1211: r */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_5898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5898,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1212: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[59];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5899 in k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_5901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5901,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1214: chicken.syntax#syntax-error */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[52];
av2[3]=lf[58];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5904(2,av2);}}}

/* k5902 in k5899 in k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in ... */
static void C_ccall f_5904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_5904,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5911,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li5),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_5911(t6,((C_word*)t0)[8],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k5902 in k5899 in k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in ... */
static void C_fcall f_5911(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5911,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5921,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1217: scheme#reverse */
t8=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5990,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:1227: c */
t8=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[8];
av2[3]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* k5919 in loop in k5902 in k5899 in k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_5921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5921,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5924,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1218: scheme#reverse */
t3=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5922 in k5919 in loop in k5902 in k5899 in k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_5924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_5924,c,av);}
a=C_alloc(21);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5930,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5967,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1220: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_i_car(t1);
t3=C_u_i_cdr(t1);
t4=C_a_i_cons(&a,2,t2,t3);
t5=C_a_i_list(&a,3,lf[20],((C_word*)t0)[6],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k5928 in k5922 in k5919 in loop in k5902 in k5899 in k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_5930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5930,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1221: ##sys#append */
t3=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5939 in k5928 in k5922 in k5919 in loop in k5902 in k5899 in k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in ... */
static void C_ccall f_5941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5941,c,av);}
a=C_alloc(10);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5957,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,1,((C_word*)t0)[6]);
/* chicken-syntax.scm:1221: ##sys#append */
t6=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k5955 in k5939 in k5928 in k5922 in k5919 in loop in k5902 in k5899 in k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in ... */
static void C_ccall f_5957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_5957,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[20],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5965 in k5922 in k5919 in loop in k5902 in k5899 in k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_5967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5967,c,av);}
/* chicken-syntax.scm:1220: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5988 in loop in k5902 in k5899 in k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_5990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_5990,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6010,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1228: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6016,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1230: c */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=C_u_i_car(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k5991 in k5988 in loop in k5902 in k5899 in k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_5993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_5993,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1229: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5911(t5,((C_word*)t0)[6],t2,t3,((C_word*)t0)[7],t4,C_SCHEME_FALSE);}

/* k6008 in k5988 in loop in k5902 in k5899 in k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6010,c,av);}
/* chicken-syntax.scm:1228: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6014 in k5988 in loop in k5902 in k5899 in k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_6016,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1232: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5911(t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1233: chicken.syntax#syntax-error */
t2=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[52];
av2[3]=lf[57];
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6056,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1238: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6031 in k6014 in k5988 in loop in k5902 in k5899 in k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_6033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_6033,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_list2(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1239: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_5911(t7,((C_word*)t0)[6],t2,((C_word*)t0)[7],t5,t6,C_SCHEME_FALSE);}

/* k6054 in k6014 in k5988 in loop in k5902 in k5899 in k5896 in k5893 in a5890 in k5634 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_6056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6056,c,av);}
/* chicken-syntax.scm:1238: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6082 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_6084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6084,c,av);}
/* chicken-syntax.scm:1172: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[61];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_6086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6086,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6090,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1177: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6088 in a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6090,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6093,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1178: r */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[59];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6091 in k6088 in a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_6093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6093,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6096,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1179: r */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[50];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6094 in k6091 in k6088 in a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_6096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6096,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6099,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1181: chicken.syntax#syntax-error */
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[61];
av2[3]=lf[63];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6099(2,av2);}}}

/* k6097 in k6094 in k6091 in k6088 in a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_6099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_6099,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6106,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li7),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_6106(t6,((C_word*)t0)[8],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k6097 in k6094 in k6091 in k6088 in a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in ... */
static void C_fcall f_6106(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_6106,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6116,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1184: scheme#reverse */
t7=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6181,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1193: c */
t7=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[8];
av2[3]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k6114 in loop in k6097 in k6094 in k6091 in k6088 in a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in ... */
static void C_ccall f_6116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6116,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1185: scheme#reverse */
t3=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6117 in k6114 in loop in k6097 in k6094 in k6091 in k6088 in a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_6119,c,av);}
a=C_alloc(18);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6125,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6158,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1187: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_i_car(t1);
t3=C_a_i_list(&a,2,lf[26],t2);
t4=C_u_i_cdr(t1);
t5=C_a_i_cons(&a,2,t3,t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[20],((C_word*)t0)[5],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k6123 in k6117 in k6114 in loop in k6097 in k6094 in k6091 in k6088 in a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6125,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1188: ##sys#append */
t3=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6130 in k6123 in k6117 in k6114 in loop in k6097 in k6094 in k6091 in k6088 in a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_6132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6132,c,av);}
a=C_alloc(9);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6148,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,1,((C_word*)t0)[5]);
/* chicken-syntax.scm:1188: ##sys#append */
t6=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k6146 in k6130 in k6123 in k6117 in k6114 in loop in k6097 in k6094 in k6091 in k6088 in a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in ... */
static void C_ccall f_6148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_6148,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[20],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6156 in k6117 in k6114 in loop in k6097 in k6094 in k6091 in k6088 in a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6158,c,av);}
/* chicken-syntax.scm:1187: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6179 in loop in k6097 in k6094 in k6091 in k6088 in a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in ... */
static void C_ccall f_6181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_6181,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6201,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1194: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1196: c */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=C_u_i_car(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k6182 in k6179 in loop in k6097 in k6094 in k6091 in k6088 in a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_6184,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1195: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_6106(t5,((C_word*)t0)[6],t2,t3,t4,C_SCHEME_FALSE);}

/* k6199 in k6179 in loop in k6097 in k6094 in k6091 in k6088 in a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6201,c,av);}
/* chicken-syntax.scm:1194: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6205 in k6179 in loop in k6097 in k6094 in k6091 in k6088 in a6085 in k5631 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_6207,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1198: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6106(t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1199: chicken.syntax#syntax-error */
t2=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[61];
av2[3]=lf[62];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[6]);
/* chicken-syntax.scm:1203: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_6106(t5,((C_word*)t0)[4],t2,((C_word*)t0)[5],t4,C_SCHEME_FALSE);}}

/* k6254 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_6256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6256,c,av);}
/* chicken-syntax.scm:1083: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[64];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_6258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6258,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6262,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1088: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[64];
av2[3]=t2;
av2[4]=lf[84];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_6262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6262,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6268,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1093: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6268,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6680,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1094: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_6271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6271,c,av);}
a=C_alloc(10);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_i_cadddr(((C_word*)t0)[2]);
t4=C_i_cddddr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6283,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1102: r */
t6=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[79];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_6283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6283,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6286,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1103: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[78];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_6286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6286,c,av);}
a=C_alloc(13);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6292,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t1,a[12]=((C_word*)t0)[10],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1105: r */
t4=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[77];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in ... */
static void C_ccall f_6292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6292,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1106: r */
t3=((C_word*)t0)[12];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[76];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in ... */
static void C_ccall f_6295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_6295,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6304,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t1,a[13]=((C_word*)t0)[2],tmp=(C_word)a,a+=14,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6645,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6645(t11,t7,((C_word*)t0)[2]);}

/* k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_6304,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6305,a[2]=t1,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[67]);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6321,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6622,a[2]=t6,a[3]=t2,a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_6622(t8,t4,((C_word*)t0)[2]);}

/* g3030 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_fcall f_6305(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_6305,3,t0,t1,t2);}
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-syntax.scm:1111: chicken.syntax#syntax-error */
t3=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[64];
av2[3]=lf[66];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k6319 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(53,c,3)))){
C_save_and_reclaim((void *)f_6321,c,av);}
a=C_alloc(53);
t2=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6569,a[2]=((C_word*)t0)[5],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[6],lf[65]);
t11=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6582,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[2],a[8]=t3,a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6584,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li12),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_6584(t15,t11,((C_word*)t0)[6]);}

/* k6350 in k6580 in k6319 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in ... */
static void C_ccall f_6352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6352,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[26],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* loop in k6580 in k6319 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in ... */
static void C_fcall f_6354(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,3)))){
C_save_and_reclaim_args((void *)trf_6354,4,t0,t1,t2,t3);}
a=C_alloc(19);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_cddr(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_caddr(t4):C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=t6,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=t7,a[13]=((C_word*)t0)[7],a[14]=((C_word*)t0)[8],tmp=(C_word)a,a+=15,tmp);
if(C_truep(C_i_pairp(t7))){
if(C_truep(C_i_pairp(C_u_i_cdr(t7)))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6526,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1136: c */
t10=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[75];
av2[3]=C_u_i_car(t7);
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t9=t8;
f_6373(t9,C_SCHEME_FALSE);}}
else{
t9=t8;
f_6373(t9,C_SCHEME_FALSE);}}}

/* k6371 in loop in k6580 in k6319 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in ... */
static void C_fcall f_6373(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(128,0,2)))){
C_save_and_reclaim_args((void *)trf_6373,2,t0,t1);}
a=C_alloc(128);
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[3]);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=C_a_i_list(&a,2,lf[36],t4);
t6=C_a_i_list(&a,4,lf[71],((C_word*)t0)[2],t3,t5);
t7=C_a_i_list(&a,2,lf[32],t6);
t8=C_a_i_list(&a,3,lf[72],((C_word*)t0)[2],((C_word*)t0)[5]);
t9=C_a_i_list(&a,4,lf[20],t2,t7,t8);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6379,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=t1,a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t9,tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[9])){
t11=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[14]);
t12=C_a_i_list(&a,2,lf[36],((C_word*)t0)[3]);
t13=C_a_i_list(&a,2,lf[36],t1);
t14=C_a_i_list(&a,4,lf[71],((C_word*)t0)[2],t12,t13);
t15=C_a_i_list(&a,2,lf[32],t14);
t16=C_a_i_list(&a,4,lf[74],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[14]);
t17=t10;
f_6379(t17,C_a_i_list(&a,4,lf[20],t11,t15,t16));}
else{
t11=t10;
f_6379(t11,C_SCHEME_FALSE);}}

/* k6377 in k6371 in loop in k6580 in k6319 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in ... */
static void C_fcall f_6379(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_6379,2,t0,t1);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6386,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t3=C_u_i_cdr(((C_word*)t0)[9]);
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6447,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[10],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t6=C_u_i_cdr(((C_word*)t0)[9]);
/* chicken-syntax.scm:1157: c */
t7=((C_word*)t0)[8];{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
av2[3]=C_u_i_car(t6);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_6447(2,av2);}}}

/* k6384 in k6377 in k6371 in loop in k6580 in k6319 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in ... */
static void C_fcall f_6386(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_6386,2,t0,t1);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6390,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6394,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
if(C_truep(((C_word*)t0)[7])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6426,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1162: c */
t5=((C_word*)t0)[9];{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=C_i_cadr(((C_word*)t0)[10]);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=C_a_i_list(&a,3,((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[8]);
t5=t3;
f_6394(t5,C_a_i_list(&a,1,t4));}}
else{
t4=t3;
f_6394(t4,C_SCHEME_END_OF_LIST);}}

/* k6388 in k6384 in k6377 in k6371 in loop in k6580 in k6319 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in ... */
static void C_ccall f_6390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6390,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6392 in k6384 in k6377 in k6371 in loop in k6580 in k6319 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in ... */
static void C_fcall f_6394(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,3)))){
C_save_and_reclaim_args((void *)trf_6394,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6398,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_s_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
/* chicken-syntax.scm:1167: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_6354(t5,t2,t3,t4);}

/* k6396 in k6392 in k6384 in k6377 in k6371 in loop in k6580 in k6319 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in ... */
static void C_ccall f_6398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6398,c,av);}
/* chicken-syntax.scm:1155: ##sys#append */
t2=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k6424 in k6384 in k6377 in k6371 in loop in k6580 in k6319 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in ... */
static void C_ccall f_6426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6426,c,av);}
a=C_alloc(18);
if(C_truep(C_i_not(t1))){
t2=C_a_i_list(&a,2,lf[73],lf[73]);
t3=C_a_i_list(&a,3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
f_6394(t4,C_a_i_list(&a,1,t3));}
else{
t2=((C_word*)t0)[4];
f_6394(t2,C_SCHEME_END_OF_LIST);}}

/* k6445 in k6377 in k6371 in loop in k6580 in k6319 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in ... */
static void C_ccall f_6447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6447,c,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
f_6386(t3,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],t2));}
else{
t2=((C_word*)t0)[5];
f_6386(t2,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[3]));}}

/* k6524 in loop in k6580 in k6319 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in ... */
static void C_ccall f_6526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6526,c,av);}
t2=((C_word*)t0)[2];
f_6373(t2,(C_truep(t1)?C_i_cadr(((C_word*)t0)[3]):C_SCHEME_FALSE));}

/* g3056 in k6319 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static C_word C_fcall f_6569(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_memq(t1,((C_word*)t0)[2]);
return((C_truep(t2)?t1:lf[68]));}

/* k6580 in k6319 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_6582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(63,c,4)))){
C_save_and_reclaim((void *)f_6582,c,av);}
a=C_alloc(63);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[69],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
t6=C_a_i_list(&a,2,lf[36],((C_word*)t0)[7]);
t7=C_a_i_list(&a,3,lf[70],((C_word*)t0)[6],t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[3],t5,t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6352,a[2]=t8,a[3]=t4,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6354,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t11,a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word)li11),tmp=(C_word)a,a+=10,tmp));
t13=((C_word*)t11)[1];
f_6354(t13,t9,((C_word*)t0)[13],C_fix(1));}

/* map-loop3050 in k6319 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_fcall f_6584(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_6584,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* chicken-syntax.scm:1122: g3056 */
  f_6569(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t4);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t8=t1;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* for-each-loop3029 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_fcall f_6622(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6622,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6632,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1109: g3030 */
t4=((C_word*)t0)[3];
f_6305(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6630 in for-each-loop3029 in k6302 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_6632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6632,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6622(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* map-loop3003 in k6293 in k6290 in k6284 in k6281 in k6269 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_fcall f_6645(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_6645,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6678 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_6680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6680,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6691,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1096: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_6271(2,av2);}}}

/* k6685 in k6678 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_6687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6687,c,av);}
/* chicken-syntax.scm:1095: chicken.base#symbol-append */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[81];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6689 in k6678 in k6266 in k6260 in a6257 in k5628 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_6691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6691,c,av);}
/* chicken-syntax.scm:1096: ##sys#module-name */
t2=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6693 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_6695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6695,c,av);}
/* chicken-syntax.scm:1049: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[85];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6696 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_6697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6697,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6701,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1053: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[85];
av2[3]=t2;
av2[4]=lf[89];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6699 in a6696 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_6701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6701,c,av);}
a=C_alloc(5);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6709,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1056: r */
t6=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[88];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6707 in k6699 in a6696 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_6709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6709,c,av);}
a=C_alloc(9);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* chicken-syntax.scm:1058: ##sys#check-syntax */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[85];
av2[3]=t3;
av2[4]=lf[86];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6768,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* chicken-syntax.scm:1071: ##sys#check-syntax */
t4=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[85];
av2[3]=t3;
av2[4]=lf[87];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k6716 in k6707 in k6699 in a6696 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6718,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6721,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1061: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_slot(((C_word*)t0)[2],C_fix(0));
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6719 in k6716 in k6707 in k6699 in a6696 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_6721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6721,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6724,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6746,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1062: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6722 in k6719 in k6716 in k6707 in k6699 in a6696 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_6724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_6724,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,2,lf[36],t1);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,lf[20],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[5],t2,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6744 in k6719 in k6716 in k6707 in k6699 in a6696 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_6746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6746,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6753,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6757,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1064: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_6724(2,av2);}}}

/* k6751 in k6744 in k6719 in k6716 in k6707 in k6699 in a6696 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_6753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6753,c,av);}
/* chicken-syntax.scm:1063: chicken.base#symbol-append */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[81];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6755 in k6744 in k6719 in k6716 in k6707 in k6699 in a6696 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_6757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6757,c,av);}
/* chicken-syntax.scm:1064: ##sys#module-name */
t2=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6766 in k6707 in k6699 in a6696 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6768,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1072: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6769 in k6766 in k6707 in k6699 in a6696 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_6771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6771,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6788,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1073: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6772 in k6769 in k6766 in k6707 in k6699 in a6696 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_6774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6774,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[36],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6786 in k6769 in k6766 in k6707 in k6699 in a6696 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_6788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6788,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6799,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1075: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_a_i_list(&a,2,lf[36],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6793 in k6786 in k6769 in k6766 in k6707 in k6699 in a6696 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_6795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6795,c,av);}
/* chicken-syntax.scm:1074: chicken.base#symbol-append */
t2=*((C_word*)lf[80]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[81];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6797 in k6786 in k6769 in k6766 in k6707 in k6699 in a6696 in k5625 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_6799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6799,c,av);}
/* chicken-syntax.scm:1075: ##sys#module-name */
t2=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6809 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_6811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6811,c,av);}
/* chicken-syntax.scm:981: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[100];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_6813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6813,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6817,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:990: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[100];
av2[3]=t2;
av2[4]=lf[109];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_6817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_6817,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6819,a[2]=((C_word*)t0)[2],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6854,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_cdr(((C_word*)t0)[3]);
t9=C_i_check_list_2(t8,lf[65]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7193,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7195,a[2]=t6,a[3]=t12,a[4]=t7,a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7195(t14,t10,t8);}

/* genvars in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_fcall f_6819(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_6819,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6825,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6825(t6,t1,C_fix(0));}

/* loop in genvars in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_fcall f_6825(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6825,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6839,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6851,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:995: chicken.base#gensym */
t5=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6837 in loop in genvars in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6839,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6843,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:995: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6825(t3,t2,C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* k6841 in k6837 in loop in genvars in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_6843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6843,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6849 in loop in genvars in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6851,c,av);}
/* chicken-syntax.scm:995: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_6854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6854,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6857,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1001: genvars */
t3=((C_word*)t0)[5];
f_6819(t3,t2,t1);}

/* k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_6857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6857,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6860,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1002: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[107];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_6860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6860,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6863,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1003: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[106];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_6863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6863,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6866,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1004: r */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[90];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_6866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6866,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1005: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[96];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_6869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6869,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6872,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1006: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[92];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in ... */
static void C_ccall f_6872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6872,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:1007: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[94];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in ... */
static void C_ccall f_6875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6875,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6878,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1008: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[98];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_ccall f_6878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_6878,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6885,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:1010: scheme#append */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_6885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(35,c,3)))){
C_save_and_reclaim((void *)f_6885,c,av);}
a=C_alloc(35);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_u_i_cdr(((C_word*)t0)[5]);
t6=C_i_check_list_2(t5,lf[101]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6901,a[2]=t4,a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6903,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[13],a[11]=t9,a[12]=((C_word)li26),tmp=(C_word)a,a+=13,tmp));
t11=((C_word*)t9)[1];
f_6903(t11,t7,t5);}

/* k6899 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_6901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6901,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[35],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[20],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_fcall f_6903(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(17,0,4)))){
C_save_and_reclaim_args((void *)trf_6903,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word)li25),tmp=(C_word)a,a+=12,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7156,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=t5;
t8=C_slot(t2,C_fix(1));
t1=t7;
t2=t8;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[104];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in ... */
static void C_fcall f_6911(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_6911,4,t0,t1,t2,t3);}
a=C_alloc(14);
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6921,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word)li24),tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:1015: ##sys#decompose-lambda-list */
t6=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in ... */
static void C_ccall f_6921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_6921,c,av);}
a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6925,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],tmp=(C_word)a,a+=17,tmp);
/* chicken-syntax.scm:1018: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[100];
av2[3]=C_i_car(((C_word*)t0)[5]);
av2[4]=lf[102];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6923 in a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in ... */
static void C_ccall f_6925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_6925,c,av);}
a=C_alloc(23);
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6935,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=C_eqp(t2,C_fix(0));
t5=t3;
f_6935(t5,(C_truep(t4)?C_SCHEME_TRUE:C_a_i_list(&a,3,((C_word*)t0)[14],((C_word*)t0)[15],t2)));}
else{
t4=t3;
f_6935(t4,C_a_i_list(&a,3,((C_word*)t0)[16],((C_word*)t0)[15],t2));}}

/* k6933 in k6923 in a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in ... */
static void C_fcall f_6935(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,4)))){
C_save_and_reclaim_args((void *)trf_6935,2,t0,t1);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6939,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6941,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li20),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6951,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word)li23),tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1025: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* k6937 in k6933 in k6923 in a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in ... */
static void C_ccall f_6939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6939,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[34],((C_word*)t0)[3],t1,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a6940 in k6933 in k6923 in a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in ... */
static void C_ccall f_6941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6941,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6949,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1026: take */
f_4322(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6947 in a6940 in k6933 in k6923 in a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in ... */
static void C_ccall f_6949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_6949,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4380,a[2]=t3,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4380(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST,t1);}

/* a6950 in k6933 in k6923 in a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in ... */
static void C_ccall f_6951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_6951,c,av);}
a=C_alloc(16);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6955,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7027,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t6,a[7]=((C_word*)t0)[7],a[8]=((C_word)li22),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_7027(t8,t4,t3,((C_word*)t0)[8]);}

/* k6953 in a6950 in k6933 in k6923 in a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in ... */
static void C_ccall f_6955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_6955,c,av);}
a=C_alloc(17);
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[65]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6977,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6979,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li21),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6979(t12,t8,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k6975 in k6953 in a6950 in k6933 in k6923 in a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in ... */
static void C_ccall f_6977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6977,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop2926 in k6953 in a6950 in k6933 in k6923 in a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in ... */
static void C_fcall f_6979(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_6979,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* build in a6950 in k6933 in k6923 in a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in ... */
static void C_fcall f_7027(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_7027,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t2))){
if(C_truep(((C_word*)t0)[2])){
t4=C_a_i_list(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_i_cdr(((C_word*)t0)[3]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_cons(&a,2,lf[35],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t4=C_i_cddr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_u_i_car(C_u_i_cdr(((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_u_i_cdr(((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_a_i_cons(&a,2,lf[35],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7080,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7128,a[2]=((C_word*)t0)[7],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1033: chicken.base#gensym */
t6=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k7078 in build in a6950 in k6933 in k6923 in a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in ... */
static void C_ccall f_7080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,3)))){
C_save_and_reclaim((void *)f_7080,c,av);}
a=C_alloc(34);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,2,t1,t5);
t7=C_a_i_list(&a,2,t4,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7091,a[2]=((C_word*)t0)[6],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1037: build */
t9=((C_word*)((C_word*)t0)[7])[1];
f_7027(t9,t8,C_u_i_cdr(((C_word*)t0)[2]),t1);}
else{
/* chicken-syntax.scm:1038: build */
t9=((C_word*)((C_word*)t0)[7])[1];
f_7027(t9,t8,C_SCHEME_END_OF_LIST,t1);}}

/* k7089 in k7078 in build in a6950 in k6933 in k6923 in a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in ... */
static void C_ccall f_7091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7091,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7126 in build in a6950 in k6933 in k6923 in a6920 in g2883 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in ... */
static void C_ccall f_7128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7128,c,av);}
/* chicken-syntax.scm:1033: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7154 in foldr2878 in k6883 in k6876 in k6873 in k6870 in k6867 in k6864 in k6861 in k6858 in k6855 in k6852 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in ... */
static void C_ccall f_7156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7156,c,av);}
/* chicken-syntax.scm:1013: g2883 */
t2=((C_word*)t0)[2];
f_6911(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a7182 in map-loop2835 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_7183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7183,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7191 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_7193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7193,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[108]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop2835 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_fcall f_7195(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7195,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7183,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:997: ##sys#decompose-lambda-list */
t7=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t3;
av2[2]=t5;
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7218 in map-loop2835 in k6815 in a6812 in k5622 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_7220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7220,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7195(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7253 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_7255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7255,c,av);}
/* chicken-syntax.scm:946: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[112];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7256 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_7257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7257,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7261,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:953: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[112];
av2[3]=t2;
av2[4]=lf[114];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7259 in a7256 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_7261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7261,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7273,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:957: r */
t8=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[110];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k7271 in k7259 in a7256 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_7273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7273,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:958: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[92];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7274 in k7271 in k7259 in a7256 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_7276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7276,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:959: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[94];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7277 in k7274 in k7271 in k7259 in a7256 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_7279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7279,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7282,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:960: r */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[42];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7280 in k7277 in k7274 in k7271 in k7259 in a7256 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_7282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_7282,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7293,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7295,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t6,a[7]=((C_word*)t0)[8],a[8]=((C_word)li30),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_7295(t8,t4,t1,((C_word*)t0)[9]);}

/* k7291 in k7280 in k7277 in k7274 in k7271 in k7259 in a7256 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_7293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7293,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k7280 in k7277 in k7274 in k7271 in k7259 in a7256 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in ... */
static void C_fcall f_7295(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_7295,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[35],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t3);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7321,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:968: r */
t6=((C_word*)t0)[7];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[113];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_a_i_list(&a,2,t4,t2);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[2]);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_cons(&a,2,lf[35],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* k7319 in loop in k7280 in k7277 in k7274 in k7271 in k7259 in a7256 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_7321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(76,c,3)))){
C_save_and_reclaim((void *)f_7321,c,av);}
a=C_alloc(76);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,4,lf[34],t3,t4,t5);
t7=C_a_i_list(&a,2,t2,t6);
t8=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t9=C_a_i_list(&a,2,lf[36],C_SCHEME_END_OF_LIST);
t10=C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[4]);
t11=C_a_i_list(&a,4,lf[34],t8,t9,t10);
t12=C_a_i_list(&a,2,t1,t11);
t13=C_a_i_list(&a,2,t7,t12);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7332,a[2]=((C_word*)t0)[7],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:975: loop */
t15=((C_word*)((C_word*)t0)[8])[1];
f_7295(t15,t14,t1,C_u_i_cdr(((C_word*)t0)[9]));}

/* k7330 in k7319 in loop in k7280 in k7277 in k7274 in k7271 in k7259 in a7256 in k5619 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_7332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7332,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7413 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_7415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7415,c,av);}
/* chicken-syntax.scm:918: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[115];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7416 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_7417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7417,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7421,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:925: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[115];
av2[3]=t2;
av2[4]=lf[116];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7419 in a7416 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_7421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7421,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:926: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[42];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7422 in k7419 in a7416 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_7424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_7424,c,av);}
a=C_alloc(16);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7464,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:928: r */
t6=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[110];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k7452 in k7462 in k7422 in k7419 in a7416 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_7454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_7454,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[34],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7462 in k7422 in k7419 in a7416 in k5616 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_7464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7464,c,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_i_cddr(((C_word*)t0)[3]);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7454,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:930: r */
t7=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[92];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k7490 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_7492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7492,c,av);}
/* chicken-syntax.scm:829: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[117];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_7494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7494,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7498,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:836: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[117];
av2[3]=t2;
av2[4]=lf[127];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_7498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_7498,c,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7588,a[2]=((C_word*)t0)[3],a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7681,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:875: ##sys#check-syntax */
t9=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[117];
av2[3]=t3;
av2[4]=lf[126];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* k7515 in k7749 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_7517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7517,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7521,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:846: scheme#reverse */
t3=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7519 in k7515 in k7749 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in ... */
static void C_ccall f_7521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7521,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7525,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:847: scheme#reverse */
t3=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7523 in k7519 in k7515 in k7749 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in ... */
static void C_ccall f_7525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_7525,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7527,a[2]=t3,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7527(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* recur in k7523 in k7519 in k7515 in k7749 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in ... */
static void C_fcall f_7527(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_7527,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_cdr(t2);
t7=C_i_car(t3);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7566,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t6,a[7]=t3,a[8]=t4,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:852: scheme#reverse */
t9=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k7546 in k7572 in k7564 in recur in k7523 in k7519 in k7515 in k7749 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in ... */
static void C_ccall f_7548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7548,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7564 in recur in k7523 in k7519 in k7515 in k7749 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in ... */
static void C_ccall f_7566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7566,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7574,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7578,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:853: scheme#reverse */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7572 in k7564 in recur in k7523 in k7519 in k7515 in k7749 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_7574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,5)))){
C_save_and_reclaim((void *)f_7574,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[20],((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7548,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:854: recur */
t6=((C_word*)((C_word*)t0)[6])[1];
f_7527(t6,t5,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[8]),C_u_i_cdr(((C_word*)t0)[9]),C_u_i_car(((C_word*)t0)[8]));}

/* k7576 in k7564 in recur in k7523 in k7519 in k7515 in k7749 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in ... */
static void C_ccall f_7578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7578,c,av);}
a=C_alloc(3);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:851: ##sys#append */
t4=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* make-if-tree in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_fcall f_7588(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7588,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(9);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7594,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word)li33),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_7594(t9,t1,t2,t3,C_SCHEME_END_OF_LIST);}

/* recur in make-if-tree in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_fcall f_7594(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7594,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7608,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:865: scheme#reverse */
t6=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7678,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t5,a[5]=t1,a[6]=t2,a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:867: r */
t7=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[110];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k7606 in recur in make-if-tree in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_7608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7608,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7632 in k7656 in k7664 in k7672 in k7676 in recur in make-if-tree in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_7634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_7634,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,3,lf[35],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[34],((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7656 in k7664 in k7672 in k7676 in recur in make-if-tree in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_7658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_7658,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7634,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=C_u_i_cdr(((C_word*)t0)[7]);
t7=C_u_i_cdr(((C_word*)t0)[8]);
t8=C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[10]);
/* chicken-syntax.scm:871: recur */
t9=((C_word*)((C_word*)t0)[11])[1];
f_7594(t9,t5,t6,t7,t8);}

/* k7664 in k7672 in k7676 in recur in make-if-tree in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_7666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_7666,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7658,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:870: r */
t5=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[94];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7672 in k7676 in recur in make-if-tree in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_7674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_7674,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7666,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:869: r */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[92];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7676 in recur in make-if-tree in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_7678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7678,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7674,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:868: scheme#reverse */
t5=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_7681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_7681,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:876: ##sys#check-syntax */
t3=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[117];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[125];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_7684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_7684,c,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7693,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7892,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7892(t11,t7,((C_word*)t0)[2]);}

/* k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_7693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_7693,c,av);}
a=C_alloc(32);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7694,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7710,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(t1,lf[65]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7724,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7858,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7858(t13,t9,t1);}

/* prefix-sym in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_fcall f_7694(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7694,3,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7702,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7706,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:879: scheme#symbol->string */
t6=*((C_word*)lf[119]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k7700 in prefix-sym in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_7702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7702,c,av);}
/* chicken-syntax.scm:879: scheme#string->symbol */
t2=*((C_word*)lf[118]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7704 in prefix-sym in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_7706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7706,c,av);}
/* chicken-syntax.scm:879: scheme#string-append */
t2=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* g2688 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_fcall f_7710(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7710,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7718,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:884: prefix-sym */
f_7694(t3,lf[120],t2);}

/* k7716 in g2688 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_7718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7718,c,av);}
/* chicken-syntax.scm:884: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_ccall f_7724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_7724,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7824,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_7824(t10,t6,((C_word*)t0)[9]);}

/* k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_7730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7730,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:888: r */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[124];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in ... */
static void C_ccall f_7733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7733,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:891: r */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[123];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in ... */
static void C_ccall f_7736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,3)))){
C_save_and_reclaim((void *)f_7736,c,av);}
a=C_alloc(31);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7751,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7790,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li39),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_7790(t11,t7,((C_word*)t0)[5]);}

/* g2745 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_fcall f_7740(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7740,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7748,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:893: prefix-sym */
f_7694(t3,lf[121],t2);}

/* k7746 in g2745 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_7748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7748,c,av);}
/* chicken-syntax.scm:893: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7749 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_ccall f_7751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7751,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7517,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[11],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:845: scheme#reverse */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7752 in k7749 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_7754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_7754,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7757,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:898: make-if-tree */
t3=((C_word*)t0)[9];
f_7588(t3,t2,((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[6],((C_word*)t0)[2]);}

/* k7755 in k7752 in k7749 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in ... */
static void C_ccall f_7757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7757,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:901: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[122];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7762 in k7755 in k7752 in k7749 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in ... */
static void C_ccall f_7764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_7764,c,av);}
a=C_alloc(33);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,lf[20],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[6],t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[7]);
t7=C_a_i_cons(&a,2,t2,t6);
t8=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,t1,t7,((C_word*)t0)[9]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* map-loop2739 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in ... */
static void C_fcall f_7790(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7790,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7815,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:893: g2745 */
t4=((C_word*)t0)[4];
f_7740(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7813 in map-loop2739 in k7734 in k7731 in k7728 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in ... */
static void C_ccall f_7815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7815,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7790(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2710 in k7722 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_fcall f_7824(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7824,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop2682 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in ... */
static void C_fcall f_7858(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7858,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:884: g2688 */
t4=((C_word*)t0)[4];
f_7710(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7881 in map-loop2682 in k7691 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in ... */
static void C_ccall f_7883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7883,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7858(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2652 in k7682 in k7679 in k7496 in a7493 in k5613 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_fcall f_7892(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7892,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7938 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_ccall f_7940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7940,c,av);}
/* chicken-syntax.scm:725: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[128];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a7941 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_ccall f_7942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7942,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7946,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:729: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[128];
av2[3]=t2;
av2[4]=lf[131];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7944 in a7941 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_7946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_7946,c,av);}
a=C_alloc(8);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7956,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_7956(t8,((C_word*)t0)[4],t2,C_SCHEME_TRUE);}

/* fold in k7944 in a7941 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_fcall f_7956(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_7956,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[26],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
t6=C_i_pairp(t4);
if(C_truep(C_i_not(t6))){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7983,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:738: ##sys#check-syntax */
t8=*((C_word*)lf[43]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[128];
av2[3]=t4;
av2[4]=lf[129];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t7=C_i_cdr(t4);
if(C_truep(C_i_nullp(t7))){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8018,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8043,a[2]=((C_word*)t0)[4],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:743: chicken.base#gensym */
t10=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8046,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:747: ##sys#check-syntax */
t9=*((C_word*)lf[43]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[128];
av2[3]=t4;
av2[4]=lf[130];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}}}

/* k7981 in fold in k7944 in a7941 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_7983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7983,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8009,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:739: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7984 in k7981 in fold in k7944 in a7941 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_7986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_7986,c,av);}
a=C_alloc(14);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8001,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:741: fold */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7956(t5,t4,((C_word*)t0)[5],t1);}

/* k7999 in k7984 in k7981 in fold in k7944 in a7941 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in ... */
static void C_ccall f_8001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8001,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8007 in k7981 in fold in k7944 in a7941 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_8009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8009,c,av);}
/* chicken-syntax.scm:739: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8016 in fold in k7944 in a7941 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_8018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8018,c,av);}
a=C_alloc(14);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8033,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:745: fold */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7956(t6,t5,((C_word*)t0)[5],t1);}

/* k8031 in k8016 in fold in k7944 in a7941 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_8033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8033,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8041 in fold in k7944 in a7941 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_8043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8043,c,av);}
/* chicken-syntax.scm:743: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8044 in fold in k7944 in a7941 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_8046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8046,c,av);}
a=C_alloc(14);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8062,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:750: fold */
t7=((C_word*)((C_word*)t0)[4])[1];
f_7956(t7,t6,((C_word*)t0)[5],t2);}

/* k8060 in k8044 in fold in k7944 in a7941 in k5610 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in ... */
static void C_ccall f_8062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8062,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8080 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_ccall f_8082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8082,c,av);}
/* chicken-syntax.scm:704: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[132];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8083 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_ccall f_8084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_8084,c,av);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8086,a[2]=t4,a[3]=t3,a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
t7=t5=t6;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8174,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:723: quotify-proc */
t9=t5;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cdr(t2);
av2[3]=lf[132];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* quotify-proc2552 in a8083 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_ccall f_8086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8086,c,av);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8090,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:710: ##sys#check-syntax */
t5=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=t2;
av2[4]=lf[135];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k8088 in quotify-proc2552 in a8083 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_8090,c,av);}
a=C_alloc(12);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_u_i_car(t2):t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8099,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_u_i_cdr(t2);
t7=C_u_i_cdr(((C_word*)t0)[2]);
t8=C_a_i_cons(&a,2,t6,t7);
t9=t5;
f_8099(t9,C_a_i_cons(&a,2,lf[20],t8));}
else{
t6=t5;
f_8099(t6,C_i_cadr(((C_word*)t0)[2]));}}

/* k8097 in k8088 in quotify-proc2552 in a8083 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_fcall f_8099(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,2)))){
C_save_and_reclaim_args((void *)trf_8099,2,t0,t1);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_pairp(t1);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8111,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_8111(t6,t4);}
else{
t6=C_i_car(t1);
t7=C_eqp(lf[20],t6);
if(C_truep(C_i_not(t7))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8127,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8131,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:718: r */
t10=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[134];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t8=t5;
f_8111(t8,C_SCHEME_FALSE);}}}

/* k8100 in k8097 in k8088 in quotify-proc2552 in a8083 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_8102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8102,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8109 in k8097 in k8088 in quotify-proc2552 in a8083 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_fcall f_8111(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_8111,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
/* chicken-syntax.scm:719: chicken.syntax#syntax-error */
t2=*((C_word*)lf[56]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[132];
av2[3]=lf[133];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8125 in k8097 in k8088 in quotify-proc2552 in a8083 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_8127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8127,c,av);}
t2=((C_word*)t0)[2];
f_8111(t2,C_i_not(t1));}

/* k8129 in k8097 in k8088 in quotify-proc2552 in a8083 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_8131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8131,c,av);}
/* chicken-syntax.scm:718: c */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_u_i_car(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k8172 in a8083 in k5607 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_ccall f_8174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8174,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[136],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8184 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in ... */
static void C_ccall f_8186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8186,c,av);}
/* chicken-syntax.scm:693: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[139];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8187 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in ... */
static void C_ccall f_8188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8188,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8192,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:698: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[139];
av2[3]=t2;
av2[4]=lf[140];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8190 in a8187 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_ccall f_8192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8192,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:699: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[42];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8193 in k8190 in a8187 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_ccall f_8195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8195,c,av);}
a=C_alloc(15);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8214,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:702: r */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[137];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8212 in k8193 in k8190 in a8187 in k5604 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_8214,c,av);}
a=C_alloc(27);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,t1,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[20],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[25],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8228 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in ... */
static void C_ccall f_8230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8230,c,av);}
/* chicken-syntax.scm:684: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[141];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8231 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in ... */
static void C_ccall f_8232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8232,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8236,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:689: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[141];
av2[3]=t2;
av2[4]=lf[144];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8234 in a8231 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in ... */
static void C_ccall f_8236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8236,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:690: chicken.internal#check-for-multiple-bindings */
t3=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[143];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8237 in k8234 in a8231 in k5601 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_ccall f_8239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8239,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[48],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8250 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_ccall f_8252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8252,c,av);}
/* chicken-syntax.scm:665: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[145];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_ccall f_8254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8254,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8258,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:669: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[145];
av2[3]=t2;
av2[4]=lf[149];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in ... */
static void C_ccall f_8258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8258,c,av);}
a=C_alloc(18);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t2,lf[65]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8272,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8474,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_8474(t14,t10,t2);}

/* k8270 in k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in ... */
static void C_ccall f_8272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8272,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8278,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8440,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li54),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8440(t10,t6,((C_word*)t0)[4]);}

/* k8276 in k8270 in k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_ccall f_8278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_8278,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[146]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8300,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8404,a[2]=t9,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_8404(t11,t7,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k8298 in k8276 in k8270 in k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_ccall f_8300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8300,c,av);}
a=C_alloc(14);
t2=C_i_check_list_2(t1,lf[65]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8370,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8370(t7,t3,t1);}

/* k8304 in k8298 in k8276 in k8270 in k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_8306,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8310,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[147]+1);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8320,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8322,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li50),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_8322(t13,t9,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k8308 in k8304 in k8298 in k8276 in k8270 in k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_8310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8310,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[35],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8318 in k8304 in k8298 in k8276 in k8270 in k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_8320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8320,c,av);}
/* chicken-syntax.scm:674: ##sys#append */
t2=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop2500 in k8304 in k8298 in k8276 in k8270 in k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_fcall f_8322(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_8322,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:681: g2506 */
t7=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=C_slot(t3,C_fix(0));
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k8349 in map-loop2500 in k8304 in k8298 in k8276 in k8270 in k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_8351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8351,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8322(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)));}

/* map-loop2452 in k8298 in k8276 in k8270 in k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_fcall f_8370(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_8370,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,t3,lf[148]);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* foldl2475 in k8276 in k8270 in k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_fcall f_8404(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,5)))){
C_save_and_reclaim_args((void *)trf_8404,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8434,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_slot(t2,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8428,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8430,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:677: ##sys#decompose-lambda-list */
t9=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=t6;
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8426 in foldl2475 in k8276 in k8270 in k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8428,c,av);}
/* chicken-syntax.scm:677: ##sys#append */
t2=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a8429 in foldl2475 in k8276 in k8270 in k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8430,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8432 in foldl2475 in k8276 in k8270 in k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_8434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8434,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8404(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop2423 in k8270 in k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_fcall f_8440(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8440,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop2397 in k8256 in a8253 in k5598 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in ... */
static void C_fcall f_8474(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8474,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8508 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_8510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8510,c,av);}
/* chicken-syntax.scm:650: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[150];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8511 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_8512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8512,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8516,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:654: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[150];
av2[3]=t2;
av2[4]=lf[152];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8514 in a8511 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_ccall f_8516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8516,c,av);}
a=C_alloc(5);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8524,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:657: r */
t6=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[151];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k8522 in k8514 in a8511 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in ... */
static void C_ccall f_8524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_8524,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8529,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=((C_word)li57),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_8529(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* fold in k8522 in k8514 in a8511 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in ... */
static void C_fcall f_8529(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8529,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[35],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8554,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:662: fold */
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}

/* k8552 in fold in k8522 in k8514 in a8511 in k5595 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_ccall f_8554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8554,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8562 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_8564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8564,c,av);}
/* chicken-syntax.scm:596: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[151];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_8566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8566,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8570,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:600: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[151];
av2[3]=t2;
av2[4]=lf[153];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_8570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_8570,c,av);}
a=C_alloc(33);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8576,a[2]=t6,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8604,a[2]=t8,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t11=C_set_block_item(t6,0,t9);
t12=C_set_block_item(t8,0,t10);
t13=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t14=t13;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=((C_word*)t15)[1];
t17=C_i_check_list_2(t2,lf[65]);
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8652,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t8,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9005,a[2]=t15,a[3]=t20,a[4]=t16,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t22=((C_word*)t20)[1];
f_9005(t22,t18,t2);}

/* append*2203 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_ccall f_8576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8576,c,av);}
a=C_alloc(4);
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8597,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:607: append* */
t7=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=C_u_i_cdr(t2);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k8595 in append*2203 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in ... */
static void C_ccall f_8597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8597,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map*2204 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_ccall f_8604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8604,c,av);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_pairp(t3);
if(C_truep(C_i_not(t4))){
/* chicken-syntax.scm:610: proc */
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8627,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:611: proc */
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(t3);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* k8625 in map*2204 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in ... */
static void C_ccall f_8627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8627,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8631,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:611: map* */
t3=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_u_i_cdr(((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k8629 in k8625 in map*2204 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in ... */
static void C_ccall f_8631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8631,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_ccall f_8652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_8652,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8967,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8967(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in ... */
static void C_ccall f_8655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_8655,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8659,a[2]=((C_word*)t0)[2],a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(t1,lf[65]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8677,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8933,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li68),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_8933(t12,t8,t1);}

/* g2264 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in ... */
static void C_fcall f_8659(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8659,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8667,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8671,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:622: chicken.base#gensym */
t5=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8665 in g2264 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_ccall f_8667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8667,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8669 in g2264 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_ccall f_8671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8671,c,av);}
/* chicken-syntax.scm:622: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in ... */
static void C_ccall f_8677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_8677,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8678,a[2]=t1,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8689,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8889,a[2]=t5,a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word)li67),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8889(t7,t3,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* lookup in k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_ccall f_8678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8678,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_cdr(C_i_assq(t2,((C_word*)t0)[2]));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8687 in k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_ccall f_8689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_8689,c,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8704,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8855,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8855(t10,t6,((C_word*)t0)[7]);}

/* k8702 in k8687 in k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_ccall f_8704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8704,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word)li65),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_8706(t5,((C_word*)t0)[5],((C_word*)t0)[6],t1,((C_word*)t0)[7]);}

/* fold in k8702 in k8687 in k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_fcall f_8706(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(22,0,4)))){
C_save_and_reclaim_args((void *)trf_8706,5,t0,t1,t2,t3,t4);}
a=C_alloc(22);
if(C_truep(C_i_nullp(t2))){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8725,a[2]=((C_word*)t0)[2],a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8739,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8741,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,a[6]=((C_word)li64),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_8741(t15,t11,((C_word*)t0)[3]);}
else{
t5=C_i_car(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_nullp(C_i_cdar(t4)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_caar(t4);
t9=C_i_car(t3);
t10=C_a_i_list(&a,2,t8,t9);
t11=C_a_i_list(&a,1,t10);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8790,a[2]=t1,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:642: fold */
t16=t12;
t17=C_i_cdr(t2);
t18=C_u_i_cdr(t3);
t19=C_u_i_cdr(t4);
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}
else{
t8=C_i_car(t3);
t9=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t8);
t10=C_u_i_car(t4);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8827,a[2]=t10,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:648: fold */
t16=t11;
t17=C_i_cdr(t2);
t18=C_u_i_cdr(t3);
t19=C_u_i_cdr(t4);
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}}}

/* g2315 in fold in k8702 in k8687 in k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_fcall f_8725(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8725,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8733,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:637: lookup */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
f_8678(3,av2);}}

/* k8731 in g2315 in fold in k8702 in k8687 in k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_8733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8733,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8737 in fold in k8702 in k8687 in k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_8739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8739,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[35],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2309 in fold in k8702 in k8687 in k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_fcall f_8741(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8741,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:637: g2315 */
t4=((C_word*)t0)[4];
f_8725(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8764 in map-loop2309 in fold in k8702 in k8687 in k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_8766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8766,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8741(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k8788 in fold in k8702 in k8687 in k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_8790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8790,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8825 in fold in k8702 in k8687 in k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_8827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_8827,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[20],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[25],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2344 in k8687 in k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_fcall f_8855(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8855,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* loop in k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_fcall f_8889(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8889,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
/* chicken-syntax.scm:626: scheme#reverse */
t4=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_pairp(t4);
if(C_truep(C_i_not(t5))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8920,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:629: lookup */
t7=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
f_8678(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8927,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:630: map* */
t7=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}}

/* k8918 in loop in k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_ccall f_8920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8920,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:631: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8889(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]),t2);}

/* k8925 in loop in k8675 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_ccall f_8927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8927,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:631: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8889(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]),t2);}

/* map-loop2258 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in ... */
static void C_fcall f_8933(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8933,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:622: g2264 */
t4=((C_word*)t0)[4];
f_8659(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8956 in map-loop2258 in k8653 in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_ccall f_8958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8958,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8933(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* loop in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in ... */
static void C_fcall f_8967(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_8967,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8980,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t4))){
/* chicken-syntax.scm:618: scheme#append */
t6=*((C_word*)lf[105]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
if(C_truep(C_i_pairp(t4))){
/* chicken-syntax.scm:619: append* */
t6=((C_word*)((C_word*)t0)[3])[1];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=C_a_i_cons(&a,2,t4,t3);
/* chicken-syntax.scm:621: loop */
t8=t1;
t9=C_u_i_cdr(t2);
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}}

/* k8978 in loop in k8650 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in ... */
static void C_ccall f_8980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8980,c,av);}
/* chicken-syntax.scm:621: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8967(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),t1);}

/* map-loop2220 in k8568 in a8565 in k5592 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_fcall f_9005(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_9005,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9039 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in ... */
static void C_ccall f_9041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9041,c,av);}
/* chicken-syntax.scm:579: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[154];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9042 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in ... */
static void C_ccall f_9043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9043,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9047,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:583: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[154];
av2[3]=t2;
av2[4]=lf[159];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9045 in a9042 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_9047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9047,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9054,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9058,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9080,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:585: ##sys#decompose-lambda-list */
t6=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k9052 in k9045 in a9042 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_9054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9054,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[26],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9056 in k9045 in a9042 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_9058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9058,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9066,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:594: ##sys#expand-multiple-values-assignment */
t3=*((C_word*)lf[147]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=C_i_caddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k9064 in k9056 in k9045 in a9042 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_ccall f_9066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9066,c,av);}
a=C_alloc(3);
t2=C_a_i_list(&a,1,t1);
/* chicken-syntax.scm:584: ##sys#append */
t3=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a9079 in k9045 in a9042 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_9080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_9080,c,av);}
a=C_alloc(10);
t5=C_i_check_list_2(t2,lf[67]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9099,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9146,a[2]=t8,a[3]=((C_word)li73),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_9146(t10,t6,t2);}

/* k9084 in for-each-loop2149 in a9079 in k9045 in a9042 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in ... */
static void C_ccall f_9086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9086,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9093,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:590: ##sys#current-module */
t3=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9091 in k9084 in for-each-loop2149 in a9079 in k9045 in a9042 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in ... */
static void C_ccall f_9093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9093,c,av);}
/* chicken-syntax.scm:590: ##sys#register-export */
t2=*((C_word*)lf[156]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k9097 in a9079 in k9045 in a9042 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_ccall f_9099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_9099,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9112,a[2]=t4,a[3]=t7,a[4]=t5,a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_9112(t9,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* map-loop2159 in k9097 in a9079 in k9045 in a9042 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in ... */
static void C_fcall f_9112(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_9112,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[155],t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* for-each-loop2149 in a9079 in k9045 in a9042 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_fcall f_9146(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_9146,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9156,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9086,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:589: ##sys#get */
t6=*((C_word*)lf[157]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[158];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9154 in for-each-loop2149 in a9079 in k9045 in a9042 in k5588 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in ... */
static void C_ccall f_9156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9156,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9146(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k9169 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in ... */
static void C_ccall f_9171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9171,c,av);}
/* chicken-syntax.scm:571: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[160];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9172 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in ... */
static void C_ccall f_9173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9173,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9177,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:575: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[160];
av2[3]=t2;
av2[4]=lf[161];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9175 in a9172 in k5585 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in ... */
static void C_ccall f_9177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9177,c,av);}
/* chicken-syntax.scm:576: ##sys#expand-multiple-values-assignment */
t2=*((C_word*)lf[147]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=C_i_caddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k9190 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_ccall f_9192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9192,c,av);}
/* chicken-syntax.scm:562: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[162];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9193 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_ccall f_9194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9194,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9198,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:566: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[162];
av2[3]=t2;
av2[4]=lf[164];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9196 in a9193 in k5582 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in ... */
static void C_ccall f_9198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_9198,c,av);}
a=C_alloc(18);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,lf[163]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,lf[26],t5);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,4,lf[34],t2,t3,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k9218 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in ... */
static void C_ccall f_9220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9220,c,av);}
/* chicken-syntax.scm:554: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[165];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9221 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in ... */
static void C_ccall f_9222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9222,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9226,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:558: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[165];
av2[3]=t2;
av2[4]=lf[166];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9224 in a9221 in k5579 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_ccall f_9226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_9226,c,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[26],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[34],t2,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k9242 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in ... */
static void C_ccall f_9244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9244,c,av);}
/* chicken-syntax.scm:541: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[167];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9245 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in ... */
static void C_ccall f_9246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_9246,c,av);}
a=C_alloc(22);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9255,a[2]=t3,a[3]=t4,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp);
t10=C_i_cdr(t2);
t11=C_i_check_list_2(t10,lf[65]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9290,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9292,a[2]=t7,a[3]=t14,a[4]=t9,a[5]=t8,a[6]=((C_word)li82),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_9292(t16,t12,t10);}

/* g2074 in a9245 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in ... */
static void C_fcall f_9255(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,8)))){
C_save_and_reclaim_args((void *)trf_9255,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9261,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li79),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9267,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:548: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a9260 in g2074 in a9245 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_ccall f_9261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9261,c,av);}
/* chicken-syntax.scm:548: ##sys#decompose-import */
t2=*((C_word*)lf[168]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[46];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* a9266 in g2074 in a9245 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_ccall f_9267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8;
C_word t9;
C_word *a;
if(c!=8) C_bad_argc_2(c,8,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9267,c,av);}
a=C_alloc(4);
if(C_truep(C_i_not(t3))){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=lf[169];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9281,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:551: chicken.internal#module-requirement */
t9=*((C_word*)lf[171]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k9279 in a9266 in g2074 in a9245 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in ... */
static void C_ccall f_9281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9281,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[170],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9288 in a9245 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in ... */
static void C_ccall f_9290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9290,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[26],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop2068 in a9245 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in ... */
static void C_fcall f_9292(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9292,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:547: g2074 */
t4=((C_word*)t0)[4];
f_9255(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9315 in map-loop2068 in a9245 in k5576 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_ccall f_9317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9317,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_9292(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k9326 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in ... */
static void C_ccall f_9328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9328,c,av);}
/* chicken-syntax.scm:487: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[172];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in k5511 in ... */
static void C_ccall f_9330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_9330,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9349,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:495: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[172];
av2[3]=t2;
av2[4]=lf[180];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in k5514 in ... */
static void C_ccall f_9349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_9349,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9357,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:498: r */
t6=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[179];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in k5517 in ... */
static void C_ccall f_9357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9357,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9366,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10222,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10222(t11,t7,((C_word*)t0)[2]);}

/* k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in k5520 in ... */
static void C_ccall f_9366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9366,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9372,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10188,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li100),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10188(t10,t6,((C_word*)t0)[6]);}

/* k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in k5523 in ... */
static void C_ccall f_9372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_9372,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9376,a[2]=((C_word*)t0)[2],a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9390,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10154,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li99),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_10154(t12,t8,((C_word*)t0)[3]);}

/* g1659 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in ... */
static void C_fcall f_9376(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9376,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9384,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t2))){
/* chicken-syntax.scm:493: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* chicken-syntax.scm:494: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[173];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k9382 in g1659 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_9384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9384,c,av);}
/* chicken-syntax.scm:501: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in k5526 in ... */
static void C_ccall f_9390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_9390,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9394,a[2]=((C_word*)t0)[2],a[3]=((C_word)li85),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9405,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10120,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li98),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10120(t11,t7,((C_word*)t0)[7]);}

/* g1687 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_fcall f_9394(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9394,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9402,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:502: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[174];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9400 in g1687 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_9402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9402,c,av);}
/* chicken-syntax.scm:502: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in k5530 in ... */
static void C_ccall f_9405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_9405,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9409,a[2]=((C_word*)t0)[2],a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9420,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10086,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li97),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10086(t11,t7,((C_word*)t0)[8]);}

/* g1715 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_fcall f_9409(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9409,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9417,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:503: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[42];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9415 in g1715 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_ccall f_9417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9417,c,av);}
/* chicken-syntax.scm:503: r */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in k5533 in ... */
static void C_ccall f_9420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_9420,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9433,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10038,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li96),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10038(t11,t7,((C_word*)t0)[2],((C_word*)t0)[8]);}

/* k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in k5536 in ... */
static void C_ccall f_9433(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_9433,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9450,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9990,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li95),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_9990(t12,t8,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in ... */
static void C_ccall f_9450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_9450,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9942,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li94),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_9942(t10,t6,((C_word*)t0)[7],((C_word*)t0)[7]);}

/* k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in ... */
static void C_ccall f_9461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(51,c,5)))){
C_save_and_reclaim((void *)f_9461,c,av);}
a=C_alloc(51);
t2=C_a_i_list(&a,4,lf[175],lf[176],C_SCHEME_TRUE,C_SCHEME_TRUE);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9712,a[2]=((C_word*)t0)[2],a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9730,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9872,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li93),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_9872(t15,t11,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[3]);}

/* k9507 in k9732 in k9728 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_9509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,4)))){
C_save_and_reclaim((void *)f_9509,c,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9513,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9525,a[2]=t2,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9587,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li89),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9587(t11,t7,((C_word*)t0)[11],((C_word*)t0)[9]);}

/* k9511 in k9507 in k9732 in k9728 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_9513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(63,c,1)))){
C_save_and_reclaim((void *)f_9513,c,av);}
a=C_alloc(63);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[35],t2);
t4=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_list(&a,4,lf[177],((C_word*)t0)[3],((C_word*)t0)[4],t4);
t6=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t5);
t7=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t6);
t8=C_a_i_list(&a,3,lf[35],((C_word*)t0)[7],t7);
t9=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[9],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k9523 in k9507 in k9732 in k9728 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_ccall f_9525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_9525,c,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9537,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9539,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_9539(t10,t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k9535 in k9523 in k9507 in k9732 in k9728 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_ccall f_9537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9537,c,av);}
/* chicken-syntax.scm:504: ##sys#append */
t2=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop2024 in k9523 in k9507 in k9732 in k9728 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in ... */
static void C_fcall f_9539(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_9539,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[178],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1988 in k9507 in k9732 in k9728 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_fcall f_9587(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_9587,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,t6,t7,C_SCHEME_FALSE,C_SCHEME_TRUE);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1946 in k9732 in k9728 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_fcall f_9635(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_9635,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9642,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_9642(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_9642(t6,C_SCHEME_FALSE);}}

/* k9640 in map-loop1946 in k9732 in k9728 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in ... */
static void C_fcall f_9642(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_9642,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_a_i_list(&a,1,t2);
t5=C_a_i_list(&a,2,t3,t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=((C_word*)((C_word*)t0)[5])[1];
f_9635(t9,((C_word*)t0)[6],C_slot(((C_word*)t0)[2],C_fix(1)),C_slot(((C_word*)t0)[7],C_fix(1)),C_slot(((C_word*)t0)[3],C_fix(1)));}
else{
t2=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[8],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g1838 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static C_word C_fcall f_9712(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t4=C_a_i_list(&a,4,t1,t2,C_SCHEME_TRUE,C_SCHEME_FALSE);
t5=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t4,t2);
return(C_a_i_list(&a,2,t3,t5));}

/* k9728 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_ccall f_9730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_9730,c,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9734,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9750,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9824,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li92),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9824(t11,t7,((C_word*)t0)[10],((C_word*)t0)[8]);}

/* k9732 in k9728 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_ccall f_9734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(46,c,5)))){
C_save_and_reclaim((void *)f_9734,c,av);}
a=C_alloc(46);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[35],t2);
t4=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,lf[20],t5);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9509,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9635,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li90),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9635(t15,t11,((C_word*)t0)[11],((C_word*)t0)[9],((C_word*)t0)[10]);}

/* k9748 in k9728 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_ccall f_9750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_9750,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9754,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9766,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9776,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9776(t11,t7,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k9752 in k9748 in k9728 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_9754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9754,c,av);}
/* chicken-syntax.scm:504: ##sys#append */
t2=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k9764 in k9748 in k9728 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_9766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_9766,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,lf[178],((C_word*)t0)[2],C_SCHEME_FALSE);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:504: ##sys#append */
t4=*((C_word*)lf[53]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop1910 in k9748 in k9728 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in ... */
static void C_fcall f_9776(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_9776,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,t6,t7,C_SCHEME_FALSE,C_SCHEME_TRUE);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1874 in k9728 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_fcall f_9824(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_9824,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,1,t6);
t9=C_a_i_list(&a,3,lf[178],t7,t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10);
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t10);
t14=t1;
t15=C_slot(t2,C_fix(1));
t16=C_slot(t3,C_fix(1));
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1832 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in ... */
static void C_fcall f_9872(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_9872,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9879,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t1,a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_9879(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_9879(t6,C_SCHEME_FALSE);}}

/* k9877 in map-loop1832 in k9459 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in ... */
static void C_fcall f_9879(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,4)))){
C_save_and_reclaim_args((void *)trf_9879,2,t0,t1);}
a=C_alloc(33);
if(C_truep(t1)){
t2=(
/* chicken-syntax.scm:519: g1838 */
  f_9712(C_a_i(&a,30),((C_word*)t0)[2],C_slot(((C_word*)t0)[3],C_fix(0)),C_slot(((C_word*)t0)[4],C_fix(0)),C_slot(((C_word*)t0)[5],C_fix(0)))
);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=((C_word*)((C_word*)t0)[7])[1];
f_9872(t6,((C_word*)t0)[8],C_slot(((C_word*)t0)[3],C_fix(1)),C_slot(((C_word*)t0)[4],C_fix(1)),C_slot(((C_word*)t0)[5],C_fix(1)));}
else{
t2=((C_word*)t0)[8];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[9],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* map-loop1801 in k9448 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in ... */
static void C_fcall f_9942(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_9942,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop1770 in k9431 in k9418 in k9403 in k9388 in k9370 in k9364 in k9355 in k9347 in a9329 in k5573 in k5570 in k5567 in k5564 in k5561 in k5558 in k5555 in k5552 in k5548 in k5545 in k5542 in k5539 in ... */
static void C_fcall f_9990(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_9990,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("chicken-syntax"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_chicken_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2756))){
C_save(t1);
C_rereclaim2(2756*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,282);
lf[0]=C_h_intern(&lf[0],14, C_text("chicken-syntax"));
lf[2]=C_h_intern(&lf[2],41, C_text("##sys#chicken.condition-macro-environment"));
lf[3]=C_h_intern(&lf[3],36, C_text("##sys#chicken.type-macro-environment"));
lf[4]=C_h_intern(&lf[4],38, C_text("##sys#chicken.syntax-macro-environment"));
lf[5]=C_h_intern(&lf[5],39, C_text("chicken.syntax#define-values-definition"));
lf[6]=C_h_intern(&lf[6],36, C_text("##sys#chicken.base-macro-environment"));
lf[7]=C_h_intern(&lf[7],36, C_text("##sys#chicken.time-macro-environment"));
lf[8]=C_h_intern(&lf[8],34, C_text("chicken.platform#register-feature!"));
lf[9]=C_h_intern(&lf[9],6, C_text("srfi-8"));
lf[10]=C_h_intern(&lf[10],7, C_text("srfi-11"));
lf[11]=C_h_intern(&lf[11],7, C_text("srfi-15"));
lf[12]=C_h_intern(&lf[12],7, C_text("srfi-16"));
lf[13]=C_h_intern(&lf[13],7, C_text("srfi-26"));
lf[14]=C_h_intern(&lf[14],7, C_text("srfi-31"));
lf[15]=C_h_intern(&lf[15],29, C_text("chicken.internal#macro-subset"));
lf[16]=C_h_intern(&lf[16],31, C_text("##sys#default-macro-environment"));
lf[17]=C_h_intern(&lf[17],30, C_text("##sys#extend-macro-environment"));
lf[18]=C_h_intern(&lf[18],4, C_text("time"));
lf[19]=C_h_intern(&lf[19],17, C_text("##sys#start-timer"));
lf[20]=C_h_intern(&lf[20],13, C_text("##core#lambda"));
lf[21]=C_h_intern(&lf[21],16, C_text("##sys#stop-timer"));
lf[22]=C_h_intern(&lf[22],19, C_text("##sys#display-times"));
lf[23]=C_h_intern(&lf[23],11, C_text("##sys#apply"));
lf[24]=C_h_intern(&lf[24],12, C_text("##sys#values"));
lf[25]=C_h_intern(&lf[25],22, C_text("##sys#call-with-values"));
lf[26]=C_h_intern(&lf[26],12, C_text("##core#begin"));
lf[27]=C_h_intern(&lf[27],1, C_text("t"));
lf[28]=C_h_intern(&lf[28],20, C_text("##sys#er-transformer"));
lf[29]=C_h_intern(&lf[29],23, C_text("##sys#macro-environment"));
lf[30]=C_h_intern(&lf[30],6, C_text("assert"));
lf[31]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020assertion failed"));
lf[32]=C_h_intern(&lf[32],12, C_text("##core#check"));
lf[33]=C_h_intern(&lf[33],11, C_text("##sys#error"));
lf[34]=C_h_intern(&lf[34],9, C_text("##core#if"));
lf[35]=C_h_intern(&lf[35],10, C_text("##core#let"));
lf[36]=C_h_intern(&lf[36],12, C_text("##core#quote"));
lf[37]=C_h_intern(&lf[37],27, C_text("chicken.syntax#strip-syntax"));
lf[38]=C_h_intern(&lf[38],20, C_text("scheme#string-append"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001("));
lf[40]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002) "));
lf[41]=C_h_intern(&lf[41],30, C_text("chicken.syntax#get-line-number"));
lf[42]=C_h_intern(&lf[42],3, C_text("tmp"));
lf[43]=C_h_intern(&lf[43],18, C_text("##sys#check-syntax"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[45]=C_h_intern(&lf[45],17, C_text("require-extension"));
lf[46]=C_h_intern(&lf[46],6, C_text("import"));
lf[47]=C_h_intern(&lf[47],3, C_text("rec"));
lf[48]=C_h_intern(&lf[48],14, C_text("##core#letrec\052"));
lf[49]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[50]=C_h_intern(&lf[50],5, C_text("apply"));
lf[51]=C_h_intern(&lf[51],12, C_text("scheme#apply"));
lf[52]=C_h_intern(&lf[52],4, C_text("cute"));
lf[53]=C_h_intern(&lf[53],12, C_text("##sys#append"));
lf[54]=C_h_intern(&lf[54],19, C_text("chicken.base#gensym"));
lf[55]=C_h_intern(&lf[55],14, C_text("scheme#reverse"));
lf[56]=C_h_intern(&lf[56],27, C_text("chicken.syntax#syntax-error"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376B\000\000+tail patterns after <...> are not supported"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047you need to supply at least a procedure"));
lf[59]=C_h_intern(&lf[59],5, C_text("<...>"));
lf[60]=C_h_intern(&lf[60],2, C_text("<>"));
lf[61]=C_h_intern(&lf[61],3, C_text("cut"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376B\000\000+tail patterns after <...> are not supported"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\047you need to supply at least a procedure"));
lf[64]=C_h_intern(&lf[64],18, C_text("define-record-type"));
lf[65]=C_h_intern(&lf[65],3, C_text("map"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000+unknown slot name in constructor definition"));
lf[67]=C_h_intern(&lf[67],8, C_text("for-each"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[69]=C_h_intern(&lf[69],20, C_text("##sys#make-structure"));
lf[70]=C_h_intern(&lf[70],16, C_text("##sys#structure\077"));
lf[71]=C_h_intern(&lf[71],21, C_text("##sys#check-structure"));
lf[72]=C_h_intern(&lf[72],15, C_text("##sys#block-ref"));
lf[73]=C_h_intern(&lf[73],12, C_text("##sys#setter"));
lf[74]=C_h_intern(&lf[74],16, C_text("##sys#block-set!"));
lf[75]=C_h_intern(&lf[75],6, C_text("setter"));
lf[76]=C_h_intern(&lf[76],1, C_text("y"));
lf[77]=C_h_intern(&lf[77],1, C_text("x"));
lf[78]=C_h_intern(&lf[78],31, C_text("chicken.base#getter-with-setter"));
lf[79]=C_h_intern(&lf[79],6, C_text("define"));
lf[80]=C_h_intern(&lf[80],26, C_text("chicken.base#symbol-append"));
lf[81]=C_h_intern(&lf[81],1, C_text("#"));
lf[82]=C_h_intern(&lf[82],17, C_text("##sys#module-name"));
lf[83]=C_h_intern(&lf[83],20, C_text("##sys#current-module"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010\001variable\376\377\001\000\000\000\001\376\003\000\000\002\376\001\000\000\010\001variabl"
"e\376\001\000\000\001\001_"));
lf[85]=C_h_intern(&lf[85],21, C_text("define-record-printer"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\010\001variable\376\377\016\376\000\000\000\002\376\001\000\000\001\001_\376\377\001"
"\000\000\000\001"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[88]=C_h_intern(&lf[88],32, C_text("chicken.base#set-record-printer!"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[90]=C_h_intern(&lf[90],2, C_text(">="));
lf[91]=C_h_intern(&lf[91],9, C_text("scheme#>="));
lf[92]=C_h_intern(&lf[92],3, C_text("car"));
lf[93]=C_h_intern(&lf[93],10, C_text("scheme#car"));
lf[94]=C_h_intern(&lf[94],3, C_text("cdr"));
lf[95]=C_h_intern(&lf[95],10, C_text("scheme#cdr"));
lf[96]=C_h_intern(&lf[96],3, C_text("eq\077"));
lf[97]=C_h_intern(&lf[97],10, C_text("scheme#eq\077"));
lf[98]=C_h_intern(&lf[98],6, C_text("length"));
lf[99]=C_h_intern(&lf[99],13, C_text("scheme#length"));
lf[100]=C_h_intern(&lf[100],11, C_text("case-lambda"));
lf[101]=C_h_intern(&lf[101],5, C_text("foldr"));
lf[102]=C_h_intern(&lf[102],11, C_text("lambda-list"));
lf[103]=C_h_intern(&lf[103],27, C_text("##sys#decompose-lambda-list"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\014\001##core#check\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001##sys#error\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001##core#immutab"
"le\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001##core#quote\376\003\000\000\002\376B\000\0000no matching clause in call to \047case-lamb"
"da\047 form\376\377\016\376\377\016\376\377\016\376\377\016"));
lf[105]=C_h_intern(&lf[105],13, C_text("scheme#append"));
lf[106]=C_h_intern(&lf[106],4, C_text("lvar"));
lf[107]=C_h_intern(&lf[107],4, C_text("rvar"));
lf[108]=C_h_intern(&lf[108],10, C_text("scheme#min"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[110]=C_h_intern(&lf[110],5, C_text("null\077"));
lf[111]=C_h_intern(&lf[111],12, C_text("scheme#null\077"));
lf[112]=C_h_intern(&lf[112],14, C_text("let-optionals\052"));
lf[113]=C_h_intern(&lf[113],4, C_text("tmp2"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\004\001list\376\001\000\000\001\001_"));
lf[115]=C_h_intern(&lf[115],8, C_text("optional"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[117]=C_h_intern(&lf[117],13, C_text("let-optionals"));
lf[118]=C_h_intern(&lf[118],21, C_text("scheme#string->symbol"));
lf[119]=C_h_intern(&lf[119],21, C_text("scheme#symbol->string"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001%"));
lf[121]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004def-"));
lf[122]=C_h_intern(&lf[122],4, C_text("let\052"));
lf[123]=C_h_intern(&lf[123],6, C_text("_%rest"));
lf[124]=C_h_intern(&lf[124],4, C_text("body"));
lf[125]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[126]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016\376\377\001\000\000\000\000"));
lf[127]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[128]=C_h_intern(&lf[128],8, C_text("and-let\052"));
lf[129]=C_h_intern(&lf[129],8, C_text("variable"));
lf[130]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[131]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\001\000\000\001\001_"));
lf[132]=C_h_intern(&lf[132],13, C_text("define-inline"));
lf[133]=C_decode_literal(C_heaptop,C_text("\376B\000\000\052invalid substitution form - must be lambda"));
lf[134]=C_h_intern(&lf[134],6, C_text("lambda"));
lf[135]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[136]=C_h_intern(&lf[136],20, C_text("##core#define-inline"));
lf[137]=C_h_intern(&lf[137],8, C_text("list-ref"));
lf[138]=C_h_intern(&lf[138],15, C_text("scheme#list-ref"));
lf[139]=C_h_intern(&lf[139],9, C_text("nth-value"));
lf[140]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[141]=C_h_intern(&lf[141],7, C_text("letrec\052"));
lf[142]=C_h_intern(&lf[142],44, C_text("chicken.internal#check-for-multiple-bindings"));
lf[143]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007letrec\052"));
lf[144]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000"
"\000\001"));
lf[145]=C_h_intern(&lf[145],13, C_text("letrec-values"));
lf[146]=C_h_intern(&lf[146],5, C_text("foldl"));
lf[147]=C_h_intern(&lf[147],39, C_text("##sys#expand-multiple-values-assignment"));
lf[148]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[149]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\013\001lambda-list\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\001\000\000\001\001_"));
lf[150]=C_h_intern(&lf[150],11, C_text("let\052-values"));
lf[151]=C_h_intern(&lf[151],10, C_text("let-values"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\004\001list\376\001\000\000\001\001_"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\004\001list\376\001\000\000\001\001_"));
lf[154]=C_h_intern(&lf[154],13, C_text("define-values"));
lf[155]=C_h_intern(&lf[155],33, C_text("##core#ensure-toplevel-definition"));
lf[156]=C_h_intern(&lf[156],21, C_text("##sys#register-export"));
lf[157]=C_h_intern(&lf[157],9, C_text("##sys#get"));
lf[158]=C_h_intern(&lf[158],18, C_text("##core#macro-alias"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\013\001lambda-list\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[160]=C_h_intern(&lf[160],11, C_text("set!-values"));
lf[161]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\013\001lambda-list\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[162]=C_h_intern(&lf[162],6, C_text("unless"));
lf[163]=C_h_intern(&lf[163],16, C_text("##core#undefined"));
lf[164]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\002"));
lf[165]=C_h_intern(&lf[165],4, C_text("when"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\002"));
lf[167]=C_h_intern(&lf[167],15, C_text("require-library"));
lf[168]=C_h_intern(&lf[168],22, C_text("##sys#decompose-import"));
lf[169]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[170]=C_h_intern(&lf[170],14, C_text("##core#require"));
lf[171]=C_h_intern(&lf[171],35, C_text("chicken.internal#module-requirement"));
lf[172]=C_h_intern(&lf[172],12, C_text("parameterize"));
lf[173]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011parameter"));
lf[174]=C_h_intern(&lf[174],5, C_text("saved"));
lf[175]=C_h_intern(&lf[175],10, C_text("##core#the"));
lf[176]=C_h_intern(&lf[176],7, C_text("boolean"));
lf[177]=C_h_intern(&lf[177],18, C_text("##sys#dynamic-wind"));
lf[178]=C_h_intern(&lf[178],11, C_text("##core#set!"));
lf[179]=C_h_intern(&lf[179],8, C_text("convert\077"));
lf[180]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\002"));
lf[181]=C_h_intern(&lf[181],9, C_text("fluid-let"));
lf[182]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016\376\377\001\000\000\000\000\376\001\000\000\001\001_"));
lf[183]=C_h_intern(&lf[183],16, C_text("include-relative"));
lf[184]=C_h_intern(&lf[184],14, C_text("##core#include"));
lf[185]=C_h_intern(&lf[185],29, C_text("##sys#current-source-filename"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001string\376\377\016"));
lf[187]=C_h_intern(&lf[187],7, C_text("include"));
lf[188]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001string\376\377\016"));
lf[189]=C_h_intern(&lf[189],11, C_text("delay-force"));
lf[190]=C_h_intern(&lf[190],18, C_text("##sys#make-promise"));
lf[191]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[192]=C_h_intern(&lf[192],7, C_text("declare"));
lf[193]=C_h_intern(&lf[193],14, C_text("##core#declare"));
lf[194]=C_h_intern(&lf[194],7, C_text("receive"));
lf[195]=C_h_intern(&lf[195],10, C_text("##sys#list"));
lf[196]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\013\001lambda-list\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[197]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000"));
lf[198]=C_h_intern(&lf[198],13, C_text("define-record"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032invalid slot specification"));
lf[200]=C_h_intern(&lf[200],3, C_text("val"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001-"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001-"));
lf[203]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-set!"));
lf[204]=C_h_intern(&lf[204],19, C_text("##sys#string-append"));
lf[205]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\077"));
lf[206]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005make-"));
lf[207]=C_h_intern(&lf[207],19, C_text("chicken.base#setter"));
lf[208]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\001\000\000\001\001_"));
lf[209]=C_h_intern(&lf[209],19, C_text("let-compiler-syntax"));
lf[210]=C_h_intern(&lf[210],26, C_text("##core#let-compiler-syntax"));
lf[211]=C_h_intern(&lf[211],51, C_text("chicken.internal.syntax-rules#syntax-rules-mismatch"));
lf[212]=C_h_intern(&lf[212],7, C_text("##sys#+"));
lf[213]=C_h_intern(&lf[213],7, C_text("##sys#="));
lf[214]=C_h_intern(&lf[214],8, C_text("##sys#>="));
lf[215]=C_h_intern(&lf[215],12, C_text("##sys#length"));
lf[216]=C_h_intern(&lf[216],11, C_text("##sys#list\077"));
lf[217]=C_h_intern(&lf[217],22, C_text("define-compiler-syntax"));
lf[218]=C_h_intern(&lf[218],29, C_text("##core#define-compiler-syntax"));
lf[219]=C_h_intern(&lf[219],17, C_text("define-for-syntax"));
lf[220]=C_h_intern(&lf[220],16, C_text("begin-for-syntax"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[222]=C_h_intern(&lf[222],26, C_text("##core#elaborationtimeonly"));
lf[223]=C_h_intern(&lf[223],30, C_text("##sys#register-meta-expression"));
lf[224]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000"));
lf[225]=C_h_intern(&lf[225],6, C_text("syntax"));
lf[226]=C_h_intern(&lf[226],13, C_text("##core#syntax"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[228]=C_h_intern(&lf[228],11, C_text("define-type"));
lf[229]=C_h_intern_kw(&lf[229],9, C_text("compiling"));
lf[230]=C_h_intern(&lf[230],14, C_text("##sys#features"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[232]=C_h_intern(&lf[232],28, C_text("##compiler#type-abbreviation"));
lf[233]=C_h_intern(&lf[233],18, C_text("##sys#put/restore!"));
lf[234]=C_h_intern(&lf[234],52, C_text("chicken.compiler.scrutinizer#check-and-validate-type"));
lf[235]=C_h_intern(&lf[235],5, C_text("quote"));
lf[236]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[237]=C_h_intern(&lf[237],17, C_text("compiler-typecase"));
lf[238]=C_h_intern(&lf[238],4, C_text("else"));
lf[239]=C_h_intern(&lf[239],15, C_text("##core#typecase"));
lf[240]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001\376\377\001\000\000\000\001"));
lf[241]=C_h_intern(&lf[241],21, C_text("define-specialization"));
lf[242]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[243]=C_h_intern(&lf[243],6, C_text("inline"));
lf[244]=C_h_intern(&lf[244],4, C_text("hide"));
lf[245]=C_h_intern(&lf[245],10, C_text("##sys#put!"));
lf[246]=C_h_intern(&lf[246],32, C_text("##compiler#local-specializations"));
lf[247]=C_h_intern(&lf[247],1, C_text("\052"));
lf[248]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027invalid argument syntax"));
lf[249]=C_h_intern(&lf[249],15, C_text("##sys#globalize"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\001\001_\376"
"\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[251]=C_h_intern(&lf[251],6, C_text("assume"));
lf[252]=C_h_intern(&lf[252],3, C_text("the"));
lf[253]=C_h_intern(&lf[253],11, C_text("##sys#map-n"));
lf[254]=C_h_intern(&lf[254],3, C_text("let"));
lf[255]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[256]=C_h_intern(&lf[256],1, C_text(":"));
lf[257]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[258]=C_h_intern(&lf[258],42, C_text("chicken.compiler.scrutinizer#validate-type"));
lf[259]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023invalid type syntax"));
lf[260]=C_h_intern(&lf[260],4, C_text("type"));
lf[261]=C_h_intern(&lf[261],9, C_text("predicate"));
lf[262]=C_h_intern(&lf[262],4, C_text("pure"));
lf[263]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001symbol\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[264]=C_h_intern(&lf[264],4, C_text("memv"));
lf[265]=C_h_intern(&lf[265],11, C_text("scheme#memv"));
lf[266]=C_h_intern(&lf[266],14, C_text("condition-case"));
lf[267]=C_h_intern(&lf[267],9, C_text("condition"));
lf[268]=C_h_intern(&lf[268],10, C_text("##sys#slot"));
lf[269]=C_h_intern(&lf[269],24, C_text("chicken.condition#signal"));
lf[270]=C_h_intern(&lf[270],4, C_text("cond"));
lf[271]=C_h_intern(&lf[271],17, C_text("handle-exceptions"));
lf[272]=C_h_intern(&lf[272],3, C_text("and"));
lf[273]=C_h_intern(&lf[273],4, C_text("kvar"));
lf[274]=C_h_intern(&lf[274],5, C_text("exvar"));
lf[275]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[276]=C_h_intern(&lf[276],30, C_text("call-with-current-continuation"));
lf[277]=C_h_intern(&lf[277],37, C_text("scheme#call-with-current-continuation"));
lf[278]=C_h_intern(&lf[278],40, C_text("chicken.condition#with-exception-handler"));
lf[279]=C_h_intern(&lf[279],4, C_text("args"));
lf[280]=C_h_intern(&lf[280],1, C_text("k"));
lf[281]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
C_register_lf2(lf,282,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4206,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[658] = {
{C_text("f_10038:chicken_2dsyntax_2escm"),(void*)f_10038},
{C_text("f_10086:chicken_2dsyntax_2escm"),(void*)f_10086},
{C_text("f_10111:chicken_2dsyntax_2escm"),(void*)f_10111},
{C_text("f_10120:chicken_2dsyntax_2escm"),(void*)f_10120},
{C_text("f_10145:chicken_2dsyntax_2escm"),(void*)f_10145},
{C_text("f_10154:chicken_2dsyntax_2escm"),(void*)f_10154},
{C_text("f_10179:chicken_2dsyntax_2escm"),(void*)f_10179},
{C_text("f_10188:chicken_2dsyntax_2escm"),(void*)f_10188},
{C_text("f_10222:chicken_2dsyntax_2escm"),(void*)f_10222},
{C_text("f_10258:chicken_2dsyntax_2escm"),(void*)f_10258},
{C_text("f_10260:chicken_2dsyntax_2escm"),(void*)f_10260},
{C_text("f_10264:chicken_2dsyntax_2escm"),(void*)f_10264},
{C_text("f_10278:chicken_2dsyntax_2escm"),(void*)f_10278},
{C_text("f_10282:chicken_2dsyntax_2escm"),(void*)f_10282},
{C_text("f_10290:chicken_2dsyntax_2escm"),(void*)f_10290},
{C_text("f_10293:chicken_2dsyntax_2escm"),(void*)f_10293},
{C_text("f_10297:chicken_2dsyntax_2escm"),(void*)f_10297},
{C_text("f_10305:chicken_2dsyntax_2escm"),(void*)f_10305},
{C_text("f_10308:chicken_2dsyntax_2escm"),(void*)f_10308},
{C_text("f_10315:chicken_2dsyntax_2escm"),(void*)f_10315},
{C_text("f_10339:chicken_2dsyntax_2escm"),(void*)f_10339},
{C_text("f_10351:chicken_2dsyntax_2escm"),(void*)f_10351},
{C_text("f_10355:chicken_2dsyntax_2escm"),(void*)f_10355},
{C_text("f_10367:chicken_2dsyntax_2escm"),(void*)f_10367},
{C_text("f_10377:chicken_2dsyntax_2escm"),(void*)f_10377},
{C_text("f_10425:chicken_2dsyntax_2escm"),(void*)f_10425},
{C_text("f_10483:chicken_2dsyntax_2escm"),(void*)f_10483},
{C_text("f_10498:chicken_2dsyntax_2escm"),(void*)f_10498},
{C_text("f_10502:chicken_2dsyntax_2escm"),(void*)f_10502},
{C_text("f_10514:chicken_2dsyntax_2escm"),(void*)f_10514},
{C_text("f_10524:chicken_2dsyntax_2escm"),(void*)f_10524},
{C_text("f_10572:chicken_2dsyntax_2escm"),(void*)f_10572},
{C_text("f_10628:chicken_2dsyntax_2escm"),(void*)f_10628},
{C_text("f_10637:chicken_2dsyntax_2escm"),(void*)f_10637},
{C_text("f_10644:chicken_2dsyntax_2escm"),(void*)f_10644},
{C_text("f_10653:chicken_2dsyntax_2escm"),(void*)f_10653},
{C_text("f_10655:chicken_2dsyntax_2escm"),(void*)f_10655},
{C_text("f_10705:chicken_2dsyntax_2escm"),(void*)f_10705},
{C_text("f_10719:chicken_2dsyntax_2escm"),(void*)f_10719},
{C_text("f_10725:chicken_2dsyntax_2escm"),(void*)f_10725},
{C_text("f_10773:chicken_2dsyntax_2escm"),(void*)f_10773},
{C_text("f_10807:chicken_2dsyntax_2escm"),(void*)f_10807},
{C_text("f_10832:chicken_2dsyntax_2escm"),(void*)f_10832},
{C_text("f_10841:chicken_2dsyntax_2escm"),(void*)f_10841},
{C_text("f_10866:chicken_2dsyntax_2escm"),(void*)f_10866},
{C_text("f_10875:chicken_2dsyntax_2escm"),(void*)f_10875},
{C_text("f_10911:chicken_2dsyntax_2escm"),(void*)f_10911},
{C_text("f_10913:chicken_2dsyntax_2escm"),(void*)f_10913},
{C_text("f_10917:chicken_2dsyntax_2escm"),(void*)f_10917},
{C_text("f_10928:chicken_2dsyntax_2escm"),(void*)f_10928},
{C_text("f_10930:chicken_2dsyntax_2escm"),(void*)f_10930},
{C_text("f_10934:chicken_2dsyntax_2escm"),(void*)f_10934},
{C_text("f_10945:chicken_2dsyntax_2escm"),(void*)f_10945},
{C_text("f_10947:chicken_2dsyntax_2escm"),(void*)f_10947},
{C_text("f_10951:chicken_2dsyntax_2escm"),(void*)f_10951},
{C_text("f_10966:chicken_2dsyntax_2escm"),(void*)f_10966},
{C_text("f_10968:chicken_2dsyntax_2escm"),(void*)f_10968},
{C_text("f_10980:chicken_2dsyntax_2escm"),(void*)f_10980},
{C_text("f_10982:chicken_2dsyntax_2escm"),(void*)f_10982},
{C_text("f_10986:chicken_2dsyntax_2escm"),(void*)f_10986},
{C_text("f_11008:chicken_2dsyntax_2escm"),(void*)f_11008},
{C_text("f_11073:chicken_2dsyntax_2escm"),(void*)f_11073},
{C_text("f_11075:chicken_2dsyntax_2escm"),(void*)f_11075},
{C_text("f_11079:chicken_2dsyntax_2escm"),(void*)f_11079},
{C_text("f_11085:chicken_2dsyntax_2escm"),(void*)f_11085},
{C_text("f_11088:chicken_2dsyntax_2escm"),(void*)f_11088},
{C_text("f_11091:chicken_2dsyntax_2escm"),(void*)f_11091},
{C_text("f_11097:chicken_2dsyntax_2escm"),(void*)f_11097},
{C_text("f_11100:chicken_2dsyntax_2escm"),(void*)f_11100},
{C_text("f_11103:chicken_2dsyntax_2escm"),(void*)f_11103},
{C_text("f_11107:chicken_2dsyntax_2escm"),(void*)f_11107},
{C_text("f_11120:chicken_2dsyntax_2escm"),(void*)f_11120},
{C_text("f_11135:chicken_2dsyntax_2escm"),(void*)f_11135},
{C_text("f_11167:chicken_2dsyntax_2escm"),(void*)f_11167},
{C_text("f_11198:chicken_2dsyntax_2escm"),(void*)f_11198},
{C_text("f_11200:chicken_2dsyntax_2escm"),(void*)f_11200},
{C_text("f_11216:chicken_2dsyntax_2escm"),(void*)f_11216},
{C_text("f_11219:chicken_2dsyntax_2escm"),(void*)f_11219},
{C_text("f_11222:chicken_2dsyntax_2escm"),(void*)f_11222},
{C_text("f_11236:chicken_2dsyntax_2escm"),(void*)f_11236},
{C_text("f_11248:chicken_2dsyntax_2escm"),(void*)f_11248},
{C_text("f_11252:chicken_2dsyntax_2escm"),(void*)f_11252},
{C_text("f_11345:chicken_2dsyntax_2escm"),(void*)f_11345},
{C_text("f_11349:chicken_2dsyntax_2escm"),(void*)f_11349},
{C_text("f_11364:chicken_2dsyntax_2escm"),(void*)f_11364},
{C_text("f_11384:chicken_2dsyntax_2escm"),(void*)f_11384},
{C_text("f_11390:chicken_2dsyntax_2escm"),(void*)f_11390},
{C_text("f_11410:chicken_2dsyntax_2escm"),(void*)f_11410},
{C_text("f_11418:chicken_2dsyntax_2escm"),(void*)f_11418},
{C_text("f_11443:chicken_2dsyntax_2escm"),(void*)f_11443},
{C_text("f_11453:chicken_2dsyntax_2escm"),(void*)f_11453},
{C_text("f_11460:chicken_2dsyntax_2escm"),(void*)f_11460},
{C_text("f_11464:chicken_2dsyntax_2escm"),(void*)f_11464},
{C_text("f_11468:chicken_2dsyntax_2escm"),(void*)f_11468},
{C_text("f_11470:chicken_2dsyntax_2escm"),(void*)f_11470},
{C_text("f_11480:chicken_2dsyntax_2escm"),(void*)f_11480},
{C_text("f_11493:chicken_2dsyntax_2escm"),(void*)f_11493},
{C_text("f_11509:chicken_2dsyntax_2escm"),(void*)f_11509},
{C_text("f_11515:chicken_2dsyntax_2escm"),(void*)f_11515},
{C_text("f_11518:chicken_2dsyntax_2escm"),(void*)f_11518},
{C_text("f_11524:chicken_2dsyntax_2escm"),(void*)f_11524},
{C_text("f_11533:chicken_2dsyntax_2escm"),(void*)f_11533},
{C_text("f_11540:chicken_2dsyntax_2escm"),(void*)f_11540},
{C_text("f_11554:chicken_2dsyntax_2escm"),(void*)f_11554},
{C_text("f_11565:chicken_2dsyntax_2escm"),(void*)f_11565},
{C_text("f_11568:chicken_2dsyntax_2escm"),(void*)f_11568},
{C_text("f_11574:chicken_2dsyntax_2escm"),(void*)f_11574},
{C_text("f_11583:chicken_2dsyntax_2escm"),(void*)f_11583},
{C_text("f_11590:chicken_2dsyntax_2escm"),(void*)f_11590},
{C_text("f_11604:chicken_2dsyntax_2escm"),(void*)f_11604},
{C_text("f_11616:chicken_2dsyntax_2escm"),(void*)f_11616},
{C_text("f_11618:chicken_2dsyntax_2escm"),(void*)f_11618},
{C_text("f_11638:chicken_2dsyntax_2escm"),(void*)f_11638},
{C_text("f_11652:chicken_2dsyntax_2escm"),(void*)f_11652},
{C_text("f_11665:chicken_2dsyntax_2escm"),(void*)f_11665},
{C_text("f_11713:chicken_2dsyntax_2escm"),(void*)f_11713},
{C_text("f_11715:chicken_2dsyntax_2escm"),(void*)f_11715},
{C_text("f_11719:chicken_2dsyntax_2escm"),(void*)f_11719},
{C_text("f_11726:chicken_2dsyntax_2escm"),(void*)f_11726},
{C_text("f_11734:chicken_2dsyntax_2escm"),(void*)f_11734},
{C_text("f_11742:chicken_2dsyntax_2escm"),(void*)f_11742},
{C_text("f_11744:chicken_2dsyntax_2escm"),(void*)f_11744},
{C_text("f_11748:chicken_2dsyntax_2escm"),(void*)f_11748},
{C_text("f_11751:chicken_2dsyntax_2escm"),(void*)f_11751},
{C_text("f_11772:chicken_2dsyntax_2escm"),(void*)f_11772},
{C_text("f_11774:chicken_2dsyntax_2escm"),(void*)f_11774},
{C_text("f_11778:chicken_2dsyntax_2escm"),(void*)f_11778},
{C_text("f_11789:chicken_2dsyntax_2escm"),(void*)f_11789},
{C_text("f_11791:chicken_2dsyntax_2escm"),(void*)f_11791},
{C_text("f_11795:chicken_2dsyntax_2escm"),(void*)f_11795},
{C_text("f_11804:chicken_2dsyntax_2escm"),(void*)f_11804},
{C_text("f_11807:chicken_2dsyntax_2escm"),(void*)f_11807},
{C_text("f_11810:chicken_2dsyntax_2escm"),(void*)f_11810},
{C_text("f_11833:chicken_2dsyntax_2escm"),(void*)f_11833},
{C_text("f_11849:chicken_2dsyntax_2escm"),(void*)f_11849},
{C_text("f_11851:chicken_2dsyntax_2escm"),(void*)f_11851},
{C_text("f_11855:chicken_2dsyntax_2escm"),(void*)f_11855},
{C_text("f_11861:chicken_2dsyntax_2escm"),(void*)f_11861},
{C_text("f_11864:chicken_2dsyntax_2escm"),(void*)f_11864},
{C_text("f_11888:chicken_2dsyntax_2escm"),(void*)f_11888},
{C_text("f_11892:chicken_2dsyntax_2escm"),(void*)f_11892},
{C_text("f_11899:chicken_2dsyntax_2escm"),(void*)f_11899},
{C_text("f_11926:chicken_2dsyntax_2escm"),(void*)f_11926},
{C_text("f_11928:chicken_2dsyntax_2escm"),(void*)f_11928},
{C_text("f_11953:chicken_2dsyntax_2escm"),(void*)f_11953},
{C_text("f_11972:chicken_2dsyntax_2escm"),(void*)f_11972},
{C_text("f_11974:chicken_2dsyntax_2escm"),(void*)f_11974},
{C_text("f_11984:chicken_2dsyntax_2escm"),(void*)f_11984},
{C_text("f_11993:chicken_2dsyntax_2escm"),(void*)f_11993},
{C_text("f_11997:chicken_2dsyntax_2escm"),(void*)f_11997},
{C_text("f_12000:chicken_2dsyntax_2escm"),(void*)f_12000},
{C_text("f_12003:chicken_2dsyntax_2escm"),(void*)f_12003},
{C_text("f_12006:chicken_2dsyntax_2escm"),(void*)f_12006},
{C_text("f_12014:chicken_2dsyntax_2escm"),(void*)f_12014},
{C_text("f_12024:chicken_2dsyntax_2escm"),(void*)f_12024},
{C_text("f_12027:chicken_2dsyntax_2escm"),(void*)f_12027},
{C_text("f_12033:chicken_2dsyntax_2escm"),(void*)f_12033},
{C_text("f_12068:chicken_2dsyntax_2escm"),(void*)f_12068},
{C_text("f_12070:chicken_2dsyntax_2escm"),(void*)f_12070},
{C_text("f_12128:chicken_2dsyntax_2escm"),(void*)f_12128},
{C_text("f_12132:chicken_2dsyntax_2escm"),(void*)f_12132},
{C_text("f_12165:chicken_2dsyntax_2escm"),(void*)f_12165},
{C_text("f_12167:chicken_2dsyntax_2escm"),(void*)f_12167},
{C_text("f_12192:chicken_2dsyntax_2escm"),(void*)f_12192},
{C_text("f_12209:chicken_2dsyntax_2escm"),(void*)f_12209},
{C_text("f_12211:chicken_2dsyntax_2escm"),(void*)f_12211},
{C_text("f_12229:chicken_2dsyntax_2escm"),(void*)f_12229},
{C_text("f_12265:chicken_2dsyntax_2escm"),(void*)f_12265},
{C_text("f_12282:chicken_2dsyntax_2escm"),(void*)f_12282},
{C_text("f_12339:chicken_2dsyntax_2escm"),(void*)f_12339},
{C_text("f_12341:chicken_2dsyntax_2escm"),(void*)f_12341},
{C_text("f_12351:chicken_2dsyntax_2escm"),(void*)f_12351},
{C_text("f_12368:chicken_2dsyntax_2escm"),(void*)f_12368},
{C_text("f_12389:chicken_2dsyntax_2escm"),(void*)f_12389},
{C_text("f_12399:chicken_2dsyntax_2escm"),(void*)f_12399},
{C_text("f_12407:chicken_2dsyntax_2escm"),(void*)f_12407},
{C_text("f_12409:chicken_2dsyntax_2escm"),(void*)f_12409},
{C_text("f_12425:chicken_2dsyntax_2escm"),(void*)f_12425},
{C_text("f_12435:chicken_2dsyntax_2escm"),(void*)f_12435},
{C_text("f_12469:chicken_2dsyntax_2escm"),(void*)f_12469},
{C_text("f_12513:chicken_2dsyntax_2escm"),(void*)f_12513},
{C_text("f_12519:chicken_2dsyntax_2escm"),(void*)f_12519},
{C_text("f_12522:chicken_2dsyntax_2escm"),(void*)f_12522},
{C_text("f_12528:chicken_2dsyntax_2escm"),(void*)f_12528},
{C_text("f_12537:chicken_2dsyntax_2escm"),(void*)f_12537},
{C_text("f_12544:chicken_2dsyntax_2escm"),(void*)f_12544},
{C_text("f_12558:chicken_2dsyntax_2escm"),(void*)f_12558},
{C_text("f_12569:chicken_2dsyntax_2escm"),(void*)f_12569},
{C_text("f_12572:chicken_2dsyntax_2escm"),(void*)f_12572},
{C_text("f_12578:chicken_2dsyntax_2escm"),(void*)f_12578},
{C_text("f_12587:chicken_2dsyntax_2escm"),(void*)f_12587},
{C_text("f_12594:chicken_2dsyntax_2escm"),(void*)f_12594},
{C_text("f_12606:chicken_2dsyntax_2escm"),(void*)f_12606},
{C_text("f_12617:chicken_2dsyntax_2escm"),(void*)f_12617},
{C_text("f_12648:chicken_2dsyntax_2escm"),(void*)f_12648},
{C_text("f_12650:chicken_2dsyntax_2escm"),(void*)f_12650},
{C_text("f_12654:chicken_2dsyntax_2escm"),(void*)f_12654},
{C_text("f_12670:chicken_2dsyntax_2escm"),(void*)f_12670},
{C_text("f_12686:chicken_2dsyntax_2escm"),(void*)f_12686},
{C_text("f_12688:chicken_2dsyntax_2escm"),(void*)f_12688},
{C_text("f_12692:chicken_2dsyntax_2escm"),(void*)f_12692},
{C_text("f_12701:chicken_2dsyntax_2escm"),(void*)f_12701},
{C_text("f_12708:chicken_2dsyntax_2escm"),(void*)f_12708},
{C_text("f_12716:chicken_2dsyntax_2escm"),(void*)f_12716},
{C_text("f_12718:chicken_2dsyntax_2escm"),(void*)f_12718},
{C_text("f_12743:chicken_2dsyntax_2escm"),(void*)f_12743},
{C_text("f_12747:chicken_2dsyntax_2escm"),(void*)f_12747},
{C_text("f_12797:chicken_2dsyntax_2escm"),(void*)f_12797},
{C_text("f_12799:chicken_2dsyntax_2escm"),(void*)f_12799},
{C_text("f_12803:chicken_2dsyntax_2escm"),(void*)f_12803},
{C_text("f_12806:chicken_2dsyntax_2escm"),(void*)f_12806},
{C_text("f_12809:chicken_2dsyntax_2escm"),(void*)f_12809},
{C_text("f_12812:chicken_2dsyntax_2escm"),(void*)f_12812},
{C_text("f_12815:chicken_2dsyntax_2escm"),(void*)f_12815},
{C_text("f_12818:chicken_2dsyntax_2escm"),(void*)f_12818},
{C_text("f_12820:chicken_2dsyntax_2escm"),(void*)f_12820},
{C_text("f_12830:chicken_2dsyntax_2escm"),(void*)f_12830},
{C_text("f_12855:chicken_2dsyntax_2escm"),(void*)f_12855},
{C_text("f_12869:chicken_2dsyntax_2escm"),(void*)f_12869},
{C_text("f_12871:chicken_2dsyntax_2escm"),(void*)f_12871},
{C_text("f_12950:chicken_2dsyntax_2escm"),(void*)f_12950},
{C_text("f_12975:chicken_2dsyntax_2escm"),(void*)f_12975},
{C_text("f_12982:chicken_2dsyntax_2escm"),(void*)f_12982},
{C_text("f_12986:chicken_2dsyntax_2escm"),(void*)f_12986},
{C_text("f_13006:chicken_2dsyntax_2escm"),(void*)f_13006},
{C_text("f_13031:chicken_2dsyntax_2escm"),(void*)f_13031},
{C_text("f_13070:chicken_2dsyntax_2escm"),(void*)f_13070},
{C_text("f_13072:chicken_2dsyntax_2escm"),(void*)f_13072},
{C_text("f_13076:chicken_2dsyntax_2escm"),(void*)f_13076},
{C_text("f_13079:chicken_2dsyntax_2escm"),(void*)f_13079},
{C_text("f_13082:chicken_2dsyntax_2escm"),(void*)f_13082},
{C_text("f_13093:chicken_2dsyntax_2escm"),(void*)f_13093},
{C_text("f_4206:chicken_2dsyntax_2escm"),(void*)f_4206},
{C_text("f_4209:chicken_2dsyntax_2escm"),(void*)f_4209},
{C_text("f_4212:chicken_2dsyntax_2escm"),(void*)f_4212},
{C_text("f_4322:chicken_2dsyntax_2escm"),(void*)f_4322},
{C_text("f_4340:chicken_2dsyntax_2escm"),(void*)f_4340},
{C_text("f_4380:chicken_2dsyntax_2escm"),(void*)f_4380},
{C_text("f_4394:chicken_2dsyntax_2escm"),(void*)f_4394},
{C_text("f_5494:chicken_2dsyntax_2escm"),(void*)f_5494},
{C_text("f_5497:chicken_2dsyntax_2escm"),(void*)f_5497},
{C_text("f_5500:chicken_2dsyntax_2escm"),(void*)f_5500},
{C_text("f_5503:chicken_2dsyntax_2escm"),(void*)f_5503},
{C_text("f_5507:chicken_2dsyntax_2escm"),(void*)f_5507},
{C_text("f_5510:chicken_2dsyntax_2escm"),(void*)f_5510},
{C_text("f_5513:chicken_2dsyntax_2escm"),(void*)f_5513},
{C_text("f_5516:chicken_2dsyntax_2escm"),(void*)f_5516},
{C_text("f_5519:chicken_2dsyntax_2escm"),(void*)f_5519},
{C_text("f_5522:chicken_2dsyntax_2escm"),(void*)f_5522},
{C_text("f_5525:chicken_2dsyntax_2escm"),(void*)f_5525},
{C_text("f_5528:chicken_2dsyntax_2escm"),(void*)f_5528},
{C_text("f_5532:chicken_2dsyntax_2escm"),(void*)f_5532},
{C_text("f_5535:chicken_2dsyntax_2escm"),(void*)f_5535},
{C_text("f_5538:chicken_2dsyntax_2escm"),(void*)f_5538},
{C_text("f_5541:chicken_2dsyntax_2escm"),(void*)f_5541},
{C_text("f_5544:chicken_2dsyntax_2escm"),(void*)f_5544},
{C_text("f_5547:chicken_2dsyntax_2escm"),(void*)f_5547},
{C_text("f_5550:chicken_2dsyntax_2escm"),(void*)f_5550},
{C_text("f_5554:chicken_2dsyntax_2escm"),(void*)f_5554},
{C_text("f_5557:chicken_2dsyntax_2escm"),(void*)f_5557},
{C_text("f_5560:chicken_2dsyntax_2escm"),(void*)f_5560},
{C_text("f_5563:chicken_2dsyntax_2escm"),(void*)f_5563},
{C_text("f_5566:chicken_2dsyntax_2escm"),(void*)f_5566},
{C_text("f_5569:chicken_2dsyntax_2escm"),(void*)f_5569},
{C_text("f_5572:chicken_2dsyntax_2escm"),(void*)f_5572},
{C_text("f_5575:chicken_2dsyntax_2escm"),(void*)f_5575},
{C_text("f_5578:chicken_2dsyntax_2escm"),(void*)f_5578},
{C_text("f_5581:chicken_2dsyntax_2escm"),(void*)f_5581},
{C_text("f_5584:chicken_2dsyntax_2escm"),(void*)f_5584},
{C_text("f_5587:chicken_2dsyntax_2escm"),(void*)f_5587},
{C_text("f_5590:chicken_2dsyntax_2escm"),(void*)f_5590},
{C_text("f_5594:chicken_2dsyntax_2escm"),(void*)f_5594},
{C_text("f_5597:chicken_2dsyntax_2escm"),(void*)f_5597},
{C_text("f_5600:chicken_2dsyntax_2escm"),(void*)f_5600},
{C_text("f_5603:chicken_2dsyntax_2escm"),(void*)f_5603},
{C_text("f_5606:chicken_2dsyntax_2escm"),(void*)f_5606},
{C_text("f_5609:chicken_2dsyntax_2escm"),(void*)f_5609},
{C_text("f_5612:chicken_2dsyntax_2escm"),(void*)f_5612},
{C_text("f_5615:chicken_2dsyntax_2escm"),(void*)f_5615},
{C_text("f_5618:chicken_2dsyntax_2escm"),(void*)f_5618},
{C_text("f_5621:chicken_2dsyntax_2escm"),(void*)f_5621},
{C_text("f_5624:chicken_2dsyntax_2escm"),(void*)f_5624},
{C_text("f_5627:chicken_2dsyntax_2escm"),(void*)f_5627},
{C_text("f_5630:chicken_2dsyntax_2escm"),(void*)f_5630},
{C_text("f_5633:chicken_2dsyntax_2escm"),(void*)f_5633},
{C_text("f_5636:chicken_2dsyntax_2escm"),(void*)f_5636},
{C_text("f_5639:chicken_2dsyntax_2escm"),(void*)f_5639},
{C_text("f_5642:chicken_2dsyntax_2escm"),(void*)f_5642},
{C_text("f_5645:chicken_2dsyntax_2escm"),(void*)f_5645},
{C_text("f_5648:chicken_2dsyntax_2escm"),(void*)f_5648},
{C_text("f_5651:chicken_2dsyntax_2escm"),(void*)f_5651},
{C_text("f_5655:chicken_2dsyntax_2escm"),(void*)f_5655},
{C_text("f_5658:chicken_2dsyntax_2escm"),(void*)f_5658},
{C_text("f_5661:chicken_2dsyntax_2escm"),(void*)f_5661},
{C_text("f_5664:chicken_2dsyntax_2escm"),(void*)f_5664},
{C_text("f_5668:chicken_2dsyntax_2escm"),(void*)f_5668},
{C_text("f_5670:chicken_2dsyntax_2escm"),(void*)f_5670},
{C_text("f_5674:chicken_2dsyntax_2escm"),(void*)f_5674},
{C_text("f_5717:chicken_2dsyntax_2escm"),(void*)f_5717},
{C_text("f_5719:chicken_2dsyntax_2escm"),(void*)f_5719},
{C_text("f_5723:chicken_2dsyntax_2escm"),(void*)f_5723},
{C_text("f_5734:chicken_2dsyntax_2escm"),(void*)f_5734},
{C_text("f_5737:chicken_2dsyntax_2escm"),(void*)f_5737},
{C_text("f_5760:chicken_2dsyntax_2escm"),(void*)f_5760},
{C_text("f_5779:chicken_2dsyntax_2escm"),(void*)f_5779},
{C_text("f_5789:chicken_2dsyntax_2escm"),(void*)f_5789},
{C_text("f_5796:chicken_2dsyntax_2escm"),(void*)f_5796},
{C_text("f_5806:chicken_2dsyntax_2escm"),(void*)f_5806},
{C_text("f_5808:chicken_2dsyntax_2escm"),(void*)f_5808},
{C_text("f_5816:chicken_2dsyntax_2escm"),(void*)f_5816},
{C_text("f_5824:chicken_2dsyntax_2escm"),(void*)f_5824},
{C_text("f_5826:chicken_2dsyntax_2escm"),(void*)f_5826},
{C_text("f_5830:chicken_2dsyntax_2escm"),(void*)f_5830},
{C_text("f_5889:chicken_2dsyntax_2escm"),(void*)f_5889},
{C_text("f_5891:chicken_2dsyntax_2escm"),(void*)f_5891},
{C_text("f_5895:chicken_2dsyntax_2escm"),(void*)f_5895},
{C_text("f_5898:chicken_2dsyntax_2escm"),(void*)f_5898},
{C_text("f_5901:chicken_2dsyntax_2escm"),(void*)f_5901},
{C_text("f_5904:chicken_2dsyntax_2escm"),(void*)f_5904},
{C_text("f_5911:chicken_2dsyntax_2escm"),(void*)f_5911},
{C_text("f_5921:chicken_2dsyntax_2escm"),(void*)f_5921},
{C_text("f_5924:chicken_2dsyntax_2escm"),(void*)f_5924},
{C_text("f_5930:chicken_2dsyntax_2escm"),(void*)f_5930},
{C_text("f_5941:chicken_2dsyntax_2escm"),(void*)f_5941},
{C_text("f_5957:chicken_2dsyntax_2escm"),(void*)f_5957},
{C_text("f_5967:chicken_2dsyntax_2escm"),(void*)f_5967},
{C_text("f_5990:chicken_2dsyntax_2escm"),(void*)f_5990},
{C_text("f_5993:chicken_2dsyntax_2escm"),(void*)f_5993},
{C_text("f_6010:chicken_2dsyntax_2escm"),(void*)f_6010},
{C_text("f_6016:chicken_2dsyntax_2escm"),(void*)f_6016},
{C_text("f_6033:chicken_2dsyntax_2escm"),(void*)f_6033},
{C_text("f_6056:chicken_2dsyntax_2escm"),(void*)f_6056},
{C_text("f_6084:chicken_2dsyntax_2escm"),(void*)f_6084},
{C_text("f_6086:chicken_2dsyntax_2escm"),(void*)f_6086},
{C_text("f_6090:chicken_2dsyntax_2escm"),(void*)f_6090},
{C_text("f_6093:chicken_2dsyntax_2escm"),(void*)f_6093},
{C_text("f_6096:chicken_2dsyntax_2escm"),(void*)f_6096},
{C_text("f_6099:chicken_2dsyntax_2escm"),(void*)f_6099},
{C_text("f_6106:chicken_2dsyntax_2escm"),(void*)f_6106},
{C_text("f_6116:chicken_2dsyntax_2escm"),(void*)f_6116},
{C_text("f_6119:chicken_2dsyntax_2escm"),(void*)f_6119},
{C_text("f_6125:chicken_2dsyntax_2escm"),(void*)f_6125},
{C_text("f_6132:chicken_2dsyntax_2escm"),(void*)f_6132},
{C_text("f_6148:chicken_2dsyntax_2escm"),(void*)f_6148},
{C_text("f_6158:chicken_2dsyntax_2escm"),(void*)f_6158},
{C_text("f_6181:chicken_2dsyntax_2escm"),(void*)f_6181},
{C_text("f_6184:chicken_2dsyntax_2escm"),(void*)f_6184},
{C_text("f_6201:chicken_2dsyntax_2escm"),(void*)f_6201},
{C_text("f_6207:chicken_2dsyntax_2escm"),(void*)f_6207},
{C_text("f_6256:chicken_2dsyntax_2escm"),(void*)f_6256},
{C_text("f_6258:chicken_2dsyntax_2escm"),(void*)f_6258},
{C_text("f_6262:chicken_2dsyntax_2escm"),(void*)f_6262},
{C_text("f_6268:chicken_2dsyntax_2escm"),(void*)f_6268},
{C_text("f_6271:chicken_2dsyntax_2escm"),(void*)f_6271},
{C_text("f_6283:chicken_2dsyntax_2escm"),(void*)f_6283},
{C_text("f_6286:chicken_2dsyntax_2escm"),(void*)f_6286},
{C_text("f_6292:chicken_2dsyntax_2escm"),(void*)f_6292},
{C_text("f_6295:chicken_2dsyntax_2escm"),(void*)f_6295},
{C_text("f_6304:chicken_2dsyntax_2escm"),(void*)f_6304},
{C_text("f_6305:chicken_2dsyntax_2escm"),(void*)f_6305},
{C_text("f_6321:chicken_2dsyntax_2escm"),(void*)f_6321},
{C_text("f_6352:chicken_2dsyntax_2escm"),(void*)f_6352},
{C_text("f_6354:chicken_2dsyntax_2escm"),(void*)f_6354},
{C_text("f_6373:chicken_2dsyntax_2escm"),(void*)f_6373},
{C_text("f_6379:chicken_2dsyntax_2escm"),(void*)f_6379},
{C_text("f_6386:chicken_2dsyntax_2escm"),(void*)f_6386},
{C_text("f_6390:chicken_2dsyntax_2escm"),(void*)f_6390},
{C_text("f_6394:chicken_2dsyntax_2escm"),(void*)f_6394},
{C_text("f_6398:chicken_2dsyntax_2escm"),(void*)f_6398},
{C_text("f_6426:chicken_2dsyntax_2escm"),(void*)f_6426},
{C_text("f_6447:chicken_2dsyntax_2escm"),(void*)f_6447},
{C_text("f_6526:chicken_2dsyntax_2escm"),(void*)f_6526},
{C_text("f_6569:chicken_2dsyntax_2escm"),(void*)f_6569},
{C_text("f_6582:chicken_2dsyntax_2escm"),(void*)f_6582},
{C_text("f_6584:chicken_2dsyntax_2escm"),(void*)f_6584},
{C_text("f_6622:chicken_2dsyntax_2escm"),(void*)f_6622},
{C_text("f_6632:chicken_2dsyntax_2escm"),(void*)f_6632},
{C_text("f_6645:chicken_2dsyntax_2escm"),(void*)f_6645},
{C_text("f_6680:chicken_2dsyntax_2escm"),(void*)f_6680},
{C_text("f_6687:chicken_2dsyntax_2escm"),(void*)f_6687},
{C_text("f_6691:chicken_2dsyntax_2escm"),(void*)f_6691},
{C_text("f_6695:chicken_2dsyntax_2escm"),(void*)f_6695},
{C_text("f_6697:chicken_2dsyntax_2escm"),(void*)f_6697},
{C_text("f_6701:chicken_2dsyntax_2escm"),(void*)f_6701},
{C_text("f_6709:chicken_2dsyntax_2escm"),(void*)f_6709},
{C_text("f_6718:chicken_2dsyntax_2escm"),(void*)f_6718},
{C_text("f_6721:chicken_2dsyntax_2escm"),(void*)f_6721},
{C_text("f_6724:chicken_2dsyntax_2escm"),(void*)f_6724},
{C_text("f_6746:chicken_2dsyntax_2escm"),(void*)f_6746},
{C_text("f_6753:chicken_2dsyntax_2escm"),(void*)f_6753},
{C_text("f_6757:chicken_2dsyntax_2escm"),(void*)f_6757},
{C_text("f_6768:chicken_2dsyntax_2escm"),(void*)f_6768},
{C_text("f_6771:chicken_2dsyntax_2escm"),(void*)f_6771},
{C_text("f_6774:chicken_2dsyntax_2escm"),(void*)f_6774},
{C_text("f_6788:chicken_2dsyntax_2escm"),(void*)f_6788},
{C_text("f_6795:chicken_2dsyntax_2escm"),(void*)f_6795},
{C_text("f_6799:chicken_2dsyntax_2escm"),(void*)f_6799},
{C_text("f_6811:chicken_2dsyntax_2escm"),(void*)f_6811},
{C_text("f_6813:chicken_2dsyntax_2escm"),(void*)f_6813},
{C_text("f_6817:chicken_2dsyntax_2escm"),(void*)f_6817},
{C_text("f_6819:chicken_2dsyntax_2escm"),(void*)f_6819},
{C_text("f_6825:chicken_2dsyntax_2escm"),(void*)f_6825},
{C_text("f_6839:chicken_2dsyntax_2escm"),(void*)f_6839},
{C_text("f_6843:chicken_2dsyntax_2escm"),(void*)f_6843},
{C_text("f_6851:chicken_2dsyntax_2escm"),(void*)f_6851},
{C_text("f_6854:chicken_2dsyntax_2escm"),(void*)f_6854},
{C_text("f_6857:chicken_2dsyntax_2escm"),(void*)f_6857},
{C_text("f_6860:chicken_2dsyntax_2escm"),(void*)f_6860},
{C_text("f_6863:chicken_2dsyntax_2escm"),(void*)f_6863},
{C_text("f_6866:chicken_2dsyntax_2escm"),(void*)f_6866},
{C_text("f_6869:chicken_2dsyntax_2escm"),(void*)f_6869},
{C_text("f_6872:chicken_2dsyntax_2escm"),(void*)f_6872},
{C_text("f_6875:chicken_2dsyntax_2escm"),(void*)f_6875},
{C_text("f_6878:chicken_2dsyntax_2escm"),(void*)f_6878},
{C_text("f_6885:chicken_2dsyntax_2escm"),(void*)f_6885},
{C_text("f_6901:chicken_2dsyntax_2escm"),(void*)f_6901},
{C_text("f_6903:chicken_2dsyntax_2escm"),(void*)f_6903},
{C_text("f_6911:chicken_2dsyntax_2escm"),(void*)f_6911},
{C_text("f_6921:chicken_2dsyntax_2escm"),(void*)f_6921},
{C_text("f_6925:chicken_2dsyntax_2escm"),(void*)f_6925},
{C_text("f_6935:chicken_2dsyntax_2escm"),(void*)f_6935},
{C_text("f_6939:chicken_2dsyntax_2escm"),(void*)f_6939},
{C_text("f_6941:chicken_2dsyntax_2escm"),(void*)f_6941},
{C_text("f_6949:chicken_2dsyntax_2escm"),(void*)f_6949},
{C_text("f_6951:chicken_2dsyntax_2escm"),(void*)f_6951},
{C_text("f_6955:chicken_2dsyntax_2escm"),(void*)f_6955},
{C_text("f_6977:chicken_2dsyntax_2escm"),(void*)f_6977},
{C_text("f_6979:chicken_2dsyntax_2escm"),(void*)f_6979},
{C_text("f_7027:chicken_2dsyntax_2escm"),(void*)f_7027},
{C_text("f_7080:chicken_2dsyntax_2escm"),(void*)f_7080},
{C_text("f_7091:chicken_2dsyntax_2escm"),(void*)f_7091},
{C_text("f_7128:chicken_2dsyntax_2escm"),(void*)f_7128},
{C_text("f_7156:chicken_2dsyntax_2escm"),(void*)f_7156},
{C_text("f_7183:chicken_2dsyntax_2escm"),(void*)f_7183},
{C_text("f_7193:chicken_2dsyntax_2escm"),(void*)f_7193},
{C_text("f_7195:chicken_2dsyntax_2escm"),(void*)f_7195},
{C_text("f_7220:chicken_2dsyntax_2escm"),(void*)f_7220},
{C_text("f_7255:chicken_2dsyntax_2escm"),(void*)f_7255},
{C_text("f_7257:chicken_2dsyntax_2escm"),(void*)f_7257},
{C_text("f_7261:chicken_2dsyntax_2escm"),(void*)f_7261},
{C_text("f_7273:chicken_2dsyntax_2escm"),(void*)f_7273},
{C_text("f_7276:chicken_2dsyntax_2escm"),(void*)f_7276},
{C_text("f_7279:chicken_2dsyntax_2escm"),(void*)f_7279},
{C_text("f_7282:chicken_2dsyntax_2escm"),(void*)f_7282},
{C_text("f_7293:chicken_2dsyntax_2escm"),(void*)f_7293},
{C_text("f_7295:chicken_2dsyntax_2escm"),(void*)f_7295},
{C_text("f_7321:chicken_2dsyntax_2escm"),(void*)f_7321},
{C_text("f_7332:chicken_2dsyntax_2escm"),(void*)f_7332},
{C_text("f_7415:chicken_2dsyntax_2escm"),(void*)f_7415},
{C_text("f_7417:chicken_2dsyntax_2escm"),(void*)f_7417},
{C_text("f_7421:chicken_2dsyntax_2escm"),(void*)f_7421},
{C_text("f_7424:chicken_2dsyntax_2escm"),(void*)f_7424},
{C_text("f_7454:chicken_2dsyntax_2escm"),(void*)f_7454},
{C_text("f_7464:chicken_2dsyntax_2escm"),(void*)f_7464},
{C_text("f_7492:chicken_2dsyntax_2escm"),(void*)f_7492},
{C_text("f_7494:chicken_2dsyntax_2escm"),(void*)f_7494},
{C_text("f_7498:chicken_2dsyntax_2escm"),(void*)f_7498},
{C_text("f_7517:chicken_2dsyntax_2escm"),(void*)f_7517},
{C_text("f_7521:chicken_2dsyntax_2escm"),(void*)f_7521},
{C_text("f_7525:chicken_2dsyntax_2escm"),(void*)f_7525},
{C_text("f_7527:chicken_2dsyntax_2escm"),(void*)f_7527},
{C_text("f_7548:chicken_2dsyntax_2escm"),(void*)f_7548},
{C_text("f_7566:chicken_2dsyntax_2escm"),(void*)f_7566},
{C_text("f_7574:chicken_2dsyntax_2escm"),(void*)f_7574},
{C_text("f_7578:chicken_2dsyntax_2escm"),(void*)f_7578},
{C_text("f_7588:chicken_2dsyntax_2escm"),(void*)f_7588},
{C_text("f_7594:chicken_2dsyntax_2escm"),(void*)f_7594},
{C_text("f_7608:chicken_2dsyntax_2escm"),(void*)f_7608},
{C_text("f_7634:chicken_2dsyntax_2escm"),(void*)f_7634},
{C_text("f_7658:chicken_2dsyntax_2escm"),(void*)f_7658},
{C_text("f_7666:chicken_2dsyntax_2escm"),(void*)f_7666},
{C_text("f_7674:chicken_2dsyntax_2escm"),(void*)f_7674},
{C_text("f_7678:chicken_2dsyntax_2escm"),(void*)f_7678},
{C_text("f_7681:chicken_2dsyntax_2escm"),(void*)f_7681},
{C_text("f_7684:chicken_2dsyntax_2escm"),(void*)f_7684},
{C_text("f_7693:chicken_2dsyntax_2escm"),(void*)f_7693},
{C_text("f_7694:chicken_2dsyntax_2escm"),(void*)f_7694},
{C_text("f_7702:chicken_2dsyntax_2escm"),(void*)f_7702},
{C_text("f_7706:chicken_2dsyntax_2escm"),(void*)f_7706},
{C_text("f_7710:chicken_2dsyntax_2escm"),(void*)f_7710},
{C_text("f_7718:chicken_2dsyntax_2escm"),(void*)f_7718},
{C_text("f_7724:chicken_2dsyntax_2escm"),(void*)f_7724},
{C_text("f_7730:chicken_2dsyntax_2escm"),(void*)f_7730},
{C_text("f_7733:chicken_2dsyntax_2escm"),(void*)f_7733},
{C_text("f_7736:chicken_2dsyntax_2escm"),(void*)f_7736},
{C_text("f_7740:chicken_2dsyntax_2escm"),(void*)f_7740},
{C_text("f_7748:chicken_2dsyntax_2escm"),(void*)f_7748},
{C_text("f_7751:chicken_2dsyntax_2escm"),(void*)f_7751},
{C_text("f_7754:chicken_2dsyntax_2escm"),(void*)f_7754},
{C_text("f_7757:chicken_2dsyntax_2escm"),(void*)f_7757},
{C_text("f_7764:chicken_2dsyntax_2escm"),(void*)f_7764},
{C_text("f_7790:chicken_2dsyntax_2escm"),(void*)f_7790},
{C_text("f_7815:chicken_2dsyntax_2escm"),(void*)f_7815},
{C_text("f_7824:chicken_2dsyntax_2escm"),(void*)f_7824},
{C_text("f_7858:chicken_2dsyntax_2escm"),(void*)f_7858},
{C_text("f_7883:chicken_2dsyntax_2escm"),(void*)f_7883},
{C_text("f_7892:chicken_2dsyntax_2escm"),(void*)f_7892},
{C_text("f_7940:chicken_2dsyntax_2escm"),(void*)f_7940},
{C_text("f_7942:chicken_2dsyntax_2escm"),(void*)f_7942},
{C_text("f_7946:chicken_2dsyntax_2escm"),(void*)f_7946},
{C_text("f_7956:chicken_2dsyntax_2escm"),(void*)f_7956},
{C_text("f_7983:chicken_2dsyntax_2escm"),(void*)f_7983},
{C_text("f_7986:chicken_2dsyntax_2escm"),(void*)f_7986},
{C_text("f_8001:chicken_2dsyntax_2escm"),(void*)f_8001},
{C_text("f_8009:chicken_2dsyntax_2escm"),(void*)f_8009},
{C_text("f_8018:chicken_2dsyntax_2escm"),(void*)f_8018},
{C_text("f_8033:chicken_2dsyntax_2escm"),(void*)f_8033},
{C_text("f_8043:chicken_2dsyntax_2escm"),(void*)f_8043},
{C_text("f_8046:chicken_2dsyntax_2escm"),(void*)f_8046},
{C_text("f_8062:chicken_2dsyntax_2escm"),(void*)f_8062},
{C_text("f_8082:chicken_2dsyntax_2escm"),(void*)f_8082},
{C_text("f_8084:chicken_2dsyntax_2escm"),(void*)f_8084},
{C_text("f_8086:chicken_2dsyntax_2escm"),(void*)f_8086},
{C_text("f_8090:chicken_2dsyntax_2escm"),(void*)f_8090},
{C_text("f_8099:chicken_2dsyntax_2escm"),(void*)f_8099},
{C_text("f_8102:chicken_2dsyntax_2escm"),(void*)f_8102},
{C_text("f_8111:chicken_2dsyntax_2escm"),(void*)f_8111},
{C_text("f_8127:chicken_2dsyntax_2escm"),(void*)f_8127},
{C_text("f_8131:chicken_2dsyntax_2escm"),(void*)f_8131},
{C_text("f_8174:chicken_2dsyntax_2escm"),(void*)f_8174},
{C_text("f_8186:chicken_2dsyntax_2escm"),(void*)f_8186},
{C_text("f_8188:chicken_2dsyntax_2escm"),(void*)f_8188},
{C_text("f_8192:chicken_2dsyntax_2escm"),(void*)f_8192},
{C_text("f_8195:chicken_2dsyntax_2escm"),(void*)f_8195},
{C_text("f_8214:chicken_2dsyntax_2escm"),(void*)f_8214},
{C_text("f_8230:chicken_2dsyntax_2escm"),(void*)f_8230},
{C_text("f_8232:chicken_2dsyntax_2escm"),(void*)f_8232},
{C_text("f_8236:chicken_2dsyntax_2escm"),(void*)f_8236},
{C_text("f_8239:chicken_2dsyntax_2escm"),(void*)f_8239},
{C_text("f_8252:chicken_2dsyntax_2escm"),(void*)f_8252},
{C_text("f_8254:chicken_2dsyntax_2escm"),(void*)f_8254},
{C_text("f_8258:chicken_2dsyntax_2escm"),(void*)f_8258},
{C_text("f_8272:chicken_2dsyntax_2escm"),(void*)f_8272},
{C_text("f_8278:chicken_2dsyntax_2escm"),(void*)f_8278},
{C_text("f_8300:chicken_2dsyntax_2escm"),(void*)f_8300},
{C_text("f_8306:chicken_2dsyntax_2escm"),(void*)f_8306},
{C_text("f_8310:chicken_2dsyntax_2escm"),(void*)f_8310},
{C_text("f_8320:chicken_2dsyntax_2escm"),(void*)f_8320},
{C_text("f_8322:chicken_2dsyntax_2escm"),(void*)f_8322},
{C_text("f_8351:chicken_2dsyntax_2escm"),(void*)f_8351},
{C_text("f_8370:chicken_2dsyntax_2escm"),(void*)f_8370},
{C_text("f_8404:chicken_2dsyntax_2escm"),(void*)f_8404},
{C_text("f_8428:chicken_2dsyntax_2escm"),(void*)f_8428},
{C_text("f_8430:chicken_2dsyntax_2escm"),(void*)f_8430},
{C_text("f_8434:chicken_2dsyntax_2escm"),(void*)f_8434},
{C_text("f_8440:chicken_2dsyntax_2escm"),(void*)f_8440},
{C_text("f_8474:chicken_2dsyntax_2escm"),(void*)f_8474},
{C_text("f_8510:chicken_2dsyntax_2escm"),(void*)f_8510},
{C_text("f_8512:chicken_2dsyntax_2escm"),(void*)f_8512},
{C_text("f_8516:chicken_2dsyntax_2escm"),(void*)f_8516},
{C_text("f_8524:chicken_2dsyntax_2escm"),(void*)f_8524},
{C_text("f_8529:chicken_2dsyntax_2escm"),(void*)f_8529},
{C_text("f_8554:chicken_2dsyntax_2escm"),(void*)f_8554},
{C_text("f_8564:chicken_2dsyntax_2escm"),(void*)f_8564},
{C_text("f_8566:chicken_2dsyntax_2escm"),(void*)f_8566},
{C_text("f_8570:chicken_2dsyntax_2escm"),(void*)f_8570},
{C_text("f_8576:chicken_2dsyntax_2escm"),(void*)f_8576},
{C_text("f_8597:chicken_2dsyntax_2escm"),(void*)f_8597},
{C_text("f_8604:chicken_2dsyntax_2escm"),(void*)f_8604},
{C_text("f_8627:chicken_2dsyntax_2escm"),(void*)f_8627},
{C_text("f_8631:chicken_2dsyntax_2escm"),(void*)f_8631},
{C_text("f_8652:chicken_2dsyntax_2escm"),(void*)f_8652},
{C_text("f_8655:chicken_2dsyntax_2escm"),(void*)f_8655},
{C_text("f_8659:chicken_2dsyntax_2escm"),(void*)f_8659},
{C_text("f_8667:chicken_2dsyntax_2escm"),(void*)f_8667},
{C_text("f_8671:chicken_2dsyntax_2escm"),(void*)f_8671},
{C_text("f_8677:chicken_2dsyntax_2escm"),(void*)f_8677},
{C_text("f_8678:chicken_2dsyntax_2escm"),(void*)f_8678},
{C_text("f_8689:chicken_2dsyntax_2escm"),(void*)f_8689},
{C_text("f_8704:chicken_2dsyntax_2escm"),(void*)f_8704},
{C_text("f_8706:chicken_2dsyntax_2escm"),(void*)f_8706},
{C_text("f_8725:chicken_2dsyntax_2escm"),(void*)f_8725},
{C_text("f_8733:chicken_2dsyntax_2escm"),(void*)f_8733},
{C_text("f_8739:chicken_2dsyntax_2escm"),(void*)f_8739},
{C_text("f_8741:chicken_2dsyntax_2escm"),(void*)f_8741},
{C_text("f_8766:chicken_2dsyntax_2escm"),(void*)f_8766},
{C_text("f_8790:chicken_2dsyntax_2escm"),(void*)f_8790},
{C_text("f_8827:chicken_2dsyntax_2escm"),(void*)f_8827},
{C_text("f_8855:chicken_2dsyntax_2escm"),(void*)f_8855},
{C_text("f_8889:chicken_2dsyntax_2escm"),(void*)f_8889},
{C_text("f_8920:chicken_2dsyntax_2escm"),(void*)f_8920},
{C_text("f_8927:chicken_2dsyntax_2escm"),(void*)f_8927},
{C_text("f_8933:chicken_2dsyntax_2escm"),(void*)f_8933},
{C_text("f_8958:chicken_2dsyntax_2escm"),(void*)f_8958},
{C_text("f_8967:chicken_2dsyntax_2escm"),(void*)f_8967},
{C_text("f_8980:chicken_2dsyntax_2escm"),(void*)f_8980},
{C_text("f_9005:chicken_2dsyntax_2escm"),(void*)f_9005},
{C_text("f_9041:chicken_2dsyntax_2escm"),(void*)f_9041},
{C_text("f_9043:chicken_2dsyntax_2escm"),(void*)f_9043},
{C_text("f_9047:chicken_2dsyntax_2escm"),(void*)f_9047},
{C_text("f_9054:chicken_2dsyntax_2escm"),(void*)f_9054},
{C_text("f_9058:chicken_2dsyntax_2escm"),(void*)f_9058},
{C_text("f_9066:chicken_2dsyntax_2escm"),(void*)f_9066},
{C_text("f_9080:chicken_2dsyntax_2escm"),(void*)f_9080},
{C_text("f_9086:chicken_2dsyntax_2escm"),(void*)f_9086},
{C_text("f_9093:chicken_2dsyntax_2escm"),(void*)f_9093},
{C_text("f_9099:chicken_2dsyntax_2escm"),(void*)f_9099},
{C_text("f_9112:chicken_2dsyntax_2escm"),(void*)f_9112},
{C_text("f_9146:chicken_2dsyntax_2escm"),(void*)f_9146},
{C_text("f_9156:chicken_2dsyntax_2escm"),(void*)f_9156},
{C_text("f_9171:chicken_2dsyntax_2escm"),(void*)f_9171},
{C_text("f_9173:chicken_2dsyntax_2escm"),(void*)f_9173},
{C_text("f_9177:chicken_2dsyntax_2escm"),(void*)f_9177},
{C_text("f_9192:chicken_2dsyntax_2escm"),(void*)f_9192},
{C_text("f_9194:chicken_2dsyntax_2escm"),(void*)f_9194},
{C_text("f_9198:chicken_2dsyntax_2escm"),(void*)f_9198},
{C_text("f_9220:chicken_2dsyntax_2escm"),(void*)f_9220},
{C_text("f_9222:chicken_2dsyntax_2escm"),(void*)f_9222},
{C_text("f_9226:chicken_2dsyntax_2escm"),(void*)f_9226},
{C_text("f_9244:chicken_2dsyntax_2escm"),(void*)f_9244},
{C_text("f_9246:chicken_2dsyntax_2escm"),(void*)f_9246},
{C_text("f_9255:chicken_2dsyntax_2escm"),(void*)f_9255},
{C_text("f_9261:chicken_2dsyntax_2escm"),(void*)f_9261},
{C_text("f_9267:chicken_2dsyntax_2escm"),(void*)f_9267},
{C_text("f_9281:chicken_2dsyntax_2escm"),(void*)f_9281},
{C_text("f_9290:chicken_2dsyntax_2escm"),(void*)f_9290},
{C_text("f_9292:chicken_2dsyntax_2escm"),(void*)f_9292},
{C_text("f_9317:chicken_2dsyntax_2escm"),(void*)f_9317},
{C_text("f_9328:chicken_2dsyntax_2escm"),(void*)f_9328},
{C_text("f_9330:chicken_2dsyntax_2escm"),(void*)f_9330},
{C_text("f_9349:chicken_2dsyntax_2escm"),(void*)f_9349},
{C_text("f_9357:chicken_2dsyntax_2escm"),(void*)f_9357},
{C_text("f_9366:chicken_2dsyntax_2escm"),(void*)f_9366},
{C_text("f_9372:chicken_2dsyntax_2escm"),(void*)f_9372},
{C_text("f_9376:chicken_2dsyntax_2escm"),(void*)f_9376},
{C_text("f_9384:chicken_2dsyntax_2escm"),(void*)f_9384},
{C_text("f_9390:chicken_2dsyntax_2escm"),(void*)f_9390},
{C_text("f_9394:chicken_2dsyntax_2escm"),(void*)f_9394},
{C_text("f_9402:chicken_2dsyntax_2escm"),(void*)f_9402},
{C_text("f_9405:chicken_2dsyntax_2escm"),(void*)f_9405},
{C_text("f_9409:chicken_2dsyntax_2escm"),(void*)f_9409},
{C_text("f_9417:chicken_2dsyntax_2escm"),(void*)f_9417},
{C_text("f_9420:chicken_2dsyntax_2escm"),(void*)f_9420},
{C_text("f_9433:chicken_2dsyntax_2escm"),(void*)f_9433},
{C_text("f_9450:chicken_2dsyntax_2escm"),(void*)f_9450},
{C_text("f_9461:chicken_2dsyntax_2escm"),(void*)f_9461},
{C_text("f_9509:chicken_2dsyntax_2escm"),(void*)f_9509},
{C_text("f_9513:chicken_2dsyntax_2escm"),(void*)f_9513},
{C_text("f_9525:chicken_2dsyntax_2escm"),(void*)f_9525},
{C_text("f_9537:chicken_2dsyntax_2escm"),(void*)f_9537},
{C_text("f_9539:chicken_2dsyntax_2escm"),(void*)f_9539},
{C_text("f_9587:chicken_2dsyntax_2escm"),(void*)f_9587},
{C_text("f_9635:chicken_2dsyntax_2escm"),(void*)f_9635},
{C_text("f_9642:chicken_2dsyntax_2escm"),(void*)f_9642},
{C_text("f_9712:chicken_2dsyntax_2escm"),(void*)f_9712},
{C_text("f_9730:chicken_2dsyntax_2escm"),(void*)f_9730},
{C_text("f_9734:chicken_2dsyntax_2escm"),(void*)f_9734},
{C_text("f_9750:chicken_2dsyntax_2escm"),(void*)f_9750},
{C_text("f_9754:chicken_2dsyntax_2escm"),(void*)f_9754},
{C_text("f_9766:chicken_2dsyntax_2escm"),(void*)f_9766},
{C_text("f_9776:chicken_2dsyntax_2escm"),(void*)f_9776},
{C_text("f_9824:chicken_2dsyntax_2escm"),(void*)f_9824},
{C_text("f_9872:chicken_2dsyntax_2escm"),(void*)f_9872},
{C_text("f_9879:chicken_2dsyntax_2escm"),(void*)f_9879},
{C_text("f_9942:chicken_2dsyntax_2escm"),(void*)f_9942},
{C_text("f_9990:chicken_2dsyntax_2escm"),(void*)f_9990},
{C_text("toplevel:chicken_2dsyntax_2escm"),(void*)C_chicken_2dsyntax_toplevel},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
S|applied compiler syntax:
S|  scheme#for-each		2
S|  ##sys#map		11
S|  chicken.base#foldl		4
S|  scheme#map		42
S|  chicken.base#foldr		4
o|eliminated procedure checks: 737 
o|specializations:
o|  1 (chicken.base#add1 *)
o|  1 (scheme#zero? integer)
o|  2 (scheme#string-append string string)
o|  14 (scheme#cddr (pair * pair))
o|  2 (scheme#length list)
o|  1 (scheme#caddr (pair * (pair * pair)))
o|  4 (scheme#cadr (pair * pair))
o|  4 (scheme#cdddr (pair * (pair * pair)))
o|  1 (scheme#eqv? * *)
o|  40 (##sys#check-list (or pair list) *)
o|  69 (scheme#cdr pair)
o|  24 (scheme#car pair)
(o e)|safe calls: 1478 
o|safe globals: (posv posq make-list iota find-tail find length+ lset=/eq? lset<=/eq? list-tabulate lset-intersection/eq? lset-union/eq? lset-difference/eq? lset-adjoin/eq? list-index last unzip1 remove filter-map filter alist-cons delete-duplicates fifth fourth third second first delete concatenate cons* any every append-map split-at drop take span partition) 
o|removed side-effect free assignment to unused variable: partition 
o|removed side-effect free assignment to unused variable: span 
o|inlining procedure: k4324 
o|inlining procedure: k4324 
o|removed side-effect free assignment to unused variable: drop 
o|removed side-effect free assignment to unused variable: append-map 
o|inlining procedure: k4594 
o|inlining procedure: k4594 
o|inlining procedure: k4625 
o|inlining procedure: k4625 
o|removed side-effect free assignment to unused variable: cons* 
o|removed side-effect free assignment to unused variable: concatenate 
o|removed side-effect free assignment to unused variable: first 
o|removed side-effect free assignment to unused variable: second 
o|removed side-effect free assignment to unused variable: third 
o|removed side-effect free assignment to unused variable: fourth 
o|removed side-effect free assignment to unused variable: fifth 
o|removed side-effect free assignment to unused variable: delete-duplicates 
o|removed side-effect free assignment to unused variable: alist-cons 
o|inlining procedure: k4842 
o|inlining procedure: k4842 
o|inlining procedure: k4834 
o|inlining procedure: k4834 
o|removed side-effect free assignment to unused variable: filter-map 
o|removed side-effect free assignment to unused variable: remove 
o|removed side-effect free assignment to unused variable: unzip1 
o|removed side-effect free assignment to unused variable: last 
o|removed side-effect free assignment to unused variable: list-index 
o|removed side-effect free assignment to unused variable: lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: lset-difference/eq? 
o|removed side-effect free assignment to unused variable: lset-union/eq? 
o|removed side-effect free assignment to unused variable: lset-intersection/eq? 
o|inlining procedure: k5233 
o|inlining procedure: k5233 
o|removed side-effect free assignment to unused variable: lset<=/eq? 
o|removed side-effect free assignment to unused variable: lset=/eq? 
o|removed side-effect free assignment to unused variable: length+ 
o|removed side-effect free assignment to unused variable: find 
o|removed side-effect free assignment to unused variable: find-tail 
o|removed side-effect free assignment to unused variable: iota 
o|removed side-effect free assignment to unused variable: make-list 
o|removed side-effect free assignment to unused variable: posq 
o|removed side-effect free assignment to unused variable: posv 
o|inlining procedure: k5762 
o|inlining procedure: k5762 
o|inlining procedure: k5790 
o|inlining procedure: k5790 
o|inlining procedure: k5834 
o|inlining procedure: k5834 
o|inlining procedure: k5913 
o|inlining procedure: k5913 
o|inlining procedure: k6011 
o|inlining procedure: k6011 
o|inlining procedure: k6108 
o|inlining procedure: k6108 
o|inlining procedure: k6202 
o|inlining procedure: k6202 
o|inlining procedure: k6307 
o|inlining procedure: k6307 
o|inlining procedure: k6356 
o|inlining procedure: k6356 
o|inlining procedure: k6403 
o|inlining procedure: k6403 
o|inlining procedure: k6442 
o|inlining procedure: k6442 
o|inlining procedure: k6515 
o|inlining procedure: k6515 
o|inlining procedure: k6571 
o|inlining procedure: k6571 
o|inlining procedure: k6586 
o|inlining procedure: k6586 
o|inlining procedure: k6624 
o|inlining procedure: k6624 
o|inlining procedure: k6647 
o|inlining procedure: k6647 
o|inlining procedure: k6710 
o|inlining procedure: k6710 
o|inlining procedure: k6827 
o|inlining procedure: k6827 
o|contracted procedure: "(chicken-syntax.scm:1026) split-at" 
o|inlining procedure: k4382 
o|inlining procedure: k4382 
o|inlining procedure: k6956 
o|inlining procedure: k6956 
o|inlining procedure: k6981 
o|inlining procedure: k6981 
o|inlining procedure: k7029 
o|inlining procedure: k7057 
o|inlining procedure: k7057 
o|inlining procedure: k7029 
o|inlining procedure: k7089 
o|inlining procedure: k7089 
o|inlining procedure: k7129 
o|inlining procedure: k7129 
o|inlining procedure: k6905 
o|inlining procedure: k6905 
o|inlining procedure: k7197 
o|contracted procedure: "(chicken-syntax.scm:996) g28412850" 
o|inlining procedure: k7197 
o|inlining procedure: k7297 
o|inlining procedure: k7297 
o|removed unused formal parameters: (rename2636) 
o|inlining procedure: k7596 
o|inlining procedure: k7596 
o|removed unused parameter to known procedure: rename2636 "(chicken-syntax.scm:898) make-if-tree2616" 
o|contracted procedure: "(chicken-syntax.scm:896) make-default-procs2615" 
o|inlining procedure: k7529 
o|inlining procedure: k7529 
o|inlining procedure: k7792 
o|inlining procedure: k7792 
o|inlining procedure: k7826 
o|inlining procedure: k7826 
o|inlining procedure: k7860 
o|inlining procedure: k7860 
o|inlining procedure: k7894 
o|inlining procedure: k7894 
o|inlining procedure: k7958 
o|inlining procedure: k7958 
o|inlining procedure: k8010 
o|inlining procedure: k8010 
o|inlining procedure: k8100 
o|inlining procedure: k8100 
o|inlining procedure: k8115 
o|inlining procedure: k8115 
o|inlining procedure: k8324 
o|inlining procedure: k8324 
o|inlining procedure: k8372 
o|contracted procedure: "(chicken-syntax.scm:675) g24582467" 
o|inlining procedure: k8372 
o|inlining procedure: k8406 
o|contracted procedure: "(chicken-syntax.scm:676) g24822483" 
o|inlining procedure: k8406 
o|substituted constant variable: g24742477 
o|inlining procedure: k8442 
o|inlining procedure: k8442 
o|inlining procedure: k8476 
o|inlining procedure: k8476 
o|inlining procedure: k8531 
o|inlining procedure: k8531 
o|inlining procedure: k8578 
o|inlining procedure: k8578 
o|inlining procedure: k8606 
o|inlining procedure: k8606 
o|inlining procedure: k8708 
o|inlining procedure: k8743 
o|inlining procedure: k8743 
o|inlining procedure: k8708 
o|inlining procedure: k8857 
o|contracted procedure: "(chicken-syntax.scm:633) g23502359" 
o|inlining procedure: k8857 
o|inlining procedure: k8891 
o|inlining procedure: k8891 
o|inlining procedure: k8935 
o|inlining procedure: k8935 
o|inlining procedure: k8969 
o|inlining procedure: k8969 
o|inlining procedure: k8992 
o|inlining procedure: k8992 
o|inlining procedure: k9007 
o|inlining procedure: k9007 
o|inlining procedure: k9114 
o|contracted procedure: "(chicken-syntax.scm:592) g21652183" 
o|inlining procedure: k9114 
o|inlining procedure: k9148 
o|contracted procedure: "(chicken-syntax.scm:588) g21502172" 
o|inlining procedure: k9148 
o|inlining procedure: k9269 
o|inlining procedure: k9269 
o|inlining procedure: k9294 
o|inlining procedure: k9294 
o|contracted procedure: "(chicken-syntax.scm:501) pname1591" 
o|inlining procedure: k9335 
o|inlining procedure: k9335 
o|removed unused formal parameters: (z1698) 
o|removed unused formal parameters: (z1726) 
o|inlining procedure: k9541 
o|contracted procedure: "(chicken-syntax.scm:538) g20302040" 
o|inlining procedure: k9541 
o|inlining procedure: k9589 
o|contracted procedure: "(chicken-syntax.scm:536) g19942004" 
o|inlining procedure: k9589 
o|inlining procedure: k9637 
o|contracted procedure: "(chicken-syntax.scm:533) g19521963" 
o|inlining procedure: k9637 
o|inlining procedure: k9687 
o|inlining procedure: k9687 
o|inlining procedure: k9778 
o|contracted procedure: "(chicken-syntax.scm:526) g19161926" 
o|inlining procedure: k9778 
o|inlining procedure: k9826 
o|contracted procedure: "(chicken-syntax.scm:523) g18801890" 
o|inlining procedure: k9826 
o|inlining procedure: k9874 
o|inlining procedure: k9874 
o|inlining procedure: k9924 
o|inlining procedure: k9924 
o|inlining procedure: k9944 
o|inlining procedure: k9944 
o|inlining procedure: k9992 
o|inlining procedure: k9992 
o|inlining procedure: k10040 
o|inlining procedure: k10040 
o|inlining procedure: k10088 
o|removed unused parameter to known procedure: z1726 "(chicken-syntax.scm:503) g17151724" 
o|inlining procedure: k10088 
o|inlining procedure: k10122 
o|removed unused parameter to known procedure: z1698 "(chicken-syntax.scm:502) g16871696" 
o|inlining procedure: k10122 
o|inlining procedure: k10156 
o|inlining procedure: k10156 
o|inlining procedure: k10190 
o|inlining procedure: k10190 
o|inlining procedure: k10224 
o|inlining procedure: k10224 
o|removed unused formal parameters: (x1313) 
o|removed unused formal parameters: (x1341) 
o|inlining procedure: k10379 
o|contracted procedure: "(chicken-syntax.scm:483) g15591569" 
o|inlining procedure: k10379 
o|inlining procedure: k10427 
o|contracted procedure: "(chicken-syntax.scm:481) g15231533" 
o|inlining procedure: k10427 
o|inlining procedure: k10526 
o|contracted procedure: "(chicken-syntax.scm:476) g14871497" 
o|inlining procedure: k10526 
o|inlining procedure: k10574 
o|contracted procedure: "(chicken-syntax.scm:474) g14511461" 
o|inlining procedure: k10574 
o|inlining procedure: k10657 
o|inlining procedure: k10657 
o|inlining procedure: k10707 
o|inlining procedure: k10707 
o|inlining procedure: k10727 
o|inlining procedure: k10727 
o|inlining procedure: k10775 
o|inlining procedure: k10775 
o|inlining procedure: k10809 
o|removed unused parameter to known procedure: x1341 "(chicken-syntax.scm:464) g13301339" 
o|inlining procedure: k10809 
o|inlining procedure: k10843 
o|removed unused parameter to known procedure: x1313 "(chicken-syntax.scm:463) g13021311" 
o|inlining procedure: k10843 
o|inlining procedure: k10877 
o|inlining procedure: k10877 
o|inlining procedure: k10987 
o|inlining procedure: k10987 
o|inlining procedure: k11109 
o|inlining procedure: k11109 
o|inlining procedure: k11130 
o|inlining procedure: k11142 
o|inlining procedure: k11142 
o|inlining procedure: k11130 
o|inlining procedure: k11202 
o|inlining procedure: k11202 
o|inlining procedure: k11262 
o|inlining procedure: k11262 
o|inlining procedure: k11351 
o|inlining procedure: k11351 
o|substituted constant variable: a11386 
o|substituted constant variable: a11411 
o|inlining procedure: k11420 
o|inlining procedure: k11420 
o|inlining procedure: k11475 
o|inlining procedure: k11475 
o|inlining procedure: k11504 
o|inlining procedure: k11519 
o|inlining procedure: k11535 
o|inlining procedure: k11535 
o|inlining procedure: k11519 
o|inlining procedure: k11504 
o|inlining procedure: k11569 
o|inlining procedure: k11585 
o|inlining procedure: k11585 
o|inlining procedure: k11569 
o|inlining procedure: k11623 
o|inlining procedure: k11623 
o|inlining procedure: k11687 
o|inlining procedure: k11687 
o|inlining procedure: k11796 
o|inlining procedure: k11796 
o|inlining procedure: k11909 
o|inlining procedure: k11909 
o|inlining procedure: k11930 
o|inlining procedure: k11930 
o|inlining procedure: k11976 
o|inlining procedure: k11976 
o|inlining procedure: k12016 
o|inlining procedure: k12072 
o|contracted procedure: "(chicken-syntax.scm:201) g919929" 
o|inlining procedure: k12072 
o|inlining procedure: k12142 
o|inlining procedure: k12169 
o|contracted procedure: "(chicken-syntax.scm:192) g885894" 
o|propagated global variable: g902903 chicken.compiler.scrutinizer#check-and-validate-type 
o|inlining procedure: k12169 
o|inlining procedure: k12142 
o|inlining procedure: k12213 
o|inlining procedure: k12213 
o|inlining procedure: k12016 
o|inlining procedure: k12260 
o|inlining procedure: k12260 
o|inlining procedure: k12297 
o|inlining procedure: k12297 
o|inlining procedure: k12346 
o|inlining procedure: k12437 
o|contracted procedure: "(chicken-syntax.scm:154) g816825" 
o|inlining procedure: k12437 
o|inlining procedure: k12471 
o|contracted procedure: "(chicken-syntax.scm:154) g788797" 
o|inlining procedure: k12471 
o|inlining procedure: k12346 
o|inlining procedure: k12508 
o|inlining procedure: k12523 
o|inlining procedure: k12539 
o|inlining procedure: k12539 
o|inlining procedure: k12523 
o|inlining procedure: k12508 
o|inlining procedure: k12573 
o|inlining procedure: k12589 
o|inlining procedure: k12589 
o|inlining procedure: k12624 
o|inlining procedure: k12624 
o|inlining procedure: k12573 
o|inlining procedure: k12655 
o|inlining procedure: k12655 
o|inlining procedure: k12693 
o|inlining procedure: k12693 
o|inlining procedure: k12720 
o|inlining procedure: k12720 
o|inlining procedure: k12749 
o|inlining procedure: k12749 
o|inlining procedure: k12831 
o|inlining procedure: k12831 
o|inlining procedure: k12873 
o|inlining procedure: k12873 
o|inlining procedure: k12988 
o|inlining procedure: k12988 
o|inlining procedure: k13008 
o|inlining procedure: k13008 
o|replaced variables: 2097 
o|removed binding forms: 473 
o|substituted constant variable: r432513170 
o|removed side-effect free assignment to unused variable: every 
o|removed side-effect free assignment to unused variable: any 
o|removed side-effect free assignment to unused variable: filter 
o|removed side-effect free assignment to unused variable: list-tabulate 
o|substituted constant variable: r579113187 
o|substituted constant variable: r635713200 
o|substituted constant variable: r651613209 
o|substituted constant variable: r657213211 
o|substituted constant variable: r682813220 
o|substituted constant variable: r713013236 
o|substituted constant variable: r690613239 
o|converted assignments to bindings: (genvars2827) 
o|substituted constant variable: r753013246 
o|converted assignments to bindings: (make-if-tree2616) 
o|substituted constant variable: r811613271 
o|substituted constant variable: r860713286 
o|substituted constant variable: r927013308 
o|substituted constant variable: r968813321 
o|substituted constant variable: r992513329 
o|substituted constant variable: r1070813356 
o|substituted constant variable: r1114313374 
o|substituted constant variable: r1113113375 
o|substituted constant variable: r1152013394 
o|substituted constant variable: r1150513395 
o|substituted constant variable: r1157013399 
o|substituted constant variable: r1168813403 
o|substituted constant variable: r1179713404 
o|substituted constant variable: r1197713410 
o|substituted constant variable: r1221413421 
o|substituted constant variable: r1229813427 
o|substituted constant variable: r1252413438 
o|substituted constant variable: r1250913439 
o|substituted constant variable: r1262513444 
o|substituted constant variable: r1257413445 
o|substituted constant variable: r1269413448 
o|substituted constant variable: r1275013454 
o|substituted constant variable: r1275013454 
o|substituted constant variable: r1298913460 
o|substituted constant variable: r1298913460 
o|converted assignments to bindings: (parse-clause597) 
o|simplifications: ((let . 3)) 
o|replaced variables: 77 
o|removed binding forms: 1833 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:533) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:503) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:502) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:464) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:463) ##sys#slot" 
o|removed binding forms: 112 
o|contracted procedure: k9674 
o|contracted procedure: k10113 
o|contracted procedure: k10147 
o|contracted procedure: k10834 
o|contracted procedure: k10868 
o|removed binding forms: 5 
o|removed binding forms: 5 
o|simplifications: ((let . 32) (if . 30) (##core#call . 1222)) 
o|  call simplifications:
o|    scheme#cdddr	2
o|    chicken.fixnum#fx=
o|    scheme#vector
o|    ##sys#pair?	7
o|    ##sys#eq?	7
o|    ##sys#car	15
o|    ##sys#cdr	22
o|    scheme#symbol?	7
o|    scheme#list?	2
o|    scheme#cdar
o|    scheme#caar
o|    scheme#assq	2
o|    scheme#apply
o|    scheme#eq?	5
o|    ##sys#call-with-values	3
o|    scheme#values
o|    chicken.fixnum#fx>=
o|    chicken.fixnum#fx+	3
o|    scheme#cadddr	2
o|    scheme#cddddr
o|    ##sys#check-list	37
o|    ##sys#setslot	50
o|    ##sys#slot	196
o|    scheme#cddr	7
o|    scheme#caddr	14
o|    scheme#not	15
o|    scheme#memq	7
o|    scheme#list	9
o|    scheme#cadr	48
o|    scheme#null?	29
o|    scheme#string?
o|    scheme#pair?	96
o|    scheme#cdr	18
o|    ##sys#cons	140
o|    ##sys#list	291
o|    chicken.fixnum#fx<=	2
o|    scheme#car	45
o|    chicken.fixnum#fx-	4
o|    scheme#cons	128
o|contracted procedure: k4327 
o|contracted procedure: k4334 
o|contracted procedure: k4344 
o|contracted procedure: k5679 
o|contracted procedure: k5711 
o|contracted procedure: k5707 
o|contracted procedure: k5687 
o|contracted procedure: k5703 
o|contracted procedure: k5695 
o|contracted procedure: k5699 
o|contracted procedure: k5691 
o|contracted procedure: k5683 
o|contracted procedure: k5724 
o|contracted procedure: k5797 
o|contracted procedure: k5729 
o|contracted procedure: k5781 
o|contracted procedure: k5742 
o|contracted procedure: k5750 
o|contracted procedure: k5754 
o|contracted procedure: k5746 
o|contracted procedure: k5765 
o|contracted procedure: k5773 
o|contracted procedure: k5762 
o|contracted procedure: k5784 
o|contracted procedure: k5818 
o|contracted procedure: k5831 
o|contracted procedure: k5837 
o|contracted procedure: k5860 
o|contracted procedure: k5856 
o|contracted procedure: k5850 
o|contracted procedure: k5844 
o|contracted procedure: k5876 
o|contracted procedure: k5872 
o|contracted procedure: k6074 
o|contracted procedure: k5883 
o|contracted procedure: k5916 
o|contracted procedure: k5951 
o|contracted procedure: k5947 
o|contracted procedure: k5943 
o|contracted procedure: k5935 
o|contracted procedure: k5961 
o|contracted procedure: k5980 
o|contracted procedure: k5976 
o|contracted procedure: k5972 
o|contracted procedure: k6000 
o|contracted procedure: k6004 
o|contracted procedure: k6020 
o|contracted procedure: k6048 
o|contracted procedure: k6040 
o|contracted procedure: k6044 
o|contracted procedure: k6060 
o|contracted procedure: k6070 
o|contracted procedure: k6063 
o|contracted procedure: k6250 
o|contracted procedure: k6078 
o|contracted procedure: k6111 
o|contracted procedure: k6142 
o|contracted procedure: k6138 
o|contracted procedure: k6134 
o|contracted procedure: k6152 
o|contracted procedure: k6173 
o|contracted procedure: k6167 
o|contracted procedure: k6163 
o|contracted procedure: k6191 
o|contracted procedure: k6195 
o|contracted procedure: k6211 
o|contracted procedure: k6228 
o|contracted procedure: k6236 
o|contracted procedure: k6246 
o|contracted procedure: k6239 
o|contracted procedure: k6263 
o|contracted procedure: k6272 
o|contracted procedure: k6275 
o|contracted procedure: k6278 
o|contracted procedure: k6287 
o|contracted procedure: k6296 
o|contracted procedure: k6299 
o|contracted procedure: k6310 
o|contracted procedure: k6316 
o|contracted procedure: k6618 
o|contracted procedure: k6330 
o|contracted procedure: k6562 
o|contracted procedure: k6566 
o|contracted procedure: k6574 
o|contracted procedure: k6577 
o|contracted procedure: k6558 
o|contracted procedure: k6554 
o|contracted procedure: k6338 
o|contracted procedure: k6542 
o|contracted procedure: k6550 
o|contracted procedure: k6546 
o|contracted procedure: k6346 
o|contracted procedure: k6342 
o|contracted procedure: k6334 
o|contracted procedure: k6326 
o|contracted procedure: k6359 
o|contracted procedure: k6362 
o|contracted procedure: k6538 
o|contracted procedure: k6365 
o|contracted procedure: k6368 
o|contracted procedure: k6485 
o|contracted procedure: k6501 
o|contracted procedure: k6509 
o|contracted procedure: k6505 
o|contracted procedure: k6497 
o|contracted procedure: k6489 
o|contracted procedure: k6493 
o|contracted procedure: k6374 
o|contracted procedure: k6409 
o|contracted procedure: k6420 
o|contracted procedure: k6416 
o|contracted procedure: k6428 
o|contracted procedure: k6435 
o|contracted procedure: k6442 
o|contracted procedure: k6461 
o|contracted procedure: k6477 
o|contracted procedure: k6481 
o|contracted procedure: k6473 
o|contracted procedure: k6465 
o|contracted procedure: k6469 
o|contracted procedure: k6512 
o|contracted procedure: k6518 
o|contracted procedure: k6589 
o|contracted procedure: k6592 
o|contracted procedure: k6595 
o|contracted procedure: k6603 
o|contracted procedure: k6611 
o|contracted procedure: k6627 
o|contracted procedure: k6637 
o|contracted procedure: k6641 
o|contracted procedure: k6650 
o|contracted procedure: k6672 
o|contracted procedure: k6668 
o|contracted procedure: k6653 
o|contracted procedure: k6656 
o|contracted procedure: k6664 
o|contracted procedure: k6702 
o|contracted procedure: k6713 
o|contracted procedure: k6729 
o|contracted procedure: k6741 
o|contracted procedure: k6737 
o|contracted procedure: k6733 
o|contracted procedure: k6759 
o|contracted procedure: k6763 
o|contracted procedure: k6783 
o|contracted procedure: k6779 
o|contracted procedure: k6801 
o|contracted procedure: k7229 
o|contracted procedure: k7233 
o|contracted procedure: k7237 
o|contracted procedure: k7241 
o|contracted procedure: k7245 
o|contracted procedure: k6805 
o|contracted procedure: k6830 
o|contracted procedure: k6845 
o|contracted procedure: k7166 
o|contracted procedure: k7162 
o|contracted procedure: k6891 
o|contracted procedure: k6896 
o|contracted procedure: k6887 
o|contracted procedure: k6908 
o|contracted procedure: k6917 
o|contracted procedure: k6930 
o|contracted procedure: k4385 
o|contracted procedure: k4399 
o|contracted procedure: k4409 
o|contracted procedure: k4403 
o|contracted procedure: k6959 
o|contracted procedure: k6966 
o|contracted procedure: k6969 
o|contracted procedure: k6972 
o|contracted procedure: k7020 
o|contracted procedure: k6984 
o|contracted procedure: k7010 
o|contracted procedure: k7014 
o|contracted procedure: k7006 
o|contracted procedure: k6987 
o|contracted procedure: k6990 
o|contracted procedure: k6998 
o|contracted procedure: k7002 
o|contracted procedure: k7032 
o|contracted procedure: k7054 
o|contracted procedure: k7046 
o|contracted procedure: k7050 
o|contracted procedure: k7042 
o|contracted procedure: k7075 
o|contracted procedure: k7060 
o|contracted procedure: k7069 
o|contracted procedure: k7118 
o|contracted procedure: k7122 
o|contracted procedure: k7106 
o|contracted procedure: k7114 
o|contracted procedure: k7110 
o|contracted procedure: k7085 
o|contracted procedure: k7092 
o|contracted procedure: k7132 
o|contracted procedure: k7143 
o|contracted procedure: k7150 
o|contracted procedure: k7158 
o|contracted procedure: k7170 
o|contracted procedure: k7185 
o|contracted procedure: k7188 
o|contracted procedure: k7200 
o|contracted procedure: k7203 
o|contracted procedure: k7206 
o|contracted procedure: k7214 
o|contracted procedure: k7222 
o|contracted procedure: k7179 
o|contracted procedure: k7397 
o|contracted procedure: k7401 
o|contracted procedure: k7405 
o|contracted procedure: k7249 
o|contracted procedure: k7262 
o|contracted procedure: k7265 
o|contracted procedure: k7393 
o|contracted procedure: k7287 
o|contracted procedure: k7300 
o|contracted procedure: k7307 
o|contracted procedure: k7310 
o|contracted procedure: k7316 
o|contracted procedure: k7366 
o|contracted procedure: k7370 
o|contracted procedure: k7374 
o|contracted procedure: k7362 
o|contracted procedure: k7336 
o|contracted procedure: k7348 
o|contracted procedure: k7352 
o|contracted procedure: k7356 
o|contracted procedure: k7344 
o|contracted procedure: k7340 
o|contracted procedure: k7326 
o|contracted procedure: k7389 
o|contracted procedure: k7385 
o|contracted procedure: k7381 
o|contracted procedure: k7474 
o|contracted procedure: k7478 
o|contracted procedure: k7482 
o|contracted procedure: k7409 
o|contracted procedure: k7470 
o|contracted procedure: k7466 
o|contracted procedure: k7429 
o|contracted procedure: k7437 
o|contracted procedure: k7441 
o|contracted procedure: k7455 
o|contracted procedure: k7444 
o|contracted procedure: k7448 
o|contracted procedure: k7433 
o|contracted procedure: k7926 
o|contracted procedure: k7930 
o|contracted procedure: k7934 
o|contracted procedure: k7486 
o|contracted procedure: k7499 
o|contracted procedure: k7502 
o|contracted procedure: k7599 
o|contracted procedure: k7609 
o|contracted procedure: k7616 
o|contracted procedure: k7668 
o|contracted procedure: k7620 
o|contracted procedure: k7660 
o|contracted procedure: k7644 
o|contracted procedure: k7652 
o|contracted procedure: k7648 
o|contracted procedure: k7628 
o|contracted procedure: k7624 
o|contracted procedure: k7640 
o|contracted procedure: k7685 
o|contracted procedure: k7688 
o|contracted procedure: k7707 
o|contracted procedure: k7719 
o|contracted procedure: k7725 
o|contracted procedure: k7737 
o|contracted procedure: k7770 
o|contracted procedure: k7786 
o|contracted procedure: k7782 
o|contracted procedure: k7778 
o|contracted procedure: k7774 
o|contracted procedure: k7766 
o|contracted procedure: k7532 
o|contracted procedure: k7535 
o|contracted procedure: k7556 
o|contracted procedure: k7568 
o|contracted procedure: k7560 
o|contracted procedure: k7542 
o|contracted procedure: k7584 
o|contracted procedure: k7580 
o|contracted procedure: k7795 
o|contracted procedure: k7798 
o|contracted procedure: k7801 
o|contracted procedure: k7809 
o|contracted procedure: k7817 
o|contracted procedure: k7829 
o|contracted procedure: k7851 
o|contracted procedure: k7847 
o|contracted procedure: k7832 
o|contracted procedure: k7835 
o|contracted procedure: k7843 
o|contracted procedure: k7863 
o|contracted procedure: k7866 
o|contracted procedure: k7869 
o|contracted procedure: k7877 
o|contracted procedure: k7885 
o|contracted procedure: k7897 
o|contracted procedure: k7919 
o|contracted procedure: k7915 
o|contracted procedure: k7900 
o|contracted procedure: k7903 
o|contracted procedure: k7911 
o|contracted procedure: k7947 
o|contracted procedure: k7961 
o|contracted procedure: k7968 
o|contracted procedure: k7971 
o|contracted procedure: k8076 
o|contracted procedure: k7978 
o|contracted procedure: k8003 
o|contracted procedure: k7991 
o|contracted procedure: k7995 
o|contracted procedure: k8072 
o|contracted procedure: k8013 
o|contracted procedure: k8035 
o|contracted procedure: k8023 
o|contracted procedure: k8027 
o|contracted procedure: k8068 
o|contracted procedure: k8064 
o|contracted procedure: k8052 
o|contracted procedure: k8056 
o|contracted procedure: k8091 
o|contracted procedure: k8163 
o|contracted procedure: k8094 
o|contracted procedure: k8143 
o|contracted procedure: k8106 
o|contracted procedure: k8139 
o|contracted procedure: k8135 
o|contracted procedure: k8118 
o|contracted procedure: k8146 
o|contracted procedure: k8153 
o|contracted procedure: k8176 
o|contracted procedure: k8224 
o|contracted procedure: k8180 
o|contracted procedure: k8220 
o|contracted procedure: k8200 
o|contracted procedure: k8216 
o|contracted procedure: k8208 
o|contracted procedure: k8204 
o|contracted procedure: k8246 
o|contracted procedure: k8259 
o|contracted procedure: k8264 
o|contracted procedure: k8267 
o|contracted procedure: k8273 
o|contracted procedure: k8287 
o|contracted procedure: k8295 
o|contracted procedure: k8301 
o|contracted procedure: k8283 
o|contracted procedure: k8312 
o|contracted procedure: k8315 
o|contracted procedure: k8363 
o|contracted procedure: k8327 
o|contracted procedure: k8330 
o|contracted procedure: k8333 
o|contracted procedure: k8341 
o|contracted procedure: k8345 
o|contracted procedure: k8353 
o|contracted procedure: k8357 
o|contracted procedure: k8375 
o|contracted procedure: k8397 
o|contracted procedure: k8393 
o|contracted procedure: k8378 
o|contracted procedure: k8381 
o|contracted procedure: k8389 
o|contracted procedure: k8409 
o|contracted procedure: k8416 
o|contracted procedure: k8436 
o|contracted procedure: k8445 
o|contracted procedure: k8467 
o|contracted procedure: k8463 
o|contracted procedure: k8448 
o|contracted procedure: k8451 
o|contracted procedure: k8459 
o|contracted procedure: k8479 
o|contracted procedure: k8501 
o|contracted procedure: k8497 
o|contracted procedure: k8482 
o|contracted procedure: k8485 
o|contracted procedure: k8493 
o|contracted procedure: k8517 
o|contracted procedure: k8534 
o|contracted procedure: k8541 
o|contracted procedure: k8558 
o|contracted procedure: k8548 
o|contracted procedure: k8571 
o|contracted procedure: k8601 
o|contracted procedure: k8581 
o|contracted procedure: k8591 
o|contracted procedure: k8609 
o|contracted procedure: k8639 
o|contracted procedure: k8615 
o|contracted procedure: k8635 
o|contracted procedure: k8644 
o|contracted procedure: k8647 
o|contracted procedure: k8656 
o|contracted procedure: k8672 
o|contracted procedure: k8684 
o|contracted procedure: k8694 
o|contracted procedure: k8711 
o|contracted procedure: k8722 
o|contracted procedure: k8734 
o|contracted procedure: k8718 
o|contracted procedure: k8746 
o|contracted procedure: k8749 
o|contracted procedure: k8752 
o|contracted procedure: k8760 
o|contracted procedure: k8768 
o|contracted procedure: k8804 
o|contracted procedure: k8808 
o|contracted procedure: k8800 
o|contracted procedure: k8784 
o|contracted procedure: k8792 
o|contracted procedure: k8837 
o|contracted procedure: k8815 
o|contracted procedure: k8819 
o|contracted procedure: k8829 
o|contracted procedure: k8851 
o|contracted procedure: k8840 
o|contracted procedure: k8847 
o|contracted procedure: k8860 
o|contracted procedure: k8882 
o|contracted procedure: k8878 
o|contracted procedure: k8863 
o|contracted procedure: k8866 
o|contracted procedure: k8874 
o|contracted procedure: k8894 
o|contracted procedure: k8900 
o|contracted procedure: k8929 
o|contracted procedure: k8911 
o|inlining procedure: k8903 
o|inlining procedure: k8903 
o|contracted procedure: k8938 
o|contracted procedure: k8941 
o|contracted procedure: k8944 
o|contracted procedure: k8952 
o|contracted procedure: k8960 
o|contracted procedure: k8972 
o|contracted procedure: k8975 
o|contracted procedure: k8986 
o|contracted procedure: k8995 
o|inlining procedure: k8978 
o|contracted procedure: k9010 
o|contracted procedure: k9032 
o|contracted procedure: k9028 
o|contracted procedure: k9013 
o|contracted procedure: k9016 
o|contracted procedure: k9024 
o|contracted procedure: k9060 
o|contracted procedure: k9068 
o|contracted procedure: k9072 
o|contracted procedure: k9076 
o|contracted procedure: k9094 
o|contracted procedure: k9100 
o|contracted procedure: k9117 
o|contracted procedure: k9139 
o|contracted procedure: k9135 
o|contracted procedure: k9120 
o|contracted procedure: k9123 
o|contracted procedure: k9131 
o|contracted procedure: k9151 
o|contracted procedure: k9161 
o|contracted procedure: k9165 
o|contracted procedure: k9182 
o|contracted procedure: k9186 
o|contracted procedure: k9203 
o|contracted procedure: k9207 
o|contracted procedure: k9211 
o|contracted procedure: k9231 
o|contracted procedure: k9235 
o|contracted procedure: k9252 
o|contracted procedure: k9272 
o|contracted procedure: k9282 
o|contracted procedure: k9285 
o|contracted procedure: k9297 
o|contracted procedure: k9300 
o|contracted procedure: k9303 
o|contracted procedure: k9311 
o|contracted procedure: k9319 
o|contracted procedure: k9350 
o|contracted procedure: k9358 
o|contracted procedure: k9361 
o|contracted procedure: k9367 
o|contracted procedure: k9373 
o|contracted procedure: k9338 
o|contracted procedure: k9385 
o|contracted procedure: k9391 
o|contracted procedure: k9406 
o|contracted procedure: k9425 
o|contracted procedure: k9428 
o|contracted procedure: k9439 
o|contracted procedure: k9442 
o|contracted procedure: k9445 
o|contracted procedure: k9456 
o|contracted procedure: k9938 
o|contracted procedure: k9934 
o|contracted procedure: k9467 
o|contracted procedure: k9709 
o|contracted procedure: k9722 
o|contracted procedure: k9718 
o|contracted procedure: k9725 
o|contracted procedure: k9705 
o|contracted procedure: k9701 
o|contracted procedure: k9475 
o|contracted procedure: k9697 
o|contracted procedure: k9479 
o|contracted procedure: k9495 
o|contracted procedure: k9491 
o|contracted procedure: k9487 
o|contracted procedure: k9483 
o|contracted procedure: k9471 
o|contracted procedure: k9463 
o|contracted procedure: k9452 
o|contracted procedure: k9435 
o|contracted procedure: k9515 
o|contracted procedure: k9527 
o|contracted procedure: k9580 
o|contracted procedure: k9544 
o|contracted procedure: k9570 
o|contracted procedure: k9574 
o|contracted procedure: k9566 
o|contracted procedure: k9547 
o|contracted procedure: k9550 
o|contracted procedure: k9558 
o|contracted procedure: k9562 
o|contracted procedure: k9628 
o|contracted procedure: k9592 
o|contracted procedure: k9618 
o|contracted procedure: k9622 
o|contracted procedure: k9614 
o|contracted procedure: k9595 
o|contracted procedure: k9598 
o|contracted procedure: k9606 
o|contracted procedure: k9610 
o|contracted procedure: k9670 
o|contracted procedure: k9678 
o|contracted procedure: k9504 
o|contracted procedure: k9666 
o|contracted procedure: k9643 
o|contracted procedure: k9646 
o|contracted procedure: k9654 
o|contracted procedure: k9658 
o|contracted procedure: k9662 
o|contracted procedure: k9684 
o|contracted procedure: k9690 
o|contracted procedure: k9736 
o|contracted procedure: k9756 
o|contracted procedure: k9772 
o|contracted procedure: k9768 
o|contracted procedure: k9817 
o|contracted procedure: k9781 
o|contracted procedure: k9807 
o|contracted procedure: k9811 
o|contracted procedure: k9803 
o|contracted procedure: k9784 
o|contracted procedure: k9787 
o|contracted procedure: k9795 
o|contracted procedure: k9799 
o|contracted procedure: k9865 
o|contracted procedure: k9829 
o|contracted procedure: k9855 
o|contracted procedure: k9859 
o|contracted procedure: k9745 
o|contracted procedure: k9851 
o|contracted procedure: k9832 
o|contracted procedure: k9835 
o|contracted procedure: k9843 
o|contracted procedure: k9847 
o|contracted procedure: k9880 
o|contracted procedure: k9883 
o|contracted procedure: k9891 
o|contracted procedure: k9895 
o|contracted procedure: k9899 
o|contracted procedure: k9907 
o|contracted procedure: k9911 
o|contracted procedure: k9915 
o|contracted procedure: k9921 
o|contracted procedure: k9927 
o|contracted procedure: k9983 
o|contracted procedure: k9947 
o|contracted procedure: k9973 
o|contracted procedure: k9977 
o|contracted procedure: k9969 
o|contracted procedure: k9950 
o|contracted procedure: k9953 
o|contracted procedure: k9961 
o|contracted procedure: k9965 
o|contracted procedure: k10031 
o|contracted procedure: k9995 
o|contracted procedure: k10021 
o|contracted procedure: k10025 
o|contracted procedure: k10017 
o|contracted procedure: k9998 
o|contracted procedure: k10001 
o|contracted procedure: k10009 
o|contracted procedure: k10013 
o|contracted procedure: k10079 
o|contracted procedure: k10043 
o|contracted procedure: k10069 
o|contracted procedure: k10073 
o|contracted procedure: k10065 
o|contracted procedure: k10046 
o|contracted procedure: k10049 
o|contracted procedure: k10057 
o|contracted procedure: k10061 
o|contracted procedure: k10091 
o|contracted procedure: k10094 
o|contracted procedure: k10097 
o|contracted procedure: k10105 
o|contracted procedure: k10125 
o|contracted procedure: k10128 
o|contracted procedure: k10131 
o|contracted procedure: k10139 
o|contracted procedure: k10159 
o|contracted procedure: k10162 
o|contracted procedure: k10165 
o|contracted procedure: k10173 
o|contracted procedure: k10181 
o|contracted procedure: k10193 
o|contracted procedure: k10215 
o|contracted procedure: k10211 
o|contracted procedure: k10196 
o|contracted procedure: k10199 
o|contracted procedure: k10207 
o|contracted procedure: k10227 
o|contracted procedure: k10249 
o|contracted procedure: k10245 
o|contracted procedure: k10230 
o|contracted procedure: k10233 
o|contracted procedure: k10241 
o|contracted procedure: k10265 
o|contracted procedure: k10270 
o|contracted procedure: k10273 
o|contracted procedure: k10279 
o|contracted procedure: k10294 
o|contracted procedure: k10477 
o|contracted procedure: k10321 
o|contracted procedure: k10473 
o|contracted procedure: k10325 
o|contracted procedure: k10333 
o|contracted procedure: k10329 
o|contracted procedure: k10317 
o|contracted procedure: k10341 
o|contracted procedure: k10357 
o|contracted procedure: k10373 
o|contracted procedure: k10369 
o|contracted procedure: k10418 
o|contracted procedure: k10382 
o|contracted procedure: k10408 
o|contracted procedure: k10412 
o|contracted procedure: k10404 
o|contracted procedure: k10385 
o|contracted procedure: k10388 
o|contracted procedure: k10396 
o|contracted procedure: k10400 
o|contracted procedure: k10466 
o|contracted procedure: k10430 
o|contracted procedure: k10456 
o|contracted procedure: k10460 
o|contracted procedure: k10452 
o|contracted procedure: k10433 
o|contracted procedure: k10436 
o|contracted procedure: k10444 
o|contracted procedure: k10448 
o|contracted procedure: k10485 
o|contracted procedure: k10493 
o|contracted procedure: k10504 
o|contracted procedure: k10520 
o|contracted procedure: k10516 
o|contracted procedure: k10565 
o|contracted procedure: k10529 
o|contracted procedure: k10555 
o|contracted procedure: k10559 
o|contracted procedure: k10551 
o|contracted procedure: k10532 
o|contracted procedure: k10535 
o|contracted procedure: k10543 
o|contracted procedure: k10547 
o|contracted procedure: k10613 
o|contracted procedure: k10577 
o|contracted procedure: k10603 
o|contracted procedure: k10607 
o|contracted procedure: k10599 
o|contracted procedure: k10580 
o|contracted procedure: k10583 
o|contracted procedure: k10591 
o|contracted procedure: k10595 
o|contracted procedure: k10620 
o|contracted procedure: k10623 
o|contracted procedure: k10629 
o|contracted procedure: k10632 
o|contracted procedure: k10639 
o|contracted procedure: k10645 
o|contracted procedure: k10648 
o|contracted procedure: k10696 
o|contracted procedure: k10660 
o|contracted procedure: k10686 
o|contracted procedure: k10690 
o|contracted procedure: k10682 
o|contracted procedure: k10663 
o|contracted procedure: k10666 
o|contracted procedure: k10674 
o|contracted procedure: k10678 
o|contracted procedure: k10710 
o|contracted procedure: k10721 
o|contracted procedure: k10766 
o|contracted procedure: k10730 
o|contracted procedure: k10756 
o|contracted procedure: k10760 
o|contracted procedure: k10752 
o|contracted procedure: k10733 
o|contracted procedure: k10736 
o|contracted procedure: k10744 
o|contracted procedure: k10748 
o|contracted procedure: k10778 
o|contracted procedure: k10800 
o|contracted procedure: k10796 
o|contracted procedure: k10781 
o|contracted procedure: k10784 
o|contracted procedure: k10792 
o|contracted procedure: k10812 
o|contracted procedure: k10815 
o|contracted procedure: k10818 
o|contracted procedure: k10826 
o|contracted procedure: k10846 
o|contracted procedure: k10849 
o|contracted procedure: k10852 
o|contracted procedure: k10860 
o|contracted procedure: k10880 
o|contracted procedure: k10902 
o|contracted procedure: k10898 
o|contracted procedure: k10883 
o|contracted procedure: k10886 
o|contracted procedure: k10894 
o|contracted procedure: k10922 
o|contracted procedure: k10939 
o|contracted procedure: k10960 
o|contracted procedure: k10956 
o|contracted procedure: k10974 
o|contracted procedure: k11067 
o|contracted procedure: k10990 
o|contracted procedure: k11001 
o|contracted procedure: k10997 
o|contracted procedure: k11009 
o|contracted procedure: k11012 
o|contracted procedure: k11058 
o|contracted procedure: k11021 
o|contracted procedure: k11040 
o|contracted procedure: k11036 
o|contracted procedure: k11032 
o|contracted procedure: k11028 
o|contracted procedure: k11047 
o|contracted procedure: k11055 
o|contracted procedure: k11051 
o|contracted procedure: k11080 
o|contracted procedure: k11092 
o|contracted procedure: k11104 
o|contracted procedure: k11112 
o|contracted procedure: k11127 
o|contracted procedure: k11139 
o|contracted procedure: k11155 
o|contracted procedure: k11145 
o|inlining procedure: k11118 
o|inlining procedure: k11118 
o|inlining procedure: k11118 
o|contracted procedure: k11162 
o|contracted procedure: k11414 
o|contracted procedure: k11176 
o|contracted procedure: k11404 
o|contracted procedure: k11400 
o|contracted procedure: k11396 
o|contracted procedure: k11392 
o|contracted procedure: k11184 
o|contracted procedure: k11370 
o|contracted procedure: k11378 
o|contracted procedure: k11374 
o|contracted procedure: k11366 
o|contracted procedure: k11192 
o|contracted procedure: k11188 
o|contracted procedure: k11180 
o|contracted procedure: k11172 
o|contracted procedure: k11205 
o|contracted procedure: k11208 
o|contracted procedure: k11358 
o|contracted procedure: k11211 
o|contracted procedure: k11323 
o|contracted procedure: k11339 
o|contracted procedure: k11335 
o|contracted procedure: k11327 
o|contracted procedure: k11331 
o|contracted procedure: k11223 
o|contracted procedure: k11230 
o|contracted procedure: k11238 
o|contracted procedure: k11242 
o|contracted procedure: k11258 
o|contracted procedure: k11254 
o|contracted procedure: k11273 
o|contracted procedure: k11289 
o|contracted procedure: k11285 
o|contracted procedure: k11277 
o|contracted procedure: k11281 
o|contracted procedure: k11269 
o|contracted procedure: k11296 
o|contracted procedure: k11312 
o|contracted procedure: k11308 
o|contracted procedure: k11300 
o|contracted procedure: k11304 
o|contracted procedure: k11319 
o|contracted procedure: k11351 
o|contracted procedure: k11423 
o|contracted procedure: k11426 
o|contracted procedure: k11429 
o|contracted procedure: k11437 
o|contracted procedure: k11445 
o|contracted procedure: k11472 
o|contracted procedure: k11481 
o|contracted procedure: k11484 
o|contracted procedure: k11495 
o|contracted procedure: k11501 
o|contracted procedure: k11529 
o|contracted procedure: k11548 
o|contracted procedure: k11556 
o|contracted procedure: k11560 
o|contracted procedure: k11579 
o|contracted procedure: k11598 
o|contracted procedure: k11606 
o|contracted procedure: k11610 
o|contracted procedure: k11620 
o|contracted procedure: k11629 
o|contracted procedure: k11644 
o|contracted procedure: k11640 
o|contracted procedure: k11653 
o|contracted procedure: k11675 
o|contracted procedure: k11656 
o|contracted procedure: k11671 
o|contracted procedure: k11667 
o|contracted procedure: k11681 
o|contracted procedure: k11684 
o|contracted procedure: k11690 
o|contracted procedure: k11697 
o|contracted procedure: k11700 
o|contracted procedure: k11707 
o|contracted procedure: k11736 
o|contracted procedure: k11728 
o|contracted procedure: k11756 
o|contracted procedure: k11766 
o|contracted procedure: k11762 
o|contracted procedure: k11783 
o|contracted procedure: k11843 
o|contracted procedure: k11799 
o|contracted procedure: k11819 
o|contracted procedure: k11823 
o|contracted procedure: k11827 
o|contracted procedure: k11815 
o|contracted procedure: k11835 
o|contracted procedure: k11839 
o|contracted procedure: k11856 
o|contracted procedure: k11966 
o|contracted procedure: k11962 
o|contracted procedure: k11869 
o|contracted procedure: k11885 
o|contracted procedure: k11901 
o|contracted procedure: k11906 
o|contracted procedure: k11916 
o|contracted procedure: k11921 
o|contracted procedure: k11881 
o|contracted procedure: k11877 
o|contracted procedure: k11873 
o|contracted procedure: k11933 
o|contracted procedure: k11936 
o|contracted procedure: k11939 
o|contracted procedure: k11947 
o|contracted procedure: k11955 
o|contracted procedure: k12333 
o|contracted procedure: k11979 
o|contracted procedure: k11985 
o|contracted procedure: k11988 
o|contracted procedure: k12007 
o|contracted procedure: k12019 
o|contracted procedure: k12028 
o|contracted procedure: k12118 
o|contracted procedure: k12122 
o|contracted procedure: k12038 
o|contracted procedure: k12046 
o|contracted procedure: k12054 
o|contracted procedure: k12050 
o|contracted procedure: k12042 
o|contracted procedure: k12111 
o|contracted procedure: k12075 
o|contracted procedure: k12101 
o|contracted procedure: k12105 
o|contracted procedure: k12063 
o|contracted procedure: k12097 
o|contracted procedure: k12078 
o|contracted procedure: k12081 
o|contracted procedure: k12089 
o|contracted procedure: k12093 
o|contracted procedure: k12138 
o|contracted procedure: k12134 
o|contracted procedure: k12145 
o|contracted procedure: k12152 
o|contracted procedure: k12160 
o|contracted procedure: k12172 
o|contracted procedure: k12175 
o|contracted procedure: k12178 
o|contracted procedure: k12186 
o|contracted procedure: k12194 
o|contracted procedure: k12216 
o|contracted procedure: k12223 
o|contracted procedure: k12231 
o|contracted procedure: k12235 
o|contracted procedure: k12238 
o|contracted procedure: k12244 
o|contracted procedure: k12253 
o|contracted procedure: k12257 
o|contracted procedure: k12288 
o|contracted procedure: k12272 
o|contracted procedure: k12276 
o|contracted procedure: k12284 
o|contracted procedure: k12294 
o|contracted procedure: k12300 
o|contracted procedure: k12307 
o|contracted procedure: k12329 
o|contracted procedure: k12318 
o|contracted procedure: k12343 
o|contracted procedure: k12352 
o|contracted procedure: k12360 
o|contracted procedure: k12363 
o|contracted procedure: k12369 
o|contracted procedure: k12381 
o|contracted procedure: k12384 
o|contracted procedure: k12390 
o|contracted procedure: k12401 
o|contracted procedure: k12431 
o|contracted procedure: k12427 
o|contracted procedure: k12419 
o|contracted procedure: k12415 
o|contracted procedure: k12440 
o|contracted procedure: k12462 
o|contracted procedure: k12378 
o|contracted procedure: k12458 
o|contracted procedure: k12443 
o|contracted procedure: k12446 
o|contracted procedure: k12454 
o|contracted procedure: k12474 
o|contracted procedure: k12496 
o|contracted procedure: k12492 
o|contracted procedure: k12477 
o|contracted procedure: k12480 
o|contracted procedure: k12488 
o|contracted procedure: k12505 
o|contracted procedure: k12533 
o|contracted procedure: k12552 
o|contracted procedure: k12560 
o|contracted procedure: k12564 
o|contracted procedure: k12583 
o|contracted procedure: k12601 
o|contracted procedure: k12611 
o|contracted procedure: k12618 
o|contracted procedure: k12621 
o|contracted procedure: k12627 
o|contracted procedure: k12634 
o|contracted procedure: k12638 
o|contracted procedure: k12642 
o|contracted procedure: k12680 
o|contracted procedure: k12658 
o|contracted procedure: k12672 
o|contracted procedure: k12676 
o|contracted procedure: k12787 
o|contracted procedure: k12696 
o|contracted procedure: k12723 
o|contracted procedure: k12779 
o|contracted procedure: k12775 
o|contracted procedure: k12771 
o|contracted procedure: k12737 
o|contracted procedure: k12733 
o|contracted procedure: k12760 
o|contracted procedure: k12756 
o|contracted procedure: k12749 
o|contracted procedure: k12767 
o|contracted procedure: k12783 
o|contracted procedure: k13060 
o|contracted procedure: k12791 
o|contracted procedure: k12941 
o|contracted procedure: k12936 
o|contracted procedure: k12822 
o|contracted procedure: k12825 
o|contracted procedure: k12834 
o|contracted procedure: k12852 
o|contracted procedure: k12861 
o|contracted procedure: k12864 
o|contracted procedure: k12848 
o|contracted procedure: k12844 
o|contracted procedure: k12876 
o|contracted procedure: k12879 
o|contracted procedure: k12882 
o|contracted procedure: k12890 
o|contracted procedure: k12898 
o|contracted procedure: k12920 
o|contracted procedure: k12912 
o|contracted procedure: k12916 
o|contracted procedure: k12908 
o|contracted procedure: k12927 
o|contracted procedure: k13056 
o|contracted procedure: k13048 
o|contracted procedure: k13052 
o|contracted procedure: k13044 
o|contracted procedure: k13040 
o|contracted procedure: k12960 
o|contracted procedure: k12964 
o|contracted procedure: k12967 
o|contracted procedure: k12970 
o|contracted procedure: k12976 
o|contracted procedure: k12952 
o|contracted procedure: k12956 
o|contracted procedure: k12991 
o|contracted procedure: k13002 
o|contracted procedure: k12998 
o|contracted procedure: k12988 
o|contracted procedure: k13011 
o|contracted procedure: k13014 
o|contracted procedure: k13017 
o|contracted procedure: k13025 
o|contracted procedure: k13033 
o|contracted procedure: k13167 
o|contracted procedure: k13064 
o|contracted procedure: k13099 
o|contracted procedure: k13163 
o|contracted procedure: k13147 
o|contracted procedure: k13159 
o|contracted procedure: k13155 
o|contracted procedure: k13151 
o|contracted procedure: k13107 
o|contracted procedure: k13139 
o|contracted procedure: k13119 
o|contracted procedure: k13135 
o|contracted procedure: k13131 
o|contracted procedure: k13127 
o|contracted procedure: k13123 
o|contracted procedure: k13115 
o|contracted procedure: k13111 
o|contracted procedure: k13103 
o|contracted procedure: k13095 
o|contracted procedure: k13087 
o|simplifications: ((if . 5) (let . 235)) 
o|removed binding forms: 1041 
o|inlining procedure: k6772 
o|contracted procedure: k8777 
o|substituted constant variable: r1111914545 
o|substituted constant variable: r1111914546 
o|inlining procedure: k11262 
o|inlining procedure: k11262 
o|contracted procedure: k11626 
o|inlining procedure: k11897 
o|inlining procedure: k11897 
o|inlining procedure: k12142 
o|inlining procedure: k12142 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|removed conditional forms: 2 
o|substituted constant variable: r1189814716 
o|replaced variables: 2 
o|removed binding forms: 4 
o|removed binding forms: 3 
o|direct leaf routine/allocation: g30563065 0 
o|direct leaf routine/allocation: g18381849 30 
o|direct leaf routine/allocation: g623632 15 
o|contracted procedure: "(chicken-syntax.scm:1122) k6607" 
o|contracted procedure: "(chicken-syntax.scm:519) k9903" 
o|contracted procedure: "(chicken-syntax.scm:95) k12894" 
o|removed binding forms: 3 
o|customizable procedures: (parse-clause597 map-loop648665 k12828 map-loop617638 k12745 k12604 loop734755 loop734771 map-loop782800 map-loop810828 k12263 loop855 loop2869 map-loop879904 map-loop913937 g974983 map-loop968990 k11650 loop10881109 loop10881120 g11561165 map-loop11501176 k11250 mapslots1186 k11118 map-loop12691286 g13021311 map-loop12961314 g13301339 map-loop13241342 map-loop13751392 map-loop13541399 loop1430 map-loop14111433 map-loop14451469 map-loop14811505 map-loop15171541 map-loop15531577 map-loop15991616 map-loop16261643 g16591668 map-loop16531671 g16871696 map-loop16811699 g17151724 map-loop17091727 map-loop17391758 map-loop17701789 map-loop18011820 k9877 map-loop18321859 map-loop18741898 map-loop19101934 k9640 map-loop19461973 map-loop19882012 map-loop20242048 g20742083 map-loop20682113 for-each-loop21492176 map-loop21592189 map-loop22202237 loop2245 g22642273 map-loop22582276 loop2286 map-loop23442362 fold2296 g23152324 map-loop23092327 fold2378 map-loop23972414 map-loop24232440 foldl24752479 map-loop24522491 map-loop25002519 k8097 k8109 fold2578 map-loop26522669 g26882697 map-loop26822700 map-loop27102727 g27452754 map-loop27392757 recur2622 make-if-tree2616 prefix-sym2676 recur2637 loop2805 map-loop28352856 genvars2827 foldr28782881 g28832884 k6933 build2903 map-loop29262945 loop122 loop2829 map-loop30033020 g30303040 for-each-loop30293043 map-loop30503068 k6371 k6377 k6384 k6392 loop3075 loop3120 loop3150 k5735 k5758 take) 
o|calls to known targets: 246 
o|identified direct recursive calls: f_4322 1 
o|identified direct recursive calls: f_6584 1 
o|identified direct recursive calls: f_6645 1 
o|identified direct recursive calls: f_4380 1 
o|identified direct recursive calls: f_6979 1 
o|identified direct recursive calls: f_6903 1 
o|identified direct recursive calls: f_7824 1 
o|identified direct recursive calls: f_7892 1 
o|identified direct recursive calls: f_8370 1 
o|identified direct recursive calls: f_8440 1 
o|identified direct recursive calls: f_8474 1 
o|identified direct recursive calls: f_8529 1 
o|identified direct recursive calls: f_8706 2 
o|identified direct recursive calls: f_8855 1 
o|identified direct recursive calls: f_8967 1 
o|identified direct recursive calls: f_9005 1 
o|identified direct recursive calls: f_9112 1 
o|identified direct recursive calls: f_9539 1 
o|identified direct recursive calls: f_9587 1 
o|identified direct recursive calls: f_9776 1 
o|identified direct recursive calls: f_9824 1 
o|identified direct recursive calls: f_9942 1 
o|identified direct recursive calls: f_9990 1 
o|identified direct recursive calls: f_10038 1 
o|identified direct recursive calls: f_10188 1 
o|identified direct recursive calls: f_10222 1 
o|identified direct recursive calls: f_10377 1 
o|identified direct recursive calls: f_10425 1 
o|identified direct recursive calls: f_10524 1 
o|identified direct recursive calls: f_10572 1 
o|identified direct recursive calls: f_10655 1 
o|identified direct recursive calls: f_10705 1 
o|identified direct recursive calls: f_10725 1 
o|identified direct recursive calls: f_10773 1 
o|identified direct recursive calls: f_10875 1 
o|identified direct recursive calls: f_12070 1 
o|identified direct recursive calls: f_12211 1 
o|identified direct recursive calls: f_12014 1 
o|identified direct recursive calls: f_12435 1 
o|identified direct recursive calls: f_12469 1 
o|identified direct recursive calls: f_12871 1 
o|fast box initializations: 78 
o|fast global references: 2 
o|fast global assignments: 1 
o|dropping unused closure argument: f_4322 
o|dropping unused closure argument: f_7694 
*/
/* end of file */
