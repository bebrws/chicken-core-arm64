/* Generated from chicken-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.2.0 (rev 317468e4)
   macosx-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: chicken-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file chicken-syntax.c
   unit: chicken-syntax
   uses: expand internal library
*/
#include "chicken.h"

#include <errno.h>
#include <float.h>
#include <stdio.h>
#include <stdint.h>

void (*cbforset)(int, int, uint8_t, uint8_t, uint8_t, uint8_t);

void setpixelcb(void (*newcb)(int, int, uint8_t, uint8_t, uint8_t, uint8_t)) {
	printf("\n setpixelcb\n");
	cbforset = newcb;
}

static C_word setpixel(int x, int y, int r, int g, int b, int a) {
	// To get the values correct :
	// (C_fix(C_uword)C_unfix(x))
	// I believe to set a return value you would want to:
	// (C_uword)C_fix(retValue)
	printf("\n In setpizel about to call CALLBACK \n");
	printf("\n\n in set pixel (%d %d) %d %d %d %d\n\n", (C_uword)C_unfix(x), (C_uword)C_unfix(y), (C_uword)C_unfix(r), (C_uword)C_unfix(g), (C_uword)C_unfix(b), (C_uword)C_unfix(a));
	cbforset((uint8_t)C_unfix(x), (uint8_t)C_unfix(y), (uint8_t)C_unfix(r), (uint8_t)C_unfix(g), (uint8_t)C_unfix(b), (uint8_t)C_unfix(a));
	// cbforset(x, y, r, b, g, a);
	return C_fix(0);
}


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[284];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,12),40,116,97,107,101,32,108,115,116,32,110,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,16),40,97,53,55,48,55,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,16),40,97,53,55,53,54,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,13),40,97,53,56,52,53,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,97,53,56,54,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,120,115,32,118,97,114,115,32,98,115,32,118,97,108,115,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,16),40,97,53,57,50,56,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,120,115,32,118,97,114,115,32,118,97,108,115,32,114,101,115,116,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,97,54,49,50,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,13),40,103,51,48,52,50,32,118,110,97,109,101,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,7),40,103,51,48,54,56,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,108,111,116,115,32,105,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,54,50,32,103,51,48,55,52,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,48,52,49,32,103,51,48,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,49,53,32,103,51,48,50,55,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,16),40,97,54,50,57,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,16),40,97,54,55,51,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,11),40,103,101,110,118,97,114,115,32,110,41,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,110,32,112,114,101,118,32,110,111,100,101,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,7),40,97,54,57,55,56,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,57,51,56,32,103,50,57,53,48,32,103,50,57,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,19),40,98,117,105,108,100,32,118,97,114,115,50,32,118,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,19),40,97,54,57,56,56,32,118,97,114,115,49,32,118,97,114,115,50,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,22),40,97,54,57,53,56,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,14),40,103,50,56,57,53,32,99,32,98,111,100,121,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,17),40,102,111,108,100,114,50,56,57,48,32,103,50,56,57,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,22),40,97,55,50,50,48,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,52,55,32,103,50,56,53,57,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,16),40,97,54,56,53,48,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,97,114,103,115,32,118,97,114,100,101,102,115,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,16),40,97,55,50,57,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,16),40,97,55,52,53,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,36),40,114,101,99,117,114,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,115,32,110,111,110,45,100,101,102,97,117,108,116,115,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,45),40,109,97,107,101,45,105,102,45,116,114,101,101,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,115,32,98,111,100,121,45,112,114,111,99,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,23),40,112,114,101,102,105,120,45,115,121,109,32,112,114,101,102,105,120,32,115,121,109,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,9),40,103,50,55,48,48,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,11),40,103,50,55,53,55,32,118,97,114,41,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,42),40,114,101,99,117,114,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,45,110,97,109,101,115,32,100,101,102,115,32,110,101,120,116,45,103,117,121,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,53,49,32,103,50,55,54,51,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,50,50,32,103,50,55,51,52,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,57,52,32,103,50,55,48,54,41,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,54,52,32,103,50,54,55,54,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,16),40,97,55,53,51,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,14),40,102,111,108,100,32,98,115,32,108,97,115,116,41,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,16),40,97,55,57,55,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,24),40,113,117,111,116,105,102,121,45,112,114,111,99,50,53,54,52,32,120,115,32,105,100,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,16),40,97,56,49,50,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,16),40,97,56,50,50,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,13),40,97,56,50,54,57,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,53,49,50,32,103,50,53,50,52,32,103,50,53,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,54,52,32,103,50,52,55,54,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,13),40,97,56,52,54,55,32,97,32,95,32,95,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,23),40,102,111,108,100,108,50,52,56,55,32,103,50,52,56,56,32,103,50,52,56,54,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,51,53,32,103,50,52,52,55,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,48,57,32,103,50,52,50,49,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,16),40,97,56,50,57,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,16),40,102,111,108,100,32,118,98,105,110,100,105,110,103,115,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,16),40,97,56,53,52,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,18),40,97,112,112,101,110,100,42,50,50,49,53,32,105,108,32,108,41,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,17),40,109,97,112,42,50,50,49,54,32,112,114,111,99,32,108,41,0,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,9),40,103,50,50,55,54,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,10),40,108,111,111,107,117,112,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,9),40,103,50,51,50,55,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,50,49,32,103,50,51,51,51,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,26),40,102,111,108,100,32,108,108,105,115,116,115,32,101,120,112,115,32,108,108,105,115,116,115,50,41,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,53,54,32,103,50,51,54,56,41,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,108,108,105,115,116,115,32,97,99,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,50,55,48,32,103,50,50,56,50,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,108,108,105,115,116,115,32,97,99,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,50,51,50,32,103,50,50,52,52,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,16),40,97,56,54,48,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,49,55,49,32,103,50,49,56,51,41,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,54,49,32,103,50,49,54,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,22),40,97,57,49,49,55,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,16),40,97,57,48,56,48,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,16),40,97,57,50,49,48,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,16),40,97,57,50,51,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,16),40,97,57,50,53,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,7),40,97,57,50,57,56,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,48),40,97,57,51,48,52,32,110,97,109,101,50,48,57,56,32,108,105,98,50,49,48,48,32,95,50,49,48,50,32,95,50,49,48,50,32,95,50,49,48,50,32,95,50,49,48,50,41};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,9),40,103,50,48,56,54,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,48,56,48,32,103,50,48,57,50,41,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,13),40,97,57,50,56,51,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,9),40,103,49,54,55,49,32,122,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,7),40,103,49,54,57,57,41,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,7),40,103,49,55,50,55,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,14),40,103,49,56,53,48,32,115,32,116,101,109,112,41,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,48,51,54,32,103,50,48,52,56,32,103,50,48,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,48,48,48,32,103,50,48,49,50,32,103,50,48,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,49,57,53,56,32,103,49,57,55,48,32,103,49,57,55,49,32,103,49,57,55,50,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,57,50,50,32,103,49,57,51,52,32,103,49,57,51,53,41,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,56,56,54,32,103,49,56,57,56,32,103,49,56,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,49,56,52,52,32,103,49,56,53,54,32,103,49,56,53,55,32,103,49,56,53,56,41};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,56,49,51,32,103,49,56,50,53,32,103,49,56,50,54,41,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,55,56,50,32,103,49,55,57,52,32,103,49,55,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,55,53,49,32,103,49,55,54,51,32,103,49,55,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,50,49,32,103,49,55,51,51,41,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,57,51,32,103,49,55,48,53,41,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,54,53,32,103,49,54,55,55,41,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,51,56,32,103,49,54,53,48,41,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,49,49,32,103,49,54,50,51,41,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,16),40,97,57,51,54,55,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,7),40,103,49,51,49,52,41,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,7),40,103,49,51,52,50,41,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,54,53,32,103,49,53,55,55,32,103,49,53,55,56,41,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,50,57,32,103,49,53,52,49,32,103,49,53,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,57,51,32,103,49,53,48,53,32,103,49,53,48,54,41,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,53,55,32,103,49,52,54,57,32,103,49,52,55,48,41,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,50,51,32,103,49,52,51,53,32,103,49,52,51,54,41,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,110,41};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,51,54,54,32,103,49,51,55,56,32,103,49,51,55,57,41,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,56,55,32,103,49,51,57,57,41,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,51,54,32,103,49,51,52,56,41,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,48,56,32,103,49,51,50,48,41,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,50,56,49,32,103,49,50,57,51,41,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,17),40,97,49,48,50,57,55,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,53,48,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,54,55,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,56,52,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,17),40,97,49,49,48,48,53,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,17),40,97,49,49,48,49,57,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,12),40,103,49,49,54,56,32,115,108,111,116,41,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,18),40,109,97,112,115,108,111,116,115,32,115,108,111,116,115,32,105,41,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,49,54,50,32,103,49,49,55,52,41,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,14),40,97,49,49,49,49,50,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,17),40,97,49,49,53,49,49,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,17),40,97,49,49,53,50,54,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,49,48,56,56,32,108,32,108,101,110,41};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,49,48,56,56,32,108,32,108,101,110,41};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,29),40,97,49,49,53,57,51,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,29),40,97,49,49,55,52,49,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,17),40,97,49,49,56,51,56,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,14),40,97,49,49,56,54,55,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,14),40,97,49,49,56,57,55,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,14),40,97,49,49,57,49,52,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,13),40,103,57,55,52,32,99,108,97,117,115,101,41,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,54,56,32,103,57,56,48,41,0,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,14),40,97,49,49,57,55,52,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,57,49,51,32,103,57,50,53,32,103,57,50,54,41,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,55,57,32,103,56,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,50,32,97,110,97,109,101,115,32,105,41};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,97,114,103,115,32,97,110,97,109,101,115,32,97,116,121,112,101,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,14),40,97,49,50,48,57,55,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,17),40,97,49,50,53,51,50,32,116,121,112,101,32,118,97,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,49,48,32,103,56,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,56,50,32,103,55,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,55,51,52,32,108,32,108,101,110,41,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,55,51,52,32,108,32,108,101,110,41,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,29),40,97,49,50,52,54,52,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,14),40,97,49,50,55,55,51,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,8),40,97,49,50,56,51,49,41};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,32),40,97,49,50,56,52,49,32,116,121,112,101,54,57,49,32,112,114,101,100,54,57,51,32,112,117,114,101,54,57,53,41};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,14),40,97,49,50,56,49,49,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,6),40,103,54,50,51,41,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,49,55,32,103,54,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,16),40,112,97,114,115,101,45,99,108,97,117,115,101,32,99,41};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,52,56,32,103,54,54,48,41,0,0,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,17),40,97,49,50,57,50,50,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,17),40,97,49,51,49,57,53,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_10028)
static void C_fcall f_10028(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10076)
static void C_fcall f_10076(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10124)
static void C_fcall f_10124(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10149)
static void C_ccall f_10149(C_word c,C_word *av) C_noret;
C_noret_decl(f_10158)
static void C_fcall f_10158(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10183)
static void C_ccall f_10183(C_word c,C_word *av) C_noret;
C_noret_decl(f_10192)
static void C_fcall f_10192(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10217)
static void C_ccall f_10217(C_word c,C_word *av) C_noret;
C_noret_decl(f_10226)
static void C_fcall f_10226(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10260)
static void C_fcall f_10260(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10296)
static void C_ccall f_10296(C_word c,C_word *av) C_noret;
C_noret_decl(f_10298)
static void C_ccall f_10298(C_word c,C_word *av) C_noret;
C_noret_decl(f_10302)
static void C_ccall f_10302(C_word c,C_word *av) C_noret;
C_noret_decl(f_10316)
static void C_ccall f_10316(C_word c,C_word *av) C_noret;
C_noret_decl(f_10320)
static void C_fcall f_10320(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10328)
static void C_ccall f_10328(C_word c,C_word *av) C_noret;
C_noret_decl(f_10331)
static void C_ccall f_10331(C_word c,C_word *av) C_noret;
C_noret_decl(f_10335)
static void C_fcall f_10335(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10343)
static void C_ccall f_10343(C_word c,C_word *av) C_noret;
C_noret_decl(f_10346)
static void C_ccall f_10346(C_word c,C_word *av) C_noret;
C_noret_decl(f_10353)
static void C_ccall f_10353(C_word c,C_word *av) C_noret;
C_noret_decl(f_10377)
static void C_ccall f_10377(C_word c,C_word *av) C_noret;
C_noret_decl(f_10389)
static void C_ccall f_10389(C_word c,C_word *av) C_noret;
C_noret_decl(f_10393)
static void C_ccall f_10393(C_word c,C_word *av) C_noret;
C_noret_decl(f_10405)
static void C_ccall f_10405(C_word c,C_word *av) C_noret;
C_noret_decl(f_10415)
static void C_fcall f_10415(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10463)
static void C_fcall f_10463(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10521)
static void C_ccall f_10521(C_word c,C_word *av) C_noret;
C_noret_decl(f_10536)
static void C_ccall f_10536(C_word c,C_word *av) C_noret;
C_noret_decl(f_10540)
static void C_ccall f_10540(C_word c,C_word *av) C_noret;
C_noret_decl(f_10552)
static void C_ccall f_10552(C_word c,C_word *av) C_noret;
C_noret_decl(f_10562)
static void C_fcall f_10562(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10610)
static void C_fcall f_10610(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10666)
static void C_ccall f_10666(C_word c,C_word *av) C_noret;
C_noret_decl(f_10675)
static void C_ccall f_10675(C_word c,C_word *av) C_noret;
C_noret_decl(f_10682)
static void C_ccall f_10682(C_word c,C_word *av) C_noret;
C_noret_decl(f_10691)
static void C_ccall f_10691(C_word c,C_word *av) C_noret;
C_noret_decl(f_10693)
static void C_fcall f_10693(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10743)
static void C_fcall f_10743(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10757)
static void C_ccall f_10757(C_word c,C_word *av) C_noret;
C_noret_decl(f_10763)
static void C_fcall f_10763(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10811)
static void C_fcall f_10811(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10845)
static void C_fcall f_10845(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10870)
static void C_ccall f_10870(C_word c,C_word *av) C_noret;
C_noret_decl(f_10879)
static void C_fcall f_10879(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10904)
static void C_ccall f_10904(C_word c,C_word *av) C_noret;
C_noret_decl(f_10913)
static void C_fcall f_10913(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10949)
static void C_ccall f_10949(C_word c,C_word *av) C_noret;
C_noret_decl(f_10951)
static void C_ccall f_10951(C_word c,C_word *av) C_noret;
C_noret_decl(f_10955)
static void C_ccall f_10955(C_word c,C_word *av) C_noret;
C_noret_decl(f_10966)
static void C_ccall f_10966(C_word c,C_word *av) C_noret;
C_noret_decl(f_10968)
static void C_ccall f_10968(C_word c,C_word *av) C_noret;
C_noret_decl(f_10972)
static void C_ccall f_10972(C_word c,C_word *av) C_noret;
C_noret_decl(f_10983)
static void C_ccall f_10983(C_word c,C_word *av) C_noret;
C_noret_decl(f_10985)
static void C_ccall f_10985(C_word c,C_word *av) C_noret;
C_noret_decl(f_10989)
static void C_ccall f_10989(C_word c,C_word *av) C_noret;
C_noret_decl(f_11004)
static void C_ccall f_11004(C_word c,C_word *av) C_noret;
C_noret_decl(f_11006)
static void C_ccall f_11006(C_word c,C_word *av) C_noret;
C_noret_decl(f_11018)
static void C_ccall f_11018(C_word c,C_word *av) C_noret;
C_noret_decl(f_11020)
static void C_ccall f_11020(C_word c,C_word *av) C_noret;
C_noret_decl(f_11024)
static void C_ccall f_11024(C_word c,C_word *av) C_noret;
C_noret_decl(f_11046)
static void C_ccall f_11046(C_word c,C_word *av) C_noret;
C_noret_decl(f_11111)
static void C_ccall f_11111(C_word c,C_word *av) C_noret;
C_noret_decl(f_11113)
static void C_ccall f_11113(C_word c,C_word *av) C_noret;
C_noret_decl(f_11117)
static void C_ccall f_11117(C_word c,C_word *av) C_noret;
C_noret_decl(f_11123)
static void C_ccall f_11123(C_word c,C_word *av) C_noret;
C_noret_decl(f_11126)
static void C_ccall f_11126(C_word c,C_word *av) C_noret;
C_noret_decl(f_11129)
static void C_ccall f_11129(C_word c,C_word *av) C_noret;
C_noret_decl(f_11135)
static void C_ccall f_11135(C_word c,C_word *av) C_noret;
C_noret_decl(f_11138)
static void C_ccall f_11138(C_word c,C_word *av) C_noret;
C_noret_decl(f_11141)
static void C_ccall f_11141(C_word c,C_word *av) C_noret;
C_noret_decl(f_11145)
static void C_fcall f_11145(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11158)
static void C_fcall f_11158(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11173)
static void C_ccall f_11173(C_word c,C_word *av) C_noret;
C_noret_decl(f_11205)
static void C_ccall f_11205(C_word c,C_word *av) C_noret;
C_noret_decl(f_11236)
static void C_ccall f_11236(C_word c,C_word *av) C_noret;
C_noret_decl(f_11238)
static void C_fcall f_11238(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11254)
static void C_ccall f_11254(C_word c,C_word *av) C_noret;
C_noret_decl(f_11257)
static void C_ccall f_11257(C_word c,C_word *av) C_noret;
C_noret_decl(f_11260)
static void C_ccall f_11260(C_word c,C_word *av) C_noret;
C_noret_decl(f_11274)
static void C_ccall f_11274(C_word c,C_word *av) C_noret;
C_noret_decl(f_11286)
static void C_ccall f_11286(C_word c,C_word *av) C_noret;
C_noret_decl(f_11290)
static void C_fcall f_11290(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11383)
static void C_ccall f_11383(C_word c,C_word *av) C_noret;
C_noret_decl(f_11387)
static void C_ccall f_11387(C_word c,C_word *av) C_noret;
C_noret_decl(f_11402)
static void C_ccall f_11402(C_word c,C_word *av) C_noret;
C_noret_decl(f_11422)
static void C_ccall f_11422(C_word c,C_word *av) C_noret;
C_noret_decl(f_11428)
static void C_ccall f_11428(C_word c,C_word *av) C_noret;
C_noret_decl(f_11448)
static void C_ccall f_11448(C_word c,C_word *av) C_noret;
C_noret_decl(f_11456)
static void C_fcall f_11456(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11481)
static void C_ccall f_11481(C_word c,C_word *av) C_noret;
C_noret_decl(f_11491)
static void C_ccall f_11491(C_word c,C_word *av) C_noret;
C_noret_decl(f_11498)
static void C_ccall f_11498(C_word c,C_word *av) C_noret;
C_noret_decl(f_11502)
static void C_ccall f_11502(C_word c,C_word *av) C_noret;
C_noret_decl(f_11510)
static void C_ccall f_11510(C_word c,C_word *av) C_noret;
C_noret_decl(f_11512)
static void C_ccall f_11512(C_word c,C_word *av) C_noret;
C_noret_decl(f_11525)
static void C_ccall f_11525(C_word c,C_word *av) C_noret;
C_noret_decl(f_11527)
static void C_ccall f_11527(C_word c,C_word *av) C_noret;
C_noret_decl(f_11592)
static void C_ccall f_11592(C_word c,C_word *av) C_noret;
C_noret_decl(f_11594)
static void C_ccall f_11594(C_word c,C_word *av) C_noret;
C_noret_decl(f_11604)
static void C_ccall f_11604(C_word c,C_word *av) C_noret;
C_noret_decl(f_11617)
static void C_ccall f_11617(C_word c,C_word *av) C_noret;
C_noret_decl(f_11633)
static void C_ccall f_11633(C_word c,C_word *av) C_noret;
C_noret_decl(f_11639)
static void C_ccall f_11639(C_word c,C_word *av) C_noret;
C_noret_decl(f_11642)
static void C_ccall f_11642(C_word c,C_word *av) C_noret;
C_noret_decl(f_11648)
static void C_ccall f_11648(C_word c,C_word *av) C_noret;
C_noret_decl(f_11657)
static void C_fcall f_11657(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11664)
static void C_ccall f_11664(C_word c,C_word *av) C_noret;
C_noret_decl(f_11678)
static void C_ccall f_11678(C_word c,C_word *av) C_noret;
C_noret_decl(f_11689)
static void C_ccall f_11689(C_word c,C_word *av) C_noret;
C_noret_decl(f_11692)
static void C_ccall f_11692(C_word c,C_word *av) C_noret;
C_noret_decl(f_11698)
static void C_ccall f_11698(C_word c,C_word *av) C_noret;
C_noret_decl(f_11707)
static void C_fcall f_11707(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11714)
static void C_ccall f_11714(C_word c,C_word *av) C_noret;
C_noret_decl(f_11728)
static void C_ccall f_11728(C_word c,C_word *av) C_noret;
C_noret_decl(f_11740)
static void C_ccall f_11740(C_word c,C_word *av) C_noret;
C_noret_decl(f_11742)
static void C_ccall f_11742(C_word c,C_word *av) C_noret;
C_noret_decl(f_11762)
static void C_ccall f_11762(C_word c,C_word *av) C_noret;
C_noret_decl(f_11776)
static void C_fcall f_11776(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11789)
static void C_ccall f_11789(C_word c,C_word *av) C_noret;
C_noret_decl(f_11837)
static void C_ccall f_11837(C_word c,C_word *av) C_noret;
C_noret_decl(f_11839)
static void C_ccall f_11839(C_word c,C_word *av) C_noret;
C_noret_decl(f_11843)
static void C_ccall f_11843(C_word c,C_word *av) C_noret;
C_noret_decl(f_11850)
static void C_ccall f_11850(C_word c,C_word *av) C_noret;
C_noret_decl(f_11858)
static void C_ccall f_11858(C_word c,C_word *av) C_noret;
C_noret_decl(f_11866)
static void C_ccall f_11866(C_word c,C_word *av) C_noret;
C_noret_decl(f_11868)
static void C_ccall f_11868(C_word c,C_word *av) C_noret;
C_noret_decl(f_11872)
static void C_ccall f_11872(C_word c,C_word *av) C_noret;
C_noret_decl(f_11875)
static void C_ccall f_11875(C_word c,C_word *av) C_noret;
C_noret_decl(f_11896)
static void C_ccall f_11896(C_word c,C_word *av) C_noret;
C_noret_decl(f_11898)
static void C_ccall f_11898(C_word c,C_word *av) C_noret;
C_noret_decl(f_11902)
static void C_ccall f_11902(C_word c,C_word *av) C_noret;
C_noret_decl(f_11913)
static void C_ccall f_11913(C_word c,C_word *av) C_noret;
C_noret_decl(f_11915)
static void C_ccall f_11915(C_word c,C_word *av) C_noret;
C_noret_decl(f_11919)
static void C_ccall f_11919(C_word c,C_word *av) C_noret;
C_noret_decl(f_11928)
static void C_ccall f_11928(C_word c,C_word *av) C_noret;
C_noret_decl(f_11931)
static void C_ccall f_11931(C_word c,C_word *av) C_noret;
C_noret_decl(f_11934)
static void C_ccall f_11934(C_word c,C_word *av) C_noret;
C_noret_decl(f_11957)
static void C_ccall f_11957(C_word c,C_word *av) C_noret;
C_noret_decl(f_11973)
static void C_ccall f_11973(C_word c,C_word *av) C_noret;
C_noret_decl(f_11975)
static void C_ccall f_11975(C_word c,C_word *av) C_noret;
C_noret_decl(f_11979)
static void C_ccall f_11979(C_word c,C_word *av) C_noret;
C_noret_decl(f_11985)
static void C_ccall f_11985(C_word c,C_word *av) C_noret;
C_noret_decl(f_11988)
static void C_ccall f_11988(C_word c,C_word *av) C_noret;
C_noret_decl(f_12012)
static void C_fcall f_12012(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12016)
static void C_ccall f_12016(C_word c,C_word *av) C_noret;
C_noret_decl(f_12023)
static void C_ccall f_12023(C_word c,C_word *av) C_noret;
C_noret_decl(f_12050)
static void C_ccall f_12050(C_word c,C_word *av) C_noret;
C_noret_decl(f_12052)
static void C_fcall f_12052(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12077)
static void C_ccall f_12077(C_word c,C_word *av) C_noret;
C_noret_decl(f_12096)
static void C_ccall f_12096(C_word c,C_word *av) C_noret;
C_noret_decl(f_12098)
static void C_ccall f_12098(C_word c,C_word *av) C_noret;
C_noret_decl(f_12108)
static void C_ccall f_12108(C_word c,C_word *av) C_noret;
C_noret_decl(f_12117)
static void C_ccall f_12117(C_word c,C_word *av) C_noret;
C_noret_decl(f_12121)
static void C_ccall f_12121(C_word c,C_word *av) C_noret;
C_noret_decl(f_12124)
static void C_ccall f_12124(C_word c,C_word *av) C_noret;
C_noret_decl(f_12127)
static void C_ccall f_12127(C_word c,C_word *av) C_noret;
C_noret_decl(f_12130)
static void C_ccall f_12130(C_word c,C_word *av) C_noret;
C_noret_decl(f_12138)
static void C_fcall f_12138(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12148)
static void C_ccall f_12148(C_word c,C_word *av) C_noret;
C_noret_decl(f_12151)
static void C_ccall f_12151(C_word c,C_word *av) C_noret;
C_noret_decl(f_12157)
static void C_ccall f_12157(C_word c,C_word *av) C_noret;
C_noret_decl(f_12192)
static void C_ccall f_12192(C_word c,C_word *av) C_noret;
C_noret_decl(f_12194)
static void C_fcall f_12194(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12252)
static void C_ccall f_12252(C_word c,C_word *av) C_noret;
C_noret_decl(f_12256)
static void C_ccall f_12256(C_word c,C_word *av) C_noret;
C_noret_decl(f_12289)
static void C_ccall f_12289(C_word c,C_word *av) C_noret;
C_noret_decl(f_12291)
static void C_fcall f_12291(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12316)
static void C_ccall f_12316(C_word c,C_word *av) C_noret;
C_noret_decl(f_12333)
static void C_ccall f_12333(C_word c,C_word *av) C_noret;
C_noret_decl(f_12335)
static void C_fcall f_12335(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12353)
static void C_ccall f_12353(C_word c,C_word *av) C_noret;
C_noret_decl(f_12389)
static void C_fcall f_12389(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12406)
static void C_ccall f_12406(C_word c,C_word *av) C_noret;
C_noret_decl(f_12463)
static void C_ccall f_12463(C_word c,C_word *av) C_noret;
C_noret_decl(f_12465)
static void C_ccall f_12465(C_word c,C_word *av) C_noret;
C_noret_decl(f_12475)
static void C_ccall f_12475(C_word c,C_word *av) C_noret;
C_noret_decl(f_12492)
static void C_ccall f_12492(C_word c,C_word *av) C_noret;
C_noret_decl(f_12513)
static void C_ccall f_12513(C_word c,C_word *av) C_noret;
C_noret_decl(f_12523)
static void C_ccall f_12523(C_word c,C_word *av) C_noret;
C_noret_decl(f_12531)
static void C_ccall f_12531(C_word c,C_word *av) C_noret;
C_noret_decl(f_12533)
static void C_ccall f_12533(C_word c,C_word *av) C_noret;
C_noret_decl(f_12549)
static void C_ccall f_12549(C_word c,C_word *av) C_noret;
C_noret_decl(f_12559)
static void C_fcall f_12559(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12593)
static void C_fcall f_12593(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12637)
static void C_ccall f_12637(C_word c,C_word *av) C_noret;
C_noret_decl(f_12643)
static void C_ccall f_12643(C_word c,C_word *av) C_noret;
C_noret_decl(f_12646)
static void C_ccall f_12646(C_word c,C_word *av) C_noret;
C_noret_decl(f_12652)
static void C_ccall f_12652(C_word c,C_word *av) C_noret;
C_noret_decl(f_12661)
static void C_fcall f_12661(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12668)
static void C_ccall f_12668(C_word c,C_word *av) C_noret;
C_noret_decl(f_12682)
static void C_ccall f_12682(C_word c,C_word *av) C_noret;
C_noret_decl(f_12693)
static void C_ccall f_12693(C_word c,C_word *av) C_noret;
C_noret_decl(f_12696)
static void C_ccall f_12696(C_word c,C_word *av) C_noret;
C_noret_decl(f_12702)
static void C_ccall f_12702(C_word c,C_word *av) C_noret;
C_noret_decl(f_12711)
static void C_fcall f_12711(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12718)
static void C_ccall f_12718(C_word c,C_word *av) C_noret;
C_noret_decl(f_12730)
static void C_fcall f_12730(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12741)
static void C_ccall f_12741(C_word c,C_word *av) C_noret;
C_noret_decl(f_12772)
static void C_ccall f_12772(C_word c,C_word *av) C_noret;
C_noret_decl(f_12774)
static void C_ccall f_12774(C_word c,C_word *av) C_noret;
C_noret_decl(f_12778)
static void C_ccall f_12778(C_word c,C_word *av) C_noret;
C_noret_decl(f_12794)
static void C_ccall f_12794(C_word c,C_word *av) C_noret;
C_noret_decl(f_12810)
static void C_ccall f_12810(C_word c,C_word *av) C_noret;
C_noret_decl(f_12812)
static void C_ccall f_12812(C_word c,C_word *av) C_noret;
C_noret_decl(f_12816)
static void C_ccall f_12816(C_word c,C_word *av) C_noret;
C_noret_decl(f_12825)
static void C_ccall f_12825(C_word c,C_word *av) C_noret;
C_noret_decl(f_12832)
static void C_ccall f_12832(C_word c,C_word *av) C_noret;
C_noret_decl(f_12840)
static void C_ccall f_12840(C_word c,C_word *av) C_noret;
C_noret_decl(f_12842)
static void C_ccall f_12842(C_word c,C_word *av) C_noret;
C_noret_decl(f_12867)
static void C_ccall f_12867(C_word c,C_word *av) C_noret;
C_noret_decl(f_12871)
static void C_fcall f_12871(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12921)
static void C_ccall f_12921(C_word c,C_word *av) C_noret;
C_noret_decl(f_12923)
static void C_ccall f_12923(C_word c,C_word *av) C_noret;
C_noret_decl(f_12927)
static void C_ccall f_12927(C_word c,C_word *av) C_noret;
C_noret_decl(f_12930)
static void C_ccall f_12930(C_word c,C_word *av) C_noret;
C_noret_decl(f_12933)
static void C_ccall f_12933(C_word c,C_word *av) C_noret;
C_noret_decl(f_12936)
static void C_ccall f_12936(C_word c,C_word *av) C_noret;
C_noret_decl(f_12939)
static void C_ccall f_12939(C_word c,C_word *av) C_noret;
C_noret_decl(f_12942)
static void C_ccall f_12942(C_word c,C_word *av) C_noret;
C_noret_decl(f_12944)
static void C_fcall f_12944(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12954)
static void C_fcall f_12954(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12979)
static C_word C_fcall f_12979(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_12993)
static void C_ccall f_12993(C_word c,C_word *av) C_noret;
C_noret_decl(f_12995)
static void C_fcall f_12995(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13074)
static void C_ccall f_13074(C_word c,C_word *av) C_noret;
C_noret_decl(f_13099)
static void C_ccall f_13099(C_word c,C_word *av) C_noret;
C_noret_decl(f_13106)
static void C_ccall f_13106(C_word c,C_word *av) C_noret;
C_noret_decl(f_13110)
static void C_ccall f_13110(C_word c,C_word *av) C_noret;
C_noret_decl(f_13130)
static void C_fcall f_13130(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13155)
static void C_ccall f_13155(C_word c,C_word *av) C_noret;
C_noret_decl(f_13194)
static void C_ccall f_13194(C_word c,C_word *av) C_noret;
C_noret_decl(f_13196)
static void C_ccall f_13196(C_word c,C_word *av) C_noret;
C_noret_decl(f_13200)
static void C_ccall f_13200(C_word c,C_word *av) C_noret;
C_noret_decl(f_13203)
static void C_ccall f_13203(C_word c,C_word *av) C_noret;
C_noret_decl(f_13206)
static void C_ccall f_13206(C_word c,C_word *av) C_noret;
C_noret_decl(f_13217)
static void C_ccall f_13217(C_word c,C_word *av) C_noret;
C_noret_decl(f_4238)
static void C_ccall f_4238(C_word c,C_word *av) C_noret;
C_noret_decl(f_4241)
static void C_ccall f_4241(C_word c,C_word *av) C_noret;
C_noret_decl(f_4244)
static void C_ccall f_4244(C_word c,C_word *av) C_noret;
C_noret_decl(f_4354)
static void C_fcall f_4354(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4372)
static void C_ccall f_4372(C_word c,C_word *av) C_noret;
C_noret_decl(f_4412)
static void C_fcall f_4412(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word *av) C_noret;
C_noret_decl(f_5526)
static void C_ccall f_5526(C_word c,C_word *av) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word *av) C_noret;
C_noret_decl(f_5532)
static void C_ccall f_5532(C_word c,C_word *av) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word *av) C_noret;
C_noret_decl(f_5539)
static void C_ccall f_5539(C_word c,C_word *av) C_noret;
C_noret_decl(f_5542)
static void C_ccall f_5542(C_word c,C_word *av) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word *av) C_noret;
C_noret_decl(f_5548)
static void C_ccall f_5548(C_word c,C_word *av) C_noret;
C_noret_decl(f_5551)
static void C_ccall f_5551(C_word c,C_word *av) C_noret;
C_noret_decl(f_5554)
static void C_ccall f_5554(C_word c,C_word *av) C_noret;
C_noret_decl(f_5557)
static void C_ccall f_5557(C_word c,C_word *av) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word *av) C_noret;
C_noret_decl(f_5564)
static void C_ccall f_5564(C_word c,C_word *av) C_noret;
C_noret_decl(f_5567)
static void C_ccall f_5567(C_word c,C_word *av) C_noret;
C_noret_decl(f_5570)
static void C_ccall f_5570(C_word c,C_word *av) C_noret;
C_noret_decl(f_5573)
static void C_ccall f_5573(C_word c,C_word *av) C_noret;
C_noret_decl(f_5576)
static void C_ccall f_5576(C_word c,C_word *av) C_noret;
C_noret_decl(f_5579)
static void C_ccall f_5579(C_word c,C_word *av) C_noret;
C_noret_decl(f_5582)
static void C_ccall f_5582(C_word c,C_word *av) C_noret;
C_noret_decl(f_5586)
static void C_ccall f_5586(C_word c,C_word *av) C_noret;
C_noret_decl(f_5589)
static void C_ccall f_5589(C_word c,C_word *av) C_noret;
C_noret_decl(f_5592)
static void C_ccall f_5592(C_word c,C_word *av) C_noret;
C_noret_decl(f_5595)
static void C_ccall f_5595(C_word c,C_word *av) C_noret;
C_noret_decl(f_5598)
static void C_ccall f_5598(C_word c,C_word *av) C_noret;
C_noret_decl(f_5601)
static void C_ccall f_5601(C_word c,C_word *av) C_noret;
C_noret_decl(f_5604)
static void C_ccall f_5604(C_word c,C_word *av) C_noret;
C_noret_decl(f_5607)
static void C_ccall f_5607(C_word c,C_word *av) C_noret;
C_noret_decl(f_5610)
static void C_ccall f_5610(C_word c,C_word *av) C_noret;
C_noret_decl(f_5613)
static void C_ccall f_5613(C_word c,C_word *av) C_noret;
C_noret_decl(f_5616)
static void C_ccall f_5616(C_word c,C_word *av) C_noret;
C_noret_decl(f_5619)
static void C_ccall f_5619(C_word c,C_word *av) C_noret;
C_noret_decl(f_5622)
static void C_ccall f_5622(C_word c,C_word *av) C_noret;
C_noret_decl(f_5625)
static void C_ccall f_5625(C_word c,C_word *av) C_noret;
C_noret_decl(f_5628)
static void C_ccall f_5628(C_word c,C_word *av) C_noret;
C_noret_decl(f_5632)
static void C_ccall f_5632(C_word c,C_word *av) C_noret;
C_noret_decl(f_5635)
static void C_ccall f_5635(C_word c,C_word *av) C_noret;
C_noret_decl(f_5638)
static void C_ccall f_5638(C_word c,C_word *av) C_noret;
C_noret_decl(f_5641)
static void C_ccall f_5641(C_word c,C_word *av) C_noret;
C_noret_decl(f_5644)
static void C_ccall f_5644(C_word c,C_word *av) C_noret;
C_noret_decl(f_5647)
static void C_ccall f_5647(C_word c,C_word *av) C_noret;
C_noret_decl(f_5650)
static void C_ccall f_5650(C_word c,C_word *av) C_noret;
C_noret_decl(f_5653)
static void C_ccall f_5653(C_word c,C_word *av) C_noret;
C_noret_decl(f_5656)
static void C_ccall f_5656(C_word c,C_word *av) C_noret;
C_noret_decl(f_5659)
static void C_ccall f_5659(C_word c,C_word *av) C_noret;
C_noret_decl(f_5662)
static void C_ccall f_5662(C_word c,C_word *av) C_noret;
C_noret_decl(f_5665)
static void C_ccall f_5665(C_word c,C_word *av) C_noret;
C_noret_decl(f_5668)
static void C_ccall f_5668(C_word c,C_word *av) C_noret;
C_noret_decl(f_5671)
static void C_ccall f_5671(C_word c,C_word *av) C_noret;
C_noret_decl(f_5674)
static void C_ccall f_5674(C_word c,C_word *av) C_noret;
C_noret_decl(f_5677)
static void C_ccall f_5677(C_word c,C_word *av) C_noret;
C_noret_decl(f_5680)
static void C_ccall f_5680(C_word c,C_word *av) C_noret;
C_noret_decl(f_5683)
static void C_ccall f_5683(C_word c,C_word *av) C_noret;
C_noret_decl(f_5686)
static void C_ccall f_5686(C_word c,C_word *av) C_noret;
C_noret_decl(f_5689)
static void C_ccall f_5689(C_word c,C_word *av) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693(C_word c,C_word *av) C_noret;
C_noret_decl(f_5696)
static void C_ccall f_5696(C_word c,C_word *av) C_noret;
C_noret_decl(f_5699)
static void C_ccall f_5699(C_word c,C_word *av) C_noret;
C_noret_decl(f_5702)
static void C_ccall f_5702(C_word c,C_word *av) C_noret;
C_noret_decl(f_5706)
static void C_ccall f_5706(C_word c,C_word *av) C_noret;
C_noret_decl(f_5708)
static void C_ccall f_5708(C_word c,C_word *av) C_noret;
C_noret_decl(f_5712)
static void C_ccall f_5712(C_word c,C_word *av) C_noret;
C_noret_decl(f_5755)
static void C_ccall f_5755(C_word c,C_word *av) C_noret;
C_noret_decl(f_5757)
static void C_ccall f_5757(C_word c,C_word *av) C_noret;
C_noret_decl(f_5761)
static void C_ccall f_5761(C_word c,C_word *av) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772(C_word c,C_word *av) C_noret;
C_noret_decl(f_5775)
static void C_fcall f_5775(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5798)
static void C_fcall f_5798(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5817)
static void C_ccall f_5817(C_word c,C_word *av) C_noret;
C_noret_decl(f_5827)
static void C_ccall f_5827(C_word c,C_word *av) C_noret;
C_noret_decl(f_5834)
static void C_ccall f_5834(C_word c,C_word *av) C_noret;
C_noret_decl(f_5844)
static void C_ccall f_5844(C_word c,C_word *av) C_noret;
C_noret_decl(f_5846)
static void C_ccall f_5846(C_word c,C_word *av) C_noret;
C_noret_decl(f_5854)
static void C_ccall f_5854(C_word c,C_word *av) C_noret;
C_noret_decl(f_5862)
static void C_ccall f_5862(C_word c,C_word *av) C_noret;
C_noret_decl(f_5864)
static void C_ccall f_5864(C_word c,C_word *av) C_noret;
C_noret_decl(f_5868)
static void C_ccall f_5868(C_word c,C_word *av) C_noret;
C_noret_decl(f_5927)
static void C_ccall f_5927(C_word c,C_word *av) C_noret;
C_noret_decl(f_5929)
static void C_ccall f_5929(C_word c,C_word *av) C_noret;
C_noret_decl(f_5933)
static void C_ccall f_5933(C_word c,C_word *av) C_noret;
C_noret_decl(f_5936)
static void C_ccall f_5936(C_word c,C_word *av) C_noret;
C_noret_decl(f_5939)
static void C_ccall f_5939(C_word c,C_word *av) C_noret;
C_noret_decl(f_5942)
static void C_ccall f_5942(C_word c,C_word *av) C_noret;
C_noret_decl(f_5949)
static void C_fcall f_5949(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5959)
static void C_ccall f_5959(C_word c,C_word *av) C_noret;
C_noret_decl(f_5962)
static void C_ccall f_5962(C_word c,C_word *av) C_noret;
C_noret_decl(f_5968)
static void C_ccall f_5968(C_word c,C_word *av) C_noret;
C_noret_decl(f_5979)
static void C_ccall f_5979(C_word c,C_word *av) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995(C_word c,C_word *av) C_noret;
C_noret_decl(f_6005)
static void C_ccall f_6005(C_word c,C_word *av) C_noret;
C_noret_decl(f_6028)
static void C_ccall f_6028(C_word c,C_word *av) C_noret;
C_noret_decl(f_6031)
static void C_ccall f_6031(C_word c,C_word *av) C_noret;
C_noret_decl(f_6048)
static void C_ccall f_6048(C_word c,C_word *av) C_noret;
C_noret_decl(f_6054)
static void C_ccall f_6054(C_word c,C_word *av) C_noret;
C_noret_decl(f_6071)
static void C_ccall f_6071(C_word c,C_word *av) C_noret;
C_noret_decl(f_6094)
static void C_ccall f_6094(C_word c,C_word *av) C_noret;
C_noret_decl(f_6122)
static void C_ccall f_6122(C_word c,C_word *av) C_noret;
C_noret_decl(f_6124)
static void C_ccall f_6124(C_word c,C_word *av) C_noret;
C_noret_decl(f_6128)
static void C_ccall f_6128(C_word c,C_word *av) C_noret;
C_noret_decl(f_6131)
static void C_ccall f_6131(C_word c,C_word *av) C_noret;
C_noret_decl(f_6134)
static void C_ccall f_6134(C_word c,C_word *av) C_noret;
C_noret_decl(f_6137)
static void C_ccall f_6137(C_word c,C_word *av) C_noret;
C_noret_decl(f_6144)
static void C_fcall f_6144(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6154)
static void C_ccall f_6154(C_word c,C_word *av) C_noret;
C_noret_decl(f_6157)
static void C_ccall f_6157(C_word c,C_word *av) C_noret;
C_noret_decl(f_6163)
static void C_ccall f_6163(C_word c,C_word *av) C_noret;
C_noret_decl(f_6170)
static void C_ccall f_6170(C_word c,C_word *av) C_noret;
C_noret_decl(f_6186)
static void C_ccall f_6186(C_word c,C_word *av) C_noret;
C_noret_decl(f_6196)
static void C_ccall f_6196(C_word c,C_word *av) C_noret;
C_noret_decl(f_6219)
static void C_ccall f_6219(C_word c,C_word *av) C_noret;
C_noret_decl(f_6222)
static void C_ccall f_6222(C_word c,C_word *av) C_noret;
C_noret_decl(f_6239)
static void C_ccall f_6239(C_word c,C_word *av) C_noret;
C_noret_decl(f_6245)
static void C_ccall f_6245(C_word c,C_word *av) C_noret;
C_noret_decl(f_6294)
static void C_ccall f_6294(C_word c,C_word *av) C_noret;
C_noret_decl(f_6296)
static void C_ccall f_6296(C_word c,C_word *av) C_noret;
C_noret_decl(f_6300)
static void C_ccall f_6300(C_word c,C_word *av) C_noret;
C_noret_decl(f_6306)
static void C_ccall f_6306(C_word c,C_word *av) C_noret;
C_noret_decl(f_6309)
static void C_ccall f_6309(C_word c,C_word *av) C_noret;
C_noret_decl(f_6321)
static void C_ccall f_6321(C_word c,C_word *av) C_noret;
C_noret_decl(f_6324)
static void C_ccall f_6324(C_word c,C_word *av) C_noret;
C_noret_decl(f_6330)
static void C_ccall f_6330(C_word c,C_word *av) C_noret;
C_noret_decl(f_6333)
static void C_ccall f_6333(C_word c,C_word *av) C_noret;
C_noret_decl(f_6342)
static void C_ccall f_6342(C_word c,C_word *av) C_noret;
C_noret_decl(f_6343)
static void C_fcall f_6343(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6359)
static void C_ccall f_6359(C_word c,C_word *av) C_noret;
C_noret_decl(f_6390)
static void C_ccall f_6390(C_word c,C_word *av) C_noret;
C_noret_decl(f_6392)
static void C_fcall f_6392(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6411)
static void C_fcall f_6411(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6417)
static void C_fcall f_6417(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6424)
static void C_fcall f_6424(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6428)
static void C_ccall f_6428(C_word c,C_word *av) C_noret;
C_noret_decl(f_6432)
static void C_fcall f_6432(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6436)
static void C_ccall f_6436(C_word c,C_word *av) C_noret;
C_noret_decl(f_6464)
static void C_ccall f_6464(C_word c,C_word *av) C_noret;
C_noret_decl(f_6485)
static void C_ccall f_6485(C_word c,C_word *av) C_noret;
C_noret_decl(f_6564)
static void C_ccall f_6564(C_word c,C_word *av) C_noret;
C_noret_decl(f_6607)
static C_word C_fcall f_6607(C_word t0,C_word t1);
C_noret_decl(f_6620)
static void C_ccall f_6620(C_word c,C_word *av) C_noret;
C_noret_decl(f_6622)
static void C_fcall f_6622(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6660)
static void C_fcall f_6660(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6670)
static void C_ccall f_6670(C_word c,C_word *av) C_noret;
C_noret_decl(f_6683)
static void C_fcall f_6683(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6718)
static void C_ccall f_6718(C_word c,C_word *av) C_noret;
C_noret_decl(f_6725)
static void C_ccall f_6725(C_word c,C_word *av) C_noret;
C_noret_decl(f_6729)
static void C_ccall f_6729(C_word c,C_word *av) C_noret;
C_noret_decl(f_6733)
static void C_ccall f_6733(C_word c,C_word *av) C_noret;
C_noret_decl(f_6735)
static void C_ccall f_6735(C_word c,C_word *av) C_noret;
C_noret_decl(f_6739)
static void C_ccall f_6739(C_word c,C_word *av) C_noret;
C_noret_decl(f_6747)
static void C_ccall f_6747(C_word c,C_word *av) C_noret;
C_noret_decl(f_6756)
static void C_ccall f_6756(C_word c,C_word *av) C_noret;
C_noret_decl(f_6759)
static void C_ccall f_6759(C_word c,C_word *av) C_noret;
C_noret_decl(f_6762)
static void C_ccall f_6762(C_word c,C_word *av) C_noret;
C_noret_decl(f_6784)
static void C_ccall f_6784(C_word c,C_word *av) C_noret;
C_noret_decl(f_6791)
static void C_ccall f_6791(C_word c,C_word *av) C_noret;
C_noret_decl(f_6795)
static void C_ccall f_6795(C_word c,C_word *av) C_noret;
C_noret_decl(f_6806)
static void C_ccall f_6806(C_word c,C_word *av) C_noret;
C_noret_decl(f_6809)
static void C_ccall f_6809(C_word c,C_word *av) C_noret;
C_noret_decl(f_6812)
static void C_ccall f_6812(C_word c,C_word *av) C_noret;
C_noret_decl(f_6826)
static void C_ccall f_6826(C_word c,C_word *av) C_noret;
C_noret_decl(f_6833)
static void C_ccall f_6833(C_word c,C_word *av) C_noret;
C_noret_decl(f_6837)
static void C_ccall f_6837(C_word c,C_word *av) C_noret;
C_noret_decl(f_6849)
static void C_ccall f_6849(C_word c,C_word *av) C_noret;
C_noret_decl(f_6851)
static void C_ccall f_6851(C_word c,C_word *av) C_noret;
C_noret_decl(f_6855)
static void C_ccall f_6855(C_word c,C_word *av) C_noret;
C_noret_decl(f_6857)
static void C_fcall f_6857(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6863)
static void C_fcall f_6863(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6877)
static void C_ccall f_6877(C_word c,C_word *av) C_noret;
C_noret_decl(f_6881)
static void C_ccall f_6881(C_word c,C_word *av) C_noret;
C_noret_decl(f_6889)
static void C_ccall f_6889(C_word c,C_word *av) C_noret;
C_noret_decl(f_6892)
static void C_ccall f_6892(C_word c,C_word *av) C_noret;
C_noret_decl(f_6895)
static void C_ccall f_6895(C_word c,C_word *av) C_noret;
C_noret_decl(f_6898)
static void C_ccall f_6898(C_word c,C_word *av) C_noret;
C_noret_decl(f_6901)
static void C_ccall f_6901(C_word c,C_word *av) C_noret;
C_noret_decl(f_6904)
static void C_ccall f_6904(C_word c,C_word *av) C_noret;
C_noret_decl(f_6907)
static void C_ccall f_6907(C_word c,C_word *av) C_noret;
C_noret_decl(f_6910)
static void C_ccall f_6910(C_word c,C_word *av) C_noret;
C_noret_decl(f_6913)
static void C_ccall f_6913(C_word c,C_word *av) C_noret;
C_noret_decl(f_6916)
static void C_ccall f_6916(C_word c,C_word *av) C_noret;
C_noret_decl(f_6923)
static void C_ccall f_6923(C_word c,C_word *av) C_noret;
C_noret_decl(f_6939)
static void C_ccall f_6939(C_word c,C_word *av) C_noret;
C_noret_decl(f_6941)
static void C_fcall f_6941(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6949)
static void C_fcall f_6949(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6959)
static void C_ccall f_6959(C_word c,C_word *av) C_noret;
C_noret_decl(f_6963)
static void C_ccall f_6963(C_word c,C_word *av) C_noret;
C_noret_decl(f_6973)
static void C_fcall f_6973(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6977)
static void C_ccall f_6977(C_word c,C_word *av) C_noret;
C_noret_decl(f_6979)
static void C_ccall f_6979(C_word c,C_word *av) C_noret;
C_noret_decl(f_6987)
static void C_ccall f_6987(C_word c,C_word *av) C_noret;
C_noret_decl(f_6989)
static void C_ccall f_6989(C_word c,C_word *av) C_noret;
C_noret_decl(f_6993)
static void C_ccall f_6993(C_word c,C_word *av) C_noret;
C_noret_decl(f_7015)
static void C_ccall f_7015(C_word c,C_word *av) C_noret;
C_noret_decl(f_7017)
static void C_fcall f_7017(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7065)
static void C_fcall f_7065(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7118)
static void C_ccall f_7118(C_word c,C_word *av) C_noret;
C_noret_decl(f_7129)
static void C_ccall f_7129(C_word c,C_word *av) C_noret;
C_noret_decl(f_7166)
static void C_ccall f_7166(C_word c,C_word *av) C_noret;
C_noret_decl(f_7194)
static void C_ccall f_7194(C_word c,C_word *av) C_noret;
C_noret_decl(f_7221)
static void C_ccall f_7221(C_word c,C_word *av) C_noret;
C_noret_decl(f_7231)
static void C_ccall f_7231(C_word c,C_word *av) C_noret;
C_noret_decl(f_7233)
static void C_fcall f_7233(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7258)
static void C_ccall f_7258(C_word c,C_word *av) C_noret;
C_noret_decl(f_7293)
static void C_ccall f_7293(C_word c,C_word *av) C_noret;
C_noret_decl(f_7295)
static void C_ccall f_7295(C_word c,C_word *av) C_noret;
C_noret_decl(f_7299)
static void C_ccall f_7299(C_word c,C_word *av) C_noret;
C_noret_decl(f_7311)
static void C_ccall f_7311(C_word c,C_word *av) C_noret;
C_noret_decl(f_7314)
static void C_ccall f_7314(C_word c,C_word *av) C_noret;
C_noret_decl(f_7317)
static void C_ccall f_7317(C_word c,C_word *av) C_noret;
C_noret_decl(f_7320)
static void C_ccall f_7320(C_word c,C_word *av) C_noret;
C_noret_decl(f_7331)
static void C_ccall f_7331(C_word c,C_word *av) C_noret;
C_noret_decl(f_7333)
static void C_fcall f_7333(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7359)
static void C_ccall f_7359(C_word c,C_word *av) C_noret;
C_noret_decl(f_7370)
static void C_ccall f_7370(C_word c,C_word *av) C_noret;
C_noret_decl(f_7453)
static void C_ccall f_7453(C_word c,C_word *av) C_noret;
C_noret_decl(f_7455)
static void C_ccall f_7455(C_word c,C_word *av) C_noret;
C_noret_decl(f_7459)
static void C_ccall f_7459(C_word c,C_word *av) C_noret;
C_noret_decl(f_7462)
static void C_ccall f_7462(C_word c,C_word *av) C_noret;
C_noret_decl(f_7492)
static void C_ccall f_7492(C_word c,C_word *av) C_noret;
C_noret_decl(f_7502)
static void C_ccall f_7502(C_word c,C_word *av) C_noret;
C_noret_decl(f_7530)
static void C_ccall f_7530(C_word c,C_word *av) C_noret;
C_noret_decl(f_7532)
static void C_ccall f_7532(C_word c,C_word *av) C_noret;
C_noret_decl(f_7536)
static void C_ccall f_7536(C_word c,C_word *av) C_noret;
C_noret_decl(f_7555)
static void C_ccall f_7555(C_word c,C_word *av) C_noret;
C_noret_decl(f_7559)
static void C_ccall f_7559(C_word c,C_word *av) C_noret;
C_noret_decl(f_7563)
static void C_ccall f_7563(C_word c,C_word *av) C_noret;
C_noret_decl(f_7565)
static void C_fcall f_7565(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7586)
static void C_ccall f_7586(C_word c,C_word *av) C_noret;
C_noret_decl(f_7604)
static void C_ccall f_7604(C_word c,C_word *av) C_noret;
C_noret_decl(f_7612)
static void C_ccall f_7612(C_word c,C_word *av) C_noret;
C_noret_decl(f_7616)
static void C_ccall f_7616(C_word c,C_word *av) C_noret;
C_noret_decl(f_7626)
static void C_fcall f_7626(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7632)
static void C_fcall f_7632(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7646)
static void C_ccall f_7646(C_word c,C_word *av) C_noret;
C_noret_decl(f_7672)
static void C_ccall f_7672(C_word c,C_word *av) C_noret;
C_noret_decl(f_7696)
static void C_ccall f_7696(C_word c,C_word *av) C_noret;
C_noret_decl(f_7704)
static void C_ccall f_7704(C_word c,C_word *av) C_noret;
C_noret_decl(f_7712)
static void C_ccall f_7712(C_word c,C_word *av) C_noret;
C_noret_decl(f_7716)
static void C_ccall f_7716(C_word c,C_word *av) C_noret;
C_noret_decl(f_7719)
static void C_ccall f_7719(C_word c,C_word *av) C_noret;
C_noret_decl(f_7722)
static void C_ccall f_7722(C_word c,C_word *av) C_noret;
C_noret_decl(f_7731)
static void C_ccall f_7731(C_word c,C_word *av) C_noret;
C_noret_decl(f_7732)
static void C_fcall f_7732(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7740)
static void C_ccall f_7740(C_word c,C_word *av) C_noret;
C_noret_decl(f_7744)
static void C_ccall f_7744(C_word c,C_word *av) C_noret;
C_noret_decl(f_7748)
static void C_fcall f_7748(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7756)
static void C_ccall f_7756(C_word c,C_word *av) C_noret;
C_noret_decl(f_7762)
static void C_ccall f_7762(C_word c,C_word *av) C_noret;
C_noret_decl(f_7768)
static void C_ccall f_7768(C_word c,C_word *av) C_noret;
C_noret_decl(f_7771)
static void C_ccall f_7771(C_word c,C_word *av) C_noret;
C_noret_decl(f_7774)
static void C_ccall f_7774(C_word c,C_word *av) C_noret;
C_noret_decl(f_7778)
static void C_fcall f_7778(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7786)
static void C_ccall f_7786(C_word c,C_word *av) C_noret;
C_noret_decl(f_7789)
static void C_ccall f_7789(C_word c,C_word *av) C_noret;
C_noret_decl(f_7792)
static void C_ccall f_7792(C_word c,C_word *av) C_noret;
C_noret_decl(f_7795)
static void C_ccall f_7795(C_word c,C_word *av) C_noret;
C_noret_decl(f_7802)
static void C_ccall f_7802(C_word c,C_word *av) C_noret;
C_noret_decl(f_7828)
static void C_fcall f_7828(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7853)
static void C_ccall f_7853(C_word c,C_word *av) C_noret;
C_noret_decl(f_7862)
static void C_fcall f_7862(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7896)
static void C_fcall f_7896(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7921)
static void C_ccall f_7921(C_word c,C_word *av) C_noret;
C_noret_decl(f_7930)
static void C_fcall f_7930(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7978)
static void C_ccall f_7978(C_word c,C_word *av) C_noret;
C_noret_decl(f_7980)
static void C_ccall f_7980(C_word c,C_word *av) C_noret;
C_noret_decl(f_7984)
static void C_ccall f_7984(C_word c,C_word *av) C_noret;
C_noret_decl(f_7994)
static void C_fcall f_7994(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8021)
static void C_ccall f_8021(C_word c,C_word *av) C_noret;
C_noret_decl(f_8024)
static void C_ccall f_8024(C_word c,C_word *av) C_noret;
C_noret_decl(f_8039)
static void C_ccall f_8039(C_word c,C_word *av) C_noret;
C_noret_decl(f_8047)
static void C_ccall f_8047(C_word c,C_word *av) C_noret;
C_noret_decl(f_8056)
static void C_ccall f_8056(C_word c,C_word *av) C_noret;
C_noret_decl(f_8071)
static void C_ccall f_8071(C_word c,C_word *av) C_noret;
C_noret_decl(f_8081)
static void C_ccall f_8081(C_word c,C_word *av) C_noret;
C_noret_decl(f_8084)
static void C_ccall f_8084(C_word c,C_word *av) C_noret;
C_noret_decl(f_8100)
static void C_ccall f_8100(C_word c,C_word *av) C_noret;
C_noret_decl(f_8120)
static void C_ccall f_8120(C_word c,C_word *av) C_noret;
C_noret_decl(f_8122)
static void C_ccall f_8122(C_word c,C_word *av) C_noret;
C_noret_decl(f_8124)
static void C_ccall f_8124(C_word c,C_word *av) C_noret;
C_noret_decl(f_8128)
static void C_ccall f_8128(C_word c,C_word *av) C_noret;
C_noret_decl(f_8137)
static void C_fcall f_8137(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8140)
static void C_ccall f_8140(C_word c,C_word *av) C_noret;
C_noret_decl(f_8149)
static void C_fcall f_8149(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8165)
static void C_ccall f_8165(C_word c,C_word *av) C_noret;
C_noret_decl(f_8169)
static void C_ccall f_8169(C_word c,C_word *av) C_noret;
C_noret_decl(f_8212)
static void C_ccall f_8212(C_word c,C_word *av) C_noret;
C_noret_decl(f_8224)
static void C_ccall f_8224(C_word c,C_word *av) C_noret;
C_noret_decl(f_8226)
static void C_ccall f_8226(C_word c,C_word *av) C_noret;
C_noret_decl(f_8230)
static void C_ccall f_8230(C_word c,C_word *av) C_noret;
C_noret_decl(f_8233)
static void C_ccall f_8233(C_word c,C_word *av) C_noret;
C_noret_decl(f_8252)
static void C_ccall f_8252(C_word c,C_word *av) C_noret;
C_noret_decl(f_8268)
static void C_ccall f_8268(C_word c,C_word *av) C_noret;
C_noret_decl(f_8270)
static void C_ccall f_8270(C_word c,C_word *av) C_noret;
C_noret_decl(f_8274)
static void C_ccall f_8274(C_word c,C_word *av) C_noret;
C_noret_decl(f_8277)
static void C_ccall f_8277(C_word c,C_word *av) C_noret;
C_noret_decl(f_8290)
static void C_ccall f_8290(C_word c,C_word *av) C_noret;
C_noret_decl(f_8292)
static void C_ccall f_8292(C_word c,C_word *av) C_noret;
C_noret_decl(f_8296)
static void C_ccall f_8296(C_word c,C_word *av) C_noret;
C_noret_decl(f_8310)
static void C_ccall f_8310(C_word c,C_word *av) C_noret;
C_noret_decl(f_8316)
static void C_ccall f_8316(C_word c,C_word *av) C_noret;
C_noret_decl(f_8338)
static void C_ccall f_8338(C_word c,C_word *av) C_noret;
C_noret_decl(f_8344)
static void C_ccall f_8344(C_word c,C_word *av) C_noret;
C_noret_decl(f_8348)
static void C_ccall f_8348(C_word c,C_word *av) C_noret;
C_noret_decl(f_8358)
static void C_ccall f_8358(C_word c,C_word *av) C_noret;
C_noret_decl(f_8360)
static void C_fcall f_8360(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8389)
static void C_ccall f_8389(C_word c,C_word *av) C_noret;
C_noret_decl(f_8408)
static void C_fcall f_8408(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8442)
static void C_fcall f_8442(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8466)
static void C_ccall f_8466(C_word c,C_word *av) C_noret;
C_noret_decl(f_8468)
static void C_ccall f_8468(C_word c,C_word *av) C_noret;
C_noret_decl(f_8472)
static void C_ccall f_8472(C_word c,C_word *av) C_noret;
C_noret_decl(f_8478)
static void C_fcall f_8478(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8512)
static void C_fcall f_8512(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8548)
static void C_ccall f_8548(C_word c,C_word *av) C_noret;
C_noret_decl(f_8550)
static void C_ccall f_8550(C_word c,C_word *av) C_noret;
C_noret_decl(f_8554)
static void C_ccall f_8554(C_word c,C_word *av) C_noret;
C_noret_decl(f_8562)
static void C_ccall f_8562(C_word c,C_word *av) C_noret;
C_noret_decl(f_8567)
static void C_fcall f_8567(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8592)
static void C_ccall f_8592(C_word c,C_word *av) C_noret;
C_noret_decl(f_8602)
static void C_ccall f_8602(C_word c,C_word *av) C_noret;
C_noret_decl(f_8604)
static void C_ccall f_8604(C_word c,C_word *av) C_noret;
C_noret_decl(f_8608)
static void C_ccall f_8608(C_word c,C_word *av) C_noret;
C_noret_decl(f_8614)
static void C_ccall f_8614(C_word c,C_word *av) C_noret;
C_noret_decl(f_8635)
static void C_ccall f_8635(C_word c,C_word *av) C_noret;
C_noret_decl(f_8642)
static void C_ccall f_8642(C_word c,C_word *av) C_noret;
C_noret_decl(f_8665)
static void C_ccall f_8665(C_word c,C_word *av) C_noret;
C_noret_decl(f_8669)
static void C_ccall f_8669(C_word c,C_word *av) C_noret;
C_noret_decl(f_8690)
static void C_ccall f_8690(C_word c,C_word *av) C_noret;
C_noret_decl(f_8693)
static void C_ccall f_8693(C_word c,C_word *av) C_noret;
C_noret_decl(f_8697)
static void C_fcall f_8697(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8705)
static void C_ccall f_8705(C_word c,C_word *av) C_noret;
C_noret_decl(f_8709)
static void C_ccall f_8709(C_word c,C_word *av) C_noret;
C_noret_decl(f_8715)
static void C_ccall f_8715(C_word c,C_word *av) C_noret;
C_noret_decl(f_8716)
static void C_ccall f_8716(C_word c,C_word *av) C_noret;
C_noret_decl(f_8727)
static void C_ccall f_8727(C_word c,C_word *av) C_noret;
C_noret_decl(f_8742)
static void C_ccall f_8742(C_word c,C_word *av) C_noret;
C_noret_decl(f_8744)
static void C_fcall f_8744(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8763)
static void C_fcall f_8763(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8771)
static void C_ccall f_8771(C_word c,C_word *av) C_noret;
C_noret_decl(f_8777)
static void C_ccall f_8777(C_word c,C_word *av) C_noret;
C_noret_decl(f_8779)
static void C_fcall f_8779(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8804)
static void C_ccall f_8804(C_word c,C_word *av) C_noret;
C_noret_decl(f_8828)
static void C_ccall f_8828(C_word c,C_word *av) C_noret;
C_noret_decl(f_8865)
static void C_ccall f_8865(C_word c,C_word *av) C_noret;
C_noret_decl(f_8893)
static void C_fcall f_8893(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8927)
static void C_fcall f_8927(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8958)
static void C_ccall f_8958(C_word c,C_word *av) C_noret;
C_noret_decl(f_8965)
static void C_ccall f_8965(C_word c,C_word *av) C_noret;
C_noret_decl(f_8971)
static void C_fcall f_8971(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8996)
static void C_ccall f_8996(C_word c,C_word *av) C_noret;
C_noret_decl(f_9005)
static void C_fcall f_9005(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9018)
static void C_ccall f_9018(C_word c,C_word *av) C_noret;
C_noret_decl(f_9043)
static void C_fcall f_9043(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9079)
static void C_ccall f_9079(C_word c,C_word *av) C_noret;
C_noret_decl(f_9081)
static void C_ccall f_9081(C_word c,C_word *av) C_noret;
C_noret_decl(f_9085)
static void C_ccall f_9085(C_word c,C_word *av) C_noret;
C_noret_decl(f_9092)
static void C_ccall f_9092(C_word c,C_word *av) C_noret;
C_noret_decl(f_9096)
static void C_ccall f_9096(C_word c,C_word *av) C_noret;
C_noret_decl(f_9104)
static void C_ccall f_9104(C_word c,C_word *av) C_noret;
C_noret_decl(f_9118)
static void C_ccall f_9118(C_word c,C_word *av) C_noret;
C_noret_decl(f_9124)
static void C_ccall f_9124(C_word c,C_word *av) C_noret;
C_noret_decl(f_9131)
static void C_ccall f_9131(C_word c,C_word *av) C_noret;
C_noret_decl(f_9137)
static void C_ccall f_9137(C_word c,C_word *av) C_noret;
C_noret_decl(f_9150)
static void C_fcall f_9150(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9184)
static void C_fcall f_9184(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9194)
static void C_ccall f_9194(C_word c,C_word *av) C_noret;
C_noret_decl(f_9209)
static void C_ccall f_9209(C_word c,C_word *av) C_noret;
C_noret_decl(f_9211)
static void C_ccall f_9211(C_word c,C_word *av) C_noret;
C_noret_decl(f_9215)
static void C_ccall f_9215(C_word c,C_word *av) C_noret;
C_noret_decl(f_9230)
static void C_ccall f_9230(C_word c,C_word *av) C_noret;
C_noret_decl(f_9232)
static void C_ccall f_9232(C_word c,C_word *av) C_noret;
C_noret_decl(f_9236)
static void C_ccall f_9236(C_word c,C_word *av) C_noret;
C_noret_decl(f_9258)
static void C_ccall f_9258(C_word c,C_word *av) C_noret;
C_noret_decl(f_9260)
static void C_ccall f_9260(C_word c,C_word *av) C_noret;
C_noret_decl(f_9264)
static void C_ccall f_9264(C_word c,C_word *av) C_noret;
C_noret_decl(f_9282)
static void C_ccall f_9282(C_word c,C_word *av) C_noret;
C_noret_decl(f_9284)
static void C_ccall f_9284(C_word c,C_word *av) C_noret;
C_noret_decl(f_9293)
static void C_fcall f_9293(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9299)
static void C_ccall f_9299(C_word c,C_word *av) C_noret;
C_noret_decl(f_9305)
static void C_ccall f_9305(C_word c,C_word *av) C_noret;
C_noret_decl(f_9319)
static void C_ccall f_9319(C_word c,C_word *av) C_noret;
C_noret_decl(f_9328)
static void C_ccall f_9328(C_word c,C_word *av) C_noret;
C_noret_decl(f_9330)
static void C_fcall f_9330(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9355)
static void C_ccall f_9355(C_word c,C_word *av) C_noret;
C_noret_decl(f_9366)
static void C_ccall f_9366(C_word c,C_word *av) C_noret;
C_noret_decl(f_9368)
static void C_ccall f_9368(C_word c,C_word *av) C_noret;
C_noret_decl(f_9387)
static void C_ccall f_9387(C_word c,C_word *av) C_noret;
C_noret_decl(f_9395)
static void C_ccall f_9395(C_word c,C_word *av) C_noret;
C_noret_decl(f_9404)
static void C_ccall f_9404(C_word c,C_word *av) C_noret;
C_noret_decl(f_9410)
static void C_ccall f_9410(C_word c,C_word *av) C_noret;
C_noret_decl(f_9414)
static void C_fcall f_9414(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9422)
static void C_ccall f_9422(C_word c,C_word *av) C_noret;
C_noret_decl(f_9428)
static void C_ccall f_9428(C_word c,C_word *av) C_noret;
C_noret_decl(f_9432)
static void C_fcall f_9432(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9440)
static void C_ccall f_9440(C_word c,C_word *av) C_noret;
C_noret_decl(f_9443)
static void C_ccall f_9443(C_word c,C_word *av) C_noret;
C_noret_decl(f_9447)
static void C_fcall f_9447(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9455)
static void C_ccall f_9455(C_word c,C_word *av) C_noret;
C_noret_decl(f_9458)
static void C_ccall f_9458(C_word c,C_word *av) C_noret;
C_noret_decl(f_9471)
static void C_ccall f_9471(C_word c,C_word *av) C_noret;
C_noret_decl(f_9488)
static void C_ccall f_9488(C_word c,C_word *av) C_noret;
C_noret_decl(f_9499)
static void C_ccall f_9499(C_word c,C_word *av) C_noret;
C_noret_decl(f_9547)
static void C_ccall f_9547(C_word c,C_word *av) C_noret;
C_noret_decl(f_9551)
static void C_ccall f_9551(C_word c,C_word *av) C_noret;
C_noret_decl(f_9563)
static void C_ccall f_9563(C_word c,C_word *av) C_noret;
C_noret_decl(f_9575)
static void C_ccall f_9575(C_word c,C_word *av) C_noret;
C_noret_decl(f_9577)
static void C_fcall f_9577(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9625)
static void C_fcall f_9625(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9673)
static void C_fcall f_9673(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9680)
static void C_fcall f_9680(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9750)
static C_word C_fcall f_9750(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3);
C_noret_decl(f_9768)
static void C_ccall f_9768(C_word c,C_word *av) C_noret;
C_noret_decl(f_9772)
static void C_ccall f_9772(C_word c,C_word *av) C_noret;
C_noret_decl(f_9788)
static void C_ccall f_9788(C_word c,C_word *av) C_noret;
C_noret_decl(f_9792)
static void C_ccall f_9792(C_word c,C_word *av) C_noret;
C_noret_decl(f_9804)
static void C_ccall f_9804(C_word c,C_word *av) C_noret;
C_noret_decl(f_9814)
static void C_fcall f_9814(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9862)
static void C_fcall f_9862(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9910)
static void C_fcall f_9910(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9917)
static void C_fcall f_9917(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9980)
static void C_fcall f_9980(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10028)
static void C_ccall trf_10028(C_word c,C_word *av) C_noret;
static void C_ccall trf_10028(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10028(t0,t1,t2,t3);}

C_noret_decl(trf_10076)
static void C_ccall trf_10076(C_word c,C_word *av) C_noret;
static void C_ccall trf_10076(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10076(t0,t1,t2,t3);}

C_noret_decl(trf_10124)
static void C_ccall trf_10124(C_word c,C_word *av) C_noret;
static void C_ccall trf_10124(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10124(t0,t1,t2);}

C_noret_decl(trf_10158)
static void C_ccall trf_10158(C_word c,C_word *av) C_noret;
static void C_ccall trf_10158(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10158(t0,t1,t2);}

C_noret_decl(trf_10192)
static void C_ccall trf_10192(C_word c,C_word *av) C_noret;
static void C_ccall trf_10192(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10192(t0,t1,t2);}

C_noret_decl(trf_10226)
static void C_ccall trf_10226(C_word c,C_word *av) C_noret;
static void C_ccall trf_10226(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10226(t0,t1,t2);}

C_noret_decl(trf_10260)
static void C_ccall trf_10260(C_word c,C_word *av) C_noret;
static void C_ccall trf_10260(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10260(t0,t1,t2);}

C_noret_decl(trf_10320)
static void C_ccall trf_10320(C_word c,C_word *av) C_noret;
static void C_ccall trf_10320(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10320(t0,t1);}

C_noret_decl(trf_10335)
static void C_ccall trf_10335(C_word c,C_word *av) C_noret;
static void C_ccall trf_10335(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10335(t0,t1);}

C_noret_decl(trf_10415)
static void C_ccall trf_10415(C_word c,C_word *av) C_noret;
static void C_ccall trf_10415(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10415(t0,t1,t2,t3);}

C_noret_decl(trf_10463)
static void C_ccall trf_10463(C_word c,C_word *av) C_noret;
static void C_ccall trf_10463(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10463(t0,t1,t2,t3);}

C_noret_decl(trf_10562)
static void C_ccall trf_10562(C_word c,C_word *av) C_noret;
static void C_ccall trf_10562(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10562(t0,t1,t2,t3);}

C_noret_decl(trf_10610)
static void C_ccall trf_10610(C_word c,C_word *av) C_noret;
static void C_ccall trf_10610(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10610(t0,t1,t2,t3);}

C_noret_decl(trf_10693)
static void C_ccall trf_10693(C_word c,C_word *av) C_noret;
static void C_ccall trf_10693(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10693(t0,t1,t2,t3);}

C_noret_decl(trf_10743)
static void C_ccall trf_10743(C_word c,C_word *av) C_noret;
static void C_ccall trf_10743(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10743(t0,t1,t2);}

C_noret_decl(trf_10763)
static void C_ccall trf_10763(C_word c,C_word *av) C_noret;
static void C_ccall trf_10763(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10763(t0,t1,t2,t3);}

C_noret_decl(trf_10811)
static void C_ccall trf_10811(C_word c,C_word *av) C_noret;
static void C_ccall trf_10811(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10811(t0,t1,t2);}

C_noret_decl(trf_10845)
static void C_ccall trf_10845(C_word c,C_word *av) C_noret;
static void C_ccall trf_10845(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10845(t0,t1,t2);}

C_noret_decl(trf_10879)
static void C_ccall trf_10879(C_word c,C_word *av) C_noret;
static void C_ccall trf_10879(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10879(t0,t1,t2);}

C_noret_decl(trf_10913)
static void C_ccall trf_10913(C_word c,C_word *av) C_noret;
static void C_ccall trf_10913(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10913(t0,t1,t2);}

C_noret_decl(trf_11145)
static void C_ccall trf_11145(C_word c,C_word *av) C_noret;
static void C_ccall trf_11145(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11145(t0,t1,t2);}

C_noret_decl(trf_11158)
static void C_ccall trf_11158(C_word c,C_word *av) C_noret;
static void C_ccall trf_11158(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11158(t0,t1);}

C_noret_decl(trf_11238)
static void C_ccall trf_11238(C_word c,C_word *av) C_noret;
static void C_ccall trf_11238(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11238(t0,t1,t2,t3);}

C_noret_decl(trf_11290)
static void C_ccall trf_11290(C_word c,C_word *av) C_noret;
static void C_ccall trf_11290(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11290(t0,t1);}

C_noret_decl(trf_11456)
static void C_ccall trf_11456(C_word c,C_word *av) C_noret;
static void C_ccall trf_11456(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11456(t0,t1,t2);}

C_noret_decl(trf_11657)
static void C_ccall trf_11657(C_word c,C_word *av) C_noret;
static void C_ccall trf_11657(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11657(t0,t1,t2,t3);}

C_noret_decl(trf_11707)
static void C_ccall trf_11707(C_word c,C_word *av) C_noret;
static void C_ccall trf_11707(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11707(t0,t1,t2,t3);}

C_noret_decl(trf_11776)
static void C_ccall trf_11776(C_word c,C_word *av) C_noret;
static void C_ccall trf_11776(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11776(t0,t1);}

C_noret_decl(trf_12012)
static void C_ccall trf_12012(C_word c,C_word *av) C_noret;
static void C_ccall trf_12012(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12012(t0,t1,t2);}

C_noret_decl(trf_12052)
static void C_ccall trf_12052(C_word c,C_word *av) C_noret;
static void C_ccall trf_12052(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12052(t0,t1,t2);}

C_noret_decl(trf_12138)
static void C_ccall trf_12138(C_word c,C_word *av) C_noret;
static void C_ccall trf_12138(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_12138(t0,t1,t2,t3,t4);}

C_noret_decl(trf_12194)
static void C_ccall trf_12194(C_word c,C_word *av) C_noret;
static void C_ccall trf_12194(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12194(t0,t1,t2,t3);}

C_noret_decl(trf_12291)
static void C_ccall trf_12291(C_word c,C_word *av) C_noret;
static void C_ccall trf_12291(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12291(t0,t1,t2);}

C_noret_decl(trf_12335)
static void C_ccall trf_12335(C_word c,C_word *av) C_noret;
static void C_ccall trf_12335(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12335(t0,t1,t2,t3);}

C_noret_decl(trf_12389)
static void C_ccall trf_12389(C_word c,C_word *av) C_noret;
static void C_ccall trf_12389(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12389(t0,t1);}

C_noret_decl(trf_12559)
static void C_ccall trf_12559(C_word c,C_word *av) C_noret;
static void C_ccall trf_12559(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12559(t0,t1,t2);}

C_noret_decl(trf_12593)
static void C_ccall trf_12593(C_word c,C_word *av) C_noret;
static void C_ccall trf_12593(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12593(t0,t1,t2);}

C_noret_decl(trf_12661)
static void C_ccall trf_12661(C_word c,C_word *av) C_noret;
static void C_ccall trf_12661(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12661(t0,t1,t2,t3);}

C_noret_decl(trf_12711)
static void C_ccall trf_12711(C_word c,C_word *av) C_noret;
static void C_ccall trf_12711(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12711(t0,t1,t2,t3);}

C_noret_decl(trf_12730)
static void C_ccall trf_12730(C_word c,C_word *av) C_noret;
static void C_ccall trf_12730(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12730(t0,t1);}

C_noret_decl(trf_12871)
static void C_ccall trf_12871(C_word c,C_word *av) C_noret;
static void C_ccall trf_12871(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12871(t0,t1);}

C_noret_decl(trf_12944)
static void C_ccall trf_12944(C_word c,C_word *av) C_noret;
static void C_ccall trf_12944(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12944(t0,t1,t2);}

C_noret_decl(trf_12954)
static void C_ccall trf_12954(C_word c,C_word *av) C_noret;
static void C_ccall trf_12954(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12954(t0,t1);}

C_noret_decl(trf_12995)
static void C_ccall trf_12995(C_word c,C_word *av) C_noret;
static void C_ccall trf_12995(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12995(t0,t1,t2);}

C_noret_decl(trf_13130)
static void C_ccall trf_13130(C_word c,C_word *av) C_noret;
static void C_ccall trf_13130(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13130(t0,t1,t2);}

C_noret_decl(trf_4354)
static void C_ccall trf_4354(C_word c,C_word *av) C_noret;
static void C_ccall trf_4354(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4354(t0,t1,t2);}

C_noret_decl(trf_4412)
static void C_ccall trf_4412(C_word c,C_word *av) C_noret;
static void C_ccall trf_4412(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4412(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5775)
static void C_ccall trf_5775(C_word c,C_word *av) C_noret;
static void C_ccall trf_5775(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5775(t0,t1);}

C_noret_decl(trf_5798)
static void C_ccall trf_5798(C_word c,C_word *av) C_noret;
static void C_ccall trf_5798(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5798(t0,t1);}

C_noret_decl(trf_5949)
static void C_ccall trf_5949(C_word c,C_word *av) C_noret;
static void C_ccall trf_5949(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_5949(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_6144)
static void C_ccall trf_6144(C_word c,C_word *av) C_noret;
static void C_ccall trf_6144(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_6144(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6343)
static void C_ccall trf_6343(C_word c,C_word *av) C_noret;
static void C_ccall trf_6343(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6343(t0,t1,t2);}

C_noret_decl(trf_6392)
static void C_ccall trf_6392(C_word c,C_word *av) C_noret;
static void C_ccall trf_6392(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6392(t0,t1,t2,t3);}

C_noret_decl(trf_6411)
static void C_ccall trf_6411(C_word c,C_word *av) C_noret;
static void C_ccall trf_6411(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6411(t0,t1);}

C_noret_decl(trf_6417)
static void C_ccall trf_6417(C_word c,C_word *av) C_noret;
static void C_ccall trf_6417(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6417(t0,t1);}

C_noret_decl(trf_6424)
static void C_ccall trf_6424(C_word c,C_word *av) C_noret;
static void C_ccall trf_6424(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6424(t0,t1);}

C_noret_decl(trf_6432)
static void C_ccall trf_6432(C_word c,C_word *av) C_noret;
static void C_ccall trf_6432(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6432(t0,t1);}

C_noret_decl(trf_6622)
static void C_ccall trf_6622(C_word c,C_word *av) C_noret;
static void C_ccall trf_6622(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6622(t0,t1,t2);}

C_noret_decl(trf_6660)
static void C_ccall trf_6660(C_word c,C_word *av) C_noret;
static void C_ccall trf_6660(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6660(t0,t1,t2);}

C_noret_decl(trf_6683)
static void C_ccall trf_6683(C_word c,C_word *av) C_noret;
static void C_ccall trf_6683(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6683(t0,t1,t2);}

C_noret_decl(trf_6857)
static void C_ccall trf_6857(C_word c,C_word *av) C_noret;
static void C_ccall trf_6857(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6857(t0,t1,t2);}

C_noret_decl(trf_6863)
static void C_ccall trf_6863(C_word c,C_word *av) C_noret;
static void C_ccall trf_6863(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6863(t0,t1,t2);}

C_noret_decl(trf_6941)
static void C_ccall trf_6941(C_word c,C_word *av) C_noret;
static void C_ccall trf_6941(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6941(t0,t1,t2);}

C_noret_decl(trf_6949)
static void C_ccall trf_6949(C_word c,C_word *av) C_noret;
static void C_ccall trf_6949(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6949(t0,t1,t2,t3);}

C_noret_decl(trf_6973)
static void C_ccall trf_6973(C_word c,C_word *av) C_noret;
static void C_ccall trf_6973(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6973(t0,t1);}

C_noret_decl(trf_7017)
static void C_ccall trf_7017(C_word c,C_word *av) C_noret;
static void C_ccall trf_7017(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7017(t0,t1,t2,t3);}

C_noret_decl(trf_7065)
static void C_ccall trf_7065(C_word c,C_word *av) C_noret;
static void C_ccall trf_7065(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7065(t0,t1,t2,t3);}

C_noret_decl(trf_7233)
static void C_ccall trf_7233(C_word c,C_word *av) C_noret;
static void C_ccall trf_7233(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7233(t0,t1,t2);}

C_noret_decl(trf_7333)
static void C_ccall trf_7333(C_word c,C_word *av) C_noret;
static void C_ccall trf_7333(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7333(t0,t1,t2,t3);}

C_noret_decl(trf_7565)
static void C_ccall trf_7565(C_word c,C_word *av) C_noret;
static void C_ccall trf_7565(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7565(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7626)
static void C_ccall trf_7626(C_word c,C_word *av) C_noret;
static void C_ccall trf_7626(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7626(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7632)
static void C_ccall trf_7632(C_word c,C_word *av) C_noret;
static void C_ccall trf_7632(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7632(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7732)
static void C_ccall trf_7732(C_word c,C_word *av) C_noret;
static void C_ccall trf_7732(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7732(t0,t1,t2);}

C_noret_decl(trf_7748)
static void C_ccall trf_7748(C_word c,C_word *av) C_noret;
static void C_ccall trf_7748(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7748(t0,t1,t2);}

C_noret_decl(trf_7778)
static void C_ccall trf_7778(C_word c,C_word *av) C_noret;
static void C_ccall trf_7778(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7778(t0,t1,t2);}

C_noret_decl(trf_7828)
static void C_ccall trf_7828(C_word c,C_word *av) C_noret;
static void C_ccall trf_7828(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7828(t0,t1,t2);}

C_noret_decl(trf_7862)
static void C_ccall trf_7862(C_word c,C_word *av) C_noret;
static void C_ccall trf_7862(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7862(t0,t1,t2);}

C_noret_decl(trf_7896)
static void C_ccall trf_7896(C_word c,C_word *av) C_noret;
static void C_ccall trf_7896(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7896(t0,t1,t2);}

C_noret_decl(trf_7930)
static void C_ccall trf_7930(C_word c,C_word *av) C_noret;
static void C_ccall trf_7930(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7930(t0,t1,t2);}

C_noret_decl(trf_7994)
static void C_ccall trf_7994(C_word c,C_word *av) C_noret;
static void C_ccall trf_7994(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7994(t0,t1,t2,t3);}

C_noret_decl(trf_8137)
static void C_ccall trf_8137(C_word c,C_word *av) C_noret;
static void C_ccall trf_8137(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8137(t0,t1);}

C_noret_decl(trf_8149)
static void C_ccall trf_8149(C_word c,C_word *av) C_noret;
static void C_ccall trf_8149(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8149(t0,t1);}

C_noret_decl(trf_8360)
static void C_ccall trf_8360(C_word c,C_word *av) C_noret;
static void C_ccall trf_8360(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8360(t0,t1,t2,t3);}

C_noret_decl(trf_8408)
static void C_ccall trf_8408(C_word c,C_word *av) C_noret;
static void C_ccall trf_8408(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8408(t0,t1,t2);}

C_noret_decl(trf_8442)
static void C_ccall trf_8442(C_word c,C_word *av) C_noret;
static void C_ccall trf_8442(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8442(t0,t1,t2,t3);}

C_noret_decl(trf_8478)
static void C_ccall trf_8478(C_word c,C_word *av) C_noret;
static void C_ccall trf_8478(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8478(t0,t1,t2);}

C_noret_decl(trf_8512)
static void C_ccall trf_8512(C_word c,C_word *av) C_noret;
static void C_ccall trf_8512(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8512(t0,t1,t2);}

C_noret_decl(trf_8567)
static void C_ccall trf_8567(C_word c,C_word *av) C_noret;
static void C_ccall trf_8567(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8567(t0,t1,t2);}

C_noret_decl(trf_8697)
static void C_ccall trf_8697(C_word c,C_word *av) C_noret;
static void C_ccall trf_8697(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8697(t0,t1,t2);}

C_noret_decl(trf_8744)
static void C_ccall trf_8744(C_word c,C_word *av) C_noret;
static void C_ccall trf_8744(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8744(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8763)
static void C_ccall trf_8763(C_word c,C_word *av) C_noret;
static void C_ccall trf_8763(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8763(t0,t1,t2);}

C_noret_decl(trf_8779)
static void C_ccall trf_8779(C_word c,C_word *av) C_noret;
static void C_ccall trf_8779(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8779(t0,t1,t2);}

C_noret_decl(trf_8893)
static void C_ccall trf_8893(C_word c,C_word *av) C_noret;
static void C_ccall trf_8893(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8893(t0,t1,t2);}

C_noret_decl(trf_8927)
static void C_ccall trf_8927(C_word c,C_word *av) C_noret;
static void C_ccall trf_8927(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8927(t0,t1,t2,t3);}

C_noret_decl(trf_8971)
static void C_ccall trf_8971(C_word c,C_word *av) C_noret;
static void C_ccall trf_8971(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8971(t0,t1,t2);}

C_noret_decl(trf_9005)
static void C_ccall trf_9005(C_word c,C_word *av) C_noret;
static void C_ccall trf_9005(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9005(t0,t1,t2,t3);}

C_noret_decl(trf_9043)
static void C_ccall trf_9043(C_word c,C_word *av) C_noret;
static void C_ccall trf_9043(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9043(t0,t1,t2);}

C_noret_decl(trf_9150)
static void C_ccall trf_9150(C_word c,C_word *av) C_noret;
static void C_ccall trf_9150(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9150(t0,t1,t2);}

C_noret_decl(trf_9184)
static void C_ccall trf_9184(C_word c,C_word *av) C_noret;
static void C_ccall trf_9184(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9184(t0,t1,t2);}

C_noret_decl(trf_9293)
static void C_ccall trf_9293(C_word c,C_word *av) C_noret;
static void C_ccall trf_9293(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9293(t0,t1,t2);}

C_noret_decl(trf_9330)
static void C_ccall trf_9330(C_word c,C_word *av) C_noret;
static void C_ccall trf_9330(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9330(t0,t1,t2);}

C_noret_decl(trf_9414)
static void C_ccall trf_9414(C_word c,C_word *av) C_noret;
static void C_ccall trf_9414(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9414(t0,t1,t2);}

C_noret_decl(trf_9432)
static void C_ccall trf_9432(C_word c,C_word *av) C_noret;
static void C_ccall trf_9432(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9432(t0,t1);}

C_noret_decl(trf_9447)
static void C_ccall trf_9447(C_word c,C_word *av) C_noret;
static void C_ccall trf_9447(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9447(t0,t1);}

C_noret_decl(trf_9577)
static void C_ccall trf_9577(C_word c,C_word *av) C_noret;
static void C_ccall trf_9577(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9577(t0,t1,t2,t3);}

C_noret_decl(trf_9625)
static void C_ccall trf_9625(C_word c,C_word *av) C_noret;
static void C_ccall trf_9625(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9625(t0,t1,t2,t3);}

C_noret_decl(trf_9673)
static void C_ccall trf_9673(C_word c,C_word *av) C_noret;
static void C_ccall trf_9673(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9673(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9680)
static void C_ccall trf_9680(C_word c,C_word *av) C_noret;
static void C_ccall trf_9680(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9680(t0,t1);}

C_noret_decl(trf_9814)
static void C_ccall trf_9814(C_word c,C_word *av) C_noret;
static void C_ccall trf_9814(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9814(t0,t1,t2,t3);}

C_noret_decl(trf_9862)
static void C_ccall trf_9862(C_word c,C_word *av) C_noret;
static void C_ccall trf_9862(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9862(t0,t1,t2,t3);}

C_noret_decl(trf_9910)
static void C_ccall trf_9910(C_word c,C_word *av) C_noret;
static void C_ccall trf_9910(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9910(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9917)
static void C_ccall trf_9917(C_word c,C_word *av) C_noret;
static void C_ccall trf_9917(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9917(t0,t1);}

C_noret_decl(trf_9980)
static void C_ccall trf_9980(C_word c,C_word *av) C_noret;
static void C_ccall trf_9980(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9980(t0,t1,t2,t3);}

/* map-loop1782 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in ... */
static void C_fcall f_10028(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10028,4,t0,t1,t2,t3);}
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

/* map-loop1751 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_fcall f_10076(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10076,4,t0,t1,t2,t3);}
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

/* map-loop1721 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_fcall f_10124(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10124,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:544: g1727 */
t4=((C_word*)t0)[4];
f_9447(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10147 in map-loop1721 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_10149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10149,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10124(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1693 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_fcall f_10158(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10158,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:543: g1699 */
t4=((C_word*)t0)[4];
f_9432(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10181 in map-loop1693 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_10183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10183,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10158(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1665 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_fcall f_10192(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10192,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:542: g1671 */
t4=((C_word*)t0)[4];
f_9414(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10215 in map-loop1665 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_10217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10217,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10192(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1638 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_fcall f_10226(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10226,3,t0,t1,t2);}
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

/* map-loop1611 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_fcall f_10260(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10260,3,t0,t1,t2);}
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

/* k10294 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_10296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10296,c,av);}
/* chicken-syntax.scm:496: ##sys#extend-macro-environment */
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

/* a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_10298(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10298,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10302,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:500: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[181];
av2[3]=t2;
av2[4]=lf[182];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_10302(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10302,c,av);}
a=C_alloc(19);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t2,lf[65]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10316,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10913,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li115),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_10913(t14,t10,t2);}

/* k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_10316(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10316,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10320,a[2]=((C_word*)t0)[2],a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10331,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10879,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li114),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10879(t11,t7,((C_word*)t0)[5]);}

/* g1314 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in ... */
static void C_fcall f_10320(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_10320,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10328,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:504: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10326 in g1314 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_ccall f_10328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10328,c,av);}
/* chicken-syntax.scm:504: r */
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

/* k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in ... */
static void C_ccall f_10331(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10331,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10335,a[2]=((C_word*)t0)[2],a[3]=((C_word)li104),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10346,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10845,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li113),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10845(t11,t7,((C_word*)t0)[6]);}

/* g1342 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_fcall f_10335(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_10335,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10343,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:505: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10341 in g1342 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_10343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10343,c,av);}
/* chicken-syntax.scm:505: r */
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

/* k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_ccall f_10346(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10346,c,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10353,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10666,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=t5,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10811,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_10811(t15,t11,((C_word*)t0)[6]);}

/* k10351 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_10353(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10353,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[65]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10536,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10610,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li108),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10610(t12,t8,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k10375 in k10519 in k10351 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_10377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_10377,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[20],t2);
t4=C_a_i_list(&a,4,lf[177],((C_word*)t0)[2],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10387 in k10519 in k10351 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_10389(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10389,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10393,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10405,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10415,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10415(t11,t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10391 in k10387 in k10519 in k10351 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_10393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10393,c,av);}
/* chicken-syntax.scm:506: ##sys#append */
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

/* k10403 in k10387 in k10519 in k10351 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_10405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10405,c,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[163]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:506: ##sys#append */
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

/* map-loop1565 in k10387 in k10519 in k10351 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_fcall f_10415(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10415,4,t0,t1,t2,t3);}
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

/* map-loop1529 in k10519 in k10351 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_fcall f_10463(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10463,4,t0,t1,t2,t3);}
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

/* k10519 in k10351 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_10521(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10521,c,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[20],t2);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[20],t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10377,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10389,a[2]=t6,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10463,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_10463(t15,t11,((C_word*)t0)[7],((C_word*)t0)[5]);}

/* k10534 in k10351 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_10536(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10536,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10540,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10552,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10562,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10562(t11,t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10538 in k10534 in k10351 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_10540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10540,c,av);}
/* chicken-syntax.scm:506: ##sys#append */
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

/* k10550 in k10534 in k10351 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_10552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10552,c,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[163]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:506: ##sys#append */
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

/* map-loop1493 in k10534 in k10351 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_fcall f_10562(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10562,4,t0,t1,t2,t3);}
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

/* map-loop1457 in k10351 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_fcall f_10610(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10610,4,t0,t1,t2,t3);}
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

/* k10664 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_10666(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10666,c,av);}
a=C_alloc(13);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t3=C_i_check_list_2(t1,lf[65]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10675,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10763,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],a[5]=((C_word)li111),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_10763(t8,t4,((C_word*)t0)[2],t1);}

/* k10673 in k10664 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_10675(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10675,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t7=C_u_i_length(((C_word*)t0)[4]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10743,a[2]=t9,a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_10743(t11,t6,t7);}

/* k10680 in k10673 in k10664 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_10682(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10682,c,av);}
a=C_alloc(12);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t3=C_i_check_list_2(t1,lf[65]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10691,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10693,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=((C_word*)t0)[6],a[5]=((C_word)li109),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_10693(t8,t4,((C_word*)t0)[2],t1);}

/* k10689 in k10680 in k10673 in k10664 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_10691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10691,c,av);}
/* chicken-syntax.scm:506: ##sys#append */
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

/* map-loop1423 in k10680 in k10673 in k10664 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_fcall f_10693(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10693,4,t0,t1,t2,t3);}
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

/* loop in k10673 in k10664 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_fcall f_10743(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10743,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10757,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:512: loop */
t6=t4;
t7=C_fixnum_difference(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}

/* k10755 in loop in k10673 in k10664 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_10757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10757,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1366 in k10664 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_fcall f_10763(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10763,4,t0,t1,t2,t3);}
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

/* map-loop1387 in k10344 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_fcall f_10811(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10811,3,t0,t1,t2);}
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

/* map-loop1336 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_fcall f_10845(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10845,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:505: g1342 */
t4=((C_word*)t0)[4];
f_10335(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10868 in map-loop1336 in k10329 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_10870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10870,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10845(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1308 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in ... */
static void C_fcall f_10879(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10879,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:504: g1314 */
t4=((C_word*)t0)[4];
f_10320(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10902 in map-loop1308 in k10314 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_ccall f_10904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10904,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10879(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1281 in k10300 in a10297 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in ... */
static void C_fcall f_10913(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10913,3,t0,t1,t2);}
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

/* k10947 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_10949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10949,c,av);}
/* chicken-syntax.scm:489: ##sys#extend-macro-environment */
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

/* a10950 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_10951(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10951,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10955,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:493: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[183];
av2[3]=t2;
av2[4]=lf[186];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10953 in a10950 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_10955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10955,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[184],t2,*((C_word*)lf[185]+1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10964 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in ... */
static void C_ccall f_10966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10966,c,av);}
/* chicken-syntax.scm:482: ##sys#extend-macro-environment */
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

/* a10967 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in ... */
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10968,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10972,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:486: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[187];
av2[3]=t2;
av2[4]=lf[188];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10970 in a10967 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_10972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10972,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[184],t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10981 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in ... */
static void C_ccall f_10983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10983,c,av);}
/* chicken-syntax.scm:474: ##sys#extend-macro-environment */
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

/* a10984 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in ... */
static void C_ccall f_10985(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10985,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10989,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:479: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[189];
av2[3]=t2;
av2[4]=lf[191];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10987 in a10984 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in ... */
static void C_ccall f_10989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_10989,c,av);}
a=C_alloc(15);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[190],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11002 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in ... */
static void C_ccall f_11004(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11004,c,av);}
/* chicken-syntax.scm:468: ##sys#extend-macro-environment */
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

/* a11005 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in ... */
static void C_ccall f_11006(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11006,c,av);}
a=C_alloc(3);
t5=C_i_cdr(t2);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,lf[193],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k11016 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in ... */
static void C_ccall f_11018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11018,c,av);}
/* chicken-syntax.scm:449: ##sys#extend-macro-environment */
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

/* a11019 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in ... */
static void C_ccall f_11020(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11020,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11024,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:454: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[194];
av2[3]=t2;
av2[4]=lf[197];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11022 in a11019 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in ... */
static void C_ccall f_11024(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11024,c,av);}
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
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:458: ##sys#check-syntax */
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

/* k11044 in k11022 in a11019 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in ... */
static void C_ccall f_11046(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11046,c,av);}
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

/* k11109 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_11111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11111,c,av);}
/* chicken-syntax.scm:377: ##sys#extend-macro-environment */
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

/* a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_11113(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11113,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11117,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:381: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[198];
av2[3]=t2;
av2[4]=lf[208];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in ... */
static void C_ccall f_11117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11117,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11123,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:383: chicken.syntax#strip-syntax */
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

/* k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in ... */
static void C_ccall f_11123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11123,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:384: scheme#symbol->string */
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

/* k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in ... */
static void C_ccall f_11126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_11126,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11491,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:385: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in ... */
static void C_ccall f_11129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11129,c,av);}
a=C_alloc(9);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11135,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:390: r */
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

/* k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_11135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11135,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11138,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:391: r */
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

/* k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_11138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11138,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11141,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:392: r */
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

/* k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_11141(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11141,c,av);}
a=C_alloc(28);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li122),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[65]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11205,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11456,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li124),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_11456(t12,t8,((C_word*)t0)[4]);}

/* g1168 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in ... */
static void C_fcall f_11145(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_11145,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_symbolp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11158,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11173,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:397: c */
t5=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_u_i_car(t2);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* chicken-syntax.scm:403: chicken.syntax#syntax-error */
t4=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[198];
av2[3]=lf[199];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}}

/* k11156 in g1168 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in ... */
static void C_fcall f_11158(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_11158,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-syntax.scm:403: chicken.syntax#syntax-error */
t2=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[198];
av2[3]=lf[199];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k11171 in g1168 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in ... */
static void C_ccall f_11173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11173,c,av);}
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
/* chicken-syntax.scm:403: chicken.syntax#syntax-error */
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
/* chicken-syntax.scm:403: chicken.syntax#syntax-error */
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
f_11158(t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
f_11158(t2,C_SCHEME_FALSE);}}

/* k11203 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_11205(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11205,c,av);}
a=C_alloc(28);
t2=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11428,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11448,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
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

/* k11234 in k11400 in k11426 in k11203 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_11236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_11236,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[26],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* mapslots in k11400 in k11426 in k11203 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_fcall f_11238(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_11238,4,t0,t1,t2,t3);}
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
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11254,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t7,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t7)){
/* chicken-syntax.scm:421: scheme#symbol->string */
t9=*((C_word*)lf[119]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cadr(t5);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* chicken-syntax.scm:421: scheme#symbol->string */
t9=*((C_word*)lf[119]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}}

/* k11252 in mapslots in k11400 in k11426 in k11203 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_11254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_11254,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_11257,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11387,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:422: scheme#string-append */
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

/* k11255 in k11252 in mapslots in k11400 in k11426 in k11203 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_11257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_11257,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11260,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11383,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:423: scheme#string-append */
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

/* k11258 in k11255 in k11252 in mapslots in k11400 in k11426 in k11203 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_11260(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11260,c,av);}
a=C_alloc(79);
t2=C_a_i_list(&a,2,lf[77],lf[200]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[71],lf[77],t3);
t5=C_a_i_list(&a,2,lf[32],t4);
t6=C_a_i_list(&a,4,lf[74],lf[77],((C_word*)t0)[3],lf[200]);
t7=C_a_i_list(&a,4,lf[20],t2,t5,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11286,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11290,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],a[6]=t7,a[7]=((C_word*)t0)[9],a[8]=t1,a[9]=t8,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t10=t9;
f_11290(t10,C_SCHEME_END_OF_LIST);}
else{
t10=C_a_i_list(&a,3,((C_word*)t0)[9],((C_word*)t0)[10],t7);
t11=t9;
f_11290(t11,C_a_i_list(&a,1,t10));}}

/* k11272 in k11284 in k11258 in k11255 in k11252 in mapslots in k11400 in k11426 in k11203 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in ... */
static void C_ccall f_11274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11274,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11284 in k11258 in k11255 in k11252 in mapslots in k11400 in k11426 in k11203 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_11286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11286,c,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,lf[26],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11274,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:447: mapslots */
t4=((C_word*)((C_word*)t0)[3])[1];
f_11238(t4,t3,C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* k11288 in k11258 in k11255 in k11252 in mapslots in k11400 in k11426 in k11203 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_fcall f_11290(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_11290,2,t0,t1);}
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
/* chicken-syntax.scm:430: ##sys#append */
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
/* chicken-syntax.scm:430: ##sys#append */
t10=*((C_word*)lf[53]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=((C_word*)t0)[9];
av2[2]=t1;
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}

/* k11381 in k11255 in k11252 in mapslots in k11400 in k11426 in k11203 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_11383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11383,c,av);}
/* chicken-syntax.scm:423: scheme#string->symbol */
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

/* k11385 in k11252 in mapslots in k11400 in k11426 in k11203 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_11387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11387,c,av);}
/* chicken-syntax.scm:422: scheme#string->symbol */
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

/* k11400 in k11426 in k11203 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_ccall f_11402(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11402,c,av);}
a=C_alloc(52);
t2=C_a_i_list(&a,1,lf[77]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[70],lf[77],t3);
t5=C_a_i_list(&a,3,lf[20],t2,t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[3],t1,t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11236,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11238,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[8],a[7]=((C_word)li123),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_11238(t11,t7,((C_word*)t0)[9],C_fix(1));}

/* k11420 in k11426 in k11203 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_ccall f_11422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11422,c,av);}
/* chicken-syntax.scm:414: scheme#string->symbol */
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

/* k11426 in k11203 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in ... */
static void C_ccall f_11428(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11428,c,av);}
a=C_alloc(43);
t2=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,lf[69],t3);
t5=C_a_i_list(&a,3,lf[20],((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[4],t1,t5);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11422,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
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

/* k11446 in k11203 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in ... */
static void C_ccall f_11448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11448,c,av);}
/* chicken-syntax.scm:409: scheme#string->symbol */
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

/* map-loop1162 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in ... */
static void C_fcall f_11456(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11456,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11481,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:394: g1168 */
t4=((C_word*)t0)[4];
f_11145(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11479 in map-loop1162 in k11139 in k11136 in k11133 in k11127 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in ... */
static void C_ccall f_11481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11481,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11456(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k11489 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in ... */
static void C_ccall f_11491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11491,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11502,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:387: ##sys#current-module */
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
f_11129(2,av2);}}}

/* k11496 in k11489 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_11498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11498,c,av);}
/* chicken-syntax.scm:386: chicken.base#symbol-append */
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

/* k11500 in k11489 in k11124 in k11121 in k11115 in a11112 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_11502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11502,c,av);}
/* chicken-syntax.scm:387: ##sys#module-name */
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

/* k11508 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_11510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11510,c,av);}
/* chicken-syntax.scm:363: ##sys#extend-macro-environment */
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
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11511 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_11512(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11512,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=setpixel(C_fix(-1),C_fix(-1),C_fix(0),C_fix(0),C_fix(0),C_fix(0));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k11523 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in ... */
static void C_ccall f_11525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11525,c,av);}
/* chicken-syntax.scm:356: ##sys#extend-macro-environment */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[210];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11526 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in ... */
static void C_ccall f_11527(C_word c,C_word *av){
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
C_word t17;
C_word t18;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11527,c,av);}
t5=C_i_cdr(t2);
t6=C_i_car(t5);
t7=C_i_cddr(t2);
t8=C_i_car(t7);
t9=C_i_cdddr(t2);
t10=C_i_car(t9);
t11=C_i_cddddr(t2);
t12=C_i_car(t11);
t13=C_i_cddddr(t2);
t14=C_i_cdr(t13);
t15=C_i_car(t14);
t16=C_i_cddddr(t2);
t17=C_i_cddr(t16);
t18=t1;{
C_word *av2=av;
av2[0]=t18;
av2[1]=setpixel(t6,t8,t10,t12,t15,C_i_car(t17));
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}

/* k11590 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11592,c,av);}
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
av2[2]=lf[211];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11594(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11594,c,av);}
a=C_alloc(14);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11604,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11633,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11689,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:309: ##sys#list? */
t9=*((C_word*)lf[218]+1);{
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
f_11604(2,av2);}}}

/* k11602 in a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 in ... */
static void C_ccall f_11604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11604,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11617,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
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
av2[2]=lf[212];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* chicken-syntax.scm:309: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[213]+1);{
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

/* k11615 in k11602 in a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in ... */
static void C_ccall f_11617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11617,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11631 in a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 in ... */
static void C_ccall f_11633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11633,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:309: ##sys#list? */
t3=*((C_word*)lf[218]+1);{
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
f_11604(2,av2);}}}

/* k11637 in k11631 in a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in ... */
static void C_ccall f_11639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11639,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11642,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:309: ##sys#length */
t3=*((C_word*)lf[217]+1);{
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
f_11604(2,av2);}}}

/* k11640 in k11637 in k11631 in a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in ... */
static void C_ccall f_11642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11642,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#>= */
t3=*((C_word*)lf[216]+1);{
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

/* k11646 in k11640 in k11637 in k11631 in a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_11648(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11648,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11657,a[2]=t4,a[3]=((C_word)li128),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11657(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11604(2,av2);}}}

/* loop1088 in k11646 in k11640 in k11637 in k11631 in a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in ... */
static void C_fcall f_11657(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11657,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11664,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:309: ##sys#= */
t5=*((C_word*)lf[215]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11662 in loop1088 in k11646 in k11640 in k11637 in k11631 in a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in ... */
static void C_ccall f_11664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11664,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11678,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#+ */
t4=*((C_word*)lf[214]+1);{
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

/* k11676 in k11662 in loop1088 in k11646 in k11640 in k11637 in k11631 in a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in ... */
static void C_ccall f_11678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11678,c,av);}
/* chicken-syntax.scm:309: loop1088 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11657(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k11687 in a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 in ... */
static void C_ccall f_11689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11689,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11692,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:309: ##sys#length */
t3=*((C_word*)lf[217]+1);{
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
f_11633(2,av2);}}}

/* k11690 in k11687 in a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in ... */
static void C_ccall f_11692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11692,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11698,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#>= */
t3=*((C_word*)lf[216]+1);{
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

/* k11696 in k11690 in k11687 in a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in ... */
static void C_ccall f_11698(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11698,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11707,a[2]=t4,a[3]=((C_word)li129),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11707(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11633(2,av2);}}}

/* loop1088 in k11696 in k11690 in k11687 in a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_fcall f_11707(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11707,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11714,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:309: ##sys#= */
t5=*((C_word*)lf[215]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11712 in loop1088 in k11696 in k11690 in k11687 in a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_11714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11714,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11728,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#+ */
t4=*((C_word*)lf[214]+1);{
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

/* k11726 in k11712 in loop1088 in k11696 in k11690 in k11687 in a11593 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in ... */
static void C_ccall f_11728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11728,c,av);}
/* chicken-syntax.scm:309: loop1088 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11707(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k11738 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11740,c,av);}
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
av2[2]=lf[219];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11741 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11742(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11742,c,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_eqp(C_i_cdr(t5),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11762,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:301: rename1057 */
t10=t3;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[220];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11776,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t9=C_i_cdr(t5);
t10=C_i_pairp(t9);
t11=t8;
f_11776(t11,(C_truep(t10)?C_eqp(C_i_cdr(t9),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}
else{
t9=t8;
f_11776(t9,C_SCHEME_FALSE);}}}

/* k11760 in a11741 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11762,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11774 in a11741 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_fcall f_11776(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11776,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11789,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:301: rename1057 */
t6=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[220];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* chicken-syntax.scm:301: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[213]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k11787 in k11774 in a11741 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 in ... */
static void C_ccall f_11789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11789,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11835 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11837,c,av);}
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
av2[2]=lf[221];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11838 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11839(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11839,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11843,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:292: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[221];
av2[3]=t2;
av2[4]=lf[223];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11841 in a11838 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11843,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
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
av2[2]=lf[222];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11848 in k11841 in a11838 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11850,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11858,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
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

/* k11856 in k11848 in k11841 in a11838 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 in ... */
static void C_ccall f_11858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11858,c,av);}
a=C_alloc(9);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11864 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11866,c,av);}
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
av2[2]=lf[222];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11867 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11868(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11868,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11872,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:284: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[222];
av2[3]=t2;
av2[4]=lf[226];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11870 in a11867 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11872,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,lf[26],t3);
/* chicken-syntax.scm:285: ##sys#register-meta-expression */
t5=*((C_word*)lf[225]+1);{
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

/* k11873 in k11870 in a11867 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11875,c,av);}
a=C_alloc(9);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[26],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[224],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11894 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11896,c,av);}
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
av2[2]=lf[227];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11897 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11898(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11898,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11902,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:277: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[227];
av2[3]=t2;
av2[4]=lf[229];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11900 in a11897 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11902,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[228],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11911 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11913,c,av);}
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
av2[2]=lf[230];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11914 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11915(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11915,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11919,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:251: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[230];
av2[3]=t2;
av2[4]=lf[238];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11917 in a11914 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11919,c,av);}
a=C_alloc(5);
t2=C_i_memq(lf[231],*((C_word*)lf[232]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[233];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11928,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
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

/* k11926 in k11917 in a11914 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11928,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11931,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
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
av2[2]=lf[237];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11929 in k11926 in k11917 in a11914 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11931,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11934,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
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

/* k11932 in k11929 in k11926 in k11917 in a11914 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_11934,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],lf[234]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11957,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:262: chicken.compiler.scrutinizer#check-and-validate-type */
t5=*((C_word*)lf[236]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t1;
av2[3]=lf[230];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k11955 in k11932 in k11929 in k11926 in k11917 in a11914 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_11957,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[235],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[224],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11971 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11973,c,av);}
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
av2[2]=lf[239];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11974 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11975(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11975,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11979,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:226: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[239];
av2[3]=t2;
av2[4]=lf[242];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11977 in a11974 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11979,c,av);}
a=C_alloc(5);
t2=C_i_memq(lf[231],*((C_word*)lf[232]+1));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11985,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:228: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11983 in k11977 in a11974 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11985,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11988,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
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

/* k11986 in k11983 in k11977 in a11974 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_11988(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11988,c,av);}
a=C_alloc(33);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12012,a[2]=((C_word*)t0)[4],a[3]=((C_word)li136),tmp=(C_word)a,a+=4,tmp);
t10=C_u_i_cdr(((C_word*)t0)[2]);
t11=C_u_i_cdr(t10);
t12=C_i_check_list_2(t11,lf[65]);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12050,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12052,a[2]=t7,a[3]=t15,a[4]=t9,a[5]=t8,a[6]=((C_word)li137),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_12052(t17,t13,t11);}

/* g974 in k11986 in k11983 in k11977 in a11974 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_fcall f_12012(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_12012,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12016,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:235: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[37]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k12014 in g974 in k11986 in k11983 in k11977 in a11974 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12016(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12016,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(t1,lf[240]);
if(C_truep(t3)){
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[26],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list2(&a,2,lf[240],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
/* chicken-syntax.scm:240: chicken.compiler.scrutinizer#check-and-validate-type */
t4=*((C_word*)lf[236]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[239];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[26],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list2(&a,2,t1,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}

/* k12021 in k12014 in g974 in k11986 in k11983 in k11977 in a11974 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_12023,c,av);}
a=C_alloc(9);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[26],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list2(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12048 in k11986 in k11983 in k11977 in a11974 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_12050,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,lf[241],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop968 in k11986 in k11983 in k11977 in a11974 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_fcall f_12052(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_12052,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12077,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:234: g974 */
t4=((C_word*)t0)[4];
f_12012(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12075 in map-loop968 in k11986 in k11983 in k11977 in a11974 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12077,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_12052(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k12094 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12096,c,av);}
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
av2[2]=lf[243];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12098(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12098,c,av);}
a=C_alloc(5);
t5=C_i_memq(lf[231],*((C_word*)lf[232]+1));
if(C_truep(C_i_not(t5))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=lf[244];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12108,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:164: ##sys#check-syntax */
t7=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[243];
av2[3]=t2;
av2[4]=lf[252];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_12108,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12117,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:167: ##sys#globalize */
t5=*((C_word*)lf[251]+1);{
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

/* k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_12117,c,av);}
a=C_alloc(8);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12121,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
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

/* k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_12121,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12124,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:170: ##sys#globalize */
t3=*((C_word*)lf[251]+1);{
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

/* k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12124(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12124,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12127,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
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
f_12127(2,av2);}}}

/* k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_12127,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12130,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
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

/* k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12130(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12130,c,av);}
a=C_alloc(13);
t2=(C_truep(((C_word*)t0)[2])?C_i_cadddr(((C_word*)t0)[3]):C_i_caddr(((C_word*)t0)[3]));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12138,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=t4,a[9]=((C_word*)t0)[7],a[10]=((C_word)li142),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_12138(t6,((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_fcall f_12138(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_12138,5,t0,t1,t2,t3,t4);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t3,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
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
t8=C_a_i_cons(&a,2,lf[249],t4);
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
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12389,a[2]=t2,a[3]=t5,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[8],a[7]=t1,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_listp(t5))){
t7=C_eqp(C_fix(2),C_u_i_length(t5));
t8=t6;
f_12389(t8,(C_truep(t7)?C_i_symbolp(C_i_car(t5)):C_SCHEME_FALSE));}
else{
t7=t6;
f_12389(t7,C_SCHEME_FALSE);}}}}

/* k12146 in loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_12148,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12151,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
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

/* k12149 in k12146 in loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12151(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12151,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12335,a[2]=t4,a[3]=((C_word)li141),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12335(t6,t2,((C_word*)t0)[10],C_fix(1));}

/* k12155 in k12331 in k12149 in k12146 in loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in ... */
static void C_ccall f_12157(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12157,c,av);}
a=C_alloc(44);
t2=C_a_i_list(&a,2,lf[245],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[246],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[193],t2,t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12192,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12194,a[2]=t8,a[3]=t12,a[4]=t9,a[5]=((C_word)li139),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_12194(t14,t10,((C_word*)t0)[3],((C_word*)t0)[7]);}

/* k12190 in k12155 in k12331 in k12149 in k12146 in loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in ... */
static void C_ccall f_12192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_12192,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,3,lf[35],t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[26],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop913 in k12155 in k12331 in k12149 in k12146 in loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in ... */
static void C_fcall f_12194(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_12194,4,t0,t1,t2,t3);}
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

/* k12250 in k12331 in k12149 in k12146 in loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in ... */
static void C_ccall f_12252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12252,c,av);}
/* chicken-syntax.scm:184: ##sys#put! */
t2=*((C_word*)lf[247]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[248];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k12254 in k12331 in k12149 in k12146 in loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in ... */
static void C_ccall f_12256(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12256,c,av);}
a=C_alloc(19);
t2=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12289,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12291,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li140),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_12291(t12,t8,((C_word*)t0)[2]);}
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

/* k12287 in k12254 in k12331 in k12149 in k12146 in loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in ... */
static void C_ccall f_12289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_12289,c,av);}
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

/* map-loop879 in k12254 in k12331 in k12149 in k12146 in loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in ... */
static void C_fcall f_12291(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12291,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[236]+1);
/* chicken-syntax.scm:192: g902 */
t6=*((C_word*)lf[236]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[243];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12314 in map-loop879 in k12254 in k12331 in k12149 in k12146 in loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_12316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12316,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_12291(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k12331 in k12149 in k12146 in loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 in ... */
static void C_ccall f_12333(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12333,c,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12157,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12252,a[2]=t3,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12256,a[2]=((C_word*)t0)[10],a[3]=t2,a[4]=((C_word*)t0)[8],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
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
av2[3]=lf[248];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* loop2 in k12149 in k12146 in loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 in ... */
static void C_fcall f_12335(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_12335,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_a_i_vector1(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12353,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:183: loop2 */
t7=t5;
t8=C_i_cdr(t2);
t9=C_fixnum_plus(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k12351 in loop2 in k12149 in k12146 in loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in ... */
static void C_ccall f_12353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12353,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12387 in loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_fcall f_12389(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,5)))){
C_save_and_reclaim_args((void *)trf_12389,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12406,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:214: chicken.compiler.scrutinizer#check-and-validate-type */
t6=*((C_word*)lf[236]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=lf[243];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* chicken-syntax.scm:218: chicken.syntax#syntax-error */
t2=*((C_word*)lf[56]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[7];
av2[2]=lf[243];
av2[3]=lf[250];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k12404 in k12387 in loop in k12128 in k12125 in k12122 in k12119 in k12115 in k12106 in a12097 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_12406,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:210: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_12138(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k12461 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12463,c,av);}
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
av2[2]=lf[253];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12465(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12465,c,av);}
a=C_alloc(14);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12475,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12637,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12693,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#list? */
t9=*((C_word*)lf[218]+1);{
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
f_12475(2,av2);}}}

/* k12473 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12475(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12475,c,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[65]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12593,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li146),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_12593(t12,t8,t6);}
else{
/* chicken-syntax.scm:154: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[213]+1);{
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

/* k12490 in k12473 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12492(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12492,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[65]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12559,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li145),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_12559(t12,t8,t6);}

/* k12511 in k12490 in k12473 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_12513,c,av);}
a=C_alloc(7);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12523,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
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
av2[2]=lf[256];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k12521 in k12511 in k12490 in k12473 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_12523,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12533,a[2]=((C_word*)t0)[4],a[3]=((C_word)li144),tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#map-n */
t4=*((C_word*)lf[255]+1);{
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

/* k12529 in k12521 in k12511 in k12490 in k12473 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12531,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a12532 in k12521 in k12511 in k12490 in k12473 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12533(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12533,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12549,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: rename737 */
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[254];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k12547 in a12532 in k12521 in k12511 in k12490 in k12473 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12549(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12549,c,av);}
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

/* map-loop810 in k12490 in k12473 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_fcall f_12559(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_12559,3,t0,t1,t2);}
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

/* map-loop782 in k12473 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_fcall f_12593(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_12593,3,t0,t1,t2);}
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

/* k12635 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12637,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12643,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#list? */
t3=*((C_word*)lf[218]+1);{
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
f_12475(2,av2);}}}

/* k12641 in k12635 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12643,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12646,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#length */
t3=*((C_word*)lf[217]+1);{
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
f_12475(2,av2);}}}

/* k12644 in k12641 in k12635 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12646,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#>= */
t3=*((C_word*)lf[216]+1);{
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

/* k12650 in k12644 in k12641 in k12635 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12652(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12652,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12661,a[2]=t4,a[3]=((C_word)li147),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12661(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12475(2,av2);}}}

/* loop734 in k12650 in k12644 in k12641 in k12635 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_fcall f_12661(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12661,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12668,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:154: ##sys#= */
t5=*((C_word*)lf[215]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k12666 in loop734 in k12650 in k12644 in k12641 in k12635 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12668,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12682,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#+ */
t4=*((C_word*)lf[214]+1);{
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

/* k12680 in k12666 in loop734 in k12650 in k12644 in k12641 in k12635 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12682,c,av);}
/* chicken-syntax.scm:154: loop734 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12661(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12691 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12693,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#length */
t3=*((C_word*)lf[217]+1);{
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
f_12637(2,av2);}}}

/* k12694 in k12691 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12696,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#>= */
t3=*((C_word*)lf[216]+1);{
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

/* k12700 in k12694 in k12691 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12702(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12702,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12711,a[2]=t4,a[3]=((C_word)li148),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12711(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12637(2,av2);}}}

/* loop734 in k12700 in k12694 in k12691 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_fcall f_12711(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12711,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12718,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:154: ##sys#= */
t5=*((C_word*)lf[215]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k12716 in loop734 in k12700 in k12694 in k12691 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12718(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12718,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12730,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_cdr(t2);
t5=C_i_pairp(t4);
t6=t3;
f_12730(t6,(C_truep(t5)?C_eqp(C_i_cdr(t4),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}
else{
t4=t3;
f_12730(t4,C_SCHEME_FALSE);}}}

/* k12728 in k12716 in loop734 in k12700 in k12694 in k12691 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_fcall f_12730(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_12730,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12741,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#+ */
t4=*((C_word*)lf[214]+1);{
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

/* k12739 in k12728 in k12716 in loop734 in k12700 in k12694 in k12691 in a12464 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12741,c,av);}
/* chicken-syntax.scm:154: loop734 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12711(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12770 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12772,c,av);}
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
av2[2]=lf[254];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12773 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12774(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12774,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12778,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:145: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[254];
av2[3]=t2;
av2[4]=lf[257];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12776 in a12773 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_12778,c,av);}
a=C_alloc(4);
t2=C_i_memq(lf[231],*((C_word*)lf[232]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_caddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12794,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:148: chicken.compiler.scrutinizer#check-and-validate-type */
t4=*((C_word*)lf[236]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=lf[254];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k12792 in k12776 in a12773 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_12794,c,av);}
a=C_alloc(12);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[175],t1,C_SCHEME_TRUE,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12808 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12810,c,av);}
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
av2[2]=lf[258];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12811 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12812(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12812,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12816,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:122: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[258];
av2[3]=t2;
av2[4]=lf[265];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12814 in a12811 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12816,c,av);}
a=C_alloc(4);
t2=C_i_memq(lf[231],*((C_word*)lf[232]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[259];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12825,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
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

/* k12823 in k12814 in a12811 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12825(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12825,c,av);}
a=C_alloc(11);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12832,a[2]=t1,a[3]=t3,a[4]=((C_word)li151),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12842,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word)li152),tmp=(C_word)a,a+=6,tmp);
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

/* a12831 in k12823 in k12814 in a12811 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12832,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12840,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
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

/* k12838 in a12831 in k12823 in k12814 in a12811 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12840,c,av);}
/* chicken-syntax.scm:130: chicken.compiler.scrutinizer#validate-type */
t2=*((C_word*)lf[260]+1);{
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

/* a12841 in k12823 in k12814 in a12811 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12842(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12842,c,av);}
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
av2[2]=lf[258];
av2[3]=lf[261];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
t5=C_i_cdddr(((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[2],t6);
t8=C_a_i_list(&a,2,lf[262],t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12867,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12871,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t11=C_a_i_list(&a,2,lf[264],((C_word*)t0)[2]);
t12=t10;
f_12871(t12,C_a_i_list(&a,1,t11));}
else{
t11=t10;
f_12871(t11,C_SCHEME_END_OF_LIST);}}}

/* k12865 in a12841 in k12823 in k12814 in a12811 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12867,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[193],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12869 in a12841 in k12823 in k12814 in a12811 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_fcall f_12871(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_12871,2,t0,t1);}
a=C_alloc(15);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[263],t2);
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

/* k12919 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12921,c,av);}
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
av2[2]=lf[268];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12923(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12923,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12927,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:81: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[268];
av2[3]=t2;
av2[4]=lf[277];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12927,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
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
av2[2]=lf[276];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12930,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12933,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
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
av2[2]=lf[275];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12931 in k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_12933,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12936,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
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
av2[2]=lf[274];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12934 in k12931 in k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_12936,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12939,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
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
av2[2]=lf[266];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12937 in k12934 in k12931 in k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_12939,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12942,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
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
av2[2]=lf[240];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12940 in k12937 in k12934 in k12931 in k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_12942,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12944,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li156),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_13074,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
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
av2[2]=lf[273];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* parse-clause in k12940 in k12937 in k12934 in k12931 in k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_fcall f_12944(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_12944,3,t0,t1,t2);}
a=C_alloc(23);
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=(C_truep(t4)?C_u_i_car(t2):C_SCHEME_FALSE);
t6=(C_truep(t5)?C_i_cadr(t2):C_u_i_car(t2));
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12954,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t8=C_a_i_list(&a,2,t5,((C_word*)t0)[6]);
t9=C_a_i_list(&a,1,t8);
t10=C_i_cddr(t2);
t11=C_a_i_cons(&a,2,t9,t10);
t12=t7;
f_12954(t12,C_a_i_cons(&a,2,lf[35],t11));}
else{
t8=C_u_i_cdr(t2);
t9=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t8);
t10=t7;
f_12954(t10,C_a_i_cons(&a,2,lf[35],t9));}}

/* k12952 in parse-clause in k12940 in k12937 in k12934 in k12931 in k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_fcall f_12954(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_12954,2,t0,t1);}
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
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12979,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li154),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12993,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12995,a[2]=t6,a[3]=t4,a[4]=t10,a[5]=t5,a[6]=((C_word)li155),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_12995(t12,t8,((C_word*)t0)[2]);}}

/* g623 in k12952 in parse-clause in k12940 in k12937 in k12934 in k12931 in k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static C_word C_fcall f_12979(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,lf[36],t1);
return(C_a_i_list(&a,3,((C_word*)t0)[2],t2,((C_word*)t0)[3]));}

/* k12991 in k12952 in parse-clause in k12940 in k12937 in k12934 in k12931 in k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_12993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_12993,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,t3,((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop617 in k12952 in parse-clause in k12940 in k12937 in k12934 in k12931 in k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_fcall f_12995(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_12995,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=(
/* chicken-syntax.scm:95: g623 */
  f_12979(C_a_i(&a,15),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k13072 in k12940 in k12937 in k12934 in k12931 in k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_13074(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13074,c,av);}
a=C_alloc(65);
t2=C_a_i_list(&a,2,lf[36],lf[269]);
t3=C_a_i_list(&a,3,lf[70],((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,3,lf[270],((C_word*)t0)[2],C_fix(1));
t5=C_a_i_list(&a,3,((C_word*)t0)[3],t3,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[4],t5);
t7=C_a_i_list(&a,1,t6);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_i_cddr(((C_word*)t0)[5]);
t13=C_i_check_list_2(t12,lf[65]);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13099,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13130,a[2]=t10,a[3]=t16,a[4]=((C_word*)t0)[9],a[5]=t11,a[6]=((C_word)li157),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_13130(t18,t14,t12);}

/* k13097 in k13072 in k12940 in k12937 in k12934 in k12931 in k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_13099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_13099,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
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
av2[2]=lf[272];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13104 in k13097 in k13072 in k12940 in k12937 in k12934 in k12931 in k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_13106(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13106,c,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13110,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
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
t3=C_a_i_list(&a,2,lf[271],((C_word*)t0)[6]);
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

/* k13108 in k13104 in k13097 in k13072 in k12940 in k12937 in k12934 in k12931 in k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_13110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_13110,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t2);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[6],((C_word*)t0)[7],t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop648 in k13072 in k12940 in k12937 in k12934 in k12931 in k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_fcall f_13130(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_13130,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13155,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:102: g654 */
t4=((C_word*)t0)[4];
f_12944(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k13153 in map-loop648 in k13072 in k12940 in k12937 in k12934 in k12931 in k12928 in k12925 in a12922 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_13155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13155,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_13130(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k13192 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_13194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13194,c,av);}
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
av2[2]=lf[273];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13195 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_13196(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13196,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13200,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:60: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[273];
av2[3]=t2;
av2[4]=lf[283];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k13198 in a13195 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_13200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_13200,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
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
av2[2]=lf[282];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13201 in k13198 in a13195 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_13203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13203,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13206,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
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
av2[2]=lf[281];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13204 in k13201 in k13198 in a13195 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_13206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13206,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
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
av2[2]=lf[278];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13215 in k13204 in k13201 in k13198 in a13195 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_13217(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13217,c,av);}
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
t20=C_a_i_list(&a,3,lf[280],t8,t19);
t21=C_a_i_list(&a,3,lf[20],t2,t20);
t22=C_a_i_list(&a,2,t1,t21);
t23=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t23;
av2[1]=C_a_i_list(&a,1,t22);
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}

/* k4236 */
static void C_ccall f_4238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4238,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4241,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k4239 in k4236 */
static void C_ccall f_4241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4241,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4244,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k4242 in k4239 in k4236 */
static void C_ccall f_4244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_4244,c,av);}
a=C_alloc(14);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_mutate(&lf[1] /* (set! take ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4354,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5526,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:53: ##sys#macro-environment */
t5=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* take in k4242 in k4239 in k4236 */
static void C_fcall f_4354(C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_4354,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4372,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:56: take */
t7=t5;
t8=C_u_i_cdr(t2);
t9=C_fixnum_difference(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k4370 in take in k4242 in k4239 in k4236 */
static void C_ccall f_4372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4372,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k6985 in a6978 in k6971 in k6961 in a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in ... */
static void C_fcall f_4412(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_4412,5,t0,t1,t2,t3,t4);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4426,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
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

/* k4424 in loop in k6985 in a6978 in k6971 in k6961 in a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in ... */
static void C_ccall f_4426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4426,c,av);}
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

/* k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5526(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5526,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5529,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[278],lf[279]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13194,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13196,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp);
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

/* k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5529(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5529,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[266],lf[267]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12921,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12923,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp);
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

/* k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5532,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5535,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
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

/* k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5535,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#chicken.condition-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5539,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:116: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5539,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5542,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12810,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12812,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp);
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

/* k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5542,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12772,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12774,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp);
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

/* k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5545,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5548,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12463,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12465,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp);
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

/* k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5548,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12096,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12098,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp);
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

/* k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5551,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11973,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11975,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp);
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

/* k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
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
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11913,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11915,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp);
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

/* k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5557,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5560,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
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

/* k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5560,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#chicken.type-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5564,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:270: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5564,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5567,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11896,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11898,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp);
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

/* k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5567,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11866,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11868,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp);
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

/* k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5570,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11837,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11839,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp);
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

/* k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5573,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11740,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11742,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp);
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

/* k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5576,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11592,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11594,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp);
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

/* k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 */
static void C_ccall f_5579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5579,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5582,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
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

/* k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in k4236 in ... */
static void C_ccall f_5582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5582,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#chicken.syntax-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5586,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:319: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in k4239 in ... */
static void C_ccall f_5586(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5586,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5589,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[137],lf[138]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11525,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11527,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:359: ##sys#er-transformer */
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

/* k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in k4242 in ... */
static void C_ccall f_5589(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5589,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[137],lf[138]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11510,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11512,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:366: ##sys#er-transformer */
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

/* k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in k5524 in ... */
static void C_ccall f_5592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5592,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5595,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11111,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11113,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:379: ##sys#er-transformer */
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

/* k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in k5527 in ... */
static void C_ccall f_5595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5595,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11018,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11020,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:452: ##sys#er-transformer */
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

/* k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in k5530 in ... */
static void C_ccall f_5598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5598,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5601,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11004,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11006,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:470: ##sys#er-transformer */
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

/* k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in k5533 in ... */
static void C_ccall f_5601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5601,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10983,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10985,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:477: ##sys#er-transformer */
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

/* k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in k5537 in ... */
static void C_ccall f_5604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5604,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10966,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10968,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:484: ##sys#er-transformer */
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

/* k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in k5540 in ... */
static void C_ccall f_5607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5607,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10949,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10951,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:491: ##sys#er-transformer */
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

/* k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in k5543 in ... */
static void C_ccall f_5610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5610,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5613,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10296,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10298,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:498: ##sys#er-transformer */
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

/* k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in k5546 in ... */
static void C_ccall f_5613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5613,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9366,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9368,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:530: ##sys#er-transformer */
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

/* k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_5616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5616,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9282,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9284,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:585: ##sys#er-transformer */
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

/* k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_5619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5619,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9258,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9260,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:597: ##sys#er-transformer */
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

/* k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in ... */
static void C_ccall f_5622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5622,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9230,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9232,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:605: ##sys#er-transformer */
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

/* k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_ccall f_5625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5625,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5628,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9209,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9211,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:614: ##sys#er-transformer */
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

/* k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_5628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5628,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5632,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9079,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9081,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:622: ##sys#er-transformer */
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

/* k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_5632(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5632,c,av);}
a=C_alloc(10);
t2=C_mutate((C_word*)lf[5]+1 /* (set! chicken.syntax#define-values-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5635,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8602,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8604,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:639: ##sys#er-transformer */
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

/* k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_5635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5635,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8548,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8550,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:693: ##sys#er-transformer */
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

/* k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_5638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5638,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8290,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8292,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:708: ##sys#er-transformer */
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

/* k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_5641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5641,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5644,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8268,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8270,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:728: ##sys#er-transformer */
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

/* k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in ... */
static void C_ccall f_5644(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5644,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[137],lf[138]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8224,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8226,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:737: ##sys#er-transformer */
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

/* k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in ... */
static void C_ccall f_5647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5647,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5650,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8120,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8122,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:747: ##sys#er-transformer */
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

/* k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_5650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5650,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7978,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7980,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:768: ##sys#er-transformer */
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

/* k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_5653(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5653,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5656,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[110],lf[111]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7530,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7532,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:875: ##sys#er-transformer */
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

/* k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_ccall f_5656(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5656,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[110],lf[111]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7453,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7455,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:964: ##sys#er-transformer */
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

/* k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_ccall f_5659(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5659,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[110],lf[111]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7293,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7295,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:992: ##sys#er-transformer */
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

/* k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_5662(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5662,c,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5665,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[90],lf[91]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_cons(&a,2,lf[96],lf[97]);
t7=C_a_i_cons(&a,2,lf[98],lf[99]);
t8=C_a_i_list(&a,5,t3,t4,t5,t6,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6849,a[2]=t2,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6851,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1029: ##sys#er-transformer */
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

/* k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_ccall f_5665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5665,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6733,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6735,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1092: ##sys#er-transformer */
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

/* k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_5668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5668,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5671,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6294,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6296,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1127: ##sys#er-transformer */
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

/* k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in ... */
static void C_ccall f_5671(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5671,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5674,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[50],lf[51]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6122,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6124,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1216: ##sys#er-transformer */
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

/* k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5674,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5677,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[50],lf[51]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5927,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5929,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1249: ##sys#er-transformer */
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

/* k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_5677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5677,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5680,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5862,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5864,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1290: ##sys#er-transformer */
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

/* k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_5680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5680,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5683,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5844,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5846,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1307: ##sys#er-transformer */
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

/* k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_5683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5683,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5686,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5755,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5757,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1316: ##sys#er-transformer */
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

/* k5684 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_5686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5686,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1336: chicken.internal#macro-subset */
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

/* k5687 in k5684 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in ... */
static void C_ccall f_5689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5689,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#chicken.base-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5693,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1342: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5691 in k5687 in k5684 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in ... */
static void C_ccall f_5693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5693,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5696,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5706,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5708,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1346: ##sys#er-transformer */
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

/* k5694 in k5691 in k5687 in k5684 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_5696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5696,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5699,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1358: chicken.internal#macro-subset */
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

/* k5697 in k5694 in k5691 in k5687 in k5684 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_5699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5699,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[7]+1 /* (set! ##sys#chicken.time-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5702,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1362: chicken.platform#register-feature! */
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

/* k5700 in k5697 in k5694 in k5691 in k5687 in k5684 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_5702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5702,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5704 in k5691 in k5687 in k5684 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_5706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5706,c,av);}
/* chicken-syntax.scm:1344: ##sys#extend-macro-environment */
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

/* a5707 in k5691 in k5687 in k5684 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_5708(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5708,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5712,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1348: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[27];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5710 in a5707 in k5691 in k5687 in k5684 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_5712(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5712,c,av);}
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

/* k5753 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_5755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5755,c,av);}
/* chicken-syntax.scm:1314: ##sys#extend-macro-environment */
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

/* a5756 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_5757(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5757,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5761,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1319: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[30];
av2[3]=t2;
av2[4]=lf[44];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5759 in a5756 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in ... */
static void C_ccall f_5761(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5761,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?lf[31]:C_i_car(t4));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5772,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t8,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1323: r */
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

/* k5770 in k5759 in a5756 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in ... */
static void C_ccall f_5772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5772,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5775,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_stringp(((C_word*)((C_word*)t0)[5])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5827,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1325: chicken.syntax#get-line-number */
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
f_5775(t3,C_SCHEME_UNDEFINED);}}

/* k5773 in k5770 in k5759 in a5756 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_fcall f_5775(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,2)))){
C_save_and_reclaim_args((void *)trf_5775,2,t0,t1);}
a=C_alloc(25);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[32],((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5798,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t6=C_u_i_cdr(((C_word*)t0)[5]);
t7=t5;
f_5798(t7,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[6])[1],t6));}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5817,a[2]=t5,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1334: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[37]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k5796 in k5773 in k5770 in k5759 in a5756 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_fcall f_5798(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,1)))){
C_save_and_reclaim_args((void *)trf_5798,2,t0,t1);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,lf[33],t1);
t3=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5815 in k5773 in k5770 in k5759 in a5756 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_5817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_5817,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[36],t1);
t3=C_a_i_list(&a,1,t2);
t4=((C_word*)t0)[2];
f_5798(t4,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t3));}

/* k5825 in k5770 in k5759 in a5756 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_5827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5827,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5834,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1326: string-append */
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
f_5775(t2,C_SCHEME_FALSE);}}

/* k5832 in k5825 in k5770 in k5759 in a5756 in k5681 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_5834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5834,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5775(t3,t2);}

/* k5842 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_5844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5844,c,av);}
/* chicken-syntax.scm:1304: ##sys#extend-macro-environment */
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

/* a5845 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_5846(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5846,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5854,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1309: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[46];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5852 in a5845 in k5678 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_5854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5854,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5860 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_5862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5862,c,av);}
/* chicken-syntax.scm:1288: ##sys#extend-macro-environment */
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

/* a5863 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_5864(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5864,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5868,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1292: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[47];
av2[3]=t2;
av2[4]=lf[49];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5866 in a5863 in k5675 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_5868(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5868,c,av);}
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

/* k5925 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_5927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5927,c,av);}
/* chicken-syntax.scm:1246: ##sys#extend-macro-environment */
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

/* a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_5929(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5929,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5933,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1251: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[50];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_5933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5933,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5936,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1252: r */
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

/* k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_5936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5936,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1253: r */
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

/* k5937 in k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_5939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5939,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5942,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1255: chicken.syntax#syntax-error */
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
f_5942(2,av2);}}}

/* k5940 in k5937 in k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in ... */
static void C_ccall f_5942(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5942,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5949,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li5),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_5949(t6,((C_word*)t0)[8],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k5940 in k5937 in k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in ... */
static void C_fcall f_5949(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5949,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5959,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1258: scheme#reverse */
t8=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6028,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:1268: c */
t8=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[8];
av2[3]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* k5957 in loop in k5940 in k5937 in k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_5959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5959,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1259: scheme#reverse */
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

/* k5960 in k5957 in loop in k5940 in k5937 in k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_5962(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5962,c,av);}
a=C_alloc(21);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5968,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6005,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1261: chicken.base#gensym */
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

/* k5966 in k5960 in k5957 in loop in k5940 in k5937 in k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_5968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5968,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1262: ##sys#append */
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

/* k5977 in k5966 in k5960 in k5957 in loop in k5940 in k5937 in k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in ... */
static void C_ccall f_5979(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5979,c,av);}
a=C_alloc(10);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5995,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,1,((C_word*)t0)[6]);
/* chicken-syntax.scm:1262: ##sys#append */
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

/* k5993 in k5977 in k5966 in k5960 in k5957 in loop in k5940 in k5937 in k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in ... */
static void C_ccall f_5995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_5995,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[20],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6003 in k5960 in k5957 in loop in k5940 in k5937 in k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6005,c,av);}
/* chicken-syntax.scm:1261: r */
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

/* k6026 in loop in k5940 in k5937 in k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_6028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6028,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6048,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1269: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1271: c */
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

/* k6029 in k6026 in loop in k5940 in k5937 in k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_6031,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1270: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5949(t5,((C_word*)t0)[6],t2,t3,((C_word*)t0)[7],t4,C_SCHEME_FALSE);}

/* k6046 in k6026 in loop in k5940 in k5937 in k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6048,c,av);}
/* chicken-syntax.scm:1269: r */
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

/* k6052 in k6026 in loop in k5940 in k5937 in k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_6054,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1273: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5949(t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1274: chicken.syntax#syntax-error */
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
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6094,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1279: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6069 in k6052 in k6026 in loop in k5940 in k5937 in k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6071(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6071,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_list2(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1280: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_5949(t7,((C_word*)t0)[6],t2,((C_word*)t0)[7],t5,t6,C_SCHEME_FALSE);}

/* k6092 in k6052 in k6026 in loop in k5940 in k5937 in k5934 in k5931 in a5928 in k5672 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6094,c,av);}
/* chicken-syntax.scm:1279: r */
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

/* k6120 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_6122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6122,c,av);}
/* chicken-syntax.scm:1213: ##sys#extend-macro-environment */
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

/* a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_6124(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6124,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6128,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1218: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6126 in a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_6128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6128,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1219: r */
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

/* k6129 in k6126 in a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_6131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6131,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6134,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1220: r */
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

/* k6132 in k6129 in k6126 in a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_6134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6134,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6137,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1222: chicken.syntax#syntax-error */
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
f_6137(2,av2);}}}

/* k6135 in k6132 in k6129 in k6126 in a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_6137(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6137,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6144,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li7),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_6144(t6,((C_word*)t0)[8],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k6135 in k6132 in k6129 in k6126 in a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in ... */
static void C_fcall f_6144(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_6144,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6154,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1225: scheme#reverse */
t7=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6219,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1234: c */
t7=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[8];
av2[3]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k6152 in loop in k6135 in k6132 in k6129 in k6126 in a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in ... */
static void C_ccall f_6154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6154,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1226: scheme#reverse */
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

/* k6155 in k6152 in loop in k6135 in k6132 in k6129 in k6126 in a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_6157(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6157,c,av);}
a=C_alloc(18);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6163,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6196,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1228: chicken.base#gensym */
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

/* k6161 in k6155 in k6152 in loop in k6135 in k6132 in k6129 in k6126 in a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6163,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1229: ##sys#append */
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

/* k6168 in k6161 in k6155 in k6152 in loop in k6135 in k6132 in k6129 in k6126 in a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6170(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6170,c,av);}
a=C_alloc(9);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6186,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,1,((C_word*)t0)[5]);
/* chicken-syntax.scm:1229: ##sys#append */
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

/* k6184 in k6168 in k6161 in k6155 in k6152 in loop in k6135 in k6132 in k6129 in k6126 in a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in ... */
static void C_ccall f_6186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_6186,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[20],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6194 in k6155 in k6152 in loop in k6135 in k6132 in k6129 in k6126 in a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6196,c,av);}
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

/* k6217 in loop in k6135 in k6132 in k6129 in k6126 in a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in ... */
static void C_ccall f_6219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_6219,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6239,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1235: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1237: c */
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

/* k6220 in k6217 in loop in k6135 in k6132 in k6129 in k6126 in a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_6222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_6222,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1236: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_6144(t5,((C_word*)t0)[6],t2,t3,t4,C_SCHEME_FALSE);}

/* k6237 in k6217 in loop in k6135 in k6132 in k6129 in k6126 in a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_6239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6239,c,av);}
/* chicken-syntax.scm:1235: r */
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

/* k6243 in k6217 in loop in k6135 in k6132 in k6129 in k6126 in a6123 in k5669 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_6245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_6245,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1239: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6144(t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1240: chicken.syntax#syntax-error */
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
/* chicken-syntax.scm:1244: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_6144(t5,((C_word*)t0)[4],t2,((C_word*)t0)[5],t4,C_SCHEME_FALSE);}}

/* k6292 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in ... */
static void C_ccall f_6294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6294,c,av);}
/* chicken-syntax.scm:1124: ##sys#extend-macro-environment */
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

/* a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in ... */
static void C_ccall f_6296(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6296,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6300,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1129: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[64];
av2[3]=t2;
av2[4]=lf[84];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_6300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6300,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6306,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1134: chicken.syntax#strip-syntax */
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

/* k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_6306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6306,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6718,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1135: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_6309(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6309,c,av);}
a=C_alloc(10);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_i_cadddr(((C_word*)t0)[2]);
t4=C_i_cddddr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6321,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1143: r */
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

/* k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_6321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6321,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1144: r */
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

/* k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_6324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6324,c,av);}
a=C_alloc(13);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6330,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t1,a[12]=((C_word*)t0)[10],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1146: r */
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

/* k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in ... */
static void C_ccall f_6330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6330,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1147: r */
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

/* k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in ... */
static void C_ccall f_6333(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6333,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6342,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t1,a[13]=((C_word*)t0)[2],tmp=(C_word)a,a+=14,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6683,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6683(t11,t7,((C_word*)t0)[2]);}

/* k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_6342(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6342,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6343,a[2]=t1,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[67]);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6359,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6660,a[2]=t6,a[3]=t2,a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_6660(t8,t4,((C_word*)t0)[2]);}

/* g3042 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_fcall f_6343(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_6343,3,t0,t1,t2);}
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-syntax.scm:1152: chicken.syntax#syntax-error */
t3=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[64];
av2[3]=lf[66];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k6357 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6359(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6359,c,av);}
a=C_alloc(53);
t2=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6607,a[2]=((C_word*)t0)[5],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[6],lf[65]);
t11=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6620,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[2],a[8]=t3,a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6622,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li12),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_6622(t15,t11,((C_word*)t0)[6]);}

/* k6388 in k6618 in k6357 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in ... */
static void C_ccall f_6390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6390,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[26],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* loop in k6618 in k6357 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in ... */
static void C_fcall f_6392(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_6392,4,t0,t1,t2,t3);}
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
t8=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6411,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=t6,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=t7,a[13]=((C_word*)t0)[7],a[14]=((C_word*)t0)[8],tmp=(C_word)a,a+=15,tmp);
if(C_truep(C_i_pairp(t7))){
if(C_truep(C_i_pairp(C_u_i_cdr(t7)))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6564,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1177: c */
t10=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[75];
av2[3]=C_u_i_car(t7);
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t9=t8;
f_6411(t9,C_SCHEME_FALSE);}}
else{
t9=t8;
f_6411(t9,C_SCHEME_FALSE);}}}

/* k6409 in loop in k6618 in k6357 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in ... */
static void C_fcall f_6411(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_6411,2,t0,t1);}
a=C_alloc(128);
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[3]);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=C_a_i_list(&a,2,lf[36],t4);
t6=C_a_i_list(&a,4,lf[71],((C_word*)t0)[2],t3,t5);
t7=C_a_i_list(&a,2,lf[32],t6);
t8=C_a_i_list(&a,3,lf[72],((C_word*)t0)[2],((C_word*)t0)[5]);
t9=C_a_i_list(&a,4,lf[20],t2,t7,t8);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6417,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=t1,a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t9,tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[9])){
t11=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[14]);
t12=C_a_i_list(&a,2,lf[36],((C_word*)t0)[3]);
t13=C_a_i_list(&a,2,lf[36],t1);
t14=C_a_i_list(&a,4,lf[71],((C_word*)t0)[2],t12,t13);
t15=C_a_i_list(&a,2,lf[32],t14);
t16=C_a_i_list(&a,4,lf[74],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[14]);
t17=t10;
f_6417(t17,C_a_i_list(&a,4,lf[20],t11,t15,t16));}
else{
t11=t10;
f_6417(t11,C_SCHEME_FALSE);}}

/* k6415 in k6409 in loop in k6618 in k6357 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in ... */
static void C_fcall f_6417(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_6417,2,t0,t1);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t3=C_u_i_cdr(((C_word*)t0)[9]);
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6485,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[10],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t6=C_u_i_cdr(((C_word*)t0)[9]);
/* chicken-syntax.scm:1198: c */
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
f_6485(2,av2);}}}

/* k6422 in k6415 in k6409 in loop in k6618 in k6357 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in ... */
static void C_fcall f_6424(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_6424,2,t0,t1);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6428,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6432,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
if(C_truep(((C_word*)t0)[7])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6464,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1203: c */
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
f_6432(t5,C_a_i_list(&a,1,t4));}}
else{
t4=t3;
f_6432(t4,C_SCHEME_END_OF_LIST);}}

/* k6426 in k6422 in k6415 in k6409 in loop in k6618 in k6357 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in ... */
static void C_ccall f_6428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6428,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6430 in k6422 in k6415 in k6409 in loop in k6618 in k6357 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in ... */
static void C_fcall f_6432(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,3)))){
C_save_and_reclaim_args((void *)trf_6432,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6436,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_s_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
/* chicken-syntax.scm:1208: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_6392(t5,t2,t3,t4);}

/* k6434 in k6430 in k6422 in k6415 in k6409 in loop in k6618 in k6357 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in ... */
static void C_ccall f_6436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6436,c,av);}
/* chicken-syntax.scm:1196: ##sys#append */
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

/* k6462 in k6422 in k6415 in k6409 in loop in k6618 in k6357 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in ... */
static void C_ccall f_6464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6464,c,av);}
a=C_alloc(18);
if(C_truep(C_i_not(t1))){
t2=C_a_i_list(&a,2,lf[73],lf[73]);
t3=C_a_i_list(&a,3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
f_6432(t4,C_a_i_list(&a,1,t3));}
else{
t2=((C_word*)t0)[4];
f_6432(t2,C_SCHEME_END_OF_LIST);}}

/* k6483 in k6415 in k6409 in loop in k6618 in k6357 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in ... */
static void C_ccall f_6485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6485,c,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
f_6424(t3,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],t2));}
else{
t2=((C_word*)t0)[5];
f_6424(t2,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[3]));}}

/* k6562 in loop in k6618 in k6357 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in ... */
static void C_ccall f_6564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6564,c,av);}
t2=((C_word*)t0)[2];
f_6411(t2,(C_truep(t1)?C_i_cadr(((C_word*)t0)[3]):C_SCHEME_FALSE));}

/* g3068 in k6357 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static C_word C_fcall f_6607(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_memq(t1,((C_word*)t0)[2]);
return((C_truep(t2)?t1:lf[68]));}

/* k6618 in k6357 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6620(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6620,c,av);}
a=C_alloc(63);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[69],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
t6=C_a_i_list(&a,2,lf[36],((C_word*)t0)[7]);
t7=C_a_i_list(&a,3,lf[70],((C_word*)t0)[6],t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[3],t5,t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6390,a[2]=t8,a[3]=t4,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6392,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t11,a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word)li11),tmp=(C_word)a,a+=10,tmp));
t13=((C_word*)t11)[1];
f_6392(t13,t9,((C_word*)t0)[13],C_fix(1));}

/* map-loop3062 in k6357 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_fcall f_6622(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6622,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* chicken-syntax.scm:1163: g3068 */
  f_6607(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* for-each-loop3041 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_fcall f_6660(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6660,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6670,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1150: g3042 */
t4=((C_word*)t0)[3];
f_6343(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6668 in for-each-loop3041 in k6340 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6670,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6660(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* map-loop3015 in k6331 in k6328 in k6322 in k6319 in k6307 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_fcall f_6683(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6683,3,t0,t1,t2);}
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

/* k6716 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_6718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6718,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6729,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1137: ##sys#current-module */
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
f_6309(2,av2);}}}

/* k6723 in k6716 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_6725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6725,c,av);}
/* chicken-syntax.scm:1136: chicken.base#symbol-append */
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

/* k6727 in k6716 in k6304 in k6298 in a6295 in k5666 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_6729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6729,c,av);}
/* chicken-syntax.scm:1137: ##sys#module-name */
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

/* k6731 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_6733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6733,c,av);}
/* chicken-syntax.scm:1090: ##sys#extend-macro-environment */
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

/* a6734 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_6735(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6735,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6739,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1094: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[85];
av2[3]=t2;
av2[4]=lf[89];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6737 in a6734 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in ... */
static void C_ccall f_6739(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6739,c,av);}
a=C_alloc(5);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6747,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1097: r */
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

/* k6745 in k6737 in a6734 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_6747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6747,c,av);}
a=C_alloc(9);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* chicken-syntax.scm:1099: ##sys#check-syntax */
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
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6806,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* chicken-syntax.scm:1112: ##sys#check-syntax */
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

/* k6754 in k6745 in k6737 in a6734 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_6756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6756,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6759,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1102: chicken.syntax#strip-syntax */
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

/* k6757 in k6754 in k6745 in k6737 in a6734 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_6759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6759,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6762,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6784,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1103: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6760 in k6757 in k6754 in k6745 in k6737 in a6734 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_6762(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6762,c,av);}
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

/* k6782 in k6757 in k6754 in k6745 in k6737 in a6734 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_6784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6784,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6795,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1105: ##sys#current-module */
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
f_6762(2,av2);}}}

/* k6789 in k6782 in k6757 in k6754 in k6745 in k6737 in a6734 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_6791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6791,c,av);}
/* chicken-syntax.scm:1104: chicken.base#symbol-append */
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

/* k6793 in k6782 in k6757 in k6754 in k6745 in k6737 in a6734 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_6795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6795,c,av);}
/* chicken-syntax.scm:1105: ##sys#module-name */
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

/* k6804 in k6745 in k6737 in a6734 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_6806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6806,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1113: chicken.syntax#strip-syntax */
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

/* k6807 in k6804 in k6745 in k6737 in a6734 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_6809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6809,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6812,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6826,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1114: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6810 in k6807 in k6804 in k6745 in k6737 in a6734 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_6812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6812,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[36],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6824 in k6807 in k6804 in k6745 in k6737 in a6734 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_6826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6826,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6837,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1116: ##sys#current-module */
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

/* k6831 in k6824 in k6807 in k6804 in k6745 in k6737 in a6734 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_6833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6833,c,av);}
/* chicken-syntax.scm:1115: chicken.base#symbol-append */
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

/* k6835 in k6824 in k6807 in k6804 in k6745 in k6737 in a6734 in k5663 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_6837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6837,c,av);}
/* chicken-syntax.scm:1116: ##sys#module-name */
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

/* k6847 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_ccall f_6849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6849,c,av);}
/* chicken-syntax.scm:1022: ##sys#extend-macro-environment */
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

/* a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_ccall f_6851(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6851,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6855,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1031: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[100];
av2[3]=t2;
av2[4]=lf[109];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_6855(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6855,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6857,a[2]=((C_word*)t0)[2],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6892,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_cdr(((C_word*)t0)[3]);
t9=C_i_check_list_2(t8,lf[65]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7231,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7233,a[2]=t6,a[3]=t12,a[4]=t7,a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7233(t14,t10,t8);}

/* genvars in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in ... */
static void C_fcall f_6857(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_6857,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6863,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6863(t6,t1,C_fix(0));}

/* loop in genvars in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_fcall f_6863(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6863,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6877,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6889,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1036: chicken.base#gensym */
t5=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6875 in loop in genvars in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_6877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6877,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6881,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1036: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6863(t3,t2,C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* k6879 in k6875 in loop in genvars in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_6881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6881,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6887 in loop in genvars in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_6889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6889,c,av);}
/* chicken-syntax.scm:1036: r */
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

/* k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in ... */
static void C_ccall f_6892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6892,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1042: genvars */
t3=((C_word*)t0)[5];
f_6857(t3,t2,t1);}

/* k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_6895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6895,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6898,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1043: r */
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

/* k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_6898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6898,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6901,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1044: r */
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

/* k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_6901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6901,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6904,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1045: r */
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

/* k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_6904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6904,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6907,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1046: r */
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

/* k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_6907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6907,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1047: r */
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

/* k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in ... */
static void C_ccall f_6910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6910,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:1048: r */
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

/* k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in ... */
static void C_ccall f_6913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6913,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1049: r */
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

/* k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_6916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_6916,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6923,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:1051: scheme#append */
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

/* k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6923(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6923,c,av);}
a=C_alloc(35);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_u_i_cdr(((C_word*)t0)[5]);
t6=C_i_check_list_2(t5,lf[101]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6939,a[2]=t4,a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6941,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[13],a[11]=t9,a[12]=((C_word)li26),tmp=(C_word)a,a+=13,tmp));
t11=((C_word*)t9)[1];
f_6941(t11,t7,t5);}

/* k6937 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6939,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[35],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[20],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_fcall f_6941(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6941,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6949,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word)li25),tmp=(C_word)a,a+=12,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7194,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in ... */
static void C_fcall f_6949(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_6949,4,t0,t1,t2,t3);}
a=C_alloc(14);
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6959,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word)li24),tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:1056: ##sys#decompose-lambda-list */
t6=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in ... */
static void C_ccall f_6959(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6959,c,av);}
a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6963,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],tmp=(C_word)a,a+=17,tmp);
/* chicken-syntax.scm:1059: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[100];
av2[3]=C_i_car(((C_word*)t0)[5]);
av2[4]=lf[102];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6961 in a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in ... */
static void C_ccall f_6963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_6963,c,av);}
a=C_alloc(23);
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6973,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=C_eqp(t2,C_fix(0));
t5=t3;
f_6973(t5,(C_truep(t4)?C_SCHEME_TRUE:C_a_i_list(&a,3,((C_word*)t0)[14],((C_word*)t0)[15],t2)));}
else{
t4=t3;
f_6973(t4,C_a_i_list(&a,3,((C_word*)t0)[16],((C_word*)t0)[15],t2));}}

/* k6971 in k6961 in a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in ... */
static void C_fcall f_6973(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,4)))){
C_save_and_reclaim_args((void *)trf_6973,2,t0,t1);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6977,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6979,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li20),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6989,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word)li23),tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1066: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* k6975 in k6971 in k6961 in a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in ... */
static void C_ccall f_6977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6977,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[34],((C_word*)t0)[3],t1,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a6978 in k6971 in k6961 in a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in ... */
static void C_ccall f_6979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6979,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6987,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1067: take */
f_4354(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6985 in a6978 in k6971 in k6961 in a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in ... */
static void C_ccall f_6987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_6987,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4412,a[2]=t3,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4412(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST,t1);}

/* a6988 in k6971 in k6961 in a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in ... */
static void C_ccall f_6989(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6989,c,av);}
a=C_alloc(16);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6993,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7065,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t6,a[7]=((C_word*)t0)[7],a[8]=((C_word)li22),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_7065(t8,t4,t3,((C_word*)t0)[8]);}

/* k6991 in a6988 in k6971 in k6961 in a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in ... */
static void C_ccall f_6993(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6993,c,av);}
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
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7015,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7017,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li21),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7017(t12,t8,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k7013 in k6991 in a6988 in k6971 in k6961 in a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in ... */
static void C_ccall f_7015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7015,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop2938 in k6991 in a6988 in k6971 in k6961 in a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in ... */
static void C_fcall f_7017(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_7017,4,t0,t1,t2,t3);}
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

/* build in a6988 in k6971 in k6961 in a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in ... */
static void C_fcall f_7065(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_7065,4,t0,t1,t2,t3);}
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
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7118,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7166,a[2]=((C_word*)t0)[7],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1074: chicken.base#gensym */
t6=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k7116 in build in a6988 in k6971 in k6961 in a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in ... */
static void C_ccall f_7118(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7118,c,av);}
a=C_alloc(34);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,2,t1,t5);
t7=C_a_i_list(&a,2,t4,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7129,a[2]=((C_word*)t0)[6],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1078: build */
t9=((C_word*)((C_word*)t0)[7])[1];
f_7065(t9,t8,C_u_i_cdr(((C_word*)t0)[2]),t1);}
else{
/* chicken-syntax.scm:1079: build */
t9=((C_word*)((C_word*)t0)[7])[1];
f_7065(t9,t8,C_SCHEME_END_OF_LIST,t1);}}

/* k7127 in k7116 in build in a6988 in k6971 in k6961 in a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in ... */
static void C_ccall f_7129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7129,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7164 in build in a6988 in k6971 in k6961 in a6958 in g2895 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in ... */
static void C_ccall f_7166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7166,c,av);}
/* chicken-syntax.scm:1074: r */
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

/* k7192 in foldr2890 in k6921 in k6914 in k6911 in k6908 in k6905 in k6902 in k6899 in k6896 in k6893 in k6890 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in ... */
static void C_ccall f_7194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7194,c,av);}
/* chicken-syntax.scm:1054: g2895 */
t2=((C_word*)t0)[2];
f_6949(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a7220 in map-loop2847 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_7221(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7221,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7229 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in ... */
static void C_ccall f_7231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7231,c,av);}{
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

/* map-loop2847 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in ... */
static void C_fcall f_7233(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7233,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7221,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1038: ##sys#decompose-lambda-list */
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

/* k7256 in map-loop2847 in k6853 in a6850 in k5660 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_7258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7258,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7233(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7291 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_7293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7293,c,av);}
/* chicken-syntax.scm:987: ##sys#extend-macro-environment */
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

/* a7294 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_7295(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7295,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7299,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:994: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[112];
av2[3]=t2;
av2[4]=lf[114];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7297 in a7294 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_ccall f_7299(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7299,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7311,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:998: r */
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

/* k7309 in k7297 in a7294 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_7311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7311,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:999: r */
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

/* k7312 in k7309 in k7297 in a7294 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in ... */
static void C_ccall f_7314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7314,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1000: r */
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

/* k7315 in k7312 in k7309 in k7297 in a7294 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_7317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7317,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1001: r */
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

/* k7318 in k7315 in k7312 in k7309 in k7297 in a7294 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_7320(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7320,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7331,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7333,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t6,a[7]=((C_word*)t0)[8],a[8]=((C_word)li30),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_7333(t8,t4,t1,((C_word*)t0)[9]);}

/* k7329 in k7318 in k7315 in k7312 in k7309 in k7297 in a7294 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_7331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7331,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k7318 in k7315 in k7312 in k7309 in k7297 in a7294 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_fcall f_7333(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_7333,4,t0,t1,t2,t3);}
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
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7359,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1009: r */
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

/* k7357 in loop in k7318 in k7315 in k7312 in k7309 in k7297 in a7294 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_7359(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7359,c,av);}
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
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7370,a[2]=((C_word*)t0)[7],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1016: loop */
t15=((C_word*)((C_word*)t0)[8])[1];
f_7333(t15,t14,t1,C_u_i_cdr(((C_word*)t0)[9]));}

/* k7368 in k7357 in loop in k7318 in k7315 in k7312 in k7309 in k7297 in a7294 in k5657 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_7370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7370,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7451 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_ccall f_7453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7453,c,av);}
/* chicken-syntax.scm:959: ##sys#extend-macro-environment */
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

/* a7454 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_ccall f_7455(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7455,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7459,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:966: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[115];
av2[3]=t2;
av2[4]=lf[116];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7457 in a7454 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_7459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7459,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:967: r */
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

/* k7460 in k7457 in a7454 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_ccall f_7462(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7462,c,av);}
a=C_alloc(16);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7502,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:969: r */
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

/* k7490 in k7500 in k7460 in k7457 in a7454 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in ... */
static void C_ccall f_7492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_7492,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[34],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7500 in k7460 in k7457 in a7454 in k5654 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_7502(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7502,c,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_i_cddr(((C_word*)t0)[3]);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7492,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:971: r */
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

/* k7528 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_ccall f_7530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7530,c,av);}
/* chicken-syntax.scm:870: ##sys#extend-macro-environment */
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

/* a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_ccall f_7532(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7532,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7536,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:877: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[117];
av2[3]=t2;
av2[4]=lf[127];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_ccall f_7536(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7536,c,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7626,a[2]=((C_word*)t0)[3],a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7719,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:916: ##sys#check-syntax */
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

/* k7553 in k7787 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_7555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7555,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7559,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:887: scheme#reverse */
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

/* k7557 in k7553 in k7787 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in ... */
static void C_ccall f_7559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7559,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7563,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:888: scheme#reverse */
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

/* k7561 in k7557 in k7553 in k7787 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in ... */
static void C_ccall f_7563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_7563,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7565,a[2]=t3,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7565(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* recur in k7561 in k7557 in k7553 in k7787 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_fcall f_7565(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_7565,6,t0,t1,t2,t3,t4,t5);}
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
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7604,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t6,a[7]=t3,a[8]=t4,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:893: scheme#reverse */
t9=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k7584 in k7610 in k7602 in recur in k7561 in k7557 in k7553 in k7787 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in ... */
static void C_ccall f_7586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7586,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7602 in recur in k7561 in k7557 in k7553 in k7787 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_7604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7604,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7612,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7616,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:894: scheme#reverse */
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

/* k7610 in k7602 in recur in k7561 in k7557 in k7553 in k7787 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_7612(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7612,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[20],((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7586,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:895: recur */
t6=((C_word*)((C_word*)t0)[6])[1];
f_7565(t6,t5,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[8]),C_u_i_cdr(((C_word*)t0)[9]),C_u_i_car(((C_word*)t0)[8]));}

/* k7614 in k7602 in recur in k7561 in k7557 in k7553 in k7787 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_7616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7616,c,av);}
a=C_alloc(3);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:892: ##sys#append */
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

/* make-if-tree in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_fcall f_7626(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7626,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(9);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7632,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word)li33),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_7632(t9,t1,t2,t3,C_SCHEME_END_OF_LIST);}

/* recur in make-if-tree in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_fcall f_7632(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7632,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7646,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:906: scheme#reverse */
t6=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7716,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t5,a[5]=t1,a[6]=t2,a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:908: r */
t7=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[110];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k7644 in recur in make-if-tree in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_7646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7646,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7670 in k7694 in k7702 in k7710 in k7714 in recur in make-if-tree in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_7672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_7672,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,3,lf[35],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[34],((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7694 in k7702 in k7710 in k7714 in recur in make-if-tree in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_7696(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7696,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7672,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=C_u_i_cdr(((C_word*)t0)[7]);
t7=C_u_i_cdr(((C_word*)t0)[8]);
t8=C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[10]);
/* chicken-syntax.scm:912: recur */
t9=((C_word*)((C_word*)t0)[11])[1];
f_7632(t9,t5,t6,t7,t8);}

/* k7702 in k7710 in k7714 in recur in make-if-tree in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_7704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_7704,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7696,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:911: r */
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

/* k7710 in k7714 in recur in make-if-tree in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in ... */
static void C_ccall f_7712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_7712,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7704,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:910: r */
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

/* k7714 in recur in make-if-tree in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_7716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7716,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7712,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:909: scheme#reverse */
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

/* k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_7719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_7719,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:917: ##sys#check-syntax */
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

/* k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_ccall f_7722(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7722,c,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7731,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7930,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7930(t11,t7,((C_word*)t0)[2]);}

/* k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_7731(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7731,c,av);}
a=C_alloc(32);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7732,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7748,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(t1,lf[65]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7762,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7896,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7896(t13,t9,t1);}

/* prefix-sym in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in ... */
static void C_fcall f_7732(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7732,3,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7740,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7744,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:920: scheme#symbol->string */
t6=*((C_word*)lf[119]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k7738 in prefix-sym in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_7740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7740,c,av);}
/* chicken-syntax.scm:920: scheme#string->symbol */
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

/* k7742 in prefix-sym in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_7744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7744,c,av);}
/* chicken-syntax.scm:920: scheme#string-append */
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

/* g2700 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in ... */
static void C_fcall f_7748(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7748,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7756,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:925: prefix-sym */
f_7732(t3,lf[120],t2);}

/* k7754 in g2700 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_7756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7756,c,av);}
/* chicken-syntax.scm:925: r */
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

/* k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in ... */
static void C_ccall f_7762(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7762,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7862,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_7862(t10,t6,((C_word*)t0)[9]);}

/* k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_7768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7768,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:929: r */
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

/* k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in ... */
static void C_ccall f_7771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7771,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:932: r */
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

/* k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in ... */
static void C_ccall f_7774(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7774,c,av);}
a=C_alloc(31);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7789,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7828,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li39),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_7828(t11,t7,((C_word*)t0)[5]);}

/* g2757 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_fcall f_7778(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7778,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7786,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:934: prefix-sym */
f_7732(t3,lf[121],t2);}

/* k7784 in g2757 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_7786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7786,c,av);}
/* chicken-syntax.scm:934: r */
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

/* k7787 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_ccall f_7789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7789,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7555,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[11],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:886: scheme#reverse */
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

/* k7790 in k7787 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_7792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_7792,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:939: make-if-tree */
t3=((C_word*)t0)[9];
f_7626(t3,t2,((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[6],((C_word*)t0)[2]);}

/* k7793 in k7790 in k7787 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in ... */
static void C_ccall f_7795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7795,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:942: r */
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

/* k7800 in k7793 in k7790 in k7787 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in ... */
static void C_ccall f_7802(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7802,c,av);}
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

/* map-loop2751 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in ... */
static void C_fcall f_7828(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7828,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:934: g2757 */
t4=((C_word*)t0)[4];
f_7778(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7851 in map-loop2751 in k7772 in k7769 in k7766 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in ... */
static void C_ccall f_7853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7853,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7828(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2722 in k7760 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_fcall f_7862(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7862,3,t0,t1,t2);}
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

/* map-loop2694 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in ... */
static void C_fcall f_7896(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7896,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:925: g2700 */
t4=((C_word*)t0)[4];
f_7748(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7919 in map-loop2694 in k7729 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in ... */
static void C_ccall f_7921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7921,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7896(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2664 in k7720 in k7717 in k7534 in a7531 in k5651 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in ... */
static void C_fcall f_7930(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7930,3,t0,t1,t2);}
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

/* k7976 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_7978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7978,c,av);}
/* chicken-syntax.scm:766: ##sys#extend-macro-environment */
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

/* a7979 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_7980(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7980,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7984,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:770: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[128];
av2[3]=t2;
av2[4]=lf[131];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7982 in a7979 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_ccall f_7984(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7984,c,av);}
a=C_alloc(8);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7994,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_7994(t8,((C_word*)t0)[4],t2,C_SCHEME_TRUE);}

/* fold in k7982 in a7979 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_fcall f_7994(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_7994,4,t0,t1,t2,t3);}
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
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8021,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:779: ##sys#check-syntax */
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
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8056,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8081,a[2]=((C_word*)t0)[4],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:784: chicken.base#gensym */
t10=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8084,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:788: ##sys#check-syntax */
t9=*((C_word*)lf[43]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[128];
av2[3]=t4;
av2[4]=lf[130];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}}}

/* k8019 in fold in k7982 in a7979 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_8021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_8021,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8024,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8047,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:780: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8022 in k8019 in fold in k7982 in a7979 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_ccall f_8024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8024,c,av);}
a=C_alloc(14);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8039,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:782: fold */
t5=((C_word*)((C_word*)t0)[4])[1];
f_7994(t5,t4,((C_word*)t0)[5],t1);}

/* k8037 in k8022 in k8019 in fold in k7982 in a7979 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in ... */
static void C_ccall f_8039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8039,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8045 in k8019 in fold in k7982 in a7979 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_ccall f_8047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8047,c,av);}
/* chicken-syntax.scm:780: r */
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

/* k8054 in fold in k7982 in a7979 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_8056(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8056,c,av);}
a=C_alloc(14);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8071,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:786: fold */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7994(t6,t5,((C_word*)t0)[5],t1);}

/* k8069 in k8054 in fold in k7982 in a7979 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_ccall f_8071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8071,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8079 in fold in k7982 in a7979 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_8081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8081,c,av);}
/* chicken-syntax.scm:784: r */
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

/* k8082 in fold in k7982 in a7979 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_8084(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8084,c,av);}
a=C_alloc(14);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8100,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:791: fold */
t7=((C_word*)((C_word*)t0)[4])[1];
f_7994(t7,t6,((C_word*)t0)[5],t2);}

/* k8098 in k8082 in fold in k7982 in a7979 in k5648 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in ... */
static void C_ccall f_8100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8100,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8118 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_8120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8120,c,av);}
/* chicken-syntax.scm:745: ##sys#extend-macro-environment */
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

/* a8121 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_8122(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8122,c,av);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8124,a[2]=t4,a[3]=t3,a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
t7=t5=t6;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8212,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:764: quotify-proc */
t9=t5;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cdr(t2);
av2[3]=lf[132];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* quotify-proc2564 in a8121 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_8124(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8124,c,av);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8128,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:751: ##sys#check-syntax */
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

/* k8126 in quotify-proc2564 in a8121 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_ccall f_8128(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8128,c,av);}
a=C_alloc(12);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_u_i_car(t2):t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8137,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_u_i_cdr(t2);
t7=C_u_i_cdr(((C_word*)t0)[2]);
t8=C_a_i_cons(&a,2,t6,t7);
t9=t5;
f_8137(t9,C_a_i_cons(&a,2,lf[20],t8));}
else{
t6=t5;
f_8137(t6,C_i_cadr(((C_word*)t0)[2]));}}

/* k8135 in k8126 in quotify-proc2564 in a8121 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_fcall f_8137(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_8137,2,t0,t1);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_pairp(t1);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8149,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_8149(t6,t4);}
else{
t6=C_i_car(t1);
t7=C_eqp(lf[20],t6);
if(C_truep(C_i_not(t7))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8165,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8169,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:759: r */
t10=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[134];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t8=t5;
f_8149(t8,C_SCHEME_FALSE);}}}

/* k8138 in k8135 in k8126 in quotify-proc2564 in a8121 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_8140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8140,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8147 in k8135 in k8126 in quotify-proc2564 in a8121 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_fcall f_8149(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_8149,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
/* chicken-syntax.scm:760: chicken.syntax#syntax-error */
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

/* k8163 in k8135 in k8126 in quotify-proc2564 in a8121 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_8165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8165,c,av);}
t2=((C_word*)t0)[2];
f_8149(t2,C_i_not(t1));}

/* k8167 in k8135 in k8126 in quotify-proc2564 in a8121 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_8169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8169,c,av);}
/* chicken-syntax.scm:759: c */
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

/* k8210 in a8121 in k5645 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_8212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8212,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[136],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8222 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in ... */
static void C_ccall f_8224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8224,c,av);}
/* chicken-syntax.scm:734: ##sys#extend-macro-environment */
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

/* a8225 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in ... */
static void C_ccall f_8226(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8226,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8230,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:739: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[139];
av2[3]=t2;
av2[4]=lf[140];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8228 in a8225 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_8230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8230,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:740: r */
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

/* k8231 in k8228 in a8225 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_8233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8233,c,av);}
a=C_alloc(15);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8252,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:743: r */
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

/* k8250 in k8231 in k8228 in a8225 in k5642 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_ccall f_8252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_8252,c,av);}
a=C_alloc(27);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,t1,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[20],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[25],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8266 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in ... */
static void C_ccall f_8268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8268,c,av);}
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
av2[2]=lf[141];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a8269 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in ... */
static void C_ccall f_8270(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8270,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8274,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:730: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[141];
av2[3]=t2;
av2[4]=lf[144];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8272 in a8269 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in ... */
static void C_ccall f_8274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8274,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:731: chicken.internal#check-for-multiple-bindings */
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

/* k8275 in k8272 in a8269 in k5639 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_8277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8277,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[48],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8288 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_8290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8290,c,av);}
/* chicken-syntax.scm:706: ##sys#extend-macro-environment */
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

/* a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_8292(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8292,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8296,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:710: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[145];
av2[3]=t2;
av2[4]=lf[149];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in ... */
static void C_ccall f_8296(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8296,c,av);}
a=C_alloc(18);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t2,lf[65]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8310,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8512,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_8512(t14,t10,t2);}

/* k8308 in k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in ... */
static void C_ccall f_8310(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8310,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8316,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8478,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li54),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8478(t10,t6,((C_word*)t0)[4]);}

/* k8314 in k8308 in k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_8316(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8316,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[146]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8338,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8442,a[2]=t9,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_8442(t11,t7,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k8336 in k8314 in k8308 in k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_8338(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8338,c,av);}
a=C_alloc(14);
t2=C_i_check_list_2(t1,lf[65]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8408,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8408(t7,t3,t1);}

/* k8342 in k8336 in k8314 in k8308 in k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_ccall f_8344(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8344,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8348,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[147]+1);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8358,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8360,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li50),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_8360(t13,t9,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k8346 in k8342 in k8336 in k8314 in k8308 in k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_ccall f_8348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8348,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[35],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8356 in k8342 in k8336 in k8314 in k8308 in k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_ccall f_8358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8358,c,av);}
/* chicken-syntax.scm:715: ##sys#append */
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

/* map-loop2512 in k8342 in k8336 in k8314 in k8308 in k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_fcall f_8360(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_8360,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8389,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:722: g2518 */
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

/* k8387 in map-loop2512 in k8342 in k8336 in k8314 in k8308 in k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_8389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8389,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8360(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)));}

/* map-loop2464 in k8336 in k8314 in k8308 in k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_fcall f_8408(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8408,3,t0,t1,t2);}
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

/* foldl2487 in k8314 in k8308 in k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_fcall f_8442(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,5)))){
C_save_and_reclaim_args((void *)trf_8442,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8472,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_slot(t2,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8466,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8468,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:718: ##sys#decompose-lambda-list */
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

/* k8464 in foldl2487 in k8314 in k8308 in k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_ccall f_8466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8466,c,av);}
/* chicken-syntax.scm:718: ##sys#append */
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

/* a8467 in foldl2487 in k8314 in k8308 in k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_ccall f_8468(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8468,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8470 in foldl2487 in k8314 in k8308 in k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_ccall f_8472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8472,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8442(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop2435 in k8308 in k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_fcall f_8478(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8478,3,t0,t1,t2);}
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

/* map-loop2409 in k8294 in a8291 in k5636 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in ... */
static void C_fcall f_8512(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8512,3,t0,t1,t2);}
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

/* k8546 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_8548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8548,c,av);}
/* chicken-syntax.scm:691: ##sys#extend-macro-environment */
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

/* a8549 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_8550(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8550,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8554,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:695: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[150];
av2[3]=t2;
av2[4]=lf[152];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8552 in a8549 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_8554(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8554,c,av);}
a=C_alloc(5);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8562,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:698: r */
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

/* k8560 in k8552 in a8549 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in ... */
static void C_ccall f_8562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_8562,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8567,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=((C_word)li57),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_8567(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* fold in k8560 in k8552 in a8549 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in ... */
static void C_fcall f_8567(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8567,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8592,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:703: fold */
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}

/* k8590 in fold in k8560 in k8552 in a8549 in k5633 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_8592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8592,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8600 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_8602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8602,c,av);}
/* chicken-syntax.scm:637: ##sys#extend-macro-environment */
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

/* a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_8604(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8604,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8608,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:641: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[151];
av2[3]=t2;
av2[4]=lf[153];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_8608(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8608,c,av);}
a=C_alloc(33);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8614,a[2]=t6,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8642,a[2]=t8,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t11=C_set_block_item(t6,0,t9);
t12=C_set_block_item(t8,0,t10);
t13=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t14=t13;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=((C_word*)t15)[1];
t17=C_i_check_list_2(t2,lf[65]);
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8690,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t8,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9043,a[2]=t15,a[3]=t20,a[4]=t16,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t22=((C_word*)t20)[1];
f_9043(t22,t18,t2);}

/* append*2215 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_8614(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8614,c,av);}
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
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8635,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:648: append* */
t7=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=C_u_i_cdr(t2);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k8633 in append*2215 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in ... */
static void C_ccall f_8635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8635,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map*2216 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_8642(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8642,c,av);}
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
/* chicken-syntax.scm:651: proc */
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8665,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:652: proc */
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(t3);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* k8663 in map*2216 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in ... */
static void C_ccall f_8665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8665,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8669,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:652: map* */
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

/* k8667 in k8663 in map*2216 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in ... */
static void C_ccall f_8669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8669,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_8690(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8690,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9005,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_9005(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in ... */
static void C_ccall f_8693(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8693,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8697,a[2]=((C_word*)t0)[2],a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(t1,lf[65]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8715,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8971,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li68),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_8971(t12,t8,t1);}

/* g2276 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in ... */
static void C_fcall f_8697(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8697,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8705,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8709,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:663: chicken.base#gensym */
t5=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8703 in g2276 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_8705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8705,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8707 in g2276 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_8709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8709,c,av);}
/* chicken-syntax.scm:663: r */
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

/* k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in ... */
static void C_ccall f_8715(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8715,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8716,a[2]=t1,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8727,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8927,a[2]=t5,a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word)li67),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8927(t7,t3,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* lookup in k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_8716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8716,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_cdr(C_i_assq(t2,((C_word*)t0)[2]));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8725 in k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_8727(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8727,c,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8893,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8893(t10,t6,((C_word*)t0)[7]);}

/* k8740 in k8725 in k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_8742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8742,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word)li65),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_8744(t5,((C_word*)t0)[5],((C_word*)t0)[6],t1,((C_word*)t0)[7]);}

/* fold in k8740 in k8725 in k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_fcall f_8744(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_8744,5,t0,t1,t2,t3,t4);}
a=C_alloc(22);
if(C_truep(C_i_nullp(t2))){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8763,a[2]=((C_word*)t0)[2],a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8777,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8779,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,a[6]=((C_word)li64),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_8779(t15,t11,((C_word*)t0)[3]);}
else{
t5=C_i_car(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_nullp(C_i_cdar(t4)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_caar(t4);
t9=C_i_car(t3);
t10=C_a_i_list(&a,2,t8,t9);
t11=C_a_i_list(&a,1,t10);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8828,a[2]=t1,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:683: fold */
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
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8865,a[2]=t10,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:689: fold */
t16=t11;
t17=C_i_cdr(t2);
t18=C_u_i_cdr(t3);
t19=C_u_i_cdr(t4);
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}}}

/* g2327 in fold in k8740 in k8725 in k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_fcall f_8763(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8763,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8771,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:678: lookup */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
f_8716(3,av2);}}

/* k8769 in g2327 in fold in k8740 in k8725 in k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_8771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8771,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8775 in fold in k8740 in k8725 in k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_ccall f_8777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8777,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[35],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2321 in fold in k8740 in k8725 in k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_fcall f_8779(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8779,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:678: g2327 */
t4=((C_word*)t0)[4];
f_8763(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8802 in map-loop2321 in fold in k8740 in k8725 in k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_8804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8804,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8779(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k8826 in fold in k8740 in k8725 in k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_ccall f_8828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8828,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8863 in fold in k8740 in k8725 in k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_ccall f_8865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_8865,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[20],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[25],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2356 in k8725 in k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_fcall f_8893(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8893,3,t0,t1,t2);}
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

/* loop in k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_fcall f_8927(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8927,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
/* chicken-syntax.scm:667: scheme#reverse */
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
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8958,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:670: lookup */
t7=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
f_8716(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8965,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:671: map* */
t7=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}}

/* k8956 in loop in k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_8958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8958,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:672: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8927(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]),t2);}

/* k8963 in loop in k8713 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_8965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8965,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:672: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8927(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]),t2);}

/* map-loop2270 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in ... */
static void C_fcall f_8971(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8971,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:663: g2276 */
t4=((C_word*)t0)[4];
f_8697(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8994 in map-loop2270 in k8691 in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_8996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8996,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8971(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* loop in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in ... */
static void C_fcall f_9005(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9005,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9018,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t4))){
/* chicken-syntax.scm:659: scheme#append */
t6=*((C_word*)lf[105]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
if(C_truep(C_i_pairp(t4))){
/* chicken-syntax.scm:660: append* */
t6=((C_word*)((C_word*)t0)[3])[1];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=C_a_i_cons(&a,2,t4,t3);
/* chicken-syntax.scm:662: loop */
t8=t1;
t9=C_u_i_cdr(t2);
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}}

/* k9016 in loop in k8688 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in ... */
static void C_ccall f_9018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9018,c,av);}
/* chicken-syntax.scm:662: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9005(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),t1);}

/* map-loop2232 in k8606 in a8603 in k5630 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_fcall f_9043(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9043,3,t0,t1,t2);}
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

/* k9077 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_9079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9079,c,av);}
/* chicken-syntax.scm:620: ##sys#extend-macro-environment */
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

/* a9080 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_9081(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9081,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9085,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:624: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[154];
av2[3]=t2;
av2[4]=lf[159];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9083 in a9080 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_9085(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9085,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9092,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9096,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9118,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:626: ##sys#decompose-lambda-list */
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

/* k9090 in k9083 in a9080 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_9092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9092,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[26],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9094 in k9083 in a9080 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_9096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9096,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9104,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:635: ##sys#expand-multiple-values-assignment */
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

/* k9102 in k9094 in k9083 in a9080 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_9104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9104,c,av);}
a=C_alloc(3);
t2=C_a_i_list(&a,1,t1);
/* chicken-syntax.scm:625: ##sys#append */
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

/* a9117 in k9083 in a9080 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_9118(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9118,c,av);}
a=C_alloc(10);
t5=C_i_check_list_2(t2,lf[67]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9137,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9184,a[2]=t8,a[3]=((C_word)li73),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_9184(t10,t6,t2);}

/* k9122 in for-each-loop2161 in a9117 in k9083 in a9080 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in ... */
static void C_ccall f_9124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9124,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9131,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:631: ##sys#current-module */
t3=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9129 in k9122 in for-each-loop2161 in a9117 in k9083 in a9080 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in ... */
static void C_ccall f_9131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9131,c,av);}
/* chicken-syntax.scm:631: ##sys#register-export */
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

/* k9135 in a9117 in k9083 in a9080 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_9137(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9137,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9150,a[2]=t4,a[3]=t7,a[4]=t5,a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_9150(t9,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* map-loop2171 in k9135 in a9117 in k9083 in a9080 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in ... */
static void C_fcall f_9150(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9150,3,t0,t1,t2);}
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

/* for-each-loop2161 in a9117 in k9083 in a9080 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_fcall f_9184(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_9184,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9194,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9124,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:630: ##sys#get */
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

/* k9192 in for-each-loop2161 in a9117 in k9083 in a9080 in k5626 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in ... */
static void C_ccall f_9194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9194,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9184(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k9207 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_9209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9209,c,av);}
/* chicken-syntax.scm:612: ##sys#extend-macro-environment */
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

/* a9210 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_9211(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9211,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9215,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:616: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[160];
av2[3]=t2;
av2[4]=lf[161];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9213 in a9210 in k5623 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_9215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9215,c,av);}
/* chicken-syntax.scm:617: ##sys#expand-multiple-values-assignment */
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

/* k9228 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_ccall f_9230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9230,c,av);}
/* chicken-syntax.scm:603: ##sys#extend-macro-environment */
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

/* a9231 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_ccall f_9232(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9232,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9236,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:607: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[162];
av2[3]=t2;
av2[4]=lf[164];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9234 in a9231 in k5620 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_9236(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9236,c,av);}
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

/* k9256 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in ... */
static void C_ccall f_9258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9258,c,av);}
/* chicken-syntax.scm:595: ##sys#extend-macro-environment */
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

/* a9259 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in ... */
static void C_ccall f_9260(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9260,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9264,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:599: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[165];
av2[3]=t2;
av2[4]=lf[166];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9262 in a9259 in k5617 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_ccall f_9264(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9264,c,av);}
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

/* k9280 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_9282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9282,c,av);}
/* chicken-syntax.scm:582: ##sys#extend-macro-environment */
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

/* a9283 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_9284(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9284,c,av);}
a=C_alloc(22);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9293,a[2]=t3,a[3]=t4,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp);
t10=C_i_cdr(t2);
t11=C_i_check_list_2(t10,lf[65]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9328,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9330,a[2]=t7,a[3]=t14,a[4]=t9,a[5]=t8,a[6]=((C_word)li82),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_9330(t16,t12,t10);}

/* g2086 in a9283 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in ... */
static void C_fcall f_9293(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,8)))){
C_save_and_reclaim_args((void *)trf_9293,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9299,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li79),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9305,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:589: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a9298 in g2086 in a9283 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_ccall f_9299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9299,c,av);}
/* chicken-syntax.scm:589: ##sys#decompose-import */
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

/* a9304 in g2086 in a9283 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_ccall f_9305(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9305,c,av);}
a=C_alloc(4);
if(C_truep(C_i_not(t3))){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=lf[169];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9319,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:592: chicken.internal#module-requirement */
t9=*((C_word*)lf[171]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k9317 in a9304 in g2086 in a9283 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_9319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9319,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[170],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9326 in a9283 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in ... */
static void C_ccall f_9328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9328,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[26],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop2080 in a9283 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in ... */
static void C_fcall f_9330(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9330,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:588: g2086 */
t4=((C_word*)t0)[4];
f_9293(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9353 in map-loop2080 in a9283 in k5614 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_ccall f_9355(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9355,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_9330(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k9364 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_9366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9366,c,av);}
/* chicken-syntax.scm:528: ##sys#extend-macro-environment */
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

/* a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in k5549 in ... */
static void C_ccall f_9368(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9368,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9387,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:536: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[172];
av2[3]=t2;
av2[4]=lf[180];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in k5552 in ... */
static void C_ccall f_9387(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9387,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9395,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:539: r */
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

/* k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in k5555 in ... */
static void C_ccall f_9395(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9395,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9404,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10260,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10260(t11,t7,((C_word*)t0)[2]);}

/* k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in k5558 in ... */
static void C_ccall f_9404(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9404,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9410,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10226,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li100),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10226(t10,t6,((C_word*)t0)[6]);}

/* k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_9410(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9410,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9414,a[2]=((C_word*)t0)[2],a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9428,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10192,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li99),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_10192(t12,t8,((C_word*)t0)[3]);}

/* g1671 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_fcall f_9414(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9414,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9422,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t2))){
/* chicken-syntax.scm:534: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* chicken-syntax.scm:535: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[173];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k9420 in g1671 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_9422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9422,c,av);}
/* chicken-syntax.scm:542: r */
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

/* k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_9428(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9428,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9432,a[2]=((C_word*)t0)[2],a[3]=((C_word)li85),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9443,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10158,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li98),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10158(t11,t7,((C_word*)t0)[7]);}

/* g1699 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_fcall f_9432(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9432,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9440,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:543: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[174];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9438 in g1699 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_9440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9440,c,av);}
/* chicken-syntax.scm:543: r */
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

/* k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in k5568 in ... */
static void C_ccall f_9443(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9443,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9447,a[2]=((C_word*)t0)[2],a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9458,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10124,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li97),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10124(t11,t7,((C_word*)t0)[8]);}

/* g1727 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_fcall f_9447(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9447,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9455,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:544: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[42];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9453 in g1727 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_9455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9455,c,av);}
/* chicken-syntax.scm:544: r */
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

/* k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in k5571 in ... */
static void C_ccall f_9458(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9458,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9471,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10076,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li96),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10076(t11,t7,((C_word*)t0)[2],((C_word*)t0)[8]);}

/* k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in k5574 in ... */
static void C_ccall f_9471(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9471,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9488,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10028,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li95),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10028(t12,t8,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in k5577 in ... */
static void C_ccall f_9488(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9488,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9980,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li94),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_9980(t10,t6,((C_word*)t0)[7],((C_word*)t0)[7]);}

/* k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in ... */
static void C_ccall f_9499(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9499,c,av);}
a=C_alloc(51);
t2=C_a_i_list(&a,4,lf[175],lf[176],C_SCHEME_TRUE,C_SCHEME_TRUE);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9750,a[2]=((C_word*)t0)[2],a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9768,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9910,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li93),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_9910(t15,t11,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[3]);}

/* k9545 in k9770 in k9766 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_ccall f_9547(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9547,c,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9551,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9563,a[2]=t2,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9625,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li89),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9625(t11,t7,((C_word*)t0)[11],((C_word*)t0)[9]);}

/* k9549 in k9545 in k9770 in k9766 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_ccall f_9551(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9551,c,av);}
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

/* k9561 in k9545 in k9770 in k9766 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_ccall f_9563(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9563,c,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9575,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9577,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_9577(t10,t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k9573 in k9561 in k9545 in k9770 in k9766 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_ccall f_9575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9575,c,av);}
/* chicken-syntax.scm:545: ##sys#append */
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

/* map-loop2036 in k9561 in k9545 in k9770 in k9766 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in ... */
static void C_fcall f_9577(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9577,4,t0,t1,t2,t3);}
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

/* map-loop2000 in k9545 in k9770 in k9766 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_fcall f_9625(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9625,4,t0,t1,t2,t3);}
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

/* map-loop1958 in k9770 in k9766 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_fcall f_9673(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_9673,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9680,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_9680(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_9680(t6,C_SCHEME_FALSE);}}

/* k9678 in map-loop1958 in k9770 in k9766 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in ... */
static void C_fcall f_9680(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_9680,2,t0,t1);}
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
f_9673(t9,((C_word*)t0)[6],C_slot(((C_word*)t0)[2],C_fix(1)),C_slot(((C_word*)t0)[7],C_fix(1)),C_slot(((C_word*)t0)[3],C_fix(1)));}
else{
t2=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[8],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g1850 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static C_word C_fcall f_9750(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t4=C_a_i_list(&a,4,t1,t2,C_SCHEME_TRUE,C_SCHEME_FALSE);
t5=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t4,t2);
return(C_a_i_list(&a,2,t3,t5));}

/* k9766 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_9768(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9768,c,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9772,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9788,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9862,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li92),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9862(t11,t7,((C_word*)t0)[10],((C_word*)t0)[8]);}

/* k9770 in k9766 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_9772(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9772,c,av);}
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
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9547,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9673,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li90),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9673(t15,t11,((C_word*)t0)[11],((C_word*)t0)[9],((C_word*)t0)[10]);}

/* k9786 in k9766 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_9788(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9788,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9792,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9804,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9814,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9814(t11,t7,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k9790 in k9786 in k9766 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_ccall f_9792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9792,c,av);}
/* chicken-syntax.scm:545: ##sys#append */
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

/* k9802 in k9786 in k9766 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_ccall f_9804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_9804,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,lf[178],((C_word*)t0)[2],C_SCHEME_FALSE);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:545: ##sys#append */
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

/* map-loop1922 in k9786 in k9766 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in ... */
static void C_fcall f_9814(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9814,4,t0,t1,t2,t3);}
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

/* map-loop1886 in k9766 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_fcall f_9862(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9862,4,t0,t1,t2,t3);}
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

/* map-loop1844 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_fcall f_9910(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_9910,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9917,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t1,a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_9917(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_9917(t6,C_SCHEME_FALSE);}}

/* k9915 in map-loop1844 in k9497 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in ... */
static void C_fcall f_9917(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,4)))){
C_save_and_reclaim_args((void *)trf_9917,2,t0,t1);}
a=C_alloc(33);
if(C_truep(t1)){
t2=(
/* chicken-syntax.scm:560: g1850 */
  f_9750(C_a_i(&a,30),((C_word*)t0)[2],C_slot(((C_word*)t0)[3],C_fix(0)),C_slot(((C_word*)t0)[4],C_fix(0)),C_slot(((C_word*)t0)[5],C_fix(0)))
);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=((C_word*)((C_word*)t0)[7])[1];
f_9910(t6,((C_word*)t0)[8],C_slot(((C_word*)t0)[3],C_fix(1)),C_slot(((C_word*)t0)[4],C_fix(1)),C_slot(((C_word*)t0)[5],C_fix(1)));}
else{
t2=((C_word*)t0)[8];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[9],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* map-loop1813 in k9486 in k9469 in k9456 in k9441 in k9426 in k9408 in k9402 in k9393 in k9385 in a9367 in k5611 in k5608 in k5605 in k5602 in k5599 in k5596 in k5593 in k5590 in k5587 in k5584 in k5580 in ... */
static void C_fcall f_9980(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9980,4,t0,t1,t2,t3);}
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
if(C_unlikely(!C_demand_2(2770))){
C_save(t1);
C_rereclaim2(2770*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,284);
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
lf[209]=C_h_intern(&lf[209],12, C_text("clear-pixels"));
lf[210]=C_h_intern(&lf[210],9, C_text("set-pixel"));
lf[211]=C_h_intern(&lf[211],19, C_text("let-compiler-syntax"));
lf[212]=C_h_intern(&lf[212],26, C_text("##core#let-compiler-syntax"));
lf[213]=C_h_intern(&lf[213],51, C_text("chicken.internal.syntax-rules#syntax-rules-mismatch"));
lf[214]=C_h_intern(&lf[214],7, C_text("##sys#+"));
lf[215]=C_h_intern(&lf[215],7, C_text("##sys#="));
lf[216]=C_h_intern(&lf[216],8, C_text("##sys#>="));
lf[217]=C_h_intern(&lf[217],12, C_text("##sys#length"));
lf[218]=C_h_intern(&lf[218],11, C_text("##sys#list\077"));
lf[219]=C_h_intern(&lf[219],22, C_text("define-compiler-syntax"));
lf[220]=C_h_intern(&lf[220],29, C_text("##core#define-compiler-syntax"));
lf[221]=C_h_intern(&lf[221],17, C_text("define-for-syntax"));
lf[222]=C_h_intern(&lf[222],16, C_text("begin-for-syntax"));
lf[223]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[224]=C_h_intern(&lf[224],26, C_text("##core#elaborationtimeonly"));
lf[225]=C_h_intern(&lf[225],30, C_text("##sys#register-meta-expression"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000"));
lf[227]=C_h_intern(&lf[227],6, C_text("syntax"));
lf[228]=C_h_intern(&lf[228],13, C_text("##core#syntax"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[230]=C_h_intern(&lf[230],11, C_text("define-type"));
lf[231]=C_h_intern_kw(&lf[231],9, C_text("compiling"));
lf[232]=C_h_intern(&lf[232],14, C_text("##sys#features"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[234]=C_h_intern(&lf[234],28, C_text("##compiler#type-abbreviation"));
lf[235]=C_h_intern(&lf[235],18, C_text("##sys#put/restore!"));
lf[236]=C_h_intern(&lf[236],52, C_text("chicken.compiler.scrutinizer#check-and-validate-type"));
lf[237]=C_h_intern(&lf[237],5, C_text("quote"));
lf[238]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[239]=C_h_intern(&lf[239],17, C_text("compiler-typecase"));
lf[240]=C_h_intern(&lf[240],4, C_text("else"));
lf[241]=C_h_intern(&lf[241],15, C_text("##core#typecase"));
lf[242]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001\376\377\001\000\000\000\001"));
lf[243]=C_h_intern(&lf[243],21, C_text("define-specialization"));
lf[244]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[245]=C_h_intern(&lf[245],6, C_text("inline"));
lf[246]=C_h_intern(&lf[246],4, C_text("hide"));
lf[247]=C_h_intern(&lf[247],10, C_text("##sys#put!"));
lf[248]=C_h_intern(&lf[248],32, C_text("##compiler#local-specializations"));
lf[249]=C_h_intern(&lf[249],1, C_text("\052"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027invalid argument syntax"));
lf[251]=C_h_intern(&lf[251],15, C_text("##sys#globalize"));
lf[252]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\001\001_\376"
"\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[253]=C_h_intern(&lf[253],6, C_text("assume"));
lf[254]=C_h_intern(&lf[254],3, C_text("the"));
lf[255]=C_h_intern(&lf[255],11, C_text("##sys#map-n"));
lf[256]=C_h_intern(&lf[256],3, C_text("let"));
lf[257]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[258]=C_h_intern(&lf[258],1, C_text(":"));
lf[259]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[260]=C_h_intern(&lf[260],42, C_text("chicken.compiler.scrutinizer#validate-type"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023invalid type syntax"));
lf[262]=C_h_intern(&lf[262],4, C_text("type"));
lf[263]=C_h_intern(&lf[263],9, C_text("predicate"));
lf[264]=C_h_intern(&lf[264],4, C_text("pure"));
lf[265]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001symbol\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[266]=C_h_intern(&lf[266],4, C_text("memv"));
lf[267]=C_h_intern(&lf[267],11, C_text("scheme#memv"));
lf[268]=C_h_intern(&lf[268],14, C_text("condition-case"));
lf[269]=C_h_intern(&lf[269],9, C_text("condition"));
lf[270]=C_h_intern(&lf[270],10, C_text("##sys#slot"));
lf[271]=C_h_intern(&lf[271],24, C_text("chicken.condition#signal"));
lf[272]=C_h_intern(&lf[272],4, C_text("cond"));
lf[273]=C_h_intern(&lf[273],17, C_text("handle-exceptions"));
lf[274]=C_h_intern(&lf[274],3, C_text("and"));
lf[275]=C_h_intern(&lf[275],4, C_text("kvar"));
lf[276]=C_h_intern(&lf[276],5, C_text("exvar"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[278]=C_h_intern(&lf[278],30, C_text("call-with-current-continuation"));
lf[279]=C_h_intern(&lf[279],37, C_text("scheme#call-with-current-continuation"));
lf[280]=C_h_intern(&lf[280],40, C_text("chicken.condition#with-exception-handler"));
lf[281]=C_h_intern(&lf[281],4, C_text("args"));
lf[282]=C_h_intern(&lf[282],1, C_text("k"));
lf[283]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
C_register_lf2(lf,284,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4238,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[664] = {
{C_text("f_10028:chicken_2dsyntax_2escm"),(void*)f_10028},
{C_text("f_10076:chicken_2dsyntax_2escm"),(void*)f_10076},
{C_text("f_10124:chicken_2dsyntax_2escm"),(void*)f_10124},
{C_text("f_10149:chicken_2dsyntax_2escm"),(void*)f_10149},
{C_text("f_10158:chicken_2dsyntax_2escm"),(void*)f_10158},
{C_text("f_10183:chicken_2dsyntax_2escm"),(void*)f_10183},
{C_text("f_10192:chicken_2dsyntax_2escm"),(void*)f_10192},
{C_text("f_10217:chicken_2dsyntax_2escm"),(void*)f_10217},
{C_text("f_10226:chicken_2dsyntax_2escm"),(void*)f_10226},
{C_text("f_10260:chicken_2dsyntax_2escm"),(void*)f_10260},
{C_text("f_10296:chicken_2dsyntax_2escm"),(void*)f_10296},
{C_text("f_10298:chicken_2dsyntax_2escm"),(void*)f_10298},
{C_text("f_10302:chicken_2dsyntax_2escm"),(void*)f_10302},
{C_text("f_10316:chicken_2dsyntax_2escm"),(void*)f_10316},
{C_text("f_10320:chicken_2dsyntax_2escm"),(void*)f_10320},
{C_text("f_10328:chicken_2dsyntax_2escm"),(void*)f_10328},
{C_text("f_10331:chicken_2dsyntax_2escm"),(void*)f_10331},
{C_text("f_10335:chicken_2dsyntax_2escm"),(void*)f_10335},
{C_text("f_10343:chicken_2dsyntax_2escm"),(void*)f_10343},
{C_text("f_10346:chicken_2dsyntax_2escm"),(void*)f_10346},
{C_text("f_10353:chicken_2dsyntax_2escm"),(void*)f_10353},
{C_text("f_10377:chicken_2dsyntax_2escm"),(void*)f_10377},
{C_text("f_10389:chicken_2dsyntax_2escm"),(void*)f_10389},
{C_text("f_10393:chicken_2dsyntax_2escm"),(void*)f_10393},
{C_text("f_10405:chicken_2dsyntax_2escm"),(void*)f_10405},
{C_text("f_10415:chicken_2dsyntax_2escm"),(void*)f_10415},
{C_text("f_10463:chicken_2dsyntax_2escm"),(void*)f_10463},
{C_text("f_10521:chicken_2dsyntax_2escm"),(void*)f_10521},
{C_text("f_10536:chicken_2dsyntax_2escm"),(void*)f_10536},
{C_text("f_10540:chicken_2dsyntax_2escm"),(void*)f_10540},
{C_text("f_10552:chicken_2dsyntax_2escm"),(void*)f_10552},
{C_text("f_10562:chicken_2dsyntax_2escm"),(void*)f_10562},
{C_text("f_10610:chicken_2dsyntax_2escm"),(void*)f_10610},
{C_text("f_10666:chicken_2dsyntax_2escm"),(void*)f_10666},
{C_text("f_10675:chicken_2dsyntax_2escm"),(void*)f_10675},
{C_text("f_10682:chicken_2dsyntax_2escm"),(void*)f_10682},
{C_text("f_10691:chicken_2dsyntax_2escm"),(void*)f_10691},
{C_text("f_10693:chicken_2dsyntax_2escm"),(void*)f_10693},
{C_text("f_10743:chicken_2dsyntax_2escm"),(void*)f_10743},
{C_text("f_10757:chicken_2dsyntax_2escm"),(void*)f_10757},
{C_text("f_10763:chicken_2dsyntax_2escm"),(void*)f_10763},
{C_text("f_10811:chicken_2dsyntax_2escm"),(void*)f_10811},
{C_text("f_10845:chicken_2dsyntax_2escm"),(void*)f_10845},
{C_text("f_10870:chicken_2dsyntax_2escm"),(void*)f_10870},
{C_text("f_10879:chicken_2dsyntax_2escm"),(void*)f_10879},
{C_text("f_10904:chicken_2dsyntax_2escm"),(void*)f_10904},
{C_text("f_10913:chicken_2dsyntax_2escm"),(void*)f_10913},
{C_text("f_10949:chicken_2dsyntax_2escm"),(void*)f_10949},
{C_text("f_10951:chicken_2dsyntax_2escm"),(void*)f_10951},
{C_text("f_10955:chicken_2dsyntax_2escm"),(void*)f_10955},
{C_text("f_10966:chicken_2dsyntax_2escm"),(void*)f_10966},
{C_text("f_10968:chicken_2dsyntax_2escm"),(void*)f_10968},
{C_text("f_10972:chicken_2dsyntax_2escm"),(void*)f_10972},
{C_text("f_10983:chicken_2dsyntax_2escm"),(void*)f_10983},
{C_text("f_10985:chicken_2dsyntax_2escm"),(void*)f_10985},
{C_text("f_10989:chicken_2dsyntax_2escm"),(void*)f_10989},
{C_text("f_11004:chicken_2dsyntax_2escm"),(void*)f_11004},
{C_text("f_11006:chicken_2dsyntax_2escm"),(void*)f_11006},
{C_text("f_11018:chicken_2dsyntax_2escm"),(void*)f_11018},
{C_text("f_11020:chicken_2dsyntax_2escm"),(void*)f_11020},
{C_text("f_11024:chicken_2dsyntax_2escm"),(void*)f_11024},
{C_text("f_11046:chicken_2dsyntax_2escm"),(void*)f_11046},
{C_text("f_11111:chicken_2dsyntax_2escm"),(void*)f_11111},
{C_text("f_11113:chicken_2dsyntax_2escm"),(void*)f_11113},
{C_text("f_11117:chicken_2dsyntax_2escm"),(void*)f_11117},
{C_text("f_11123:chicken_2dsyntax_2escm"),(void*)f_11123},
{C_text("f_11126:chicken_2dsyntax_2escm"),(void*)f_11126},
{C_text("f_11129:chicken_2dsyntax_2escm"),(void*)f_11129},
{C_text("f_11135:chicken_2dsyntax_2escm"),(void*)f_11135},
{C_text("f_11138:chicken_2dsyntax_2escm"),(void*)f_11138},
{C_text("f_11141:chicken_2dsyntax_2escm"),(void*)f_11141},
{C_text("f_11145:chicken_2dsyntax_2escm"),(void*)f_11145},
{C_text("f_11158:chicken_2dsyntax_2escm"),(void*)f_11158},
{C_text("f_11173:chicken_2dsyntax_2escm"),(void*)f_11173},
{C_text("f_11205:chicken_2dsyntax_2escm"),(void*)f_11205},
{C_text("f_11236:chicken_2dsyntax_2escm"),(void*)f_11236},
{C_text("f_11238:chicken_2dsyntax_2escm"),(void*)f_11238},
{C_text("f_11254:chicken_2dsyntax_2escm"),(void*)f_11254},
{C_text("f_11257:chicken_2dsyntax_2escm"),(void*)f_11257},
{C_text("f_11260:chicken_2dsyntax_2escm"),(void*)f_11260},
{C_text("f_11274:chicken_2dsyntax_2escm"),(void*)f_11274},
{C_text("f_11286:chicken_2dsyntax_2escm"),(void*)f_11286},
{C_text("f_11290:chicken_2dsyntax_2escm"),(void*)f_11290},
{C_text("f_11383:chicken_2dsyntax_2escm"),(void*)f_11383},
{C_text("f_11387:chicken_2dsyntax_2escm"),(void*)f_11387},
{C_text("f_11402:chicken_2dsyntax_2escm"),(void*)f_11402},
{C_text("f_11422:chicken_2dsyntax_2escm"),(void*)f_11422},
{C_text("f_11428:chicken_2dsyntax_2escm"),(void*)f_11428},
{C_text("f_11448:chicken_2dsyntax_2escm"),(void*)f_11448},
{C_text("f_11456:chicken_2dsyntax_2escm"),(void*)f_11456},
{C_text("f_11481:chicken_2dsyntax_2escm"),(void*)f_11481},
{C_text("f_11491:chicken_2dsyntax_2escm"),(void*)f_11491},
{C_text("f_11498:chicken_2dsyntax_2escm"),(void*)f_11498},
{C_text("f_11502:chicken_2dsyntax_2escm"),(void*)f_11502},
{C_text("f_11510:chicken_2dsyntax_2escm"),(void*)f_11510},
{C_text("f_11512:chicken_2dsyntax_2escm"),(void*)f_11512},
{C_text("f_11525:chicken_2dsyntax_2escm"),(void*)f_11525},
{C_text("f_11527:chicken_2dsyntax_2escm"),(void*)f_11527},
{C_text("f_11592:chicken_2dsyntax_2escm"),(void*)f_11592},
{C_text("f_11594:chicken_2dsyntax_2escm"),(void*)f_11594},
{C_text("f_11604:chicken_2dsyntax_2escm"),(void*)f_11604},
{C_text("f_11617:chicken_2dsyntax_2escm"),(void*)f_11617},
{C_text("f_11633:chicken_2dsyntax_2escm"),(void*)f_11633},
{C_text("f_11639:chicken_2dsyntax_2escm"),(void*)f_11639},
{C_text("f_11642:chicken_2dsyntax_2escm"),(void*)f_11642},
{C_text("f_11648:chicken_2dsyntax_2escm"),(void*)f_11648},
{C_text("f_11657:chicken_2dsyntax_2escm"),(void*)f_11657},
{C_text("f_11664:chicken_2dsyntax_2escm"),(void*)f_11664},
{C_text("f_11678:chicken_2dsyntax_2escm"),(void*)f_11678},
{C_text("f_11689:chicken_2dsyntax_2escm"),(void*)f_11689},
{C_text("f_11692:chicken_2dsyntax_2escm"),(void*)f_11692},
{C_text("f_11698:chicken_2dsyntax_2escm"),(void*)f_11698},
{C_text("f_11707:chicken_2dsyntax_2escm"),(void*)f_11707},
{C_text("f_11714:chicken_2dsyntax_2escm"),(void*)f_11714},
{C_text("f_11728:chicken_2dsyntax_2escm"),(void*)f_11728},
{C_text("f_11740:chicken_2dsyntax_2escm"),(void*)f_11740},
{C_text("f_11742:chicken_2dsyntax_2escm"),(void*)f_11742},
{C_text("f_11762:chicken_2dsyntax_2escm"),(void*)f_11762},
{C_text("f_11776:chicken_2dsyntax_2escm"),(void*)f_11776},
{C_text("f_11789:chicken_2dsyntax_2escm"),(void*)f_11789},
{C_text("f_11837:chicken_2dsyntax_2escm"),(void*)f_11837},
{C_text("f_11839:chicken_2dsyntax_2escm"),(void*)f_11839},
{C_text("f_11843:chicken_2dsyntax_2escm"),(void*)f_11843},
{C_text("f_11850:chicken_2dsyntax_2escm"),(void*)f_11850},
{C_text("f_11858:chicken_2dsyntax_2escm"),(void*)f_11858},
{C_text("f_11866:chicken_2dsyntax_2escm"),(void*)f_11866},
{C_text("f_11868:chicken_2dsyntax_2escm"),(void*)f_11868},
{C_text("f_11872:chicken_2dsyntax_2escm"),(void*)f_11872},
{C_text("f_11875:chicken_2dsyntax_2escm"),(void*)f_11875},
{C_text("f_11896:chicken_2dsyntax_2escm"),(void*)f_11896},
{C_text("f_11898:chicken_2dsyntax_2escm"),(void*)f_11898},
{C_text("f_11902:chicken_2dsyntax_2escm"),(void*)f_11902},
{C_text("f_11913:chicken_2dsyntax_2escm"),(void*)f_11913},
{C_text("f_11915:chicken_2dsyntax_2escm"),(void*)f_11915},
{C_text("f_11919:chicken_2dsyntax_2escm"),(void*)f_11919},
{C_text("f_11928:chicken_2dsyntax_2escm"),(void*)f_11928},
{C_text("f_11931:chicken_2dsyntax_2escm"),(void*)f_11931},
{C_text("f_11934:chicken_2dsyntax_2escm"),(void*)f_11934},
{C_text("f_11957:chicken_2dsyntax_2escm"),(void*)f_11957},
{C_text("f_11973:chicken_2dsyntax_2escm"),(void*)f_11973},
{C_text("f_11975:chicken_2dsyntax_2escm"),(void*)f_11975},
{C_text("f_11979:chicken_2dsyntax_2escm"),(void*)f_11979},
{C_text("f_11985:chicken_2dsyntax_2escm"),(void*)f_11985},
{C_text("f_11988:chicken_2dsyntax_2escm"),(void*)f_11988},
{C_text("f_12012:chicken_2dsyntax_2escm"),(void*)f_12012},
{C_text("f_12016:chicken_2dsyntax_2escm"),(void*)f_12016},
{C_text("f_12023:chicken_2dsyntax_2escm"),(void*)f_12023},
{C_text("f_12050:chicken_2dsyntax_2escm"),(void*)f_12050},
{C_text("f_12052:chicken_2dsyntax_2escm"),(void*)f_12052},
{C_text("f_12077:chicken_2dsyntax_2escm"),(void*)f_12077},
{C_text("f_12096:chicken_2dsyntax_2escm"),(void*)f_12096},
{C_text("f_12098:chicken_2dsyntax_2escm"),(void*)f_12098},
{C_text("f_12108:chicken_2dsyntax_2escm"),(void*)f_12108},
{C_text("f_12117:chicken_2dsyntax_2escm"),(void*)f_12117},
{C_text("f_12121:chicken_2dsyntax_2escm"),(void*)f_12121},
{C_text("f_12124:chicken_2dsyntax_2escm"),(void*)f_12124},
{C_text("f_12127:chicken_2dsyntax_2escm"),(void*)f_12127},
{C_text("f_12130:chicken_2dsyntax_2escm"),(void*)f_12130},
{C_text("f_12138:chicken_2dsyntax_2escm"),(void*)f_12138},
{C_text("f_12148:chicken_2dsyntax_2escm"),(void*)f_12148},
{C_text("f_12151:chicken_2dsyntax_2escm"),(void*)f_12151},
{C_text("f_12157:chicken_2dsyntax_2escm"),(void*)f_12157},
{C_text("f_12192:chicken_2dsyntax_2escm"),(void*)f_12192},
{C_text("f_12194:chicken_2dsyntax_2escm"),(void*)f_12194},
{C_text("f_12252:chicken_2dsyntax_2escm"),(void*)f_12252},
{C_text("f_12256:chicken_2dsyntax_2escm"),(void*)f_12256},
{C_text("f_12289:chicken_2dsyntax_2escm"),(void*)f_12289},
{C_text("f_12291:chicken_2dsyntax_2escm"),(void*)f_12291},
{C_text("f_12316:chicken_2dsyntax_2escm"),(void*)f_12316},
{C_text("f_12333:chicken_2dsyntax_2escm"),(void*)f_12333},
{C_text("f_12335:chicken_2dsyntax_2escm"),(void*)f_12335},
{C_text("f_12353:chicken_2dsyntax_2escm"),(void*)f_12353},
{C_text("f_12389:chicken_2dsyntax_2escm"),(void*)f_12389},
{C_text("f_12406:chicken_2dsyntax_2escm"),(void*)f_12406},
{C_text("f_12463:chicken_2dsyntax_2escm"),(void*)f_12463},
{C_text("f_12465:chicken_2dsyntax_2escm"),(void*)f_12465},
{C_text("f_12475:chicken_2dsyntax_2escm"),(void*)f_12475},
{C_text("f_12492:chicken_2dsyntax_2escm"),(void*)f_12492},
{C_text("f_12513:chicken_2dsyntax_2escm"),(void*)f_12513},
{C_text("f_12523:chicken_2dsyntax_2escm"),(void*)f_12523},
{C_text("f_12531:chicken_2dsyntax_2escm"),(void*)f_12531},
{C_text("f_12533:chicken_2dsyntax_2escm"),(void*)f_12533},
{C_text("f_12549:chicken_2dsyntax_2escm"),(void*)f_12549},
{C_text("f_12559:chicken_2dsyntax_2escm"),(void*)f_12559},
{C_text("f_12593:chicken_2dsyntax_2escm"),(void*)f_12593},
{C_text("f_12637:chicken_2dsyntax_2escm"),(void*)f_12637},
{C_text("f_12643:chicken_2dsyntax_2escm"),(void*)f_12643},
{C_text("f_12646:chicken_2dsyntax_2escm"),(void*)f_12646},
{C_text("f_12652:chicken_2dsyntax_2escm"),(void*)f_12652},
{C_text("f_12661:chicken_2dsyntax_2escm"),(void*)f_12661},
{C_text("f_12668:chicken_2dsyntax_2escm"),(void*)f_12668},
{C_text("f_12682:chicken_2dsyntax_2escm"),(void*)f_12682},
{C_text("f_12693:chicken_2dsyntax_2escm"),(void*)f_12693},
{C_text("f_12696:chicken_2dsyntax_2escm"),(void*)f_12696},
{C_text("f_12702:chicken_2dsyntax_2escm"),(void*)f_12702},
{C_text("f_12711:chicken_2dsyntax_2escm"),(void*)f_12711},
{C_text("f_12718:chicken_2dsyntax_2escm"),(void*)f_12718},
{C_text("f_12730:chicken_2dsyntax_2escm"),(void*)f_12730},
{C_text("f_12741:chicken_2dsyntax_2escm"),(void*)f_12741},
{C_text("f_12772:chicken_2dsyntax_2escm"),(void*)f_12772},
{C_text("f_12774:chicken_2dsyntax_2escm"),(void*)f_12774},
{C_text("f_12778:chicken_2dsyntax_2escm"),(void*)f_12778},
{C_text("f_12794:chicken_2dsyntax_2escm"),(void*)f_12794},
{C_text("f_12810:chicken_2dsyntax_2escm"),(void*)f_12810},
{C_text("f_12812:chicken_2dsyntax_2escm"),(void*)f_12812},
{C_text("f_12816:chicken_2dsyntax_2escm"),(void*)f_12816},
{C_text("f_12825:chicken_2dsyntax_2escm"),(void*)f_12825},
{C_text("f_12832:chicken_2dsyntax_2escm"),(void*)f_12832},
{C_text("f_12840:chicken_2dsyntax_2escm"),(void*)f_12840},
{C_text("f_12842:chicken_2dsyntax_2escm"),(void*)f_12842},
{C_text("f_12867:chicken_2dsyntax_2escm"),(void*)f_12867},
{C_text("f_12871:chicken_2dsyntax_2escm"),(void*)f_12871},
{C_text("f_12921:chicken_2dsyntax_2escm"),(void*)f_12921},
{C_text("f_12923:chicken_2dsyntax_2escm"),(void*)f_12923},
{C_text("f_12927:chicken_2dsyntax_2escm"),(void*)f_12927},
{C_text("f_12930:chicken_2dsyntax_2escm"),(void*)f_12930},
{C_text("f_12933:chicken_2dsyntax_2escm"),(void*)f_12933},
{C_text("f_12936:chicken_2dsyntax_2escm"),(void*)f_12936},
{C_text("f_12939:chicken_2dsyntax_2escm"),(void*)f_12939},
{C_text("f_12942:chicken_2dsyntax_2escm"),(void*)f_12942},
{C_text("f_12944:chicken_2dsyntax_2escm"),(void*)f_12944},
{C_text("f_12954:chicken_2dsyntax_2escm"),(void*)f_12954},
{C_text("f_12979:chicken_2dsyntax_2escm"),(void*)f_12979},
{C_text("f_12993:chicken_2dsyntax_2escm"),(void*)f_12993},
{C_text("f_12995:chicken_2dsyntax_2escm"),(void*)f_12995},
{C_text("f_13074:chicken_2dsyntax_2escm"),(void*)f_13074},
{C_text("f_13099:chicken_2dsyntax_2escm"),(void*)f_13099},
{C_text("f_13106:chicken_2dsyntax_2escm"),(void*)f_13106},
{C_text("f_13110:chicken_2dsyntax_2escm"),(void*)f_13110},
{C_text("f_13130:chicken_2dsyntax_2escm"),(void*)f_13130},
{C_text("f_13155:chicken_2dsyntax_2escm"),(void*)f_13155},
{C_text("f_13194:chicken_2dsyntax_2escm"),(void*)f_13194},
{C_text("f_13196:chicken_2dsyntax_2escm"),(void*)f_13196},
{C_text("f_13200:chicken_2dsyntax_2escm"),(void*)f_13200},
{C_text("f_13203:chicken_2dsyntax_2escm"),(void*)f_13203},
{C_text("f_13206:chicken_2dsyntax_2escm"),(void*)f_13206},
{C_text("f_13217:chicken_2dsyntax_2escm"),(void*)f_13217},
{C_text("f_4238:chicken_2dsyntax_2escm"),(void*)f_4238},
{C_text("f_4241:chicken_2dsyntax_2escm"),(void*)f_4241},
{C_text("f_4244:chicken_2dsyntax_2escm"),(void*)f_4244},
{C_text("f_4354:chicken_2dsyntax_2escm"),(void*)f_4354},
{C_text("f_4372:chicken_2dsyntax_2escm"),(void*)f_4372},
{C_text("f_4412:chicken_2dsyntax_2escm"),(void*)f_4412},
{C_text("f_4426:chicken_2dsyntax_2escm"),(void*)f_4426},
{C_text("f_5526:chicken_2dsyntax_2escm"),(void*)f_5526},
{C_text("f_5529:chicken_2dsyntax_2escm"),(void*)f_5529},
{C_text("f_5532:chicken_2dsyntax_2escm"),(void*)f_5532},
{C_text("f_5535:chicken_2dsyntax_2escm"),(void*)f_5535},
{C_text("f_5539:chicken_2dsyntax_2escm"),(void*)f_5539},
{C_text("f_5542:chicken_2dsyntax_2escm"),(void*)f_5542},
{C_text("f_5545:chicken_2dsyntax_2escm"),(void*)f_5545},
{C_text("f_5548:chicken_2dsyntax_2escm"),(void*)f_5548},
{C_text("f_5551:chicken_2dsyntax_2escm"),(void*)f_5551},
{C_text("f_5554:chicken_2dsyntax_2escm"),(void*)f_5554},
{C_text("f_5557:chicken_2dsyntax_2escm"),(void*)f_5557},
{C_text("f_5560:chicken_2dsyntax_2escm"),(void*)f_5560},
{C_text("f_5564:chicken_2dsyntax_2escm"),(void*)f_5564},
{C_text("f_5567:chicken_2dsyntax_2escm"),(void*)f_5567},
{C_text("f_5570:chicken_2dsyntax_2escm"),(void*)f_5570},
{C_text("f_5573:chicken_2dsyntax_2escm"),(void*)f_5573},
{C_text("f_5576:chicken_2dsyntax_2escm"),(void*)f_5576},
{C_text("f_5579:chicken_2dsyntax_2escm"),(void*)f_5579},
{C_text("f_5582:chicken_2dsyntax_2escm"),(void*)f_5582},
{C_text("f_5586:chicken_2dsyntax_2escm"),(void*)f_5586},
{C_text("f_5589:chicken_2dsyntax_2escm"),(void*)f_5589},
{C_text("f_5592:chicken_2dsyntax_2escm"),(void*)f_5592},
{C_text("f_5595:chicken_2dsyntax_2escm"),(void*)f_5595},
{C_text("f_5598:chicken_2dsyntax_2escm"),(void*)f_5598},
{C_text("f_5601:chicken_2dsyntax_2escm"),(void*)f_5601},
{C_text("f_5604:chicken_2dsyntax_2escm"),(void*)f_5604},
{C_text("f_5607:chicken_2dsyntax_2escm"),(void*)f_5607},
{C_text("f_5610:chicken_2dsyntax_2escm"),(void*)f_5610},
{C_text("f_5613:chicken_2dsyntax_2escm"),(void*)f_5613},
{C_text("f_5616:chicken_2dsyntax_2escm"),(void*)f_5616},
{C_text("f_5619:chicken_2dsyntax_2escm"),(void*)f_5619},
{C_text("f_5622:chicken_2dsyntax_2escm"),(void*)f_5622},
{C_text("f_5625:chicken_2dsyntax_2escm"),(void*)f_5625},
{C_text("f_5628:chicken_2dsyntax_2escm"),(void*)f_5628},
{C_text("f_5632:chicken_2dsyntax_2escm"),(void*)f_5632},
{C_text("f_5635:chicken_2dsyntax_2escm"),(void*)f_5635},
{C_text("f_5638:chicken_2dsyntax_2escm"),(void*)f_5638},
{C_text("f_5641:chicken_2dsyntax_2escm"),(void*)f_5641},
{C_text("f_5644:chicken_2dsyntax_2escm"),(void*)f_5644},
{C_text("f_5647:chicken_2dsyntax_2escm"),(void*)f_5647},
{C_text("f_5650:chicken_2dsyntax_2escm"),(void*)f_5650},
{C_text("f_5653:chicken_2dsyntax_2escm"),(void*)f_5653},
{C_text("f_5656:chicken_2dsyntax_2escm"),(void*)f_5656},
{C_text("f_5659:chicken_2dsyntax_2escm"),(void*)f_5659},
{C_text("f_5662:chicken_2dsyntax_2escm"),(void*)f_5662},
{C_text("f_5665:chicken_2dsyntax_2escm"),(void*)f_5665},
{C_text("f_5668:chicken_2dsyntax_2escm"),(void*)f_5668},
{C_text("f_5671:chicken_2dsyntax_2escm"),(void*)f_5671},
{C_text("f_5674:chicken_2dsyntax_2escm"),(void*)f_5674},
{C_text("f_5677:chicken_2dsyntax_2escm"),(void*)f_5677},
{C_text("f_5680:chicken_2dsyntax_2escm"),(void*)f_5680},
{C_text("f_5683:chicken_2dsyntax_2escm"),(void*)f_5683},
{C_text("f_5686:chicken_2dsyntax_2escm"),(void*)f_5686},
{C_text("f_5689:chicken_2dsyntax_2escm"),(void*)f_5689},
{C_text("f_5693:chicken_2dsyntax_2escm"),(void*)f_5693},
{C_text("f_5696:chicken_2dsyntax_2escm"),(void*)f_5696},
{C_text("f_5699:chicken_2dsyntax_2escm"),(void*)f_5699},
{C_text("f_5702:chicken_2dsyntax_2escm"),(void*)f_5702},
{C_text("f_5706:chicken_2dsyntax_2escm"),(void*)f_5706},
{C_text("f_5708:chicken_2dsyntax_2escm"),(void*)f_5708},
{C_text("f_5712:chicken_2dsyntax_2escm"),(void*)f_5712},
{C_text("f_5755:chicken_2dsyntax_2escm"),(void*)f_5755},
{C_text("f_5757:chicken_2dsyntax_2escm"),(void*)f_5757},
{C_text("f_5761:chicken_2dsyntax_2escm"),(void*)f_5761},
{C_text("f_5772:chicken_2dsyntax_2escm"),(void*)f_5772},
{C_text("f_5775:chicken_2dsyntax_2escm"),(void*)f_5775},
{C_text("f_5798:chicken_2dsyntax_2escm"),(void*)f_5798},
{C_text("f_5817:chicken_2dsyntax_2escm"),(void*)f_5817},
{C_text("f_5827:chicken_2dsyntax_2escm"),(void*)f_5827},
{C_text("f_5834:chicken_2dsyntax_2escm"),(void*)f_5834},
{C_text("f_5844:chicken_2dsyntax_2escm"),(void*)f_5844},
{C_text("f_5846:chicken_2dsyntax_2escm"),(void*)f_5846},
{C_text("f_5854:chicken_2dsyntax_2escm"),(void*)f_5854},
{C_text("f_5862:chicken_2dsyntax_2escm"),(void*)f_5862},
{C_text("f_5864:chicken_2dsyntax_2escm"),(void*)f_5864},
{C_text("f_5868:chicken_2dsyntax_2escm"),(void*)f_5868},
{C_text("f_5927:chicken_2dsyntax_2escm"),(void*)f_5927},
{C_text("f_5929:chicken_2dsyntax_2escm"),(void*)f_5929},
{C_text("f_5933:chicken_2dsyntax_2escm"),(void*)f_5933},
{C_text("f_5936:chicken_2dsyntax_2escm"),(void*)f_5936},
{C_text("f_5939:chicken_2dsyntax_2escm"),(void*)f_5939},
{C_text("f_5942:chicken_2dsyntax_2escm"),(void*)f_5942},
{C_text("f_5949:chicken_2dsyntax_2escm"),(void*)f_5949},
{C_text("f_5959:chicken_2dsyntax_2escm"),(void*)f_5959},
{C_text("f_5962:chicken_2dsyntax_2escm"),(void*)f_5962},
{C_text("f_5968:chicken_2dsyntax_2escm"),(void*)f_5968},
{C_text("f_5979:chicken_2dsyntax_2escm"),(void*)f_5979},
{C_text("f_5995:chicken_2dsyntax_2escm"),(void*)f_5995},
{C_text("f_6005:chicken_2dsyntax_2escm"),(void*)f_6005},
{C_text("f_6028:chicken_2dsyntax_2escm"),(void*)f_6028},
{C_text("f_6031:chicken_2dsyntax_2escm"),(void*)f_6031},
{C_text("f_6048:chicken_2dsyntax_2escm"),(void*)f_6048},
{C_text("f_6054:chicken_2dsyntax_2escm"),(void*)f_6054},
{C_text("f_6071:chicken_2dsyntax_2escm"),(void*)f_6071},
{C_text("f_6094:chicken_2dsyntax_2escm"),(void*)f_6094},
{C_text("f_6122:chicken_2dsyntax_2escm"),(void*)f_6122},
{C_text("f_6124:chicken_2dsyntax_2escm"),(void*)f_6124},
{C_text("f_6128:chicken_2dsyntax_2escm"),(void*)f_6128},
{C_text("f_6131:chicken_2dsyntax_2escm"),(void*)f_6131},
{C_text("f_6134:chicken_2dsyntax_2escm"),(void*)f_6134},
{C_text("f_6137:chicken_2dsyntax_2escm"),(void*)f_6137},
{C_text("f_6144:chicken_2dsyntax_2escm"),(void*)f_6144},
{C_text("f_6154:chicken_2dsyntax_2escm"),(void*)f_6154},
{C_text("f_6157:chicken_2dsyntax_2escm"),(void*)f_6157},
{C_text("f_6163:chicken_2dsyntax_2escm"),(void*)f_6163},
{C_text("f_6170:chicken_2dsyntax_2escm"),(void*)f_6170},
{C_text("f_6186:chicken_2dsyntax_2escm"),(void*)f_6186},
{C_text("f_6196:chicken_2dsyntax_2escm"),(void*)f_6196},
{C_text("f_6219:chicken_2dsyntax_2escm"),(void*)f_6219},
{C_text("f_6222:chicken_2dsyntax_2escm"),(void*)f_6222},
{C_text("f_6239:chicken_2dsyntax_2escm"),(void*)f_6239},
{C_text("f_6245:chicken_2dsyntax_2escm"),(void*)f_6245},
{C_text("f_6294:chicken_2dsyntax_2escm"),(void*)f_6294},
{C_text("f_6296:chicken_2dsyntax_2escm"),(void*)f_6296},
{C_text("f_6300:chicken_2dsyntax_2escm"),(void*)f_6300},
{C_text("f_6306:chicken_2dsyntax_2escm"),(void*)f_6306},
{C_text("f_6309:chicken_2dsyntax_2escm"),(void*)f_6309},
{C_text("f_6321:chicken_2dsyntax_2escm"),(void*)f_6321},
{C_text("f_6324:chicken_2dsyntax_2escm"),(void*)f_6324},
{C_text("f_6330:chicken_2dsyntax_2escm"),(void*)f_6330},
{C_text("f_6333:chicken_2dsyntax_2escm"),(void*)f_6333},
{C_text("f_6342:chicken_2dsyntax_2escm"),(void*)f_6342},
{C_text("f_6343:chicken_2dsyntax_2escm"),(void*)f_6343},
{C_text("f_6359:chicken_2dsyntax_2escm"),(void*)f_6359},
{C_text("f_6390:chicken_2dsyntax_2escm"),(void*)f_6390},
{C_text("f_6392:chicken_2dsyntax_2escm"),(void*)f_6392},
{C_text("f_6411:chicken_2dsyntax_2escm"),(void*)f_6411},
{C_text("f_6417:chicken_2dsyntax_2escm"),(void*)f_6417},
{C_text("f_6424:chicken_2dsyntax_2escm"),(void*)f_6424},
{C_text("f_6428:chicken_2dsyntax_2escm"),(void*)f_6428},
{C_text("f_6432:chicken_2dsyntax_2escm"),(void*)f_6432},
{C_text("f_6436:chicken_2dsyntax_2escm"),(void*)f_6436},
{C_text("f_6464:chicken_2dsyntax_2escm"),(void*)f_6464},
{C_text("f_6485:chicken_2dsyntax_2escm"),(void*)f_6485},
{C_text("f_6564:chicken_2dsyntax_2escm"),(void*)f_6564},
{C_text("f_6607:chicken_2dsyntax_2escm"),(void*)f_6607},
{C_text("f_6620:chicken_2dsyntax_2escm"),(void*)f_6620},
{C_text("f_6622:chicken_2dsyntax_2escm"),(void*)f_6622},
{C_text("f_6660:chicken_2dsyntax_2escm"),(void*)f_6660},
{C_text("f_6670:chicken_2dsyntax_2escm"),(void*)f_6670},
{C_text("f_6683:chicken_2dsyntax_2escm"),(void*)f_6683},
{C_text("f_6718:chicken_2dsyntax_2escm"),(void*)f_6718},
{C_text("f_6725:chicken_2dsyntax_2escm"),(void*)f_6725},
{C_text("f_6729:chicken_2dsyntax_2escm"),(void*)f_6729},
{C_text("f_6733:chicken_2dsyntax_2escm"),(void*)f_6733},
{C_text("f_6735:chicken_2dsyntax_2escm"),(void*)f_6735},
{C_text("f_6739:chicken_2dsyntax_2escm"),(void*)f_6739},
{C_text("f_6747:chicken_2dsyntax_2escm"),(void*)f_6747},
{C_text("f_6756:chicken_2dsyntax_2escm"),(void*)f_6756},
{C_text("f_6759:chicken_2dsyntax_2escm"),(void*)f_6759},
{C_text("f_6762:chicken_2dsyntax_2escm"),(void*)f_6762},
{C_text("f_6784:chicken_2dsyntax_2escm"),(void*)f_6784},
{C_text("f_6791:chicken_2dsyntax_2escm"),(void*)f_6791},
{C_text("f_6795:chicken_2dsyntax_2escm"),(void*)f_6795},
{C_text("f_6806:chicken_2dsyntax_2escm"),(void*)f_6806},
{C_text("f_6809:chicken_2dsyntax_2escm"),(void*)f_6809},
{C_text("f_6812:chicken_2dsyntax_2escm"),(void*)f_6812},
{C_text("f_6826:chicken_2dsyntax_2escm"),(void*)f_6826},
{C_text("f_6833:chicken_2dsyntax_2escm"),(void*)f_6833},
{C_text("f_6837:chicken_2dsyntax_2escm"),(void*)f_6837},
{C_text("f_6849:chicken_2dsyntax_2escm"),(void*)f_6849},
{C_text("f_6851:chicken_2dsyntax_2escm"),(void*)f_6851},
{C_text("f_6855:chicken_2dsyntax_2escm"),(void*)f_6855},
{C_text("f_6857:chicken_2dsyntax_2escm"),(void*)f_6857},
{C_text("f_6863:chicken_2dsyntax_2escm"),(void*)f_6863},
{C_text("f_6877:chicken_2dsyntax_2escm"),(void*)f_6877},
{C_text("f_6881:chicken_2dsyntax_2escm"),(void*)f_6881},
{C_text("f_6889:chicken_2dsyntax_2escm"),(void*)f_6889},
{C_text("f_6892:chicken_2dsyntax_2escm"),(void*)f_6892},
{C_text("f_6895:chicken_2dsyntax_2escm"),(void*)f_6895},
{C_text("f_6898:chicken_2dsyntax_2escm"),(void*)f_6898},
{C_text("f_6901:chicken_2dsyntax_2escm"),(void*)f_6901},
{C_text("f_6904:chicken_2dsyntax_2escm"),(void*)f_6904},
{C_text("f_6907:chicken_2dsyntax_2escm"),(void*)f_6907},
{C_text("f_6910:chicken_2dsyntax_2escm"),(void*)f_6910},
{C_text("f_6913:chicken_2dsyntax_2escm"),(void*)f_6913},
{C_text("f_6916:chicken_2dsyntax_2escm"),(void*)f_6916},
{C_text("f_6923:chicken_2dsyntax_2escm"),(void*)f_6923},
{C_text("f_6939:chicken_2dsyntax_2escm"),(void*)f_6939},
{C_text("f_6941:chicken_2dsyntax_2escm"),(void*)f_6941},
{C_text("f_6949:chicken_2dsyntax_2escm"),(void*)f_6949},
{C_text("f_6959:chicken_2dsyntax_2escm"),(void*)f_6959},
{C_text("f_6963:chicken_2dsyntax_2escm"),(void*)f_6963},
{C_text("f_6973:chicken_2dsyntax_2escm"),(void*)f_6973},
{C_text("f_6977:chicken_2dsyntax_2escm"),(void*)f_6977},
{C_text("f_6979:chicken_2dsyntax_2escm"),(void*)f_6979},
{C_text("f_6987:chicken_2dsyntax_2escm"),(void*)f_6987},
{C_text("f_6989:chicken_2dsyntax_2escm"),(void*)f_6989},
{C_text("f_6993:chicken_2dsyntax_2escm"),(void*)f_6993},
{C_text("f_7015:chicken_2dsyntax_2escm"),(void*)f_7015},
{C_text("f_7017:chicken_2dsyntax_2escm"),(void*)f_7017},
{C_text("f_7065:chicken_2dsyntax_2escm"),(void*)f_7065},
{C_text("f_7118:chicken_2dsyntax_2escm"),(void*)f_7118},
{C_text("f_7129:chicken_2dsyntax_2escm"),(void*)f_7129},
{C_text("f_7166:chicken_2dsyntax_2escm"),(void*)f_7166},
{C_text("f_7194:chicken_2dsyntax_2escm"),(void*)f_7194},
{C_text("f_7221:chicken_2dsyntax_2escm"),(void*)f_7221},
{C_text("f_7231:chicken_2dsyntax_2escm"),(void*)f_7231},
{C_text("f_7233:chicken_2dsyntax_2escm"),(void*)f_7233},
{C_text("f_7258:chicken_2dsyntax_2escm"),(void*)f_7258},
{C_text("f_7293:chicken_2dsyntax_2escm"),(void*)f_7293},
{C_text("f_7295:chicken_2dsyntax_2escm"),(void*)f_7295},
{C_text("f_7299:chicken_2dsyntax_2escm"),(void*)f_7299},
{C_text("f_7311:chicken_2dsyntax_2escm"),(void*)f_7311},
{C_text("f_7314:chicken_2dsyntax_2escm"),(void*)f_7314},
{C_text("f_7317:chicken_2dsyntax_2escm"),(void*)f_7317},
{C_text("f_7320:chicken_2dsyntax_2escm"),(void*)f_7320},
{C_text("f_7331:chicken_2dsyntax_2escm"),(void*)f_7331},
{C_text("f_7333:chicken_2dsyntax_2escm"),(void*)f_7333},
{C_text("f_7359:chicken_2dsyntax_2escm"),(void*)f_7359},
{C_text("f_7370:chicken_2dsyntax_2escm"),(void*)f_7370},
{C_text("f_7453:chicken_2dsyntax_2escm"),(void*)f_7453},
{C_text("f_7455:chicken_2dsyntax_2escm"),(void*)f_7455},
{C_text("f_7459:chicken_2dsyntax_2escm"),(void*)f_7459},
{C_text("f_7462:chicken_2dsyntax_2escm"),(void*)f_7462},
{C_text("f_7492:chicken_2dsyntax_2escm"),(void*)f_7492},
{C_text("f_7502:chicken_2dsyntax_2escm"),(void*)f_7502},
{C_text("f_7530:chicken_2dsyntax_2escm"),(void*)f_7530},
{C_text("f_7532:chicken_2dsyntax_2escm"),(void*)f_7532},
{C_text("f_7536:chicken_2dsyntax_2escm"),(void*)f_7536},
{C_text("f_7555:chicken_2dsyntax_2escm"),(void*)f_7555},
{C_text("f_7559:chicken_2dsyntax_2escm"),(void*)f_7559},
{C_text("f_7563:chicken_2dsyntax_2escm"),(void*)f_7563},
{C_text("f_7565:chicken_2dsyntax_2escm"),(void*)f_7565},
{C_text("f_7586:chicken_2dsyntax_2escm"),(void*)f_7586},
{C_text("f_7604:chicken_2dsyntax_2escm"),(void*)f_7604},
{C_text("f_7612:chicken_2dsyntax_2escm"),(void*)f_7612},
{C_text("f_7616:chicken_2dsyntax_2escm"),(void*)f_7616},
{C_text("f_7626:chicken_2dsyntax_2escm"),(void*)f_7626},
{C_text("f_7632:chicken_2dsyntax_2escm"),(void*)f_7632},
{C_text("f_7646:chicken_2dsyntax_2escm"),(void*)f_7646},
{C_text("f_7672:chicken_2dsyntax_2escm"),(void*)f_7672},
{C_text("f_7696:chicken_2dsyntax_2escm"),(void*)f_7696},
{C_text("f_7704:chicken_2dsyntax_2escm"),(void*)f_7704},
{C_text("f_7712:chicken_2dsyntax_2escm"),(void*)f_7712},
{C_text("f_7716:chicken_2dsyntax_2escm"),(void*)f_7716},
{C_text("f_7719:chicken_2dsyntax_2escm"),(void*)f_7719},
{C_text("f_7722:chicken_2dsyntax_2escm"),(void*)f_7722},
{C_text("f_7731:chicken_2dsyntax_2escm"),(void*)f_7731},
{C_text("f_7732:chicken_2dsyntax_2escm"),(void*)f_7732},
{C_text("f_7740:chicken_2dsyntax_2escm"),(void*)f_7740},
{C_text("f_7744:chicken_2dsyntax_2escm"),(void*)f_7744},
{C_text("f_7748:chicken_2dsyntax_2escm"),(void*)f_7748},
{C_text("f_7756:chicken_2dsyntax_2escm"),(void*)f_7756},
{C_text("f_7762:chicken_2dsyntax_2escm"),(void*)f_7762},
{C_text("f_7768:chicken_2dsyntax_2escm"),(void*)f_7768},
{C_text("f_7771:chicken_2dsyntax_2escm"),(void*)f_7771},
{C_text("f_7774:chicken_2dsyntax_2escm"),(void*)f_7774},
{C_text("f_7778:chicken_2dsyntax_2escm"),(void*)f_7778},
{C_text("f_7786:chicken_2dsyntax_2escm"),(void*)f_7786},
{C_text("f_7789:chicken_2dsyntax_2escm"),(void*)f_7789},
{C_text("f_7792:chicken_2dsyntax_2escm"),(void*)f_7792},
{C_text("f_7795:chicken_2dsyntax_2escm"),(void*)f_7795},
{C_text("f_7802:chicken_2dsyntax_2escm"),(void*)f_7802},
{C_text("f_7828:chicken_2dsyntax_2escm"),(void*)f_7828},
{C_text("f_7853:chicken_2dsyntax_2escm"),(void*)f_7853},
{C_text("f_7862:chicken_2dsyntax_2escm"),(void*)f_7862},
{C_text("f_7896:chicken_2dsyntax_2escm"),(void*)f_7896},
{C_text("f_7921:chicken_2dsyntax_2escm"),(void*)f_7921},
{C_text("f_7930:chicken_2dsyntax_2escm"),(void*)f_7930},
{C_text("f_7978:chicken_2dsyntax_2escm"),(void*)f_7978},
{C_text("f_7980:chicken_2dsyntax_2escm"),(void*)f_7980},
{C_text("f_7984:chicken_2dsyntax_2escm"),(void*)f_7984},
{C_text("f_7994:chicken_2dsyntax_2escm"),(void*)f_7994},
{C_text("f_8021:chicken_2dsyntax_2escm"),(void*)f_8021},
{C_text("f_8024:chicken_2dsyntax_2escm"),(void*)f_8024},
{C_text("f_8039:chicken_2dsyntax_2escm"),(void*)f_8039},
{C_text("f_8047:chicken_2dsyntax_2escm"),(void*)f_8047},
{C_text("f_8056:chicken_2dsyntax_2escm"),(void*)f_8056},
{C_text("f_8071:chicken_2dsyntax_2escm"),(void*)f_8071},
{C_text("f_8081:chicken_2dsyntax_2escm"),(void*)f_8081},
{C_text("f_8084:chicken_2dsyntax_2escm"),(void*)f_8084},
{C_text("f_8100:chicken_2dsyntax_2escm"),(void*)f_8100},
{C_text("f_8120:chicken_2dsyntax_2escm"),(void*)f_8120},
{C_text("f_8122:chicken_2dsyntax_2escm"),(void*)f_8122},
{C_text("f_8124:chicken_2dsyntax_2escm"),(void*)f_8124},
{C_text("f_8128:chicken_2dsyntax_2escm"),(void*)f_8128},
{C_text("f_8137:chicken_2dsyntax_2escm"),(void*)f_8137},
{C_text("f_8140:chicken_2dsyntax_2escm"),(void*)f_8140},
{C_text("f_8149:chicken_2dsyntax_2escm"),(void*)f_8149},
{C_text("f_8165:chicken_2dsyntax_2escm"),(void*)f_8165},
{C_text("f_8169:chicken_2dsyntax_2escm"),(void*)f_8169},
{C_text("f_8212:chicken_2dsyntax_2escm"),(void*)f_8212},
{C_text("f_8224:chicken_2dsyntax_2escm"),(void*)f_8224},
{C_text("f_8226:chicken_2dsyntax_2escm"),(void*)f_8226},
{C_text("f_8230:chicken_2dsyntax_2escm"),(void*)f_8230},
{C_text("f_8233:chicken_2dsyntax_2escm"),(void*)f_8233},
{C_text("f_8252:chicken_2dsyntax_2escm"),(void*)f_8252},
{C_text("f_8268:chicken_2dsyntax_2escm"),(void*)f_8268},
{C_text("f_8270:chicken_2dsyntax_2escm"),(void*)f_8270},
{C_text("f_8274:chicken_2dsyntax_2escm"),(void*)f_8274},
{C_text("f_8277:chicken_2dsyntax_2escm"),(void*)f_8277},
{C_text("f_8290:chicken_2dsyntax_2escm"),(void*)f_8290},
{C_text("f_8292:chicken_2dsyntax_2escm"),(void*)f_8292},
{C_text("f_8296:chicken_2dsyntax_2escm"),(void*)f_8296},
{C_text("f_8310:chicken_2dsyntax_2escm"),(void*)f_8310},
{C_text("f_8316:chicken_2dsyntax_2escm"),(void*)f_8316},
{C_text("f_8338:chicken_2dsyntax_2escm"),(void*)f_8338},
{C_text("f_8344:chicken_2dsyntax_2escm"),(void*)f_8344},
{C_text("f_8348:chicken_2dsyntax_2escm"),(void*)f_8348},
{C_text("f_8358:chicken_2dsyntax_2escm"),(void*)f_8358},
{C_text("f_8360:chicken_2dsyntax_2escm"),(void*)f_8360},
{C_text("f_8389:chicken_2dsyntax_2escm"),(void*)f_8389},
{C_text("f_8408:chicken_2dsyntax_2escm"),(void*)f_8408},
{C_text("f_8442:chicken_2dsyntax_2escm"),(void*)f_8442},
{C_text("f_8466:chicken_2dsyntax_2escm"),(void*)f_8466},
{C_text("f_8468:chicken_2dsyntax_2escm"),(void*)f_8468},
{C_text("f_8472:chicken_2dsyntax_2escm"),(void*)f_8472},
{C_text("f_8478:chicken_2dsyntax_2escm"),(void*)f_8478},
{C_text("f_8512:chicken_2dsyntax_2escm"),(void*)f_8512},
{C_text("f_8548:chicken_2dsyntax_2escm"),(void*)f_8548},
{C_text("f_8550:chicken_2dsyntax_2escm"),(void*)f_8550},
{C_text("f_8554:chicken_2dsyntax_2escm"),(void*)f_8554},
{C_text("f_8562:chicken_2dsyntax_2escm"),(void*)f_8562},
{C_text("f_8567:chicken_2dsyntax_2escm"),(void*)f_8567},
{C_text("f_8592:chicken_2dsyntax_2escm"),(void*)f_8592},
{C_text("f_8602:chicken_2dsyntax_2escm"),(void*)f_8602},
{C_text("f_8604:chicken_2dsyntax_2escm"),(void*)f_8604},
{C_text("f_8608:chicken_2dsyntax_2escm"),(void*)f_8608},
{C_text("f_8614:chicken_2dsyntax_2escm"),(void*)f_8614},
{C_text("f_8635:chicken_2dsyntax_2escm"),(void*)f_8635},
{C_text("f_8642:chicken_2dsyntax_2escm"),(void*)f_8642},
{C_text("f_8665:chicken_2dsyntax_2escm"),(void*)f_8665},
{C_text("f_8669:chicken_2dsyntax_2escm"),(void*)f_8669},
{C_text("f_8690:chicken_2dsyntax_2escm"),(void*)f_8690},
{C_text("f_8693:chicken_2dsyntax_2escm"),(void*)f_8693},
{C_text("f_8697:chicken_2dsyntax_2escm"),(void*)f_8697},
{C_text("f_8705:chicken_2dsyntax_2escm"),(void*)f_8705},
{C_text("f_8709:chicken_2dsyntax_2escm"),(void*)f_8709},
{C_text("f_8715:chicken_2dsyntax_2escm"),(void*)f_8715},
{C_text("f_8716:chicken_2dsyntax_2escm"),(void*)f_8716},
{C_text("f_8727:chicken_2dsyntax_2escm"),(void*)f_8727},
{C_text("f_8742:chicken_2dsyntax_2escm"),(void*)f_8742},
{C_text("f_8744:chicken_2dsyntax_2escm"),(void*)f_8744},
{C_text("f_8763:chicken_2dsyntax_2escm"),(void*)f_8763},
{C_text("f_8771:chicken_2dsyntax_2escm"),(void*)f_8771},
{C_text("f_8777:chicken_2dsyntax_2escm"),(void*)f_8777},
{C_text("f_8779:chicken_2dsyntax_2escm"),(void*)f_8779},
{C_text("f_8804:chicken_2dsyntax_2escm"),(void*)f_8804},
{C_text("f_8828:chicken_2dsyntax_2escm"),(void*)f_8828},
{C_text("f_8865:chicken_2dsyntax_2escm"),(void*)f_8865},
{C_text("f_8893:chicken_2dsyntax_2escm"),(void*)f_8893},
{C_text("f_8927:chicken_2dsyntax_2escm"),(void*)f_8927},
{C_text("f_8958:chicken_2dsyntax_2escm"),(void*)f_8958},
{C_text("f_8965:chicken_2dsyntax_2escm"),(void*)f_8965},
{C_text("f_8971:chicken_2dsyntax_2escm"),(void*)f_8971},
{C_text("f_8996:chicken_2dsyntax_2escm"),(void*)f_8996},
{C_text("f_9005:chicken_2dsyntax_2escm"),(void*)f_9005},
{C_text("f_9018:chicken_2dsyntax_2escm"),(void*)f_9018},
{C_text("f_9043:chicken_2dsyntax_2escm"),(void*)f_9043},
{C_text("f_9079:chicken_2dsyntax_2escm"),(void*)f_9079},
{C_text("f_9081:chicken_2dsyntax_2escm"),(void*)f_9081},
{C_text("f_9085:chicken_2dsyntax_2escm"),(void*)f_9085},
{C_text("f_9092:chicken_2dsyntax_2escm"),(void*)f_9092},
{C_text("f_9096:chicken_2dsyntax_2escm"),(void*)f_9096},
{C_text("f_9104:chicken_2dsyntax_2escm"),(void*)f_9104},
{C_text("f_9118:chicken_2dsyntax_2escm"),(void*)f_9118},
{C_text("f_9124:chicken_2dsyntax_2escm"),(void*)f_9124},
{C_text("f_9131:chicken_2dsyntax_2escm"),(void*)f_9131},
{C_text("f_9137:chicken_2dsyntax_2escm"),(void*)f_9137},
{C_text("f_9150:chicken_2dsyntax_2escm"),(void*)f_9150},
{C_text("f_9184:chicken_2dsyntax_2escm"),(void*)f_9184},
{C_text("f_9194:chicken_2dsyntax_2escm"),(void*)f_9194},
{C_text("f_9209:chicken_2dsyntax_2escm"),(void*)f_9209},
{C_text("f_9211:chicken_2dsyntax_2escm"),(void*)f_9211},
{C_text("f_9215:chicken_2dsyntax_2escm"),(void*)f_9215},
{C_text("f_9230:chicken_2dsyntax_2escm"),(void*)f_9230},
{C_text("f_9232:chicken_2dsyntax_2escm"),(void*)f_9232},
{C_text("f_9236:chicken_2dsyntax_2escm"),(void*)f_9236},
{C_text("f_9258:chicken_2dsyntax_2escm"),(void*)f_9258},
{C_text("f_9260:chicken_2dsyntax_2escm"),(void*)f_9260},
{C_text("f_9264:chicken_2dsyntax_2escm"),(void*)f_9264},
{C_text("f_9282:chicken_2dsyntax_2escm"),(void*)f_9282},
{C_text("f_9284:chicken_2dsyntax_2escm"),(void*)f_9284},
{C_text("f_9293:chicken_2dsyntax_2escm"),(void*)f_9293},
{C_text("f_9299:chicken_2dsyntax_2escm"),(void*)f_9299},
{C_text("f_9305:chicken_2dsyntax_2escm"),(void*)f_9305},
{C_text("f_9319:chicken_2dsyntax_2escm"),(void*)f_9319},
{C_text("f_9328:chicken_2dsyntax_2escm"),(void*)f_9328},
{C_text("f_9330:chicken_2dsyntax_2escm"),(void*)f_9330},
{C_text("f_9355:chicken_2dsyntax_2escm"),(void*)f_9355},
{C_text("f_9366:chicken_2dsyntax_2escm"),(void*)f_9366},
{C_text("f_9368:chicken_2dsyntax_2escm"),(void*)f_9368},
{C_text("f_9387:chicken_2dsyntax_2escm"),(void*)f_9387},
{C_text("f_9395:chicken_2dsyntax_2escm"),(void*)f_9395},
{C_text("f_9404:chicken_2dsyntax_2escm"),(void*)f_9404},
{C_text("f_9410:chicken_2dsyntax_2escm"),(void*)f_9410},
{C_text("f_9414:chicken_2dsyntax_2escm"),(void*)f_9414},
{C_text("f_9422:chicken_2dsyntax_2escm"),(void*)f_9422},
{C_text("f_9428:chicken_2dsyntax_2escm"),(void*)f_9428},
{C_text("f_9432:chicken_2dsyntax_2escm"),(void*)f_9432},
{C_text("f_9440:chicken_2dsyntax_2escm"),(void*)f_9440},
{C_text("f_9443:chicken_2dsyntax_2escm"),(void*)f_9443},
{C_text("f_9447:chicken_2dsyntax_2escm"),(void*)f_9447},
{C_text("f_9455:chicken_2dsyntax_2escm"),(void*)f_9455},
{C_text("f_9458:chicken_2dsyntax_2escm"),(void*)f_9458},
{C_text("f_9471:chicken_2dsyntax_2escm"),(void*)f_9471},
{C_text("f_9488:chicken_2dsyntax_2escm"),(void*)f_9488},
{C_text("f_9499:chicken_2dsyntax_2escm"),(void*)f_9499},
{C_text("f_9547:chicken_2dsyntax_2escm"),(void*)f_9547},
{C_text("f_9551:chicken_2dsyntax_2escm"),(void*)f_9551},
{C_text("f_9563:chicken_2dsyntax_2escm"),(void*)f_9563},
{C_text("f_9575:chicken_2dsyntax_2escm"),(void*)f_9575},
{C_text("f_9577:chicken_2dsyntax_2escm"),(void*)f_9577},
{C_text("f_9625:chicken_2dsyntax_2escm"),(void*)f_9625},
{C_text("f_9673:chicken_2dsyntax_2escm"),(void*)f_9673},
{C_text("f_9680:chicken_2dsyntax_2escm"),(void*)f_9680},
{C_text("f_9750:chicken_2dsyntax_2escm"),(void*)f_9750},
{C_text("f_9768:chicken_2dsyntax_2escm"),(void*)f_9768},
{C_text("f_9772:chicken_2dsyntax_2escm"),(void*)f_9772},
{C_text("f_9788:chicken_2dsyntax_2escm"),(void*)f_9788},
{C_text("f_9792:chicken_2dsyntax_2escm"),(void*)f_9792},
{C_text("f_9804:chicken_2dsyntax_2escm"),(void*)f_9804},
{C_text("f_9814:chicken_2dsyntax_2escm"),(void*)f_9814},
{C_text("f_9862:chicken_2dsyntax_2escm"),(void*)f_9862},
{C_text("f_9910:chicken_2dsyntax_2escm"),(void*)f_9910},
{C_text("f_9917:chicken_2dsyntax_2escm"),(void*)f_9917},
{C_text("f_9980:chicken_2dsyntax_2escm"),(void*)f_9980},
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
o|eliminated procedure checks: 741 
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
(o e)|safe calls: 1496 
o|safe globals: (posv posq make-list iota find-tail find length+ lset=/eq? lset<=/eq? list-tabulate lset-intersection/eq? lset-union/eq? lset-difference/eq? lset-adjoin/eq? list-index last unzip1 remove filter-map filter alist-cons delete-duplicates fifth fourth third second first delete concatenate cons* any every append-map split-at drop take span partition) 
o|removed side-effect free assignment to unused variable: partition 
o|removed side-effect free assignment to unused variable: span 
o|inlining procedure: k4356 
o|inlining procedure: k4356 
o|removed side-effect free assignment to unused variable: drop 
o|removed side-effect free assignment to unused variable: append-map 
o|inlining procedure: k4626 
o|inlining procedure: k4626 
o|inlining procedure: k4657 
o|inlining procedure: k4657 
o|removed side-effect free assignment to unused variable: cons* 
o|removed side-effect free assignment to unused variable: concatenate 
o|removed side-effect free assignment to unused variable: first 
o|removed side-effect free assignment to unused variable: second 
o|removed side-effect free assignment to unused variable: third 
o|removed side-effect free assignment to unused variable: fourth 
o|removed side-effect free assignment to unused variable: fifth 
o|removed side-effect free assignment to unused variable: delete-duplicates 
o|removed side-effect free assignment to unused variable: alist-cons 
o|inlining procedure: k4874 
o|inlining procedure: k4874 
o|inlining procedure: k4866 
o|inlining procedure: k4866 
o|removed side-effect free assignment to unused variable: filter-map 
o|removed side-effect free assignment to unused variable: remove 
o|removed side-effect free assignment to unused variable: unzip1 
o|removed side-effect free assignment to unused variable: last 
o|removed side-effect free assignment to unused variable: list-index 
o|removed side-effect free assignment to unused variable: lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: lset-difference/eq? 
o|removed side-effect free assignment to unused variable: lset-union/eq? 
o|removed side-effect free assignment to unused variable: lset-intersection/eq? 
o|inlining procedure: k5265 
o|inlining procedure: k5265 
o|removed side-effect free assignment to unused variable: lset<=/eq? 
o|removed side-effect free assignment to unused variable: lset=/eq? 
o|removed side-effect free assignment to unused variable: length+ 
o|removed side-effect free assignment to unused variable: find 
o|removed side-effect free assignment to unused variable: find-tail 
o|removed side-effect free assignment to unused variable: iota 
o|removed side-effect free assignment to unused variable: make-list 
o|removed side-effect free assignment to unused variable: posq 
o|removed side-effect free assignment to unused variable: posv 
o|inlining procedure: k5800 
o|inlining procedure: k5800 
o|inlining procedure: k5828 
o|inlining procedure: k5828 
o|inlining procedure: k5872 
o|inlining procedure: k5872 
o|inlining procedure: k5951 
o|inlining procedure: k5951 
o|inlining procedure: k6049 
o|inlining procedure: k6049 
o|inlining procedure: k6146 
o|inlining procedure: k6146 
o|inlining procedure: k6240 
o|inlining procedure: k6240 
o|inlining procedure: k6345 
o|inlining procedure: k6345 
o|inlining procedure: k6394 
o|inlining procedure: k6394 
o|inlining procedure: k6441 
o|inlining procedure: k6441 
o|inlining procedure: k6480 
o|inlining procedure: k6480 
o|inlining procedure: k6553 
o|inlining procedure: k6553 
o|inlining procedure: k6609 
o|inlining procedure: k6609 
o|inlining procedure: k6624 
o|inlining procedure: k6624 
o|inlining procedure: k6662 
o|inlining procedure: k6662 
o|inlining procedure: k6685 
o|inlining procedure: k6685 
o|inlining procedure: k6748 
o|inlining procedure: k6748 
o|inlining procedure: k6865 
o|inlining procedure: k6865 
o|contracted procedure: "(chicken-syntax.scm:1067) split-at" 
o|inlining procedure: k4414 
o|inlining procedure: k4414 
o|inlining procedure: k6994 
o|inlining procedure: k6994 
o|inlining procedure: k7019 
o|inlining procedure: k7019 
o|inlining procedure: k7067 
o|inlining procedure: k7095 
o|inlining procedure: k7095 
o|inlining procedure: k7067 
o|inlining procedure: k7127 
o|inlining procedure: k7127 
o|inlining procedure: k7167 
o|inlining procedure: k7167 
o|inlining procedure: k6943 
o|inlining procedure: k6943 
o|inlining procedure: k7235 
o|contracted procedure: "(chicken-syntax.scm:1037) g28532862" 
o|inlining procedure: k7235 
o|inlining procedure: k7335 
o|inlining procedure: k7335 
o|removed unused formal parameters: (rename2648) 
o|inlining procedure: k7634 
o|inlining procedure: k7634 
o|removed unused parameter to known procedure: rename2648 "(chicken-syntax.scm:939) make-if-tree2628" 
o|contracted procedure: "(chicken-syntax.scm:937) make-default-procs2627" 
o|inlining procedure: k7567 
o|inlining procedure: k7567 
o|inlining procedure: k7830 
o|inlining procedure: k7830 
o|inlining procedure: k7864 
o|inlining procedure: k7864 
o|inlining procedure: k7898 
o|inlining procedure: k7898 
o|inlining procedure: k7932 
o|inlining procedure: k7932 
o|inlining procedure: k7996 
o|inlining procedure: k7996 
o|inlining procedure: k8048 
o|inlining procedure: k8048 
o|inlining procedure: k8138 
o|inlining procedure: k8138 
o|inlining procedure: k8153 
o|inlining procedure: k8153 
o|inlining procedure: k8362 
o|inlining procedure: k8362 
o|inlining procedure: k8410 
o|contracted procedure: "(chicken-syntax.scm:716) g24702479" 
o|inlining procedure: k8410 
o|inlining procedure: k8444 
o|contracted procedure: "(chicken-syntax.scm:717) g24942495" 
o|inlining procedure: k8444 
o|substituted constant variable: g24862489 
o|inlining procedure: k8480 
o|inlining procedure: k8480 
o|inlining procedure: k8514 
o|inlining procedure: k8514 
o|inlining procedure: k8569 
o|inlining procedure: k8569 
o|inlining procedure: k8616 
o|inlining procedure: k8616 
o|inlining procedure: k8644 
o|inlining procedure: k8644 
o|inlining procedure: k8746 
o|inlining procedure: k8781 
o|inlining procedure: k8781 
o|inlining procedure: k8746 
o|inlining procedure: k8895 
o|contracted procedure: "(chicken-syntax.scm:674) g23622371" 
o|inlining procedure: k8895 
o|inlining procedure: k8929 
o|inlining procedure: k8929 
o|inlining procedure: k8973 
o|inlining procedure: k8973 
o|inlining procedure: k9007 
o|inlining procedure: k9007 
o|inlining procedure: k9030 
o|inlining procedure: k9030 
o|inlining procedure: k9045 
o|inlining procedure: k9045 
o|inlining procedure: k9152 
o|contracted procedure: "(chicken-syntax.scm:633) g21772195" 
o|inlining procedure: k9152 
o|inlining procedure: k9186 
o|contracted procedure: "(chicken-syntax.scm:629) g21622184" 
o|inlining procedure: k9186 
o|inlining procedure: k9307 
o|inlining procedure: k9307 
o|inlining procedure: k9332 
o|inlining procedure: k9332 
o|contracted procedure: "(chicken-syntax.scm:542) pname1603" 
o|inlining procedure: k9373 
o|inlining procedure: k9373 
o|removed unused formal parameters: (z1710) 
o|removed unused formal parameters: (z1738) 
o|inlining procedure: k9579 
o|contracted procedure: "(chicken-syntax.scm:579) g20422052" 
o|inlining procedure: k9579 
o|inlining procedure: k9627 
o|contracted procedure: "(chicken-syntax.scm:577) g20062016" 
o|inlining procedure: k9627 
o|inlining procedure: k9675 
o|contracted procedure: "(chicken-syntax.scm:574) g19641975" 
o|inlining procedure: k9675 
o|inlining procedure: k9725 
o|inlining procedure: k9725 
o|inlining procedure: k9816 
o|contracted procedure: "(chicken-syntax.scm:567) g19281938" 
o|inlining procedure: k9816 
o|inlining procedure: k9864 
o|contracted procedure: "(chicken-syntax.scm:564) g18921902" 
o|inlining procedure: k9864 
o|inlining procedure: k9912 
o|inlining procedure: k9912 
o|inlining procedure: k9962 
o|inlining procedure: k9962 
o|inlining procedure: k9982 
o|inlining procedure: k9982 
o|inlining procedure: k10030 
o|inlining procedure: k10030 
o|inlining procedure: k10078 
o|inlining procedure: k10078 
o|inlining procedure: k10126 
o|removed unused parameter to known procedure: z1738 "(chicken-syntax.scm:544) g17271736" 
o|inlining procedure: k10126 
o|inlining procedure: k10160 
o|removed unused parameter to known procedure: z1710 "(chicken-syntax.scm:543) g16991708" 
o|inlining procedure: k10160 
o|inlining procedure: k10194 
o|inlining procedure: k10194 
o|inlining procedure: k10228 
o|inlining procedure: k10228 
o|inlining procedure: k10262 
o|inlining procedure: k10262 
o|removed unused formal parameters: (x1325) 
o|removed unused formal parameters: (x1353) 
o|inlining procedure: k10417 
o|contracted procedure: "(chicken-syntax.scm:524) g15711581" 
o|inlining procedure: k10417 
o|inlining procedure: k10465 
o|contracted procedure: "(chicken-syntax.scm:522) g15351545" 
o|inlining procedure: k10465 
o|inlining procedure: k10564 
o|contracted procedure: "(chicken-syntax.scm:517) g14991509" 
o|inlining procedure: k10564 
o|inlining procedure: k10612 
o|contracted procedure: "(chicken-syntax.scm:515) g14631473" 
o|inlining procedure: k10612 
o|inlining procedure: k10695 
o|inlining procedure: k10695 
o|inlining procedure: k10745 
o|inlining procedure: k10745 
o|inlining procedure: k10765 
o|inlining procedure: k10765 
o|inlining procedure: k10813 
o|inlining procedure: k10813 
o|inlining procedure: k10847 
o|removed unused parameter to known procedure: x1353 "(chicken-syntax.scm:505) g13421351" 
o|inlining procedure: k10847 
o|inlining procedure: k10881 
o|removed unused parameter to known procedure: x1325 "(chicken-syntax.scm:504) g13141323" 
o|inlining procedure: k10881 
o|inlining procedure: k10915 
o|inlining procedure: k10915 
o|inlining procedure: k11025 
o|inlining procedure: k11025 
o|inlining procedure: k11147 
o|inlining procedure: k11147 
o|inlining procedure: k11168 
o|inlining procedure: k11180 
o|inlining procedure: k11180 
o|inlining procedure: k11168 
o|inlining procedure: k11240 
o|inlining procedure: k11240 
o|inlining procedure: k11300 
o|inlining procedure: k11300 
o|inlining procedure: k11389 
o|inlining procedure: k11389 
o|substituted constant variable: a11424 
o|substituted constant variable: a11449 
o|inlining procedure: k11458 
o|inlining procedure: k11458 
o|inlining procedure: k11599 
o|inlining procedure: k11599 
o|inlining procedure: k11628 
o|inlining procedure: k11643 
o|inlining procedure: k11659 
o|inlining procedure: k11659 
o|inlining procedure: k11643 
o|inlining procedure: k11628 
o|inlining procedure: k11693 
o|inlining procedure: k11709 
o|inlining procedure: k11709 
o|inlining procedure: k11693 
o|inlining procedure: k11747 
o|inlining procedure: k11747 
o|inlining procedure: k11811 
o|inlining procedure: k11811 
o|inlining procedure: k11920 
o|inlining procedure: k11920 
o|inlining procedure: k12033 
o|inlining procedure: k12033 
o|inlining procedure: k12054 
o|inlining procedure: k12054 
o|inlining procedure: k12100 
o|inlining procedure: k12100 
o|inlining procedure: k12140 
o|inlining procedure: k12196 
o|contracted procedure: "(chicken-syntax.scm:201) g919929" 
o|inlining procedure: k12196 
o|inlining procedure: k12266 
o|inlining procedure: k12293 
o|contracted procedure: "(chicken-syntax.scm:192) g885894" 
o|propagated global variable: g902903 chicken.compiler.scrutinizer#check-and-validate-type 
o|inlining procedure: k12293 
o|inlining procedure: k12266 
o|inlining procedure: k12337 
o|inlining procedure: k12337 
o|inlining procedure: k12140 
o|inlining procedure: k12384 
o|inlining procedure: k12384 
o|inlining procedure: k12421 
o|inlining procedure: k12421 
o|inlining procedure: k12470 
o|inlining procedure: k12561 
o|contracted procedure: "(chicken-syntax.scm:154) g816825" 
o|inlining procedure: k12561 
o|inlining procedure: k12595 
o|contracted procedure: "(chicken-syntax.scm:154) g788797" 
o|inlining procedure: k12595 
o|inlining procedure: k12470 
o|inlining procedure: k12632 
o|inlining procedure: k12647 
o|inlining procedure: k12663 
o|inlining procedure: k12663 
o|inlining procedure: k12647 
o|inlining procedure: k12632 
o|inlining procedure: k12697 
o|inlining procedure: k12713 
o|inlining procedure: k12713 
o|inlining procedure: k12748 
o|inlining procedure: k12748 
o|inlining procedure: k12697 
o|inlining procedure: k12779 
o|inlining procedure: k12779 
o|inlining procedure: k12817 
o|inlining procedure: k12817 
o|inlining procedure: k12844 
o|inlining procedure: k12844 
o|inlining procedure: k12873 
o|inlining procedure: k12873 
o|inlining procedure: k12955 
o|inlining procedure: k12955 
o|inlining procedure: k12997 
o|inlining procedure: k12997 
o|inlining procedure: k13112 
o|inlining procedure: k13112 
o|inlining procedure: k13132 
o|inlining procedure: k13132 
o|replaced variables: 2117 
o|removed binding forms: 475 
o|substituted constant variable: r435713294 
o|removed side-effect free assignment to unused variable: every 
o|removed side-effect free assignment to unused variable: any 
o|removed side-effect free assignment to unused variable: filter 
o|removed side-effect free assignment to unused variable: list-tabulate 
o|substituted constant variable: r582913311 
o|substituted constant variable: r639513324 
o|substituted constant variable: r655413333 
o|substituted constant variable: r661013335 
o|substituted constant variable: r686613344 
o|substituted constant variable: r716813360 
o|substituted constant variable: r694413363 
o|converted assignments to bindings: (genvars2839) 
o|substituted constant variable: r756813370 
o|converted assignments to bindings: (make-if-tree2628) 
o|substituted constant variable: r815413395 
o|substituted constant variable: r864513410 
o|substituted constant variable: r930813432 
o|substituted constant variable: r972613445 
o|substituted constant variable: r996313453 
o|substituted constant variable: r1074613480 
o|substituted constant variable: r1118113498 
o|substituted constant variable: r1116913499 
o|substituted constant variable: r1164413518 
o|substituted constant variable: r1162913519 
o|substituted constant variable: r1169413523 
o|substituted constant variable: r1181213527 
o|substituted constant variable: r1192113528 
o|substituted constant variable: r1210113534 
o|substituted constant variable: r1233813545 
o|substituted constant variable: r1242213551 
o|substituted constant variable: r1264813562 
o|substituted constant variable: r1263313563 
o|substituted constant variable: r1274913568 
o|substituted constant variable: r1269813569 
o|substituted constant variable: r1281813572 
o|substituted constant variable: r1287413578 
o|substituted constant variable: r1287413578 
o|substituted constant variable: r1311313584 
o|substituted constant variable: r1311313584 
o|converted assignments to bindings: (parse-clause597) 
o|simplifications: ((let . 3)) 
o|replaced variables: 77 
o|removed binding forms: 1853 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:574) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:544) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:543) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:505) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:504) ##sys#slot" 
o|removed binding forms: 112 
o|contracted procedure: k9712 
o|contracted procedure: k10151 
o|contracted procedure: k10185 
o|contracted procedure: k10872 
o|contracted procedure: k10906 
o|removed binding forms: 5 
o|removed binding forms: 5 
o|simplifications: ((let . 32) (if . 30) (##core#call . 1240)) 
o|  call simplifications:
o|    chicken.fixnum#fx=
o|    scheme#vector
o|    ##sys#pair?	7
o|    ##sys#eq?	7
o|    ##sys#car	15
o|    ##sys#cdr	22
o|    scheme#cdddr	3
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
o|    scheme#cddddr	4
o|    ##sys#check-list	37
o|    ##sys#setslot	50
o|    ##sys#slot	196
o|    scheme#cddr	9
o|    scheme#caddr	14
o|    scheme#not	15
o|    scheme#memq	7
o|    scheme#list	9
o|    scheme#cadr	48
o|    scheme#null?	29
o|    scheme#string?
o|    scheme#pair?	96
o|    scheme#cdr	20
o|    ##sys#cons	142
o|    ##sys#list	293
o|    chicken.fixnum#fx<=	2
o|    scheme#car	51
o|    chicken.fixnum#fx-	4
o|    scheme#cons	128
o|contracted procedure: k4359 
o|contracted procedure: k4366 
o|contracted procedure: k4376 
o|contracted procedure: k5717 
o|contracted procedure: k5749 
o|contracted procedure: k5745 
o|contracted procedure: k5725 
o|contracted procedure: k5741 
o|contracted procedure: k5733 
o|contracted procedure: k5737 
o|contracted procedure: k5729 
o|contracted procedure: k5721 
o|contracted procedure: k5762 
o|contracted procedure: k5835 
o|contracted procedure: k5767 
o|contracted procedure: k5819 
o|contracted procedure: k5780 
o|contracted procedure: k5788 
o|contracted procedure: k5792 
o|contracted procedure: k5784 
o|contracted procedure: k5803 
o|contracted procedure: k5811 
o|contracted procedure: k5800 
o|contracted procedure: k5822 
o|contracted procedure: k5856 
o|contracted procedure: k5869 
o|contracted procedure: k5875 
o|contracted procedure: k5898 
o|contracted procedure: k5894 
o|contracted procedure: k5888 
o|contracted procedure: k5882 
o|contracted procedure: k5914 
o|contracted procedure: k5910 
o|contracted procedure: k6112 
o|contracted procedure: k5921 
o|contracted procedure: k5954 
o|contracted procedure: k5989 
o|contracted procedure: k5985 
o|contracted procedure: k5981 
o|contracted procedure: k5973 
o|contracted procedure: k5999 
o|contracted procedure: k6018 
o|contracted procedure: k6014 
o|contracted procedure: k6010 
o|contracted procedure: k6038 
o|contracted procedure: k6042 
o|contracted procedure: k6058 
o|contracted procedure: k6086 
o|contracted procedure: k6078 
o|contracted procedure: k6082 
o|contracted procedure: k6098 
o|contracted procedure: k6108 
o|contracted procedure: k6101 
o|contracted procedure: k6288 
o|contracted procedure: k6116 
o|contracted procedure: k6149 
o|contracted procedure: k6180 
o|contracted procedure: k6176 
o|contracted procedure: k6172 
o|contracted procedure: k6190 
o|contracted procedure: k6211 
o|contracted procedure: k6205 
o|contracted procedure: k6201 
o|contracted procedure: k6229 
o|contracted procedure: k6233 
o|contracted procedure: k6249 
o|contracted procedure: k6266 
o|contracted procedure: k6274 
o|contracted procedure: k6284 
o|contracted procedure: k6277 
o|contracted procedure: k6301 
o|contracted procedure: k6310 
o|contracted procedure: k6313 
o|contracted procedure: k6316 
o|contracted procedure: k6325 
o|contracted procedure: k6334 
o|contracted procedure: k6337 
o|contracted procedure: k6348 
o|contracted procedure: k6354 
o|contracted procedure: k6656 
o|contracted procedure: k6368 
o|contracted procedure: k6600 
o|contracted procedure: k6604 
o|contracted procedure: k6612 
o|contracted procedure: k6615 
o|contracted procedure: k6596 
o|contracted procedure: k6592 
o|contracted procedure: k6376 
o|contracted procedure: k6580 
o|contracted procedure: k6588 
o|contracted procedure: k6584 
o|contracted procedure: k6384 
o|contracted procedure: k6380 
o|contracted procedure: k6372 
o|contracted procedure: k6364 
o|contracted procedure: k6397 
o|contracted procedure: k6400 
o|contracted procedure: k6576 
o|contracted procedure: k6403 
o|contracted procedure: k6406 
o|contracted procedure: k6523 
o|contracted procedure: k6539 
o|contracted procedure: k6547 
o|contracted procedure: k6543 
o|contracted procedure: k6535 
o|contracted procedure: k6527 
o|contracted procedure: k6531 
o|contracted procedure: k6412 
o|contracted procedure: k6447 
o|contracted procedure: k6458 
o|contracted procedure: k6454 
o|contracted procedure: k6466 
o|contracted procedure: k6473 
o|contracted procedure: k6480 
o|contracted procedure: k6499 
o|contracted procedure: k6515 
o|contracted procedure: k6519 
o|contracted procedure: k6511 
o|contracted procedure: k6503 
o|contracted procedure: k6507 
o|contracted procedure: k6550 
o|contracted procedure: k6556 
o|contracted procedure: k6627 
o|contracted procedure: k6630 
o|contracted procedure: k6633 
o|contracted procedure: k6641 
o|contracted procedure: k6649 
o|contracted procedure: k6665 
o|contracted procedure: k6675 
o|contracted procedure: k6679 
o|contracted procedure: k6688 
o|contracted procedure: k6710 
o|contracted procedure: k6706 
o|contracted procedure: k6691 
o|contracted procedure: k6694 
o|contracted procedure: k6702 
o|contracted procedure: k6740 
o|contracted procedure: k6751 
o|contracted procedure: k6767 
o|contracted procedure: k6779 
o|contracted procedure: k6775 
o|contracted procedure: k6771 
o|contracted procedure: k6797 
o|contracted procedure: k6801 
o|contracted procedure: k6821 
o|contracted procedure: k6817 
o|contracted procedure: k6839 
o|contracted procedure: k7267 
o|contracted procedure: k7271 
o|contracted procedure: k7275 
o|contracted procedure: k7279 
o|contracted procedure: k7283 
o|contracted procedure: k6843 
o|contracted procedure: k6868 
o|contracted procedure: k6883 
o|contracted procedure: k7204 
o|contracted procedure: k7200 
o|contracted procedure: k6929 
o|contracted procedure: k6934 
o|contracted procedure: k6925 
o|contracted procedure: k6946 
o|contracted procedure: k6955 
o|contracted procedure: k6968 
o|contracted procedure: k4417 
o|contracted procedure: k4431 
o|contracted procedure: k4441 
o|contracted procedure: k4435 
o|contracted procedure: k6997 
o|contracted procedure: k7004 
o|contracted procedure: k7007 
o|contracted procedure: k7010 
o|contracted procedure: k7058 
o|contracted procedure: k7022 
o|contracted procedure: k7048 
o|contracted procedure: k7052 
o|contracted procedure: k7044 
o|contracted procedure: k7025 
o|contracted procedure: k7028 
o|contracted procedure: k7036 
o|contracted procedure: k7040 
o|contracted procedure: k7070 
o|contracted procedure: k7092 
o|contracted procedure: k7084 
o|contracted procedure: k7088 
o|contracted procedure: k7080 
o|contracted procedure: k7113 
o|contracted procedure: k7098 
o|contracted procedure: k7107 
o|contracted procedure: k7156 
o|contracted procedure: k7160 
o|contracted procedure: k7144 
o|contracted procedure: k7152 
o|contracted procedure: k7148 
o|contracted procedure: k7123 
o|contracted procedure: k7130 
o|contracted procedure: k7170 
o|contracted procedure: k7181 
o|contracted procedure: k7188 
o|contracted procedure: k7196 
o|contracted procedure: k7208 
o|contracted procedure: k7223 
o|contracted procedure: k7226 
o|contracted procedure: k7238 
o|contracted procedure: k7241 
o|contracted procedure: k7244 
o|contracted procedure: k7252 
o|contracted procedure: k7260 
o|contracted procedure: k7217 
o|contracted procedure: k7435 
o|contracted procedure: k7439 
o|contracted procedure: k7443 
o|contracted procedure: k7287 
o|contracted procedure: k7300 
o|contracted procedure: k7303 
o|contracted procedure: k7431 
o|contracted procedure: k7325 
o|contracted procedure: k7338 
o|contracted procedure: k7345 
o|contracted procedure: k7348 
o|contracted procedure: k7354 
o|contracted procedure: k7404 
o|contracted procedure: k7408 
o|contracted procedure: k7412 
o|contracted procedure: k7400 
o|contracted procedure: k7374 
o|contracted procedure: k7386 
o|contracted procedure: k7390 
o|contracted procedure: k7394 
o|contracted procedure: k7382 
o|contracted procedure: k7378 
o|contracted procedure: k7364 
o|contracted procedure: k7427 
o|contracted procedure: k7423 
o|contracted procedure: k7419 
o|contracted procedure: k7512 
o|contracted procedure: k7516 
o|contracted procedure: k7520 
o|contracted procedure: k7447 
o|contracted procedure: k7508 
o|contracted procedure: k7504 
o|contracted procedure: k7467 
o|contracted procedure: k7475 
o|contracted procedure: k7479 
o|contracted procedure: k7493 
o|contracted procedure: k7482 
o|contracted procedure: k7486 
o|contracted procedure: k7471 
o|contracted procedure: k7964 
o|contracted procedure: k7968 
o|contracted procedure: k7972 
o|contracted procedure: k7524 
o|contracted procedure: k7537 
o|contracted procedure: k7540 
o|contracted procedure: k7637 
o|contracted procedure: k7647 
o|contracted procedure: k7654 
o|contracted procedure: k7706 
o|contracted procedure: k7658 
o|contracted procedure: k7698 
o|contracted procedure: k7682 
o|contracted procedure: k7690 
o|contracted procedure: k7686 
o|contracted procedure: k7666 
o|contracted procedure: k7662 
o|contracted procedure: k7678 
o|contracted procedure: k7723 
o|contracted procedure: k7726 
o|contracted procedure: k7745 
o|contracted procedure: k7757 
o|contracted procedure: k7763 
o|contracted procedure: k7775 
o|contracted procedure: k7808 
o|contracted procedure: k7824 
o|contracted procedure: k7820 
o|contracted procedure: k7816 
o|contracted procedure: k7812 
o|contracted procedure: k7804 
o|contracted procedure: k7570 
o|contracted procedure: k7573 
o|contracted procedure: k7594 
o|contracted procedure: k7606 
o|contracted procedure: k7598 
o|contracted procedure: k7580 
o|contracted procedure: k7622 
o|contracted procedure: k7618 
o|contracted procedure: k7833 
o|contracted procedure: k7836 
o|contracted procedure: k7839 
o|contracted procedure: k7847 
o|contracted procedure: k7855 
o|contracted procedure: k7867 
o|contracted procedure: k7889 
o|contracted procedure: k7885 
o|contracted procedure: k7870 
o|contracted procedure: k7873 
o|contracted procedure: k7881 
o|contracted procedure: k7901 
o|contracted procedure: k7904 
o|contracted procedure: k7907 
o|contracted procedure: k7915 
o|contracted procedure: k7923 
o|contracted procedure: k7935 
o|contracted procedure: k7957 
o|contracted procedure: k7953 
o|contracted procedure: k7938 
o|contracted procedure: k7941 
o|contracted procedure: k7949 
o|contracted procedure: k7985 
o|contracted procedure: k7999 
o|contracted procedure: k8006 
o|contracted procedure: k8009 
o|contracted procedure: k8114 
o|contracted procedure: k8016 
o|contracted procedure: k8041 
o|contracted procedure: k8029 
o|contracted procedure: k8033 
o|contracted procedure: k8110 
o|contracted procedure: k8051 
o|contracted procedure: k8073 
o|contracted procedure: k8061 
o|contracted procedure: k8065 
o|contracted procedure: k8106 
o|contracted procedure: k8102 
o|contracted procedure: k8090 
o|contracted procedure: k8094 
o|contracted procedure: k8129 
o|contracted procedure: k8201 
o|contracted procedure: k8132 
o|contracted procedure: k8181 
o|contracted procedure: k8144 
o|contracted procedure: k8177 
o|contracted procedure: k8173 
o|contracted procedure: k8156 
o|contracted procedure: k8184 
o|contracted procedure: k8191 
o|contracted procedure: k8214 
o|contracted procedure: k8262 
o|contracted procedure: k8218 
o|contracted procedure: k8258 
o|contracted procedure: k8238 
o|contracted procedure: k8254 
o|contracted procedure: k8246 
o|contracted procedure: k8242 
o|contracted procedure: k8284 
o|contracted procedure: k8297 
o|contracted procedure: k8302 
o|contracted procedure: k8305 
o|contracted procedure: k8311 
o|contracted procedure: k8325 
o|contracted procedure: k8333 
o|contracted procedure: k8339 
o|contracted procedure: k8321 
o|contracted procedure: k8350 
o|contracted procedure: k8353 
o|contracted procedure: k8401 
o|contracted procedure: k8365 
o|contracted procedure: k8368 
o|contracted procedure: k8371 
o|contracted procedure: k8379 
o|contracted procedure: k8383 
o|contracted procedure: k8391 
o|contracted procedure: k8395 
o|contracted procedure: k8413 
o|contracted procedure: k8435 
o|contracted procedure: k8431 
o|contracted procedure: k8416 
o|contracted procedure: k8419 
o|contracted procedure: k8427 
o|contracted procedure: k8447 
o|contracted procedure: k8454 
o|contracted procedure: k8474 
o|contracted procedure: k8483 
o|contracted procedure: k8505 
o|contracted procedure: k8501 
o|contracted procedure: k8486 
o|contracted procedure: k8489 
o|contracted procedure: k8497 
o|contracted procedure: k8517 
o|contracted procedure: k8539 
o|contracted procedure: k8535 
o|contracted procedure: k8520 
o|contracted procedure: k8523 
o|contracted procedure: k8531 
o|contracted procedure: k8555 
o|contracted procedure: k8572 
o|contracted procedure: k8579 
o|contracted procedure: k8596 
o|contracted procedure: k8586 
o|contracted procedure: k8609 
o|contracted procedure: k8639 
o|contracted procedure: k8619 
o|contracted procedure: k8629 
o|contracted procedure: k8647 
o|contracted procedure: k8677 
o|contracted procedure: k8653 
o|contracted procedure: k8673 
o|contracted procedure: k8682 
o|contracted procedure: k8685 
o|contracted procedure: k8694 
o|contracted procedure: k8710 
o|contracted procedure: k8722 
o|contracted procedure: k8732 
o|contracted procedure: k8749 
o|contracted procedure: k8760 
o|contracted procedure: k8772 
o|contracted procedure: k8756 
o|contracted procedure: k8784 
o|contracted procedure: k8787 
o|contracted procedure: k8790 
o|contracted procedure: k8798 
o|contracted procedure: k8806 
o|contracted procedure: k8842 
o|contracted procedure: k8846 
o|contracted procedure: k8838 
o|contracted procedure: k8822 
o|contracted procedure: k8830 
o|contracted procedure: k8875 
o|contracted procedure: k8853 
o|contracted procedure: k8857 
o|contracted procedure: k8867 
o|contracted procedure: k8889 
o|contracted procedure: k8878 
o|contracted procedure: k8885 
o|contracted procedure: k8898 
o|contracted procedure: k8920 
o|contracted procedure: k8916 
o|contracted procedure: k8901 
o|contracted procedure: k8904 
o|contracted procedure: k8912 
o|contracted procedure: k8932 
o|contracted procedure: k8938 
o|contracted procedure: k8967 
o|contracted procedure: k8949 
o|inlining procedure: k8941 
o|inlining procedure: k8941 
o|contracted procedure: k8976 
o|contracted procedure: k8979 
o|contracted procedure: k8982 
o|contracted procedure: k8990 
o|contracted procedure: k8998 
o|contracted procedure: k9010 
o|contracted procedure: k9013 
o|contracted procedure: k9024 
o|contracted procedure: k9033 
o|inlining procedure: k9016 
o|contracted procedure: k9048 
o|contracted procedure: k9070 
o|contracted procedure: k9066 
o|contracted procedure: k9051 
o|contracted procedure: k9054 
o|contracted procedure: k9062 
o|contracted procedure: k9098 
o|contracted procedure: k9106 
o|contracted procedure: k9110 
o|contracted procedure: k9114 
o|contracted procedure: k9132 
o|contracted procedure: k9138 
o|contracted procedure: k9155 
o|contracted procedure: k9177 
o|contracted procedure: k9173 
o|contracted procedure: k9158 
o|contracted procedure: k9161 
o|contracted procedure: k9169 
o|contracted procedure: k9189 
o|contracted procedure: k9199 
o|contracted procedure: k9203 
o|contracted procedure: k9220 
o|contracted procedure: k9224 
o|contracted procedure: k9241 
o|contracted procedure: k9245 
o|contracted procedure: k9249 
o|contracted procedure: k9269 
o|contracted procedure: k9273 
o|contracted procedure: k9290 
o|contracted procedure: k9310 
o|contracted procedure: k9320 
o|contracted procedure: k9323 
o|contracted procedure: k9335 
o|contracted procedure: k9338 
o|contracted procedure: k9341 
o|contracted procedure: k9349 
o|contracted procedure: k9357 
o|contracted procedure: k9388 
o|contracted procedure: k9396 
o|contracted procedure: k9399 
o|contracted procedure: k9405 
o|contracted procedure: k9411 
o|contracted procedure: k9376 
o|contracted procedure: k9423 
o|contracted procedure: k9429 
o|contracted procedure: k9444 
o|contracted procedure: k9463 
o|contracted procedure: k9466 
o|contracted procedure: k9477 
o|contracted procedure: k9480 
o|contracted procedure: k9483 
o|contracted procedure: k9494 
o|contracted procedure: k9976 
o|contracted procedure: k9972 
o|contracted procedure: k9505 
o|contracted procedure: k9747 
o|contracted procedure: k9760 
o|contracted procedure: k9756 
o|contracted procedure: k9763 
o|contracted procedure: k9743 
o|contracted procedure: k9739 
o|contracted procedure: k9513 
o|contracted procedure: k9735 
o|contracted procedure: k9517 
o|contracted procedure: k9533 
o|contracted procedure: k9529 
o|contracted procedure: k9525 
o|contracted procedure: k9521 
o|contracted procedure: k9509 
o|contracted procedure: k9501 
o|contracted procedure: k9490 
o|contracted procedure: k9473 
o|contracted procedure: k9553 
o|contracted procedure: k9565 
o|contracted procedure: k9618 
o|contracted procedure: k9582 
o|contracted procedure: k9608 
o|contracted procedure: k9612 
o|contracted procedure: k9604 
o|contracted procedure: k9585 
o|contracted procedure: k9588 
o|contracted procedure: k9596 
o|contracted procedure: k9600 
o|contracted procedure: k9666 
o|contracted procedure: k9630 
o|contracted procedure: k9656 
o|contracted procedure: k9660 
o|contracted procedure: k9652 
o|contracted procedure: k9633 
o|contracted procedure: k9636 
o|contracted procedure: k9644 
o|contracted procedure: k9648 
o|contracted procedure: k9708 
o|contracted procedure: k9716 
o|contracted procedure: k9542 
o|contracted procedure: k9704 
o|contracted procedure: k9681 
o|contracted procedure: k9684 
o|contracted procedure: k9692 
o|contracted procedure: k9696 
o|contracted procedure: k9700 
o|contracted procedure: k9722 
o|contracted procedure: k9728 
o|contracted procedure: k9774 
o|contracted procedure: k9794 
o|contracted procedure: k9810 
o|contracted procedure: k9806 
o|contracted procedure: k9855 
o|contracted procedure: k9819 
o|contracted procedure: k9845 
o|contracted procedure: k9849 
o|contracted procedure: k9841 
o|contracted procedure: k9822 
o|contracted procedure: k9825 
o|contracted procedure: k9833 
o|contracted procedure: k9837 
o|contracted procedure: k9903 
o|contracted procedure: k9867 
o|contracted procedure: k9893 
o|contracted procedure: k9897 
o|contracted procedure: k9783 
o|contracted procedure: k9889 
o|contracted procedure: k9870 
o|contracted procedure: k9873 
o|contracted procedure: k9881 
o|contracted procedure: k9885 
o|contracted procedure: k9918 
o|contracted procedure: k9921 
o|contracted procedure: k9929 
o|contracted procedure: k9933 
o|contracted procedure: k9937 
o|contracted procedure: k9945 
o|contracted procedure: k9949 
o|contracted procedure: k9953 
o|contracted procedure: k9959 
o|contracted procedure: k9965 
o|contracted procedure: k10021 
o|contracted procedure: k9985 
o|contracted procedure: k10011 
o|contracted procedure: k10015 
o|contracted procedure: k10007 
o|contracted procedure: k9988 
o|contracted procedure: k9991 
o|contracted procedure: k9999 
o|contracted procedure: k10003 
o|contracted procedure: k10069 
o|contracted procedure: k10033 
o|contracted procedure: k10059 
o|contracted procedure: k10063 
o|contracted procedure: k10055 
o|contracted procedure: k10036 
o|contracted procedure: k10039 
o|contracted procedure: k10047 
o|contracted procedure: k10051 
o|contracted procedure: k10117 
o|contracted procedure: k10081 
o|contracted procedure: k10107 
o|contracted procedure: k10111 
o|contracted procedure: k10103 
o|contracted procedure: k10084 
o|contracted procedure: k10087 
o|contracted procedure: k10095 
o|contracted procedure: k10099 
o|contracted procedure: k10129 
o|contracted procedure: k10132 
o|contracted procedure: k10135 
o|contracted procedure: k10143 
o|contracted procedure: k10163 
o|contracted procedure: k10166 
o|contracted procedure: k10169 
o|contracted procedure: k10177 
o|contracted procedure: k10197 
o|contracted procedure: k10200 
o|contracted procedure: k10203 
o|contracted procedure: k10211 
o|contracted procedure: k10219 
o|contracted procedure: k10231 
o|contracted procedure: k10253 
o|contracted procedure: k10249 
o|contracted procedure: k10234 
o|contracted procedure: k10237 
o|contracted procedure: k10245 
o|contracted procedure: k10265 
o|contracted procedure: k10287 
o|contracted procedure: k10283 
o|contracted procedure: k10268 
o|contracted procedure: k10271 
o|contracted procedure: k10279 
o|contracted procedure: k10303 
o|contracted procedure: k10308 
o|contracted procedure: k10311 
o|contracted procedure: k10317 
o|contracted procedure: k10332 
o|contracted procedure: k10515 
o|contracted procedure: k10359 
o|contracted procedure: k10511 
o|contracted procedure: k10363 
o|contracted procedure: k10371 
o|contracted procedure: k10367 
o|contracted procedure: k10355 
o|contracted procedure: k10379 
o|contracted procedure: k10395 
o|contracted procedure: k10411 
o|contracted procedure: k10407 
o|contracted procedure: k10456 
o|contracted procedure: k10420 
o|contracted procedure: k10446 
o|contracted procedure: k10450 
o|contracted procedure: k10442 
o|contracted procedure: k10423 
o|contracted procedure: k10426 
o|contracted procedure: k10434 
o|contracted procedure: k10438 
o|contracted procedure: k10504 
o|contracted procedure: k10468 
o|contracted procedure: k10494 
o|contracted procedure: k10498 
o|contracted procedure: k10490 
o|contracted procedure: k10471 
o|contracted procedure: k10474 
o|contracted procedure: k10482 
o|contracted procedure: k10486 
o|contracted procedure: k10523 
o|contracted procedure: k10531 
o|contracted procedure: k10542 
o|contracted procedure: k10558 
o|contracted procedure: k10554 
o|contracted procedure: k10603 
o|contracted procedure: k10567 
o|contracted procedure: k10593 
o|contracted procedure: k10597 
o|contracted procedure: k10589 
o|contracted procedure: k10570 
o|contracted procedure: k10573 
o|contracted procedure: k10581 
o|contracted procedure: k10585 
o|contracted procedure: k10651 
o|contracted procedure: k10615 
o|contracted procedure: k10641 
o|contracted procedure: k10645 
o|contracted procedure: k10637 
o|contracted procedure: k10618 
o|contracted procedure: k10621 
o|contracted procedure: k10629 
o|contracted procedure: k10633 
o|contracted procedure: k10658 
o|contracted procedure: k10661 
o|contracted procedure: k10667 
o|contracted procedure: k10670 
o|contracted procedure: k10677 
o|contracted procedure: k10683 
o|contracted procedure: k10686 
o|contracted procedure: k10734 
o|contracted procedure: k10698 
o|contracted procedure: k10724 
o|contracted procedure: k10728 
o|contracted procedure: k10720 
o|contracted procedure: k10701 
o|contracted procedure: k10704 
o|contracted procedure: k10712 
o|contracted procedure: k10716 
o|contracted procedure: k10748 
o|contracted procedure: k10759 
o|contracted procedure: k10804 
o|contracted procedure: k10768 
o|contracted procedure: k10794 
o|contracted procedure: k10798 
o|contracted procedure: k10790 
o|contracted procedure: k10771 
o|contracted procedure: k10774 
o|contracted procedure: k10782 
o|contracted procedure: k10786 
o|contracted procedure: k10816 
o|contracted procedure: k10838 
o|contracted procedure: k10834 
o|contracted procedure: k10819 
o|contracted procedure: k10822 
o|contracted procedure: k10830 
o|contracted procedure: k10850 
o|contracted procedure: k10853 
o|contracted procedure: k10856 
o|contracted procedure: k10864 
o|contracted procedure: k10884 
o|contracted procedure: k10887 
o|contracted procedure: k10890 
o|contracted procedure: k10898 
o|contracted procedure: k10918 
o|contracted procedure: k10940 
o|contracted procedure: k10936 
o|contracted procedure: k10921 
o|contracted procedure: k10924 
o|contracted procedure: k10932 
o|contracted procedure: k10960 
o|contracted procedure: k10977 
o|contracted procedure: k10998 
o|contracted procedure: k10994 
o|contracted procedure: k11012 
o|contracted procedure: k11105 
o|contracted procedure: k11028 
o|contracted procedure: k11039 
o|contracted procedure: k11035 
o|contracted procedure: k11047 
o|contracted procedure: k11050 
o|contracted procedure: k11096 
o|contracted procedure: k11059 
o|contracted procedure: k11078 
o|contracted procedure: k11074 
o|contracted procedure: k11070 
o|contracted procedure: k11066 
o|contracted procedure: k11085 
o|contracted procedure: k11093 
o|contracted procedure: k11089 
o|contracted procedure: k11118 
o|contracted procedure: k11130 
o|contracted procedure: k11142 
o|contracted procedure: k11150 
o|contracted procedure: k11165 
o|contracted procedure: k11177 
o|contracted procedure: k11193 
o|contracted procedure: k11183 
o|inlining procedure: k11156 
o|inlining procedure: k11156 
o|inlining procedure: k11156 
o|contracted procedure: k11200 
o|contracted procedure: k11452 
o|contracted procedure: k11214 
o|contracted procedure: k11442 
o|contracted procedure: k11438 
o|contracted procedure: k11434 
o|contracted procedure: k11430 
o|contracted procedure: k11222 
o|contracted procedure: k11408 
o|contracted procedure: k11416 
o|contracted procedure: k11412 
o|contracted procedure: k11404 
o|contracted procedure: k11230 
o|contracted procedure: k11226 
o|contracted procedure: k11218 
o|contracted procedure: k11210 
o|contracted procedure: k11243 
o|contracted procedure: k11246 
o|contracted procedure: k11396 
o|contracted procedure: k11249 
o|contracted procedure: k11361 
o|contracted procedure: k11377 
o|contracted procedure: k11373 
o|contracted procedure: k11365 
o|contracted procedure: k11369 
o|contracted procedure: k11261 
o|contracted procedure: k11268 
o|contracted procedure: k11276 
o|contracted procedure: k11280 
o|contracted procedure: k11296 
o|contracted procedure: k11292 
o|contracted procedure: k11311 
o|contracted procedure: k11327 
o|contracted procedure: k11323 
o|contracted procedure: k11315 
o|contracted procedure: k11319 
o|contracted procedure: k11307 
o|contracted procedure: k11334 
o|contracted procedure: k11350 
o|contracted procedure: k11346 
o|contracted procedure: k11338 
o|contracted procedure: k11342 
o|contracted procedure: k11357 
o|contracted procedure: k11389 
o|contracted procedure: k11461 
o|contracted procedure: k11464 
o|contracted procedure: k11467 
o|contracted procedure: k11475 
o|contracted procedure: k11483 
o|contracted procedure: k11515 
o|contracted procedure: k11504 
o|contracted procedure: k11586 
o|contracted procedure: k11519 
o|contracted procedure: k11582 
o|contracted procedure: k11530 
o|contracted procedure: k11578 
o|contracted procedure: k11534 
o|contracted procedure: k11574 
o|contracted procedure: k11538 
o|contracted procedure: k11570 
o|contracted procedure: k11542 
o|contracted procedure: k11566 
o|contracted procedure: k11562 
o|contracted procedure: k11546 
o|contracted procedure: k11558 
o|contracted procedure: k11554 
o|contracted procedure: k11550 
o|contracted procedure: k11596 
o|contracted procedure: k11605 
o|contracted procedure: k11608 
o|contracted procedure: k11619 
o|contracted procedure: k11625 
o|contracted procedure: k11653 
o|contracted procedure: k11672 
o|contracted procedure: k11680 
o|contracted procedure: k11684 
o|contracted procedure: k11703 
o|contracted procedure: k11722 
o|contracted procedure: k11730 
o|contracted procedure: k11734 
o|contracted procedure: k11744 
o|contracted procedure: k11753 
o|contracted procedure: k11768 
o|contracted procedure: k11764 
o|contracted procedure: k11777 
o|contracted procedure: k11799 
o|contracted procedure: k11780 
o|contracted procedure: k11795 
o|contracted procedure: k11791 
o|contracted procedure: k11805 
o|contracted procedure: k11808 
o|contracted procedure: k11814 
o|contracted procedure: k11821 
o|contracted procedure: k11824 
o|contracted procedure: k11831 
o|contracted procedure: k11860 
o|contracted procedure: k11852 
o|contracted procedure: k11880 
o|contracted procedure: k11890 
o|contracted procedure: k11886 
o|contracted procedure: k11907 
o|contracted procedure: k11967 
o|contracted procedure: k11923 
o|contracted procedure: k11943 
o|contracted procedure: k11947 
o|contracted procedure: k11951 
o|contracted procedure: k11939 
o|contracted procedure: k11959 
o|contracted procedure: k11963 
o|contracted procedure: k11980 
o|contracted procedure: k12090 
o|contracted procedure: k12086 
o|contracted procedure: k11993 
o|contracted procedure: k12009 
o|contracted procedure: k12025 
o|contracted procedure: k12030 
o|contracted procedure: k12040 
o|contracted procedure: k12045 
o|contracted procedure: k12005 
o|contracted procedure: k12001 
o|contracted procedure: k11997 
o|contracted procedure: k12057 
o|contracted procedure: k12060 
o|contracted procedure: k12063 
o|contracted procedure: k12071 
o|contracted procedure: k12079 
o|contracted procedure: k12457 
o|contracted procedure: k12103 
o|contracted procedure: k12109 
o|contracted procedure: k12112 
o|contracted procedure: k12131 
o|contracted procedure: k12143 
o|contracted procedure: k12152 
o|contracted procedure: k12242 
o|contracted procedure: k12246 
o|contracted procedure: k12162 
o|contracted procedure: k12170 
o|contracted procedure: k12178 
o|contracted procedure: k12174 
o|contracted procedure: k12166 
o|contracted procedure: k12235 
o|contracted procedure: k12199 
o|contracted procedure: k12225 
o|contracted procedure: k12229 
o|contracted procedure: k12187 
o|contracted procedure: k12221 
o|contracted procedure: k12202 
o|contracted procedure: k12205 
o|contracted procedure: k12213 
o|contracted procedure: k12217 
o|contracted procedure: k12262 
o|contracted procedure: k12258 
o|contracted procedure: k12269 
o|contracted procedure: k12276 
o|contracted procedure: k12284 
o|contracted procedure: k12296 
o|contracted procedure: k12299 
o|contracted procedure: k12302 
o|contracted procedure: k12310 
o|contracted procedure: k12318 
o|contracted procedure: k12340 
o|contracted procedure: k12347 
o|contracted procedure: k12355 
o|contracted procedure: k12359 
o|contracted procedure: k12362 
o|contracted procedure: k12368 
o|contracted procedure: k12377 
o|contracted procedure: k12381 
o|contracted procedure: k12412 
o|contracted procedure: k12396 
o|contracted procedure: k12400 
o|contracted procedure: k12408 
o|contracted procedure: k12418 
o|contracted procedure: k12424 
o|contracted procedure: k12431 
o|contracted procedure: k12453 
o|contracted procedure: k12442 
o|contracted procedure: k12467 
o|contracted procedure: k12476 
o|contracted procedure: k12484 
o|contracted procedure: k12487 
o|contracted procedure: k12493 
o|contracted procedure: k12505 
o|contracted procedure: k12508 
o|contracted procedure: k12514 
o|contracted procedure: k12525 
o|contracted procedure: k12555 
o|contracted procedure: k12551 
o|contracted procedure: k12543 
o|contracted procedure: k12539 
o|contracted procedure: k12564 
o|contracted procedure: k12586 
o|contracted procedure: k12502 
o|contracted procedure: k12582 
o|contracted procedure: k12567 
o|contracted procedure: k12570 
o|contracted procedure: k12578 
o|contracted procedure: k12598 
o|contracted procedure: k12620 
o|contracted procedure: k12616 
o|contracted procedure: k12601 
o|contracted procedure: k12604 
o|contracted procedure: k12612 
o|contracted procedure: k12629 
o|contracted procedure: k12657 
o|contracted procedure: k12676 
o|contracted procedure: k12684 
o|contracted procedure: k12688 
o|contracted procedure: k12707 
o|contracted procedure: k12725 
o|contracted procedure: k12735 
o|contracted procedure: k12742 
o|contracted procedure: k12745 
o|contracted procedure: k12751 
o|contracted procedure: k12758 
o|contracted procedure: k12762 
o|contracted procedure: k12766 
o|contracted procedure: k12804 
o|contracted procedure: k12782 
o|contracted procedure: k12796 
o|contracted procedure: k12800 
o|contracted procedure: k12911 
o|contracted procedure: k12820 
o|contracted procedure: k12847 
o|contracted procedure: k12903 
o|contracted procedure: k12899 
o|contracted procedure: k12895 
o|contracted procedure: k12861 
o|contracted procedure: k12857 
o|contracted procedure: k12884 
o|contracted procedure: k12880 
o|contracted procedure: k12873 
o|contracted procedure: k12891 
o|contracted procedure: k12907 
o|contracted procedure: k13184 
o|contracted procedure: k12915 
o|contracted procedure: k13065 
o|contracted procedure: k13060 
o|contracted procedure: k12946 
o|contracted procedure: k12949 
o|contracted procedure: k12958 
o|contracted procedure: k12976 
o|contracted procedure: k12985 
o|contracted procedure: k12988 
o|contracted procedure: k12972 
o|contracted procedure: k12968 
o|contracted procedure: k13000 
o|contracted procedure: k13003 
o|contracted procedure: k13006 
o|contracted procedure: k13014 
o|contracted procedure: k13022 
o|contracted procedure: k13044 
o|contracted procedure: k13036 
o|contracted procedure: k13040 
o|contracted procedure: k13032 
o|contracted procedure: k13051 
o|contracted procedure: k13180 
o|contracted procedure: k13172 
o|contracted procedure: k13176 
o|contracted procedure: k13168 
o|contracted procedure: k13164 
o|contracted procedure: k13084 
o|contracted procedure: k13088 
o|contracted procedure: k13091 
o|contracted procedure: k13094 
o|contracted procedure: k13100 
o|contracted procedure: k13076 
o|contracted procedure: k13080 
o|contracted procedure: k13115 
o|contracted procedure: k13126 
o|contracted procedure: k13122 
o|contracted procedure: k13112 
o|contracted procedure: k13135 
o|contracted procedure: k13138 
o|contracted procedure: k13141 
o|contracted procedure: k13149 
o|contracted procedure: k13157 
o|contracted procedure: k13291 
o|contracted procedure: k13188 
o|contracted procedure: k13223 
o|contracted procedure: k13287 
o|contracted procedure: k13271 
o|contracted procedure: k13283 
o|contracted procedure: k13279 
o|contracted procedure: k13275 
o|contracted procedure: k13231 
o|contracted procedure: k13263 
o|contracted procedure: k13243 
o|contracted procedure: k13259 
o|contracted procedure: k13255 
o|contracted procedure: k13251 
o|contracted procedure: k13247 
o|contracted procedure: k13239 
o|contracted procedure: k13235 
o|contracted procedure: k13227 
o|contracted procedure: k13219 
o|contracted procedure: k13211 
o|simplifications: ((if . 5) (let . 236)) 
o|removed binding forms: 1059 
o|inlining procedure: k6810 
o|contracted procedure: k8815 
o|substituted constant variable: r1115714669 
o|substituted constant variable: r1115714670 
o|inlining procedure: k11300 
o|inlining procedure: k11300 
o|contracted procedure: k11750 
o|inlining procedure: k12021 
o|inlining procedure: k12021 
o|inlining procedure: k12266 
o|inlining procedure: k12266 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|removed conditional forms: 2 
o|substituted constant variable: r1202214840 
o|replaced variables: 2 
o|removed binding forms: 4 
o|removed binding forms: 3 
o|direct leaf routine/allocation: g30683077 0 
o|direct leaf routine/allocation: g18501861 30 
o|direct leaf routine/allocation: g623632 15 
o|contracted procedure: "(chicken-syntax.scm:1163) k6645" 
o|contracted procedure: "(chicken-syntax.scm:560) k9941" 
o|contracted procedure: "(chicken-syntax.scm:95) k13018" 
o|removed binding forms: 3 
o|customizable procedures: (parse-clause597 map-loop648665 k12952 map-loop617638 k12869 k12728 loop734755 loop734771 map-loop782800 map-loop810828 k12387 loop855 loop2869 map-loop879904 map-loop913937 g974983 map-loop968990 k11774 loop10881109 loop10881120 g11681177 map-loop11621188 k11288 mapslots1198 k11156 map-loop12811298 g13141323 map-loop13081326 g13421351 map-loop13361354 map-loop13871404 map-loop13661411 loop1442 map-loop14231445 map-loop14571481 map-loop14931517 map-loop15291553 map-loop15651589 map-loop16111628 map-loop16381655 g16711680 map-loop16651683 g16991708 map-loop16931711 g17271736 map-loop17211739 map-loop17511770 map-loop17821801 map-loop18131832 k9915 map-loop18441871 map-loop18861910 map-loop19221946 k9678 map-loop19581985 map-loop20002024 map-loop20362060 g20862095 map-loop20802125 for-each-loop21612188 map-loop21712201 map-loop22322249 loop2257 g22762285 map-loop22702288 loop2298 map-loop23562374 fold2308 g23272336 map-loop23212339 fold2390 map-loop24092426 map-loop24352452 foldl24872491 map-loop24642503 map-loop25122531 k8135 k8147 fold2590 map-loop26642681 g27002709 map-loop26942712 map-loop27222739 g27572766 map-loop27512769 recur2634 make-if-tree2628 prefix-sym2688 recur2649 loop2817 map-loop28472868 genvars2839 foldr28902893 g28952896 k6971 build2915 map-loop29382957 loop122 loop2841 map-loop30153032 g30423052 for-each-loop30413055 map-loop30623080 k6409 k6415 k6422 k6430 loop3087 loop3132 loop3162 k5773 k5796 take) 
o|calls to known targets: 246 
o|identified direct recursive calls: f_4354 1 
o|identified direct recursive calls: f_6622 1 
o|identified direct recursive calls: f_6683 1 
o|identified direct recursive calls: f_4412 1 
o|identified direct recursive calls: f_7017 1 
o|identified direct recursive calls: f_6941 1 
o|identified direct recursive calls: f_7862 1 
o|identified direct recursive calls: f_7930 1 
o|identified direct recursive calls: f_8408 1 
o|identified direct recursive calls: f_8478 1 
o|identified direct recursive calls: f_8512 1 
o|identified direct recursive calls: f_8567 1 
o|identified direct recursive calls: f_8744 2 
o|identified direct recursive calls: f_8893 1 
o|identified direct recursive calls: f_9005 1 
o|identified direct recursive calls: f_9043 1 
o|identified direct recursive calls: f_9150 1 
o|identified direct recursive calls: f_9577 1 
o|identified direct recursive calls: f_9625 1 
o|identified direct recursive calls: f_9814 1 
o|identified direct recursive calls: f_9862 1 
o|identified direct recursive calls: f_9980 1 
o|identified direct recursive calls: f_10028 1 
o|identified direct recursive calls: f_10076 1 
o|identified direct recursive calls: f_10226 1 
o|identified direct recursive calls: f_10260 1 
o|identified direct recursive calls: f_10415 1 
o|identified direct recursive calls: f_10463 1 
o|identified direct recursive calls: f_10562 1 
o|identified direct recursive calls: f_10610 1 
o|identified direct recursive calls: f_10693 1 
o|identified direct recursive calls: f_10743 1 
o|identified direct recursive calls: f_10763 1 
o|identified direct recursive calls: f_10811 1 
o|identified direct recursive calls: f_10913 1 
o|identified direct recursive calls: f_12194 1 
o|identified direct recursive calls: f_12335 1 
o|identified direct recursive calls: f_12138 1 
o|identified direct recursive calls: f_12559 1 
o|identified direct recursive calls: f_12593 1 
o|identified direct recursive calls: f_12995 1 
o|fast box initializations: 78 
o|fast global references: 2 
o|fast global assignments: 1 
o|dropping unused closure argument: f_4354 
o|dropping unused closure argument: f_7732 
*/
/* end of file */
