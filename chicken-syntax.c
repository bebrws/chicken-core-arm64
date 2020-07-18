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
#include <time.h>

void (*cbforset)(int, int, uint8_t, uint8_t, uint8_t, uint8_t);

void setpixelcb(void (*newcb)(int, int, uint8_t, uint8_t, uint8_t, uint8_t)) {
	// printf("\n setpixelcb\n");
	cbforset = newcb;
}

static C_word setpixel(int x, int y, int r, int g, int b, int a) {
	// To get the values correct :
	// (C_fix(C_uword)C_unfix(x))
	// I believe to set a return value you would want to:
	// (C_uword)C_fix(retValue)
	// printf("\n\n in set pixel (%d %d) %d %d %d %d\n\n", (C_uword)C_unfix(x), (C_uword)C_unfix(y), (C_uword)C_unfix(r), (C_uword)C_unfix(g), (C_uword)C_unfix(b), (C_uword)C_unfix(a));
	cbforset(C_unfix(x), C_unfix(y), (uint8_t)C_unfix(r), (uint8_t)C_unfix(g), (uint8_t)C_unfix(b), (uint8_t)C_unfix(a));
	return C_fix(0);
}

static C_word ssdelay(int sleepTime) {
	printf("ssdelay got %d\n",C_unfix(sleepTime));
	usleep(C_unfix(sleepTime));
	C_fix(0);
}


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[285];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,12),40,116,97,107,101,32,108,115,116,32,110,41,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,16),40,97,53,55,50,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,16),40,97,53,55,55,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,13),40,97,53,56,54,49,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,97,53,56,55,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,120,115,32,118,97,114,115,32,98,115,32,118,97,108,115,32,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,16),40,97,53,57,52,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,120,115,32,118,97,114,115,32,118,97,108,115,32,114,101,115,116,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,97,54,49,51,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,13),40,103,51,48,52,57,32,118,110,97,109,101,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,7),40,103,51,48,55,53,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,108,111,116,115,32,105,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,54,57,32,103,51,48,56,49,41,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,48,52,56,32,103,51,48,53,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,50,50,32,103,51,48,51,52,41,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,16),40,97,54,51,49,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,16),40,97,54,55,53,48,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,11),40,103,101,110,118,97,114,115,32,110,41,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,110,32,112,114,101,118,32,110,111,100,101,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,7),40,97,54,57,57,52,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,57,52,53,32,103,50,57,53,55,32,103,50,57,53,56,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,19),40,98,117,105,108,100,32,118,97,114,115,50,32,118,114,101,115,116,41,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,19),40,97,55,48,48,52,32,118,97,114,115,49,32,118,97,114,115,50,41,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,22),40,97,54,57,55,52,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,14),40,103,50,57,48,50,32,99,32,98,111,100,121,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,17),40,102,111,108,100,114,50,56,57,55,32,103,50,56,57,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,22),40,97,55,50,51,54,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,53,52,32,103,50,56,54,54,41,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,16),40,97,54,56,54,54,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,97,114,103,115,32,118,97,114,100,101,102,115,41,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,16),40,97,55,51,49,48,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,16),40,97,55,52,55,48,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,36),40,114,101,99,117,114,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,115,32,110,111,110,45,100,101,102,97,117,108,116,115,41,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,45),40,109,97,107,101,45,105,102,45,116,114,101,101,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,115,32,98,111,100,121,45,112,114,111,99,32,114,101,115,116,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,23),40,112,114,101,102,105,120,45,115,121,109,32,112,114,101,102,105,120,32,115,121,109,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,9),40,103,50,55,48,55,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,11),40,103,50,55,54,52,32,118,97,114,41,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,42),40,114,101,99,117,114,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,45,110,97,109,101,115,32,100,101,102,115,32,110,101,120,116,45,103,117,121,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,53,56,32,103,50,55,55,48,41,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,50,57,32,103,50,55,52,49,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,48,49,32,103,50,55,49,51,41,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,55,49,32,103,50,54,56,51,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,16),40,97,55,53,52,55,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,14),40,102,111,108,100,32,98,115,32,108,97,115,116,41,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,16),40,97,55,57,57,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,24),40,113,117,111,116,105,102,121,45,112,114,111,99,50,53,55,49,32,120,115,32,105,100,41};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,16),40,97,56,49,51,55,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,16),40,97,56,50,52,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,13),40,97,56,50,56,53,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,53,49,57,32,103,50,53,51,49,32,103,50,53,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,55,49,32,103,50,52,56,51,41,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,13),40,97,56,52,56,51,32,97,32,95,32,95,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,23),40,102,111,108,100,108,50,52,57,52,32,103,50,52,57,53,32,103,50,52,57,51,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,52,50,32,103,50,52,53,52,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,49,54,32,103,50,52,50,56,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,16),40,97,56,51,48,55,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,16),40,102,111,108,100,32,118,98,105,110,100,105,110,103,115,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,16),40,97,56,53,54,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,18),40,97,112,112,101,110,100,42,50,50,50,50,32,105,108,32,108,41,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,17),40,109,97,112,42,50,50,50,51,32,112,114,111,99,32,108,41,0,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,9),40,103,50,50,56,51,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,10),40,108,111,111,107,117,112,32,118,41,0,0,0,0,0,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,9),40,103,50,51,51,52,32,118,41,0,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,50,56,32,103,50,51,52,48,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,26),40,102,111,108,100,32,108,108,105,115,116,115,32,101,120,112,115,32,108,108,105,115,116,115,50,41,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,54,51,32,103,50,51,55,53,41,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,108,108,105,115,116,115,32,97,99,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,50,55,55,32,103,50,50,56,57,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,108,108,105,115,116,115,32,97,99,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,50,51,57,32,103,50,50,53,49,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,16),40,97,56,54,49,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,49,55,56,32,103,50,49,57,48,41,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,54,56,32,103,50,49,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,22),40,97,57,49,51,51,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,16),40,97,57,48,57,54,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,16),40,97,57,50,50,54,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,16),40,97,57,50,52,55,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,16),40,97,57,50,55,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,7),40,97,57,51,49,52,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,48),40,97,57,51,50,48,32,110,97,109,101,50,49,48,53,32,108,105,98,50,49,48,55,32,95,50,49,48,57,32,95,50,49,48,57,32,95,50,49,48,57,32,95,50,49,48,57,41};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,9),40,103,50,48,57,51,32,120,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,48,56,55,32,103,50,48,57,57,41,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,13),40,97,57,50,57,57,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,9),40,103,49,54,55,56,32,122,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,7),40,103,49,55,48,54,41,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,7),40,103,49,55,51,52,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,14),40,103,49,56,53,55,32,115,32,116,101,109,112,41,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,48,52,51,32,103,50,48,53,53,32,103,50,48,53,54,41,0,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,48,48,55,32,103,50,48,49,57,32,103,50,48,50,48,41,0,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,49,57,54,53,32,103,49,57,55,55,32,103,49,57,55,56,32,103,49,57,55,57,41};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,57,50,57,32,103,49,57,52,49,32,103,49,57,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,56,57,51,32,103,49,57,48,53,32,103,49,57,48,54,41,0,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,49,56,53,49,32,103,49,56,54,51,32,103,49,56,54,52,32,103,49,56,54,53,41};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,56,50,48,32,103,49,56,51,50,32,103,49,56,51,51,41,0,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,55,56,57,32,103,49,56,48,49,32,103,49,56,48,50,41,0,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,55,53,56,32,103,49,55,55,48,32,103,49,55,55,49,41,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,50,56,32,103,49,55,52,48,41,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,48,48,32,103,49,55,49,50,41,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,55,50,32,103,49,54,56,52,41,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,52,53,32,103,49,54,53,55,41,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,49,56,32,103,49,54,51,48,41,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,16),40,97,57,51,56,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,7),40,103,49,51,50,49,41,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,7),40,103,49,51,52,57,41,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,55,50,32,103,49,53,56,52,32,103,49,53,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,51,54,32,103,49,53,52,56,32,103,49,53,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,48,48,32,103,49,53,49,50,32,103,49,53,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,54,52,32,103,49,52,55,54,32,103,49,52,55,55,41,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,51,48,32,103,49,52,52,50,32,103,49,52,52,51,41,0,0,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,110,41};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,51,55,51,32,103,49,51,56,53,32,103,49,51,56,54,41,0,0,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,57,52,32,103,49,52,48,54,41,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,52,51,32,103,49,51,53,53,41,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,49,53,32,103,49,51,50,55,41,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,50,56,56,32,103,49,51,48,48,41,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,17),40,97,49,48,51,49,51,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,54,54,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,17),40,97,49,48,57,56,51,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,17),40,97,49,49,48,48,48,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,17),40,97,49,49,48,50,49,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,17),40,97,49,49,48,51,53,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,12),40,103,49,49,55,53,32,115,108,111,116,41,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,18),40,109,97,112,115,108,111,116,115,32,115,108,111,116,115,32,105,41,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,49,54,57,32,103,49,49,56,49,41,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,14),40,97,49,49,49,50,56,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,17),40,97,49,49,53,50,55,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,17),40,97,49,49,53,52,50,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,17),40,97,49,49,54,49,51,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,49,48,56,56,32,108,32,108,101,110,41};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,49,48,56,56,32,108,32,108,101,110,41};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,29),40,97,49,49,54,51,55,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,29),40,97,49,49,55,56,53,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,17),40,97,49,49,56,56,50,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,14),40,97,49,49,57,49,49,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,14),40,97,49,49,57,52,49,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,14),40,97,49,49,57,53,56,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,13),40,103,57,55,52,32,99,108,97,117,115,101,41,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,54,56,32,103,57,56,48,41,0,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,14),40,97,49,50,48,49,56,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,57,49,51,32,103,57,50,53,32,103,57,50,54,41,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,55,57,32,103,56,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,50,32,97,110,97,109,101,115,32,105,41};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,97,114,103,115,32,97,110,97,109,101,115,32,97,116,121,112,101,115,41,0,0,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,14),40,97,49,50,49,52,49,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,17),40,97,49,50,53,55,54,32,116,121,112,101,32,118,97,114,41,0,0,0,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,49,48,32,103,56,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,56,50,32,103,55,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,55,51,52,32,108,32,108,101,110,41,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,55,51,52,32,108,32,108,101,110,41,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,29),40,97,49,50,53,48,56,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,14),40,97,49,50,56,49,55,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,8),40,97,49,50,56,55,53,41};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,32),40,97,49,50,56,56,53,32,116,121,112,101,54,57,49,32,112,114,101,100,54,57,51,32,112,117,114,101,54,57,53,41};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,14),40,97,49,50,56,53,53,32,120,32,114,32,99,41,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,6),40,103,54,50,51,41,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,49,55,32,103,54,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,16),40,112,97,114,115,101,45,99,108,97,117,115,101,32,99,41};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,52,56,32,103,54,54,48,41,0,0,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,17),40,97,49,50,57,54,54,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,17),40,97,49,51,50,51,57,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_10044)
static void C_fcall f_10044(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10092)
static void C_fcall f_10092(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10140)
static void C_fcall f_10140(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10165)
static void C_ccall f_10165(C_word c,C_word *av) C_noret;
C_noret_decl(f_10174)
static void C_fcall f_10174(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10199)
static void C_ccall f_10199(C_word c,C_word *av) C_noret;
C_noret_decl(f_10208)
static void C_fcall f_10208(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10233)
static void C_ccall f_10233(C_word c,C_word *av) C_noret;
C_noret_decl(f_10242)
static void C_fcall f_10242(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10276)
static void C_fcall f_10276(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10312)
static void C_ccall f_10312(C_word c,C_word *av) C_noret;
C_noret_decl(f_10314)
static void C_ccall f_10314(C_word c,C_word *av) C_noret;
C_noret_decl(f_10318)
static void C_ccall f_10318(C_word c,C_word *av) C_noret;
C_noret_decl(f_10332)
static void C_ccall f_10332(C_word c,C_word *av) C_noret;
C_noret_decl(f_10336)
static void C_fcall f_10336(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10344)
static void C_ccall f_10344(C_word c,C_word *av) C_noret;
C_noret_decl(f_10347)
static void C_ccall f_10347(C_word c,C_word *av) C_noret;
C_noret_decl(f_10351)
static void C_fcall f_10351(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10359)
static void C_ccall f_10359(C_word c,C_word *av) C_noret;
C_noret_decl(f_10362)
static void C_ccall f_10362(C_word c,C_word *av) C_noret;
C_noret_decl(f_10369)
static void C_ccall f_10369(C_word c,C_word *av) C_noret;
C_noret_decl(f_10393)
static void C_ccall f_10393(C_word c,C_word *av) C_noret;
C_noret_decl(f_10405)
static void C_ccall f_10405(C_word c,C_word *av) C_noret;
C_noret_decl(f_10409)
static void C_ccall f_10409(C_word c,C_word *av) C_noret;
C_noret_decl(f_10421)
static void C_ccall f_10421(C_word c,C_word *av) C_noret;
C_noret_decl(f_10431)
static void C_fcall f_10431(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10479)
static void C_fcall f_10479(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10537)
static void C_ccall f_10537(C_word c,C_word *av) C_noret;
C_noret_decl(f_10552)
static void C_ccall f_10552(C_word c,C_word *av) C_noret;
C_noret_decl(f_10556)
static void C_ccall f_10556(C_word c,C_word *av) C_noret;
C_noret_decl(f_10568)
static void C_ccall f_10568(C_word c,C_word *av) C_noret;
C_noret_decl(f_10578)
static void C_fcall f_10578(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10626)
static void C_fcall f_10626(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10682)
static void C_ccall f_10682(C_word c,C_word *av) C_noret;
C_noret_decl(f_10691)
static void C_ccall f_10691(C_word c,C_word *av) C_noret;
C_noret_decl(f_10698)
static void C_ccall f_10698(C_word c,C_word *av) C_noret;
C_noret_decl(f_10707)
static void C_ccall f_10707(C_word c,C_word *av) C_noret;
C_noret_decl(f_10709)
static void C_fcall f_10709(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10759)
static void C_fcall f_10759(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10773)
static void C_ccall f_10773(C_word c,C_word *av) C_noret;
C_noret_decl(f_10779)
static void C_fcall f_10779(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10827)
static void C_fcall f_10827(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10861)
static void C_fcall f_10861(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10886)
static void C_ccall f_10886(C_word c,C_word *av) C_noret;
C_noret_decl(f_10895)
static void C_fcall f_10895(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10920)
static void C_ccall f_10920(C_word c,C_word *av) C_noret;
C_noret_decl(f_10929)
static void C_fcall f_10929(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10965)
static void C_ccall f_10965(C_word c,C_word *av) C_noret;
C_noret_decl(f_10967)
static void C_ccall f_10967(C_word c,C_word *av) C_noret;
C_noret_decl(f_10971)
static void C_ccall f_10971(C_word c,C_word *av) C_noret;
C_noret_decl(f_10982)
static void C_ccall f_10982(C_word c,C_word *av) C_noret;
C_noret_decl(f_10984)
static void C_ccall f_10984(C_word c,C_word *av) C_noret;
C_noret_decl(f_10988)
static void C_ccall f_10988(C_word c,C_word *av) C_noret;
C_noret_decl(f_10999)
static void C_ccall f_10999(C_word c,C_word *av) C_noret;
C_noret_decl(f_11001)
static void C_ccall f_11001(C_word c,C_word *av) C_noret;
C_noret_decl(f_11005)
static void C_ccall f_11005(C_word c,C_word *av) C_noret;
C_noret_decl(f_11020)
static void C_ccall f_11020(C_word c,C_word *av) C_noret;
C_noret_decl(f_11022)
static void C_ccall f_11022(C_word c,C_word *av) C_noret;
C_noret_decl(f_11034)
static void C_ccall f_11034(C_word c,C_word *av) C_noret;
C_noret_decl(f_11036)
static void C_ccall f_11036(C_word c,C_word *av) C_noret;
C_noret_decl(f_11040)
static void C_ccall f_11040(C_word c,C_word *av) C_noret;
C_noret_decl(f_11062)
static void C_ccall f_11062(C_word c,C_word *av) C_noret;
C_noret_decl(f_11127)
static void C_ccall f_11127(C_word c,C_word *av) C_noret;
C_noret_decl(f_11129)
static void C_ccall f_11129(C_word c,C_word *av) C_noret;
C_noret_decl(f_11133)
static void C_ccall f_11133(C_word c,C_word *av) C_noret;
C_noret_decl(f_11139)
static void C_ccall f_11139(C_word c,C_word *av) C_noret;
C_noret_decl(f_11142)
static void C_ccall f_11142(C_word c,C_word *av) C_noret;
C_noret_decl(f_11145)
static void C_ccall f_11145(C_word c,C_word *av) C_noret;
C_noret_decl(f_11151)
static void C_ccall f_11151(C_word c,C_word *av) C_noret;
C_noret_decl(f_11154)
static void C_ccall f_11154(C_word c,C_word *av) C_noret;
C_noret_decl(f_11157)
static void C_ccall f_11157(C_word c,C_word *av) C_noret;
C_noret_decl(f_11161)
static void C_fcall f_11161(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11174)
static void C_fcall f_11174(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11189)
static void C_ccall f_11189(C_word c,C_word *av) C_noret;
C_noret_decl(f_11221)
static void C_ccall f_11221(C_word c,C_word *av) C_noret;
C_noret_decl(f_11252)
static void C_ccall f_11252(C_word c,C_word *av) C_noret;
C_noret_decl(f_11254)
static void C_fcall f_11254(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11270)
static void C_ccall f_11270(C_word c,C_word *av) C_noret;
C_noret_decl(f_11273)
static void C_ccall f_11273(C_word c,C_word *av) C_noret;
C_noret_decl(f_11276)
static void C_ccall f_11276(C_word c,C_word *av) C_noret;
C_noret_decl(f_11290)
static void C_ccall f_11290(C_word c,C_word *av) C_noret;
C_noret_decl(f_11302)
static void C_ccall f_11302(C_word c,C_word *av) C_noret;
C_noret_decl(f_11306)
static void C_fcall f_11306(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11399)
static void C_ccall f_11399(C_word c,C_word *av) C_noret;
C_noret_decl(f_11403)
static void C_ccall f_11403(C_word c,C_word *av) C_noret;
C_noret_decl(f_11418)
static void C_ccall f_11418(C_word c,C_word *av) C_noret;
C_noret_decl(f_11438)
static void C_ccall f_11438(C_word c,C_word *av) C_noret;
C_noret_decl(f_11444)
static void C_ccall f_11444(C_word c,C_word *av) C_noret;
C_noret_decl(f_11464)
static void C_ccall f_11464(C_word c,C_word *av) C_noret;
C_noret_decl(f_11472)
static void C_fcall f_11472(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11497)
static void C_ccall f_11497(C_word c,C_word *av) C_noret;
C_noret_decl(f_11507)
static void C_ccall f_11507(C_word c,C_word *av) C_noret;
C_noret_decl(f_11514)
static void C_ccall f_11514(C_word c,C_word *av) C_noret;
C_noret_decl(f_11518)
static void C_ccall f_11518(C_word c,C_word *av) C_noret;
C_noret_decl(f_11526)
static void C_ccall f_11526(C_word c,C_word *av) C_noret;
C_noret_decl(f_11528)
static void C_ccall f_11528(C_word c,C_word *av) C_noret;
C_noret_decl(f_11541)
static void C_ccall f_11541(C_word c,C_word *av) C_noret;
C_noret_decl(f_11543)
static void C_ccall f_11543(C_word c,C_word *av) C_noret;
C_noret_decl(f_11612)
static void C_ccall f_11612(C_word c,C_word *av) C_noret;
C_noret_decl(f_11614)
static void C_ccall f_11614(C_word c,C_word *av) C_noret;
C_noret_decl(f_11636)
static void C_ccall f_11636(C_word c,C_word *av) C_noret;
C_noret_decl(f_11638)
static void C_ccall f_11638(C_word c,C_word *av) C_noret;
C_noret_decl(f_11648)
static void C_ccall f_11648(C_word c,C_word *av) C_noret;
C_noret_decl(f_11661)
static void C_ccall f_11661(C_word c,C_word *av) C_noret;
C_noret_decl(f_11677)
static void C_ccall f_11677(C_word c,C_word *av) C_noret;
C_noret_decl(f_11683)
static void C_ccall f_11683(C_word c,C_word *av) C_noret;
C_noret_decl(f_11686)
static void C_ccall f_11686(C_word c,C_word *av) C_noret;
C_noret_decl(f_11692)
static void C_ccall f_11692(C_word c,C_word *av) C_noret;
C_noret_decl(f_11701)
static void C_fcall f_11701(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11708)
static void C_ccall f_11708(C_word c,C_word *av) C_noret;
C_noret_decl(f_11722)
static void C_ccall f_11722(C_word c,C_word *av) C_noret;
C_noret_decl(f_11733)
static void C_ccall f_11733(C_word c,C_word *av) C_noret;
C_noret_decl(f_11736)
static void C_ccall f_11736(C_word c,C_word *av) C_noret;
C_noret_decl(f_11742)
static void C_ccall f_11742(C_word c,C_word *av) C_noret;
C_noret_decl(f_11751)
static void C_fcall f_11751(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11758)
static void C_ccall f_11758(C_word c,C_word *av) C_noret;
C_noret_decl(f_11772)
static void C_ccall f_11772(C_word c,C_word *av) C_noret;
C_noret_decl(f_11784)
static void C_ccall f_11784(C_word c,C_word *av) C_noret;
C_noret_decl(f_11786)
static void C_ccall f_11786(C_word c,C_word *av) C_noret;
C_noret_decl(f_11806)
static void C_ccall f_11806(C_word c,C_word *av) C_noret;
C_noret_decl(f_11820)
static void C_fcall f_11820(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11833)
static void C_ccall f_11833(C_word c,C_word *av) C_noret;
C_noret_decl(f_11881)
static void C_ccall f_11881(C_word c,C_word *av) C_noret;
C_noret_decl(f_11883)
static void C_ccall f_11883(C_word c,C_word *av) C_noret;
C_noret_decl(f_11887)
static void C_ccall f_11887(C_word c,C_word *av) C_noret;
C_noret_decl(f_11894)
static void C_ccall f_11894(C_word c,C_word *av) C_noret;
C_noret_decl(f_11902)
static void C_ccall f_11902(C_word c,C_word *av) C_noret;
C_noret_decl(f_11910)
static void C_ccall f_11910(C_word c,C_word *av) C_noret;
C_noret_decl(f_11912)
static void C_ccall f_11912(C_word c,C_word *av) C_noret;
C_noret_decl(f_11916)
static void C_ccall f_11916(C_word c,C_word *av) C_noret;
C_noret_decl(f_11919)
static void C_ccall f_11919(C_word c,C_word *av) C_noret;
C_noret_decl(f_11940)
static void C_ccall f_11940(C_word c,C_word *av) C_noret;
C_noret_decl(f_11942)
static void C_ccall f_11942(C_word c,C_word *av) C_noret;
C_noret_decl(f_11946)
static void C_ccall f_11946(C_word c,C_word *av) C_noret;
C_noret_decl(f_11957)
static void C_ccall f_11957(C_word c,C_word *av) C_noret;
C_noret_decl(f_11959)
static void C_ccall f_11959(C_word c,C_word *av) C_noret;
C_noret_decl(f_11963)
static void C_ccall f_11963(C_word c,C_word *av) C_noret;
C_noret_decl(f_11972)
static void C_ccall f_11972(C_word c,C_word *av) C_noret;
C_noret_decl(f_11975)
static void C_ccall f_11975(C_word c,C_word *av) C_noret;
C_noret_decl(f_11978)
static void C_ccall f_11978(C_word c,C_word *av) C_noret;
C_noret_decl(f_12001)
static void C_ccall f_12001(C_word c,C_word *av) C_noret;
C_noret_decl(f_12017)
static void C_ccall f_12017(C_word c,C_word *av) C_noret;
C_noret_decl(f_12019)
static void C_ccall f_12019(C_word c,C_word *av) C_noret;
C_noret_decl(f_12023)
static void C_ccall f_12023(C_word c,C_word *av) C_noret;
C_noret_decl(f_12029)
static void C_ccall f_12029(C_word c,C_word *av) C_noret;
C_noret_decl(f_12032)
static void C_ccall f_12032(C_word c,C_word *av) C_noret;
C_noret_decl(f_12056)
static void C_fcall f_12056(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12060)
static void C_ccall f_12060(C_word c,C_word *av) C_noret;
C_noret_decl(f_12067)
static void C_ccall f_12067(C_word c,C_word *av) C_noret;
C_noret_decl(f_12094)
static void C_ccall f_12094(C_word c,C_word *av) C_noret;
C_noret_decl(f_12096)
static void C_fcall f_12096(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12121)
static void C_ccall f_12121(C_word c,C_word *av) C_noret;
C_noret_decl(f_12140)
static void C_ccall f_12140(C_word c,C_word *av) C_noret;
C_noret_decl(f_12142)
static void C_ccall f_12142(C_word c,C_word *av) C_noret;
C_noret_decl(f_12152)
static void C_ccall f_12152(C_word c,C_word *av) C_noret;
C_noret_decl(f_12161)
static void C_ccall f_12161(C_word c,C_word *av) C_noret;
C_noret_decl(f_12165)
static void C_ccall f_12165(C_word c,C_word *av) C_noret;
C_noret_decl(f_12168)
static void C_ccall f_12168(C_word c,C_word *av) C_noret;
C_noret_decl(f_12171)
static void C_ccall f_12171(C_word c,C_word *av) C_noret;
C_noret_decl(f_12174)
static void C_ccall f_12174(C_word c,C_word *av) C_noret;
C_noret_decl(f_12182)
static void C_fcall f_12182(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12192)
static void C_ccall f_12192(C_word c,C_word *av) C_noret;
C_noret_decl(f_12195)
static void C_ccall f_12195(C_word c,C_word *av) C_noret;
C_noret_decl(f_12201)
static void C_ccall f_12201(C_word c,C_word *av) C_noret;
C_noret_decl(f_12236)
static void C_ccall f_12236(C_word c,C_word *av) C_noret;
C_noret_decl(f_12238)
static void C_fcall f_12238(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12296)
static void C_ccall f_12296(C_word c,C_word *av) C_noret;
C_noret_decl(f_12300)
static void C_ccall f_12300(C_word c,C_word *av) C_noret;
C_noret_decl(f_12333)
static void C_ccall f_12333(C_word c,C_word *av) C_noret;
C_noret_decl(f_12335)
static void C_fcall f_12335(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12360)
static void C_ccall f_12360(C_word c,C_word *av) C_noret;
C_noret_decl(f_12377)
static void C_ccall f_12377(C_word c,C_word *av) C_noret;
C_noret_decl(f_12379)
static void C_fcall f_12379(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12397)
static void C_ccall f_12397(C_word c,C_word *av) C_noret;
C_noret_decl(f_12433)
static void C_fcall f_12433(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12450)
static void C_ccall f_12450(C_word c,C_word *av) C_noret;
C_noret_decl(f_12507)
static void C_ccall f_12507(C_word c,C_word *av) C_noret;
C_noret_decl(f_12509)
static void C_ccall f_12509(C_word c,C_word *av) C_noret;
C_noret_decl(f_12519)
static void C_ccall f_12519(C_word c,C_word *av) C_noret;
C_noret_decl(f_12536)
static void C_ccall f_12536(C_word c,C_word *av) C_noret;
C_noret_decl(f_12557)
static void C_ccall f_12557(C_word c,C_word *av) C_noret;
C_noret_decl(f_12567)
static void C_ccall f_12567(C_word c,C_word *av) C_noret;
C_noret_decl(f_12575)
static void C_ccall f_12575(C_word c,C_word *av) C_noret;
C_noret_decl(f_12577)
static void C_ccall f_12577(C_word c,C_word *av) C_noret;
C_noret_decl(f_12593)
static void C_ccall f_12593(C_word c,C_word *av) C_noret;
C_noret_decl(f_12603)
static void C_fcall f_12603(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12637)
static void C_fcall f_12637(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12681)
static void C_ccall f_12681(C_word c,C_word *av) C_noret;
C_noret_decl(f_12687)
static void C_ccall f_12687(C_word c,C_word *av) C_noret;
C_noret_decl(f_12690)
static void C_ccall f_12690(C_word c,C_word *av) C_noret;
C_noret_decl(f_12696)
static void C_ccall f_12696(C_word c,C_word *av) C_noret;
C_noret_decl(f_12705)
static void C_fcall f_12705(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12712)
static void C_ccall f_12712(C_word c,C_word *av) C_noret;
C_noret_decl(f_12726)
static void C_ccall f_12726(C_word c,C_word *av) C_noret;
C_noret_decl(f_12737)
static void C_ccall f_12737(C_word c,C_word *av) C_noret;
C_noret_decl(f_12740)
static void C_ccall f_12740(C_word c,C_word *av) C_noret;
C_noret_decl(f_12746)
static void C_ccall f_12746(C_word c,C_word *av) C_noret;
C_noret_decl(f_12755)
static void C_fcall f_12755(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12762)
static void C_ccall f_12762(C_word c,C_word *av) C_noret;
C_noret_decl(f_12774)
static void C_fcall f_12774(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12785)
static void C_ccall f_12785(C_word c,C_word *av) C_noret;
C_noret_decl(f_12816)
static void C_ccall f_12816(C_word c,C_word *av) C_noret;
C_noret_decl(f_12818)
static void C_ccall f_12818(C_word c,C_word *av) C_noret;
C_noret_decl(f_12822)
static void C_ccall f_12822(C_word c,C_word *av) C_noret;
C_noret_decl(f_12838)
static void C_ccall f_12838(C_word c,C_word *av) C_noret;
C_noret_decl(f_12854)
static void C_ccall f_12854(C_word c,C_word *av) C_noret;
C_noret_decl(f_12856)
static void C_ccall f_12856(C_word c,C_word *av) C_noret;
C_noret_decl(f_12860)
static void C_ccall f_12860(C_word c,C_word *av) C_noret;
C_noret_decl(f_12869)
static void C_ccall f_12869(C_word c,C_word *av) C_noret;
C_noret_decl(f_12876)
static void C_ccall f_12876(C_word c,C_word *av) C_noret;
C_noret_decl(f_12884)
static void C_ccall f_12884(C_word c,C_word *av) C_noret;
C_noret_decl(f_12886)
static void C_ccall f_12886(C_word c,C_word *av) C_noret;
C_noret_decl(f_12911)
static void C_ccall f_12911(C_word c,C_word *av) C_noret;
C_noret_decl(f_12915)
static void C_fcall f_12915(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12965)
static void C_ccall f_12965(C_word c,C_word *av) C_noret;
C_noret_decl(f_12967)
static void C_ccall f_12967(C_word c,C_word *av) C_noret;
C_noret_decl(f_12971)
static void C_ccall f_12971(C_word c,C_word *av) C_noret;
C_noret_decl(f_12974)
static void C_ccall f_12974(C_word c,C_word *av) C_noret;
C_noret_decl(f_12977)
static void C_ccall f_12977(C_word c,C_word *av) C_noret;
C_noret_decl(f_12980)
static void C_ccall f_12980(C_word c,C_word *av) C_noret;
C_noret_decl(f_12983)
static void C_ccall f_12983(C_word c,C_word *av) C_noret;
C_noret_decl(f_12986)
static void C_ccall f_12986(C_word c,C_word *av) C_noret;
C_noret_decl(f_12988)
static void C_fcall f_12988(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12998)
static void C_fcall f_12998(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13023)
static C_word C_fcall f_13023(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_13037)
static void C_ccall f_13037(C_word c,C_word *av) C_noret;
C_noret_decl(f_13039)
static void C_fcall f_13039(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13118)
static void C_ccall f_13118(C_word c,C_word *av) C_noret;
C_noret_decl(f_13143)
static void C_ccall f_13143(C_word c,C_word *av) C_noret;
C_noret_decl(f_13150)
static void C_ccall f_13150(C_word c,C_word *av) C_noret;
C_noret_decl(f_13154)
static void C_ccall f_13154(C_word c,C_word *av) C_noret;
C_noret_decl(f_13174)
static void C_fcall f_13174(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13199)
static void C_ccall f_13199(C_word c,C_word *av) C_noret;
C_noret_decl(f_13238)
static void C_ccall f_13238(C_word c,C_word *av) C_noret;
C_noret_decl(f_13240)
static void C_ccall f_13240(C_word c,C_word *av) C_noret;
C_noret_decl(f_13244)
static void C_ccall f_13244(C_word c,C_word *av) C_noret;
C_noret_decl(f_13247)
static void C_ccall f_13247(C_word c,C_word *av) C_noret;
C_noret_decl(f_13250)
static void C_ccall f_13250(C_word c,C_word *av) C_noret;
C_noret_decl(f_13261)
static void C_ccall f_13261(C_word c,C_word *av) C_noret;
C_noret_decl(f_4251)
static void C_ccall f_4251(C_word c,C_word *av) C_noret;
C_noret_decl(f_4254)
static void C_ccall f_4254(C_word c,C_word *av) C_noret;
C_noret_decl(f_4257)
static void C_ccall f_4257(C_word c,C_word *av) C_noret;
C_noret_decl(f_4367)
static void C_fcall f_4367(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4385)
static void C_ccall f_4385(C_word c,C_word *av) C_noret;
C_noret_decl(f_4425)
static void C_fcall f_4425(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4439)
static void C_ccall f_4439(C_word c,C_word *av) C_noret;
C_noret_decl(f_5539)
static void C_ccall f_5539(C_word c,C_word *av) C_noret;
C_noret_decl(f_5542)
static void C_ccall f_5542(C_word c,C_word *av) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word *av) C_noret;
C_noret_decl(f_5548)
static void C_ccall f_5548(C_word c,C_word *av) C_noret;
C_noret_decl(f_5552)
static void C_ccall f_5552(C_word c,C_word *av) C_noret;
C_noret_decl(f_5555)
static void C_ccall f_5555(C_word c,C_word *av) C_noret;
C_noret_decl(f_5558)
static void C_ccall f_5558(C_word c,C_word *av) C_noret;
C_noret_decl(f_5561)
static void C_ccall f_5561(C_word c,C_word *av) C_noret;
C_noret_decl(f_5564)
static void C_ccall f_5564(C_word c,C_word *av) C_noret;
C_noret_decl(f_5567)
static void C_ccall f_5567(C_word c,C_word *av) C_noret;
C_noret_decl(f_5570)
static void C_ccall f_5570(C_word c,C_word *av) C_noret;
C_noret_decl(f_5573)
static void C_ccall f_5573(C_word c,C_word *av) C_noret;
C_noret_decl(f_5577)
static void C_ccall f_5577(C_word c,C_word *av) C_noret;
C_noret_decl(f_5580)
static void C_ccall f_5580(C_word c,C_word *av) C_noret;
C_noret_decl(f_5583)
static void C_ccall f_5583(C_word c,C_word *av) C_noret;
C_noret_decl(f_5586)
static void C_ccall f_5586(C_word c,C_word *av) C_noret;
C_noret_decl(f_5589)
static void C_ccall f_5589(C_word c,C_word *av) C_noret;
C_noret_decl(f_5592)
static void C_ccall f_5592(C_word c,C_word *av) C_noret;
C_noret_decl(f_5595)
static void C_ccall f_5595(C_word c,C_word *av) C_noret;
C_noret_decl(f_5599)
static void C_ccall f_5599(C_word c,C_word *av) C_noret;
C_noret_decl(f_5602)
static void C_ccall f_5602(C_word c,C_word *av) C_noret;
C_noret_decl(f_5605)
static void C_ccall f_5605(C_word c,C_word *av) C_noret;
C_noret_decl(f_5608)
static void C_ccall f_5608(C_word c,C_word *av) C_noret;
C_noret_decl(f_5611)
static void C_ccall f_5611(C_word c,C_word *av) C_noret;
C_noret_decl(f_5614)
static void C_ccall f_5614(C_word c,C_word *av) C_noret;
C_noret_decl(f_5617)
static void C_ccall f_5617(C_word c,C_word *av) C_noret;
C_noret_decl(f_5620)
static void C_ccall f_5620(C_word c,C_word *av) C_noret;
C_noret_decl(f_5623)
static void C_ccall f_5623(C_word c,C_word *av) C_noret;
C_noret_decl(f_5626)
static void C_ccall f_5626(C_word c,C_word *av) C_noret;
C_noret_decl(f_5629)
static void C_ccall f_5629(C_word c,C_word *av) C_noret;
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
C_noret_decl(f_5648)
static void C_ccall f_5648(C_word c,C_word *av) C_noret;
C_noret_decl(f_5651)
static void C_ccall f_5651(C_word c,C_word *av) C_noret;
C_noret_decl(f_5654)
static void C_ccall f_5654(C_word c,C_word *av) C_noret;
C_noret_decl(f_5657)
static void C_ccall f_5657(C_word c,C_word *av) C_noret;
C_noret_decl(f_5660)
static void C_ccall f_5660(C_word c,C_word *av) C_noret;
C_noret_decl(f_5663)
static void C_ccall f_5663(C_word c,C_word *av) C_noret;
C_noret_decl(f_5666)
static void C_ccall f_5666(C_word c,C_word *av) C_noret;
C_noret_decl(f_5669)
static void C_ccall f_5669(C_word c,C_word *av) C_noret;
C_noret_decl(f_5672)
static void C_ccall f_5672(C_word c,C_word *av) C_noret;
C_noret_decl(f_5675)
static void C_ccall f_5675(C_word c,C_word *av) C_noret;
C_noret_decl(f_5678)
static void C_ccall f_5678(C_word c,C_word *av) C_noret;
C_noret_decl(f_5681)
static void C_ccall f_5681(C_word c,C_word *av) C_noret;
C_noret_decl(f_5684)
static void C_ccall f_5684(C_word c,C_word *av) C_noret;
C_noret_decl(f_5687)
static void C_ccall f_5687(C_word c,C_word *av) C_noret;
C_noret_decl(f_5690)
static void C_ccall f_5690(C_word c,C_word *av) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693(C_word c,C_word *av) C_noret;
C_noret_decl(f_5696)
static void C_ccall f_5696(C_word c,C_word *av) C_noret;
C_noret_decl(f_5699)
static void C_ccall f_5699(C_word c,C_word *av) C_noret;
C_noret_decl(f_5702)
static void C_ccall f_5702(C_word c,C_word *av) C_noret;
C_noret_decl(f_5705)
static void C_ccall f_5705(C_word c,C_word *av) C_noret;
C_noret_decl(f_5709)
static void C_ccall f_5709(C_word c,C_word *av) C_noret;
C_noret_decl(f_5712)
static void C_ccall f_5712(C_word c,C_word *av) C_noret;
C_noret_decl(f_5715)
static void C_ccall f_5715(C_word c,C_word *av) C_noret;
C_noret_decl(f_5718)
static void C_ccall f_5718(C_word c,C_word *av) C_noret;
C_noret_decl(f_5722)
static void C_ccall f_5722(C_word c,C_word *av) C_noret;
C_noret_decl(f_5724)
static void C_ccall f_5724(C_word c,C_word *av) C_noret;
C_noret_decl(f_5728)
static void C_ccall f_5728(C_word c,C_word *av) C_noret;
C_noret_decl(f_5771)
static void C_ccall f_5771(C_word c,C_word *av) C_noret;
C_noret_decl(f_5773)
static void C_ccall f_5773(C_word c,C_word *av) C_noret;
C_noret_decl(f_5777)
static void C_ccall f_5777(C_word c,C_word *av) C_noret;
C_noret_decl(f_5788)
static void C_ccall f_5788(C_word c,C_word *av) C_noret;
C_noret_decl(f_5791)
static void C_fcall f_5791(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5814)
static void C_fcall f_5814(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5833)
static void C_ccall f_5833(C_word c,C_word *av) C_noret;
C_noret_decl(f_5843)
static void C_ccall f_5843(C_word c,C_word *av) C_noret;
C_noret_decl(f_5850)
static void C_ccall f_5850(C_word c,C_word *av) C_noret;
C_noret_decl(f_5860)
static void C_ccall f_5860(C_word c,C_word *av) C_noret;
C_noret_decl(f_5862)
static void C_ccall f_5862(C_word c,C_word *av) C_noret;
C_noret_decl(f_5870)
static void C_ccall f_5870(C_word c,C_word *av) C_noret;
C_noret_decl(f_5878)
static void C_ccall f_5878(C_word c,C_word *av) C_noret;
C_noret_decl(f_5880)
static void C_ccall f_5880(C_word c,C_word *av) C_noret;
C_noret_decl(f_5884)
static void C_ccall f_5884(C_word c,C_word *av) C_noret;
C_noret_decl(f_5943)
static void C_ccall f_5943(C_word c,C_word *av) C_noret;
C_noret_decl(f_5945)
static void C_ccall f_5945(C_word c,C_word *av) C_noret;
C_noret_decl(f_5949)
static void C_ccall f_5949(C_word c,C_word *av) C_noret;
C_noret_decl(f_5952)
static void C_ccall f_5952(C_word c,C_word *av) C_noret;
C_noret_decl(f_5955)
static void C_ccall f_5955(C_word c,C_word *av) C_noret;
C_noret_decl(f_5958)
static void C_ccall f_5958(C_word c,C_word *av) C_noret;
C_noret_decl(f_5965)
static void C_fcall f_5965(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5975)
static void C_ccall f_5975(C_word c,C_word *av) C_noret;
C_noret_decl(f_5978)
static void C_ccall f_5978(C_word c,C_word *av) C_noret;
C_noret_decl(f_5984)
static void C_ccall f_5984(C_word c,C_word *av) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995(C_word c,C_word *av) C_noret;
C_noret_decl(f_6011)
static void C_ccall f_6011(C_word c,C_word *av) C_noret;
C_noret_decl(f_6021)
static void C_ccall f_6021(C_word c,C_word *av) C_noret;
C_noret_decl(f_6044)
static void C_ccall f_6044(C_word c,C_word *av) C_noret;
C_noret_decl(f_6047)
static void C_ccall f_6047(C_word c,C_word *av) C_noret;
C_noret_decl(f_6064)
static void C_ccall f_6064(C_word c,C_word *av) C_noret;
C_noret_decl(f_6070)
static void C_ccall f_6070(C_word c,C_word *av) C_noret;
C_noret_decl(f_6087)
static void C_ccall f_6087(C_word c,C_word *av) C_noret;
C_noret_decl(f_6110)
static void C_ccall f_6110(C_word c,C_word *av) C_noret;
C_noret_decl(f_6138)
static void C_ccall f_6138(C_word c,C_word *av) C_noret;
C_noret_decl(f_6140)
static void C_ccall f_6140(C_word c,C_word *av) C_noret;
C_noret_decl(f_6144)
static void C_ccall f_6144(C_word c,C_word *av) C_noret;
C_noret_decl(f_6147)
static void C_ccall f_6147(C_word c,C_word *av) C_noret;
C_noret_decl(f_6150)
static void C_ccall f_6150(C_word c,C_word *av) C_noret;
C_noret_decl(f_6153)
static void C_ccall f_6153(C_word c,C_word *av) C_noret;
C_noret_decl(f_6160)
static void C_fcall f_6160(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6170)
static void C_ccall f_6170(C_word c,C_word *av) C_noret;
C_noret_decl(f_6173)
static void C_ccall f_6173(C_word c,C_word *av) C_noret;
C_noret_decl(f_6179)
static void C_ccall f_6179(C_word c,C_word *av) C_noret;
C_noret_decl(f_6186)
static void C_ccall f_6186(C_word c,C_word *av) C_noret;
C_noret_decl(f_6202)
static void C_ccall f_6202(C_word c,C_word *av) C_noret;
C_noret_decl(f_6212)
static void C_ccall f_6212(C_word c,C_word *av) C_noret;
C_noret_decl(f_6235)
static void C_ccall f_6235(C_word c,C_word *av) C_noret;
C_noret_decl(f_6238)
static void C_ccall f_6238(C_word c,C_word *av) C_noret;
C_noret_decl(f_6255)
static void C_ccall f_6255(C_word c,C_word *av) C_noret;
C_noret_decl(f_6261)
static void C_ccall f_6261(C_word c,C_word *av) C_noret;
C_noret_decl(f_6310)
static void C_ccall f_6310(C_word c,C_word *av) C_noret;
C_noret_decl(f_6312)
static void C_ccall f_6312(C_word c,C_word *av) C_noret;
C_noret_decl(f_6316)
static void C_ccall f_6316(C_word c,C_word *av) C_noret;
C_noret_decl(f_6322)
static void C_ccall f_6322(C_word c,C_word *av) C_noret;
C_noret_decl(f_6325)
static void C_ccall f_6325(C_word c,C_word *av) C_noret;
C_noret_decl(f_6337)
static void C_ccall f_6337(C_word c,C_word *av) C_noret;
C_noret_decl(f_6340)
static void C_ccall f_6340(C_word c,C_word *av) C_noret;
C_noret_decl(f_6346)
static void C_ccall f_6346(C_word c,C_word *av) C_noret;
C_noret_decl(f_6349)
static void C_ccall f_6349(C_word c,C_word *av) C_noret;
C_noret_decl(f_6358)
static void C_ccall f_6358(C_word c,C_word *av) C_noret;
C_noret_decl(f_6359)
static void C_fcall f_6359(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6375)
static void C_ccall f_6375(C_word c,C_word *av) C_noret;
C_noret_decl(f_6406)
static void C_ccall f_6406(C_word c,C_word *av) C_noret;
C_noret_decl(f_6408)
static void C_fcall f_6408(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6427)
static void C_fcall f_6427(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6433)
static void C_fcall f_6433(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6440)
static void C_fcall f_6440(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6444)
static void C_ccall f_6444(C_word c,C_word *av) C_noret;
C_noret_decl(f_6448)
static void C_fcall f_6448(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6452)
static void C_ccall f_6452(C_word c,C_word *av) C_noret;
C_noret_decl(f_6480)
static void C_ccall f_6480(C_word c,C_word *av) C_noret;
C_noret_decl(f_6501)
static void C_ccall f_6501(C_word c,C_word *av) C_noret;
C_noret_decl(f_6580)
static void C_ccall f_6580(C_word c,C_word *av) C_noret;
C_noret_decl(f_6623)
static C_word C_fcall f_6623(C_word t0,C_word t1);
C_noret_decl(f_6636)
static void C_ccall f_6636(C_word c,C_word *av) C_noret;
C_noret_decl(f_6638)
static void C_fcall f_6638(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6676)
static void C_fcall f_6676(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6686)
static void C_ccall f_6686(C_word c,C_word *av) C_noret;
C_noret_decl(f_6699)
static void C_fcall f_6699(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6734)
static void C_ccall f_6734(C_word c,C_word *av) C_noret;
C_noret_decl(f_6741)
static void C_ccall f_6741(C_word c,C_word *av) C_noret;
C_noret_decl(f_6745)
static void C_ccall f_6745(C_word c,C_word *av) C_noret;
C_noret_decl(f_6749)
static void C_ccall f_6749(C_word c,C_word *av) C_noret;
C_noret_decl(f_6751)
static void C_ccall f_6751(C_word c,C_word *av) C_noret;
C_noret_decl(f_6755)
static void C_ccall f_6755(C_word c,C_word *av) C_noret;
C_noret_decl(f_6763)
static void C_ccall f_6763(C_word c,C_word *av) C_noret;
C_noret_decl(f_6772)
static void C_ccall f_6772(C_word c,C_word *av) C_noret;
C_noret_decl(f_6775)
static void C_ccall f_6775(C_word c,C_word *av) C_noret;
C_noret_decl(f_6778)
static void C_ccall f_6778(C_word c,C_word *av) C_noret;
C_noret_decl(f_6800)
static void C_ccall f_6800(C_word c,C_word *av) C_noret;
C_noret_decl(f_6807)
static void C_ccall f_6807(C_word c,C_word *av) C_noret;
C_noret_decl(f_6811)
static void C_ccall f_6811(C_word c,C_word *av) C_noret;
C_noret_decl(f_6822)
static void C_ccall f_6822(C_word c,C_word *av) C_noret;
C_noret_decl(f_6825)
static void C_ccall f_6825(C_word c,C_word *av) C_noret;
C_noret_decl(f_6828)
static void C_ccall f_6828(C_word c,C_word *av) C_noret;
C_noret_decl(f_6842)
static void C_ccall f_6842(C_word c,C_word *av) C_noret;
C_noret_decl(f_6849)
static void C_ccall f_6849(C_word c,C_word *av) C_noret;
C_noret_decl(f_6853)
static void C_ccall f_6853(C_word c,C_word *av) C_noret;
C_noret_decl(f_6865)
static void C_ccall f_6865(C_word c,C_word *av) C_noret;
C_noret_decl(f_6867)
static void C_ccall f_6867(C_word c,C_word *av) C_noret;
C_noret_decl(f_6871)
static void C_ccall f_6871(C_word c,C_word *av) C_noret;
C_noret_decl(f_6873)
static void C_fcall f_6873(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6879)
static void C_fcall f_6879(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6893)
static void C_ccall f_6893(C_word c,C_word *av) C_noret;
C_noret_decl(f_6897)
static void C_ccall f_6897(C_word c,C_word *av) C_noret;
C_noret_decl(f_6905)
static void C_ccall f_6905(C_word c,C_word *av) C_noret;
C_noret_decl(f_6908)
static void C_ccall f_6908(C_word c,C_word *av) C_noret;
C_noret_decl(f_6911)
static void C_ccall f_6911(C_word c,C_word *av) C_noret;
C_noret_decl(f_6914)
static void C_ccall f_6914(C_word c,C_word *av) C_noret;
C_noret_decl(f_6917)
static void C_ccall f_6917(C_word c,C_word *av) C_noret;
C_noret_decl(f_6920)
static void C_ccall f_6920(C_word c,C_word *av) C_noret;
C_noret_decl(f_6923)
static void C_ccall f_6923(C_word c,C_word *av) C_noret;
C_noret_decl(f_6926)
static void C_ccall f_6926(C_word c,C_word *av) C_noret;
C_noret_decl(f_6929)
static void C_ccall f_6929(C_word c,C_word *av) C_noret;
C_noret_decl(f_6932)
static void C_ccall f_6932(C_word c,C_word *av) C_noret;
C_noret_decl(f_6939)
static void C_ccall f_6939(C_word c,C_word *av) C_noret;
C_noret_decl(f_6955)
static void C_ccall f_6955(C_word c,C_word *av) C_noret;
C_noret_decl(f_6957)
static void C_fcall f_6957(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6965)
static void C_fcall f_6965(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6975)
static void C_ccall f_6975(C_word c,C_word *av) C_noret;
C_noret_decl(f_6979)
static void C_ccall f_6979(C_word c,C_word *av) C_noret;
C_noret_decl(f_6989)
static void C_fcall f_6989(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6993)
static void C_ccall f_6993(C_word c,C_word *av) C_noret;
C_noret_decl(f_6995)
static void C_ccall f_6995(C_word c,C_word *av) C_noret;
C_noret_decl(f_7003)
static void C_ccall f_7003(C_word c,C_word *av) C_noret;
C_noret_decl(f_7005)
static void C_ccall f_7005(C_word c,C_word *av) C_noret;
C_noret_decl(f_7009)
static void C_ccall f_7009(C_word c,C_word *av) C_noret;
C_noret_decl(f_7031)
static void C_ccall f_7031(C_word c,C_word *av) C_noret;
C_noret_decl(f_7033)
static void C_fcall f_7033(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7081)
static void C_fcall f_7081(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7134)
static void C_ccall f_7134(C_word c,C_word *av) C_noret;
C_noret_decl(f_7145)
static void C_ccall f_7145(C_word c,C_word *av) C_noret;
C_noret_decl(f_7182)
static void C_ccall f_7182(C_word c,C_word *av) C_noret;
C_noret_decl(f_7210)
static void C_ccall f_7210(C_word c,C_word *av) C_noret;
C_noret_decl(f_7237)
static void C_ccall f_7237(C_word c,C_word *av) C_noret;
C_noret_decl(f_7247)
static void C_ccall f_7247(C_word c,C_word *av) C_noret;
C_noret_decl(f_7249)
static void C_fcall f_7249(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7274)
static void C_ccall f_7274(C_word c,C_word *av) C_noret;
C_noret_decl(f_7309)
static void C_ccall f_7309(C_word c,C_word *av) C_noret;
C_noret_decl(f_7311)
static void C_ccall f_7311(C_word c,C_word *av) C_noret;
C_noret_decl(f_7315)
static void C_ccall f_7315(C_word c,C_word *av) C_noret;
C_noret_decl(f_7327)
static void C_ccall f_7327(C_word c,C_word *av) C_noret;
C_noret_decl(f_7330)
static void C_ccall f_7330(C_word c,C_word *av) C_noret;
C_noret_decl(f_7333)
static void C_ccall f_7333(C_word c,C_word *av) C_noret;
C_noret_decl(f_7336)
static void C_ccall f_7336(C_word c,C_word *av) C_noret;
C_noret_decl(f_7347)
static void C_ccall f_7347(C_word c,C_word *av) C_noret;
C_noret_decl(f_7349)
static void C_fcall f_7349(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7375)
static void C_ccall f_7375(C_word c,C_word *av) C_noret;
C_noret_decl(f_7386)
static void C_ccall f_7386(C_word c,C_word *av) C_noret;
C_noret_decl(f_7469)
static void C_ccall f_7469(C_word c,C_word *av) C_noret;
C_noret_decl(f_7471)
static void C_ccall f_7471(C_word c,C_word *av) C_noret;
C_noret_decl(f_7475)
static void C_ccall f_7475(C_word c,C_word *av) C_noret;
C_noret_decl(f_7478)
static void C_ccall f_7478(C_word c,C_word *av) C_noret;
C_noret_decl(f_7508)
static void C_ccall f_7508(C_word c,C_word *av) C_noret;
C_noret_decl(f_7518)
static void C_ccall f_7518(C_word c,C_word *av) C_noret;
C_noret_decl(f_7546)
static void C_ccall f_7546(C_word c,C_word *av) C_noret;
C_noret_decl(f_7548)
static void C_ccall f_7548(C_word c,C_word *av) C_noret;
C_noret_decl(f_7552)
static void C_ccall f_7552(C_word c,C_word *av) C_noret;
C_noret_decl(f_7571)
static void C_ccall f_7571(C_word c,C_word *av) C_noret;
C_noret_decl(f_7575)
static void C_ccall f_7575(C_word c,C_word *av) C_noret;
C_noret_decl(f_7579)
static void C_ccall f_7579(C_word c,C_word *av) C_noret;
C_noret_decl(f_7581)
static void C_fcall f_7581(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7602)
static void C_ccall f_7602(C_word c,C_word *av) C_noret;
C_noret_decl(f_7620)
static void C_ccall f_7620(C_word c,C_word *av) C_noret;
C_noret_decl(f_7628)
static void C_ccall f_7628(C_word c,C_word *av) C_noret;
C_noret_decl(f_7632)
static void C_ccall f_7632(C_word c,C_word *av) C_noret;
C_noret_decl(f_7642)
static void C_fcall f_7642(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7648)
static void C_fcall f_7648(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7662)
static void C_ccall f_7662(C_word c,C_word *av) C_noret;
C_noret_decl(f_7688)
static void C_ccall f_7688(C_word c,C_word *av) C_noret;
C_noret_decl(f_7712)
static void C_ccall f_7712(C_word c,C_word *av) C_noret;
C_noret_decl(f_7720)
static void C_ccall f_7720(C_word c,C_word *av) C_noret;
C_noret_decl(f_7728)
static void C_ccall f_7728(C_word c,C_word *av) C_noret;
C_noret_decl(f_7732)
static void C_ccall f_7732(C_word c,C_word *av) C_noret;
C_noret_decl(f_7735)
static void C_ccall f_7735(C_word c,C_word *av) C_noret;
C_noret_decl(f_7738)
static void C_ccall f_7738(C_word c,C_word *av) C_noret;
C_noret_decl(f_7747)
static void C_ccall f_7747(C_word c,C_word *av) C_noret;
C_noret_decl(f_7748)
static void C_fcall f_7748(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7756)
static void C_ccall f_7756(C_word c,C_word *av) C_noret;
C_noret_decl(f_7760)
static void C_ccall f_7760(C_word c,C_word *av) C_noret;
C_noret_decl(f_7764)
static void C_fcall f_7764(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7772)
static void C_ccall f_7772(C_word c,C_word *av) C_noret;
C_noret_decl(f_7778)
static void C_ccall f_7778(C_word c,C_word *av) C_noret;
C_noret_decl(f_7784)
static void C_ccall f_7784(C_word c,C_word *av) C_noret;
C_noret_decl(f_7787)
static void C_ccall f_7787(C_word c,C_word *av) C_noret;
C_noret_decl(f_7790)
static void C_ccall f_7790(C_word c,C_word *av) C_noret;
C_noret_decl(f_7794)
static void C_fcall f_7794(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7802)
static void C_ccall f_7802(C_word c,C_word *av) C_noret;
C_noret_decl(f_7805)
static void C_ccall f_7805(C_word c,C_word *av) C_noret;
C_noret_decl(f_7808)
static void C_ccall f_7808(C_word c,C_word *av) C_noret;
C_noret_decl(f_7811)
static void C_ccall f_7811(C_word c,C_word *av) C_noret;
C_noret_decl(f_7818)
static void C_ccall f_7818(C_word c,C_word *av) C_noret;
C_noret_decl(f_7844)
static void C_fcall f_7844(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7869)
static void C_ccall f_7869(C_word c,C_word *av) C_noret;
C_noret_decl(f_7878)
static void C_fcall f_7878(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7912)
static void C_fcall f_7912(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7937)
static void C_ccall f_7937(C_word c,C_word *av) C_noret;
C_noret_decl(f_7946)
static void C_fcall f_7946(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7994)
static void C_ccall f_7994(C_word c,C_word *av) C_noret;
C_noret_decl(f_7996)
static void C_ccall f_7996(C_word c,C_word *av) C_noret;
C_noret_decl(f_8000)
static void C_ccall f_8000(C_word c,C_word *av) C_noret;
C_noret_decl(f_8010)
static void C_fcall f_8010(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8037)
static void C_ccall f_8037(C_word c,C_word *av) C_noret;
C_noret_decl(f_8040)
static void C_ccall f_8040(C_word c,C_word *av) C_noret;
C_noret_decl(f_8055)
static void C_ccall f_8055(C_word c,C_word *av) C_noret;
C_noret_decl(f_8063)
static void C_ccall f_8063(C_word c,C_word *av) C_noret;
C_noret_decl(f_8072)
static void C_ccall f_8072(C_word c,C_word *av) C_noret;
C_noret_decl(f_8087)
static void C_ccall f_8087(C_word c,C_word *av) C_noret;
C_noret_decl(f_8097)
static void C_ccall f_8097(C_word c,C_word *av) C_noret;
C_noret_decl(f_8100)
static void C_ccall f_8100(C_word c,C_word *av) C_noret;
C_noret_decl(f_8116)
static void C_ccall f_8116(C_word c,C_word *av) C_noret;
C_noret_decl(f_8136)
static void C_ccall f_8136(C_word c,C_word *av) C_noret;
C_noret_decl(f_8138)
static void C_ccall f_8138(C_word c,C_word *av) C_noret;
C_noret_decl(f_8140)
static void C_ccall f_8140(C_word c,C_word *av) C_noret;
C_noret_decl(f_8144)
static void C_ccall f_8144(C_word c,C_word *av) C_noret;
C_noret_decl(f_8153)
static void C_fcall f_8153(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8156)
static void C_ccall f_8156(C_word c,C_word *av) C_noret;
C_noret_decl(f_8165)
static void C_fcall f_8165(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8181)
static void C_ccall f_8181(C_word c,C_word *av) C_noret;
C_noret_decl(f_8185)
static void C_ccall f_8185(C_word c,C_word *av) C_noret;
C_noret_decl(f_8228)
static void C_ccall f_8228(C_word c,C_word *av) C_noret;
C_noret_decl(f_8240)
static void C_ccall f_8240(C_word c,C_word *av) C_noret;
C_noret_decl(f_8242)
static void C_ccall f_8242(C_word c,C_word *av) C_noret;
C_noret_decl(f_8246)
static void C_ccall f_8246(C_word c,C_word *av) C_noret;
C_noret_decl(f_8249)
static void C_ccall f_8249(C_word c,C_word *av) C_noret;
C_noret_decl(f_8268)
static void C_ccall f_8268(C_word c,C_word *av) C_noret;
C_noret_decl(f_8284)
static void C_ccall f_8284(C_word c,C_word *av) C_noret;
C_noret_decl(f_8286)
static void C_ccall f_8286(C_word c,C_word *av) C_noret;
C_noret_decl(f_8290)
static void C_ccall f_8290(C_word c,C_word *av) C_noret;
C_noret_decl(f_8293)
static void C_ccall f_8293(C_word c,C_word *av) C_noret;
C_noret_decl(f_8306)
static void C_ccall f_8306(C_word c,C_word *av) C_noret;
C_noret_decl(f_8308)
static void C_ccall f_8308(C_word c,C_word *av) C_noret;
C_noret_decl(f_8312)
static void C_ccall f_8312(C_word c,C_word *av) C_noret;
C_noret_decl(f_8326)
static void C_ccall f_8326(C_word c,C_word *av) C_noret;
C_noret_decl(f_8332)
static void C_ccall f_8332(C_word c,C_word *av) C_noret;
C_noret_decl(f_8354)
static void C_ccall f_8354(C_word c,C_word *av) C_noret;
C_noret_decl(f_8360)
static void C_ccall f_8360(C_word c,C_word *av) C_noret;
C_noret_decl(f_8364)
static void C_ccall f_8364(C_word c,C_word *av) C_noret;
C_noret_decl(f_8374)
static void C_ccall f_8374(C_word c,C_word *av) C_noret;
C_noret_decl(f_8376)
static void C_fcall f_8376(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8405)
static void C_ccall f_8405(C_word c,C_word *av) C_noret;
C_noret_decl(f_8424)
static void C_fcall f_8424(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8458)
static void C_fcall f_8458(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8482)
static void C_ccall f_8482(C_word c,C_word *av) C_noret;
C_noret_decl(f_8484)
static void C_ccall f_8484(C_word c,C_word *av) C_noret;
C_noret_decl(f_8488)
static void C_ccall f_8488(C_word c,C_word *av) C_noret;
C_noret_decl(f_8494)
static void C_fcall f_8494(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8528)
static void C_fcall f_8528(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8564)
static void C_ccall f_8564(C_word c,C_word *av) C_noret;
C_noret_decl(f_8566)
static void C_ccall f_8566(C_word c,C_word *av) C_noret;
C_noret_decl(f_8570)
static void C_ccall f_8570(C_word c,C_word *av) C_noret;
C_noret_decl(f_8578)
static void C_ccall f_8578(C_word c,C_word *av) C_noret;
C_noret_decl(f_8583)
static void C_fcall f_8583(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8608)
static void C_ccall f_8608(C_word c,C_word *av) C_noret;
C_noret_decl(f_8618)
static void C_ccall f_8618(C_word c,C_word *av) C_noret;
C_noret_decl(f_8620)
static void C_ccall f_8620(C_word c,C_word *av) C_noret;
C_noret_decl(f_8624)
static void C_ccall f_8624(C_word c,C_word *av) C_noret;
C_noret_decl(f_8630)
static void C_ccall f_8630(C_word c,C_word *av) C_noret;
C_noret_decl(f_8651)
static void C_ccall f_8651(C_word c,C_word *av) C_noret;
C_noret_decl(f_8658)
static void C_ccall f_8658(C_word c,C_word *av) C_noret;
C_noret_decl(f_8681)
static void C_ccall f_8681(C_word c,C_word *av) C_noret;
C_noret_decl(f_8685)
static void C_ccall f_8685(C_word c,C_word *av) C_noret;
C_noret_decl(f_8706)
static void C_ccall f_8706(C_word c,C_word *av) C_noret;
C_noret_decl(f_8709)
static void C_ccall f_8709(C_word c,C_word *av) C_noret;
C_noret_decl(f_8713)
static void C_fcall f_8713(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8721)
static void C_ccall f_8721(C_word c,C_word *av) C_noret;
C_noret_decl(f_8725)
static void C_ccall f_8725(C_word c,C_word *av) C_noret;
C_noret_decl(f_8731)
static void C_ccall f_8731(C_word c,C_word *av) C_noret;
C_noret_decl(f_8732)
static void C_ccall f_8732(C_word c,C_word *av) C_noret;
C_noret_decl(f_8743)
static void C_ccall f_8743(C_word c,C_word *av) C_noret;
C_noret_decl(f_8758)
static void C_ccall f_8758(C_word c,C_word *av) C_noret;
C_noret_decl(f_8760)
static void C_fcall f_8760(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8779)
static void C_fcall f_8779(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8787)
static void C_ccall f_8787(C_word c,C_word *av) C_noret;
C_noret_decl(f_8793)
static void C_ccall f_8793(C_word c,C_word *av) C_noret;
C_noret_decl(f_8795)
static void C_fcall f_8795(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8820)
static void C_ccall f_8820(C_word c,C_word *av) C_noret;
C_noret_decl(f_8844)
static void C_ccall f_8844(C_word c,C_word *av) C_noret;
C_noret_decl(f_8881)
static void C_ccall f_8881(C_word c,C_word *av) C_noret;
C_noret_decl(f_8909)
static void C_fcall f_8909(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8943)
static void C_fcall f_8943(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8974)
static void C_ccall f_8974(C_word c,C_word *av) C_noret;
C_noret_decl(f_8981)
static void C_ccall f_8981(C_word c,C_word *av) C_noret;
C_noret_decl(f_8987)
static void C_fcall f_8987(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9012)
static void C_ccall f_9012(C_word c,C_word *av) C_noret;
C_noret_decl(f_9021)
static void C_fcall f_9021(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9034)
static void C_ccall f_9034(C_word c,C_word *av) C_noret;
C_noret_decl(f_9059)
static void C_fcall f_9059(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9095)
static void C_ccall f_9095(C_word c,C_word *av) C_noret;
C_noret_decl(f_9097)
static void C_ccall f_9097(C_word c,C_word *av) C_noret;
C_noret_decl(f_9101)
static void C_ccall f_9101(C_word c,C_word *av) C_noret;
C_noret_decl(f_9108)
static void C_ccall f_9108(C_word c,C_word *av) C_noret;
C_noret_decl(f_9112)
static void C_ccall f_9112(C_word c,C_word *av) C_noret;
C_noret_decl(f_9120)
static void C_ccall f_9120(C_word c,C_word *av) C_noret;
C_noret_decl(f_9134)
static void C_ccall f_9134(C_word c,C_word *av) C_noret;
C_noret_decl(f_9140)
static void C_ccall f_9140(C_word c,C_word *av) C_noret;
C_noret_decl(f_9147)
static void C_ccall f_9147(C_word c,C_word *av) C_noret;
C_noret_decl(f_9153)
static void C_ccall f_9153(C_word c,C_word *av) C_noret;
C_noret_decl(f_9166)
static void C_fcall f_9166(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9200)
static void C_fcall f_9200(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9210)
static void C_ccall f_9210(C_word c,C_word *av) C_noret;
C_noret_decl(f_9225)
static void C_ccall f_9225(C_word c,C_word *av) C_noret;
C_noret_decl(f_9227)
static void C_ccall f_9227(C_word c,C_word *av) C_noret;
C_noret_decl(f_9231)
static void C_ccall f_9231(C_word c,C_word *av) C_noret;
C_noret_decl(f_9246)
static void C_ccall f_9246(C_word c,C_word *av) C_noret;
C_noret_decl(f_9248)
static void C_ccall f_9248(C_word c,C_word *av) C_noret;
C_noret_decl(f_9252)
static void C_ccall f_9252(C_word c,C_word *av) C_noret;
C_noret_decl(f_9274)
static void C_ccall f_9274(C_word c,C_word *av) C_noret;
C_noret_decl(f_9276)
static void C_ccall f_9276(C_word c,C_word *av) C_noret;
C_noret_decl(f_9280)
static void C_ccall f_9280(C_word c,C_word *av) C_noret;
C_noret_decl(f_9298)
static void C_ccall f_9298(C_word c,C_word *av) C_noret;
C_noret_decl(f_9300)
static void C_ccall f_9300(C_word c,C_word *av) C_noret;
C_noret_decl(f_9309)
static void C_fcall f_9309(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9315)
static void C_ccall f_9315(C_word c,C_word *av) C_noret;
C_noret_decl(f_9321)
static void C_ccall f_9321(C_word c,C_word *av) C_noret;
C_noret_decl(f_9335)
static void C_ccall f_9335(C_word c,C_word *av) C_noret;
C_noret_decl(f_9344)
static void C_ccall f_9344(C_word c,C_word *av) C_noret;
C_noret_decl(f_9346)
static void C_fcall f_9346(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9371)
static void C_ccall f_9371(C_word c,C_word *av) C_noret;
C_noret_decl(f_9382)
static void C_ccall f_9382(C_word c,C_word *av) C_noret;
C_noret_decl(f_9384)
static void C_ccall f_9384(C_word c,C_word *av) C_noret;
C_noret_decl(f_9403)
static void C_ccall f_9403(C_word c,C_word *av) C_noret;
C_noret_decl(f_9411)
static void C_ccall f_9411(C_word c,C_word *av) C_noret;
C_noret_decl(f_9420)
static void C_ccall f_9420(C_word c,C_word *av) C_noret;
C_noret_decl(f_9426)
static void C_ccall f_9426(C_word c,C_word *av) C_noret;
C_noret_decl(f_9430)
static void C_fcall f_9430(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9438)
static void C_ccall f_9438(C_word c,C_word *av) C_noret;
C_noret_decl(f_9444)
static void C_ccall f_9444(C_word c,C_word *av) C_noret;
C_noret_decl(f_9448)
static void C_fcall f_9448(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9456)
static void C_ccall f_9456(C_word c,C_word *av) C_noret;
C_noret_decl(f_9459)
static void C_ccall f_9459(C_word c,C_word *av) C_noret;
C_noret_decl(f_9463)
static void C_fcall f_9463(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9471)
static void C_ccall f_9471(C_word c,C_word *av) C_noret;
C_noret_decl(f_9474)
static void C_ccall f_9474(C_word c,C_word *av) C_noret;
C_noret_decl(f_9487)
static void C_ccall f_9487(C_word c,C_word *av) C_noret;
C_noret_decl(f_9504)
static void C_ccall f_9504(C_word c,C_word *av) C_noret;
C_noret_decl(f_9515)
static void C_ccall f_9515(C_word c,C_word *av) C_noret;
C_noret_decl(f_9563)
static void C_ccall f_9563(C_word c,C_word *av) C_noret;
C_noret_decl(f_9567)
static void C_ccall f_9567(C_word c,C_word *av) C_noret;
C_noret_decl(f_9579)
static void C_ccall f_9579(C_word c,C_word *av) C_noret;
C_noret_decl(f_9591)
static void C_ccall f_9591(C_word c,C_word *av) C_noret;
C_noret_decl(f_9593)
static void C_fcall f_9593(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9641)
static void C_fcall f_9641(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9689)
static void C_fcall f_9689(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9696)
static void C_fcall f_9696(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9766)
static C_word C_fcall f_9766(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3);
C_noret_decl(f_9784)
static void C_ccall f_9784(C_word c,C_word *av) C_noret;
C_noret_decl(f_9788)
static void C_ccall f_9788(C_word c,C_word *av) C_noret;
C_noret_decl(f_9804)
static void C_ccall f_9804(C_word c,C_word *av) C_noret;
C_noret_decl(f_9808)
static void C_ccall f_9808(C_word c,C_word *av) C_noret;
C_noret_decl(f_9820)
static void C_ccall f_9820(C_word c,C_word *av) C_noret;
C_noret_decl(f_9830)
static void C_fcall f_9830(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9878)
static void C_fcall f_9878(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9926)
static void C_fcall f_9926(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9933)
static void C_fcall f_9933(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9996)
static void C_fcall f_9996(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10044)
static void C_ccall trf_10044(C_word c,C_word *av) C_noret;
static void C_ccall trf_10044(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10044(t0,t1,t2,t3);}

C_noret_decl(trf_10092)
static void C_ccall trf_10092(C_word c,C_word *av) C_noret;
static void C_ccall trf_10092(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10092(t0,t1,t2,t3);}

C_noret_decl(trf_10140)
static void C_ccall trf_10140(C_word c,C_word *av) C_noret;
static void C_ccall trf_10140(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10140(t0,t1,t2);}

C_noret_decl(trf_10174)
static void C_ccall trf_10174(C_word c,C_word *av) C_noret;
static void C_ccall trf_10174(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10174(t0,t1,t2);}

C_noret_decl(trf_10208)
static void C_ccall trf_10208(C_word c,C_word *av) C_noret;
static void C_ccall trf_10208(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10208(t0,t1,t2);}

C_noret_decl(trf_10242)
static void C_ccall trf_10242(C_word c,C_word *av) C_noret;
static void C_ccall trf_10242(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10242(t0,t1,t2);}

C_noret_decl(trf_10276)
static void C_ccall trf_10276(C_word c,C_word *av) C_noret;
static void C_ccall trf_10276(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10276(t0,t1,t2);}

C_noret_decl(trf_10336)
static void C_ccall trf_10336(C_word c,C_word *av) C_noret;
static void C_ccall trf_10336(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10336(t0,t1);}

C_noret_decl(trf_10351)
static void C_ccall trf_10351(C_word c,C_word *av) C_noret;
static void C_ccall trf_10351(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10351(t0,t1);}

C_noret_decl(trf_10431)
static void C_ccall trf_10431(C_word c,C_word *av) C_noret;
static void C_ccall trf_10431(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10431(t0,t1,t2,t3);}

C_noret_decl(trf_10479)
static void C_ccall trf_10479(C_word c,C_word *av) C_noret;
static void C_ccall trf_10479(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10479(t0,t1,t2,t3);}

C_noret_decl(trf_10578)
static void C_ccall trf_10578(C_word c,C_word *av) C_noret;
static void C_ccall trf_10578(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10578(t0,t1,t2,t3);}

C_noret_decl(trf_10626)
static void C_ccall trf_10626(C_word c,C_word *av) C_noret;
static void C_ccall trf_10626(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10626(t0,t1,t2,t3);}

C_noret_decl(trf_10709)
static void C_ccall trf_10709(C_word c,C_word *av) C_noret;
static void C_ccall trf_10709(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10709(t0,t1,t2,t3);}

C_noret_decl(trf_10759)
static void C_ccall trf_10759(C_word c,C_word *av) C_noret;
static void C_ccall trf_10759(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10759(t0,t1,t2);}

C_noret_decl(trf_10779)
static void C_ccall trf_10779(C_word c,C_word *av) C_noret;
static void C_ccall trf_10779(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10779(t0,t1,t2,t3);}

C_noret_decl(trf_10827)
static void C_ccall trf_10827(C_word c,C_word *av) C_noret;
static void C_ccall trf_10827(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10827(t0,t1,t2);}

C_noret_decl(trf_10861)
static void C_ccall trf_10861(C_word c,C_word *av) C_noret;
static void C_ccall trf_10861(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10861(t0,t1,t2);}

C_noret_decl(trf_10895)
static void C_ccall trf_10895(C_word c,C_word *av) C_noret;
static void C_ccall trf_10895(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10895(t0,t1,t2);}

C_noret_decl(trf_10929)
static void C_ccall trf_10929(C_word c,C_word *av) C_noret;
static void C_ccall trf_10929(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10929(t0,t1,t2);}

C_noret_decl(trf_11161)
static void C_ccall trf_11161(C_word c,C_word *av) C_noret;
static void C_ccall trf_11161(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11161(t0,t1,t2);}

C_noret_decl(trf_11174)
static void C_ccall trf_11174(C_word c,C_word *av) C_noret;
static void C_ccall trf_11174(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11174(t0,t1);}

C_noret_decl(trf_11254)
static void C_ccall trf_11254(C_word c,C_word *av) C_noret;
static void C_ccall trf_11254(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11254(t0,t1,t2,t3);}

C_noret_decl(trf_11306)
static void C_ccall trf_11306(C_word c,C_word *av) C_noret;
static void C_ccall trf_11306(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11306(t0,t1);}

C_noret_decl(trf_11472)
static void C_ccall trf_11472(C_word c,C_word *av) C_noret;
static void C_ccall trf_11472(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11472(t0,t1,t2);}

C_noret_decl(trf_11701)
static void C_ccall trf_11701(C_word c,C_word *av) C_noret;
static void C_ccall trf_11701(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11701(t0,t1,t2,t3);}

C_noret_decl(trf_11751)
static void C_ccall trf_11751(C_word c,C_word *av) C_noret;
static void C_ccall trf_11751(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11751(t0,t1,t2,t3);}

C_noret_decl(trf_11820)
static void C_ccall trf_11820(C_word c,C_word *av) C_noret;
static void C_ccall trf_11820(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11820(t0,t1);}

C_noret_decl(trf_12056)
static void C_ccall trf_12056(C_word c,C_word *av) C_noret;
static void C_ccall trf_12056(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12056(t0,t1,t2);}

C_noret_decl(trf_12096)
static void C_ccall trf_12096(C_word c,C_word *av) C_noret;
static void C_ccall trf_12096(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12096(t0,t1,t2);}

C_noret_decl(trf_12182)
static void C_ccall trf_12182(C_word c,C_word *av) C_noret;
static void C_ccall trf_12182(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_12182(t0,t1,t2,t3,t4);}

C_noret_decl(trf_12238)
static void C_ccall trf_12238(C_word c,C_word *av) C_noret;
static void C_ccall trf_12238(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12238(t0,t1,t2,t3);}

C_noret_decl(trf_12335)
static void C_ccall trf_12335(C_word c,C_word *av) C_noret;
static void C_ccall trf_12335(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12335(t0,t1,t2);}

C_noret_decl(trf_12379)
static void C_ccall trf_12379(C_word c,C_word *av) C_noret;
static void C_ccall trf_12379(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12379(t0,t1,t2,t3);}

C_noret_decl(trf_12433)
static void C_ccall trf_12433(C_word c,C_word *av) C_noret;
static void C_ccall trf_12433(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12433(t0,t1);}

C_noret_decl(trf_12603)
static void C_ccall trf_12603(C_word c,C_word *av) C_noret;
static void C_ccall trf_12603(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12603(t0,t1,t2);}

C_noret_decl(trf_12637)
static void C_ccall trf_12637(C_word c,C_word *av) C_noret;
static void C_ccall trf_12637(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12637(t0,t1,t2);}

C_noret_decl(trf_12705)
static void C_ccall trf_12705(C_word c,C_word *av) C_noret;
static void C_ccall trf_12705(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12705(t0,t1,t2,t3);}

C_noret_decl(trf_12755)
static void C_ccall trf_12755(C_word c,C_word *av) C_noret;
static void C_ccall trf_12755(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12755(t0,t1,t2,t3);}

C_noret_decl(trf_12774)
static void C_ccall trf_12774(C_word c,C_word *av) C_noret;
static void C_ccall trf_12774(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12774(t0,t1);}

C_noret_decl(trf_12915)
static void C_ccall trf_12915(C_word c,C_word *av) C_noret;
static void C_ccall trf_12915(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12915(t0,t1);}

C_noret_decl(trf_12988)
static void C_ccall trf_12988(C_word c,C_word *av) C_noret;
static void C_ccall trf_12988(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12988(t0,t1,t2);}

C_noret_decl(trf_12998)
static void C_ccall trf_12998(C_word c,C_word *av) C_noret;
static void C_ccall trf_12998(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12998(t0,t1);}

C_noret_decl(trf_13039)
static void C_ccall trf_13039(C_word c,C_word *av) C_noret;
static void C_ccall trf_13039(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13039(t0,t1,t2);}

C_noret_decl(trf_13174)
static void C_ccall trf_13174(C_word c,C_word *av) C_noret;
static void C_ccall trf_13174(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13174(t0,t1,t2);}

C_noret_decl(trf_4367)
static void C_ccall trf_4367(C_word c,C_word *av) C_noret;
static void C_ccall trf_4367(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4367(t0,t1,t2);}

C_noret_decl(trf_4425)
static void C_ccall trf_4425(C_word c,C_word *av) C_noret;
static void C_ccall trf_4425(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4425(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5791)
static void C_ccall trf_5791(C_word c,C_word *av) C_noret;
static void C_ccall trf_5791(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5791(t0,t1);}

C_noret_decl(trf_5814)
static void C_ccall trf_5814(C_word c,C_word *av) C_noret;
static void C_ccall trf_5814(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5814(t0,t1);}

C_noret_decl(trf_5965)
static void C_ccall trf_5965(C_word c,C_word *av) C_noret;
static void C_ccall trf_5965(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_5965(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_6160)
static void C_ccall trf_6160(C_word c,C_word *av) C_noret;
static void C_ccall trf_6160(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_6160(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6359)
static void C_ccall trf_6359(C_word c,C_word *av) C_noret;
static void C_ccall trf_6359(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6359(t0,t1,t2);}

C_noret_decl(trf_6408)
static void C_ccall trf_6408(C_word c,C_word *av) C_noret;
static void C_ccall trf_6408(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6408(t0,t1,t2,t3);}

C_noret_decl(trf_6427)
static void C_ccall trf_6427(C_word c,C_word *av) C_noret;
static void C_ccall trf_6427(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6427(t0,t1);}

C_noret_decl(trf_6433)
static void C_ccall trf_6433(C_word c,C_word *av) C_noret;
static void C_ccall trf_6433(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6433(t0,t1);}

C_noret_decl(trf_6440)
static void C_ccall trf_6440(C_word c,C_word *av) C_noret;
static void C_ccall trf_6440(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6440(t0,t1);}

C_noret_decl(trf_6448)
static void C_ccall trf_6448(C_word c,C_word *av) C_noret;
static void C_ccall trf_6448(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6448(t0,t1);}

C_noret_decl(trf_6638)
static void C_ccall trf_6638(C_word c,C_word *av) C_noret;
static void C_ccall trf_6638(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6638(t0,t1,t2);}

C_noret_decl(trf_6676)
static void C_ccall trf_6676(C_word c,C_word *av) C_noret;
static void C_ccall trf_6676(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6676(t0,t1,t2);}

C_noret_decl(trf_6699)
static void C_ccall trf_6699(C_word c,C_word *av) C_noret;
static void C_ccall trf_6699(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6699(t0,t1,t2);}

C_noret_decl(trf_6873)
static void C_ccall trf_6873(C_word c,C_word *av) C_noret;
static void C_ccall trf_6873(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6873(t0,t1,t2);}

C_noret_decl(trf_6879)
static void C_ccall trf_6879(C_word c,C_word *av) C_noret;
static void C_ccall trf_6879(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6879(t0,t1,t2);}

C_noret_decl(trf_6957)
static void C_ccall trf_6957(C_word c,C_word *av) C_noret;
static void C_ccall trf_6957(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6957(t0,t1,t2);}

C_noret_decl(trf_6965)
static void C_ccall trf_6965(C_word c,C_word *av) C_noret;
static void C_ccall trf_6965(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6965(t0,t1,t2,t3);}

C_noret_decl(trf_6989)
static void C_ccall trf_6989(C_word c,C_word *av) C_noret;
static void C_ccall trf_6989(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6989(t0,t1);}

C_noret_decl(trf_7033)
static void C_ccall trf_7033(C_word c,C_word *av) C_noret;
static void C_ccall trf_7033(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7033(t0,t1,t2,t3);}

C_noret_decl(trf_7081)
static void C_ccall trf_7081(C_word c,C_word *av) C_noret;
static void C_ccall trf_7081(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7081(t0,t1,t2,t3);}

C_noret_decl(trf_7249)
static void C_ccall trf_7249(C_word c,C_word *av) C_noret;
static void C_ccall trf_7249(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7249(t0,t1,t2);}

C_noret_decl(trf_7349)
static void C_ccall trf_7349(C_word c,C_word *av) C_noret;
static void C_ccall trf_7349(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7349(t0,t1,t2,t3);}

C_noret_decl(trf_7581)
static void C_ccall trf_7581(C_word c,C_word *av) C_noret;
static void C_ccall trf_7581(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7581(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7642)
static void C_ccall trf_7642(C_word c,C_word *av) C_noret;
static void C_ccall trf_7642(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7642(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7648)
static void C_ccall trf_7648(C_word c,C_word *av) C_noret;
static void C_ccall trf_7648(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7648(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7748)
static void C_ccall trf_7748(C_word c,C_word *av) C_noret;
static void C_ccall trf_7748(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7748(t0,t1,t2);}

C_noret_decl(trf_7764)
static void C_ccall trf_7764(C_word c,C_word *av) C_noret;
static void C_ccall trf_7764(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7764(t0,t1,t2);}

C_noret_decl(trf_7794)
static void C_ccall trf_7794(C_word c,C_word *av) C_noret;
static void C_ccall trf_7794(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7794(t0,t1,t2);}

C_noret_decl(trf_7844)
static void C_ccall trf_7844(C_word c,C_word *av) C_noret;
static void C_ccall trf_7844(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7844(t0,t1,t2);}

C_noret_decl(trf_7878)
static void C_ccall trf_7878(C_word c,C_word *av) C_noret;
static void C_ccall trf_7878(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7878(t0,t1,t2);}

C_noret_decl(trf_7912)
static void C_ccall trf_7912(C_word c,C_word *av) C_noret;
static void C_ccall trf_7912(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7912(t0,t1,t2);}

C_noret_decl(trf_7946)
static void C_ccall trf_7946(C_word c,C_word *av) C_noret;
static void C_ccall trf_7946(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7946(t0,t1,t2);}

C_noret_decl(trf_8010)
static void C_ccall trf_8010(C_word c,C_word *av) C_noret;
static void C_ccall trf_8010(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8010(t0,t1,t2,t3);}

C_noret_decl(trf_8153)
static void C_ccall trf_8153(C_word c,C_word *av) C_noret;
static void C_ccall trf_8153(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8153(t0,t1);}

C_noret_decl(trf_8165)
static void C_ccall trf_8165(C_word c,C_word *av) C_noret;
static void C_ccall trf_8165(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8165(t0,t1);}

C_noret_decl(trf_8376)
static void C_ccall trf_8376(C_word c,C_word *av) C_noret;
static void C_ccall trf_8376(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8376(t0,t1,t2,t3);}

C_noret_decl(trf_8424)
static void C_ccall trf_8424(C_word c,C_word *av) C_noret;
static void C_ccall trf_8424(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8424(t0,t1,t2);}

C_noret_decl(trf_8458)
static void C_ccall trf_8458(C_word c,C_word *av) C_noret;
static void C_ccall trf_8458(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8458(t0,t1,t2,t3);}

C_noret_decl(trf_8494)
static void C_ccall trf_8494(C_word c,C_word *av) C_noret;
static void C_ccall trf_8494(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8494(t0,t1,t2);}

C_noret_decl(trf_8528)
static void C_ccall trf_8528(C_word c,C_word *av) C_noret;
static void C_ccall trf_8528(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8528(t0,t1,t2);}

C_noret_decl(trf_8583)
static void C_ccall trf_8583(C_word c,C_word *av) C_noret;
static void C_ccall trf_8583(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8583(t0,t1,t2);}

C_noret_decl(trf_8713)
static void C_ccall trf_8713(C_word c,C_word *av) C_noret;
static void C_ccall trf_8713(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8713(t0,t1,t2);}

C_noret_decl(trf_8760)
static void C_ccall trf_8760(C_word c,C_word *av) C_noret;
static void C_ccall trf_8760(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8760(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8779)
static void C_ccall trf_8779(C_word c,C_word *av) C_noret;
static void C_ccall trf_8779(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8779(t0,t1,t2);}

C_noret_decl(trf_8795)
static void C_ccall trf_8795(C_word c,C_word *av) C_noret;
static void C_ccall trf_8795(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8795(t0,t1,t2);}

C_noret_decl(trf_8909)
static void C_ccall trf_8909(C_word c,C_word *av) C_noret;
static void C_ccall trf_8909(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8909(t0,t1,t2);}

C_noret_decl(trf_8943)
static void C_ccall trf_8943(C_word c,C_word *av) C_noret;
static void C_ccall trf_8943(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8943(t0,t1,t2,t3);}

C_noret_decl(trf_8987)
static void C_ccall trf_8987(C_word c,C_word *av) C_noret;
static void C_ccall trf_8987(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8987(t0,t1,t2);}

C_noret_decl(trf_9021)
static void C_ccall trf_9021(C_word c,C_word *av) C_noret;
static void C_ccall trf_9021(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9021(t0,t1,t2,t3);}

C_noret_decl(trf_9059)
static void C_ccall trf_9059(C_word c,C_word *av) C_noret;
static void C_ccall trf_9059(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9059(t0,t1,t2);}

C_noret_decl(trf_9166)
static void C_ccall trf_9166(C_word c,C_word *av) C_noret;
static void C_ccall trf_9166(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9166(t0,t1,t2);}

C_noret_decl(trf_9200)
static void C_ccall trf_9200(C_word c,C_word *av) C_noret;
static void C_ccall trf_9200(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9200(t0,t1,t2);}

C_noret_decl(trf_9309)
static void C_ccall trf_9309(C_word c,C_word *av) C_noret;
static void C_ccall trf_9309(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9309(t0,t1,t2);}

C_noret_decl(trf_9346)
static void C_ccall trf_9346(C_word c,C_word *av) C_noret;
static void C_ccall trf_9346(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9346(t0,t1,t2);}

C_noret_decl(trf_9430)
static void C_ccall trf_9430(C_word c,C_word *av) C_noret;
static void C_ccall trf_9430(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9430(t0,t1,t2);}

C_noret_decl(trf_9448)
static void C_ccall trf_9448(C_word c,C_word *av) C_noret;
static void C_ccall trf_9448(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9448(t0,t1);}

C_noret_decl(trf_9463)
static void C_ccall trf_9463(C_word c,C_word *av) C_noret;
static void C_ccall trf_9463(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9463(t0,t1);}

C_noret_decl(trf_9593)
static void C_ccall trf_9593(C_word c,C_word *av) C_noret;
static void C_ccall trf_9593(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9593(t0,t1,t2,t3);}

C_noret_decl(trf_9641)
static void C_ccall trf_9641(C_word c,C_word *av) C_noret;
static void C_ccall trf_9641(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9641(t0,t1,t2,t3);}

C_noret_decl(trf_9689)
static void C_ccall trf_9689(C_word c,C_word *av) C_noret;
static void C_ccall trf_9689(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9689(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9696)
static void C_ccall trf_9696(C_word c,C_word *av) C_noret;
static void C_ccall trf_9696(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9696(t0,t1);}

C_noret_decl(trf_9830)
static void C_ccall trf_9830(C_word c,C_word *av) C_noret;
static void C_ccall trf_9830(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9830(t0,t1,t2,t3);}

C_noret_decl(trf_9878)
static void C_ccall trf_9878(C_word c,C_word *av) C_noret;
static void C_ccall trf_9878(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9878(t0,t1,t2,t3);}

C_noret_decl(trf_9926)
static void C_ccall trf_9926(C_word c,C_word *av) C_noret;
static void C_ccall trf_9926(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9926(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9933)
static void C_ccall trf_9933(C_word c,C_word *av) C_noret;
static void C_ccall trf_9933(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9933(t0,t1);}

C_noret_decl(trf_9996)
static void C_ccall trf_9996(C_word c,C_word *av) C_noret;
static void C_ccall trf_9996(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9996(t0,t1,t2,t3);}

/* map-loop1789 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in ... */
static void C_fcall f_10044(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10044,4,t0,t1,t2,t3);}
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

/* map-loop1758 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_fcall f_10092(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10092,4,t0,t1,t2,t3);}
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

/* map-loop1728 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_fcall f_10140(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10140,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:560: g1734 */
t4=((C_word*)t0)[4];
f_9463(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10163 in map-loop1728 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_ccall f_10165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10165,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10140(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1700 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_fcall f_10174(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10174,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:559: g1706 */
t4=((C_word*)t0)[4];
f_9448(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10197 in map-loop1700 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_10199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10199,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10174(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1672 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in ... */
static void C_fcall f_10208(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10208,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:558: g1678 */
t4=((C_word*)t0)[4];
f_9430(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10231 in map-loop1672 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_10233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10233,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10208(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1645 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in ... */
static void C_fcall f_10242(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10242,3,t0,t1,t2);}
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

/* map-loop1618 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
static void C_fcall f_10276(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10276,3,t0,t1,t2);}
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

/* k10310 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_10312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10312,c,av);}
/* chicken-syntax.scm:512: ##sys#extend-macro-environment */
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

/* a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_10314(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10314,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10318,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:516: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[181];
av2[3]=t2;
av2[4]=lf[182];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_10318(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10318,c,av);}
a=C_alloc(19);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t2,lf[65]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10332,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10929,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li115),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_10929(t14,t10,t2);}

/* k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in ... */
static void C_ccall f_10332(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10332,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10336,a[2]=((C_word*)t0)[2],a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10895,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li114),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10895(t11,t7,((C_word*)t0)[5]);}

/* g1321 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in ... */
static void C_fcall f_10336(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_10336,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10344,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:520: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10342 in g1321 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
static void C_ccall f_10344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10344,c,av);}
/* chicken-syntax.scm:520: r */
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

/* k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in ... */
static void C_ccall f_10347(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10347,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10351,a[2]=((C_word*)t0)[2],a[3]=((C_word)li104),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10362,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10861,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li113),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10861(t11,t7,((C_word*)t0)[6]);}

/* g1349 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
static void C_fcall f_10351(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_10351,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10359,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:521: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10357 in g1349 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in ... */
static void C_ccall f_10359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10359,c,av);}
/* chicken-syntax.scm:521: r */
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

/* k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
static void C_ccall f_10362(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10362,c,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10682,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=t5,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10827,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_10827(t15,t11,((C_word*)t0)[6]);}

/* k10367 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in ... */
static void C_ccall f_10369(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10369,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[65]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10552,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10626,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li108),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10626(t12,t8,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k10391 in k10535 in k10367 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_10393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_10393,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[20],t2);
t4=C_a_i_list(&a,4,lf[177],((C_word*)t0)[2],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10403 in k10535 in k10367 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_10405(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10405,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10409,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10421,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10431,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10431(t11,t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10407 in k10403 in k10535 in k10367 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_10409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10409,c,av);}
/* chicken-syntax.scm:522: ##sys#append */
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

/* k10419 in k10403 in k10535 in k10367 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_10421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10421,c,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[163]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:522: ##sys#append */
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

/* map-loop1572 in k10403 in k10535 in k10367 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_fcall f_10431(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10431,4,t0,t1,t2,t3);}
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

/* map-loop1536 in k10535 in k10367 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_fcall f_10479(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10479,4,t0,t1,t2,t3);}
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

/* k10535 in k10367 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in ... */
static void C_ccall f_10537(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10537,c,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[20],t2);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[20],t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10393,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10405,a[2]=t6,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10479,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_10479(t15,t11,((C_word*)t0)[7],((C_word*)t0)[5]);}

/* k10550 in k10367 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in ... */
static void C_ccall f_10552(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10552,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10556,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10568,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10578,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10578(t11,t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10554 in k10550 in k10367 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_10556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10556,c,av);}
/* chicken-syntax.scm:522: ##sys#append */
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

/* k10566 in k10550 in k10367 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_10568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10568,c,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[163]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:522: ##sys#append */
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

/* map-loop1500 in k10550 in k10367 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_fcall f_10578(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10578,4,t0,t1,t2,t3);}
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

/* map-loop1464 in k10367 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in ... */
static void C_fcall f_10626(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10626,4,t0,t1,t2,t3);}
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

/* k10680 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in ... */
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_10682,c,av);}
a=C_alloc(13);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t3=C_i_check_list_2(t1,lf[65]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10691,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10779,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],a[5]=((C_word)li111),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_10779(t8,t4,((C_word*)t0)[2],t1);}

/* k10689 in k10680 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in ... */
static void C_ccall f_10691(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10691,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10698,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t7=C_u_i_length(((C_word*)t0)[4]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10759,a[2]=t9,a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_10759(t11,t6,t7);}

/* k10696 in k10689 in k10680 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_10698(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10698,c,av);}
a=C_alloc(12);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t3=C_i_check_list_2(t1,lf[65]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10707,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10709,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=((C_word*)t0)[6],a[5]=((C_word)li109),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_10709(t8,t4,((C_word*)t0)[2],t1);}

/* k10705 in k10696 in k10689 in k10680 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_10707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10707,c,av);}
/* chicken-syntax.scm:522: ##sys#append */
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

/* map-loop1430 in k10696 in k10689 in k10680 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_fcall f_10709(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10709,4,t0,t1,t2,t3);}
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

/* loop in k10689 in k10680 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_fcall f_10759(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10759,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10773,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:528: loop */
t6=t4;
t7=C_fixnum_difference(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}

/* k10771 in loop in k10689 in k10680 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_10773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10773,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1373 in k10680 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in ... */
static void C_fcall f_10779(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10779,4,t0,t1,t2,t3);}
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

/* map-loop1394 in k10360 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in ... */
static void C_fcall f_10827(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10827,3,t0,t1,t2);}
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

/* map-loop1343 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
static void C_fcall f_10861(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10861,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:521: g1349 */
t4=((C_word*)t0)[4];
f_10351(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10884 in map-loop1343 in k10345 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in ... */
static void C_ccall f_10886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10886,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10861(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1315 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in ... */
static void C_fcall f_10895(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10895,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:520: g1321 */
t4=((C_word*)t0)[4];
f_10336(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10918 in map-loop1315 in k10330 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
static void C_ccall f_10920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10920,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10895(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1288 in k10316 in a10313 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in ... */
static void C_fcall f_10929(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10929,3,t0,t1,t2);}
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

/* k10963 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in ... */
static void C_ccall f_10965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10965,c,av);}
/* chicken-syntax.scm:505: ##sys#extend-macro-environment */
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

/* a10966 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in ... */
static void C_ccall f_10967(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10967,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10971,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:509: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[183];
av2[3]=t2;
av2[4]=lf[186];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10969 in a10966 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_10971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10971,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[184],t2,*((C_word*)lf[185]+1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10980 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in ... */
static void C_ccall f_10982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10982,c,av);}
/* chicken-syntax.scm:498: ##sys#extend-macro-environment */
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

/* a10983 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in ... */
static void C_ccall f_10984(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10984,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10988,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:502: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[187];
av2[3]=t2;
av2[4]=lf[188];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k10986 in a10983 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in ... */
static void C_ccall f_10988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_10988,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[184],t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10997 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in ... */
static void C_ccall f_10999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10999,c,av);}
/* chicken-syntax.scm:490: ##sys#extend-macro-environment */
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

/* a11000 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in ... */
static void C_ccall f_11001(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11001,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11005,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:495: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[189];
av2[3]=t2;
av2[4]=lf[191];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11003 in a11000 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in ... */
static void C_ccall f_11005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_11005,c,av);}
a=C_alloc(15);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[190],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11018 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in ... */
static void C_ccall f_11020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11020,c,av);}
/* chicken-syntax.scm:484: ##sys#extend-macro-environment */
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

/* a11021 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in ... */
static void C_ccall f_11022(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11022,c,av);}
a=C_alloc(3);
t5=C_i_cdr(t2);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,lf[193],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k11032 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in ... */
static void C_ccall f_11034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11034,c,av);}
/* chicken-syntax.scm:465: ##sys#extend-macro-environment */
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

/* a11035 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in ... */
static void C_ccall f_11036(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11036,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11040,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:470: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[194];
av2[3]=t2;
av2[4]=lf[197];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11038 in a11035 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in ... */
static void C_ccall f_11040(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11040,c,av);}
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
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11062,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:474: ##sys#check-syntax */
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

/* k11060 in k11038 in a11035 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in ... */
static void C_ccall f_11062(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11062,c,av);}
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

/* k11125 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in ... */
static void C_ccall f_11127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11127,c,av);}
/* chicken-syntax.scm:393: ##sys#extend-macro-environment */
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

/* a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in ... */
static void C_ccall f_11129(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11129,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11133,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:397: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[198];
av2[3]=t2;
av2[4]=lf[208];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in ... */
static void C_ccall f_11133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11133,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11139,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:399: chicken.syntax#strip-syntax */
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

/* k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in ... */
static void C_ccall f_11139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11139,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:400: scheme#symbol->string */
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

/* k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in ... */
static void C_ccall f_11142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_11142,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11507,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:401: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in ... */
static void C_ccall f_11145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11145,c,av);}
a=C_alloc(9);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11151,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:406: r */
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

/* k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in ... */
static void C_ccall f_11151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11151,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:407: r */
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

/* k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_11154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11154,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11157,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:408: r */
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

/* k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_11157(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11157,c,av);}
a=C_alloc(28);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li122),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[65]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11221,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11472,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li124),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_11472(t12,t8,((C_word*)t0)[4]);}

/* g1175 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in ... */
static void C_fcall f_11161(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_11161,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_symbolp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11174,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11189,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:413: c */
t5=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_u_i_car(t2);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* chicken-syntax.scm:419: chicken.syntax#syntax-error */
t4=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[198];
av2[3]=lf[199];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}}

/* k11172 in g1175 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in ... */
static void C_fcall f_11174(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_11174,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-syntax.scm:419: chicken.syntax#syntax-error */
t2=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[198];
av2[3]=lf[199];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k11187 in g1175 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in ... */
static void C_ccall f_11189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11189,c,av);}
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
/* chicken-syntax.scm:419: chicken.syntax#syntax-error */
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
/* chicken-syntax.scm:419: chicken.syntax#syntax-error */
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
f_11174(t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
f_11174(t2,C_SCHEME_FALSE);}}

/* k11219 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in ... */
static void C_ccall f_11221(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11221,c,av);}
a=C_alloc(28);
t2=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11444,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11464,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
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

/* k11250 in k11416 in k11442 in k11219 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in ... */
static void C_ccall f_11252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_11252,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[26],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* mapslots in k11416 in k11442 in k11219 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in ... */
static void C_fcall f_11254(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_11254,4,t0,t1,t2,t3);}
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
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11270,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t7,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t7)){
/* chicken-syntax.scm:437: scheme#symbol->string */
t9=*((C_word*)lf[119]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cadr(t5);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* chicken-syntax.scm:437: scheme#symbol->string */
t9=*((C_word*)lf[119]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}}

/* k11268 in mapslots in k11416 in k11442 in k11219 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in ... */
static void C_ccall f_11270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_11270,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_11273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11403,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:438: scheme#string-append */
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

/* k11271 in k11268 in mapslots in k11416 in k11442 in k11219 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_11273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_11273,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11399,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:439: scheme#string-append */
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

/* k11274 in k11271 in k11268 in mapslots in k11416 in k11442 in k11219 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_11276(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11276,c,av);}
a=C_alloc(79);
t2=C_a_i_list(&a,2,lf[77],lf[200]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[71],lf[77],t3);
t5=C_a_i_list(&a,2,lf[32],t4);
t6=C_a_i_list(&a,4,lf[74],lf[77],((C_word*)t0)[3],lf[200]);
t7=C_a_i_list(&a,4,lf[20],t2,t5,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11302,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11306,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],a[6]=t7,a[7]=((C_word*)t0)[9],a[8]=t1,a[9]=t8,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t10=t9;
f_11306(t10,C_SCHEME_END_OF_LIST);}
else{
t10=C_a_i_list(&a,3,((C_word*)t0)[9],((C_word*)t0)[10],t7);
t11=t9;
f_11306(t11,C_a_i_list(&a,1,t10));}}

/* k11288 in k11300 in k11274 in k11271 in k11268 in mapslots in k11416 in k11442 in k11219 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in ... */
static void C_ccall f_11290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11290,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11300 in k11274 in k11271 in k11268 in mapslots in k11416 in k11442 in k11219 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_ccall f_11302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11302,c,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,lf[26],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11290,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:463: mapslots */
t4=((C_word*)((C_word*)t0)[3])[1];
f_11254(t4,t3,C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* k11304 in k11274 in k11271 in k11268 in mapslots in k11416 in k11442 in k11219 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_fcall f_11306(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_11306,2,t0,t1);}
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
/* chicken-syntax.scm:446: ##sys#append */
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
/* chicken-syntax.scm:446: ##sys#append */
t10=*((C_word*)lf[53]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=((C_word*)t0)[9];
av2[2]=t1;
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}

/* k11397 in k11271 in k11268 in mapslots in k11416 in k11442 in k11219 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_11399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11399,c,av);}
/* chicken-syntax.scm:439: scheme#string->symbol */
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

/* k11401 in k11268 in mapslots in k11416 in k11442 in k11219 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_11403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11403,c,av);}
/* chicken-syntax.scm:438: scheme#string->symbol */
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

/* k11416 in k11442 in k11219 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
static void C_ccall f_11418(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11418,c,av);}
a=C_alloc(52);
t2=C_a_i_list(&a,1,lf[77]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[70],lf[77],t3);
t5=C_a_i_list(&a,3,lf[20],t2,t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[3],t1,t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11252,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11254,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[8],a[7]=((C_word)li123),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_11254(t11,t7,((C_word*)t0)[9],C_fix(1));}

/* k11436 in k11442 in k11219 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
static void C_ccall f_11438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11438,c,av);}
/* chicken-syntax.scm:430: scheme#string->symbol */
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

/* k11442 in k11219 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in ... */
static void C_ccall f_11444(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11444,c,av);}
a=C_alloc(43);
t2=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,lf[69],t3);
t5=C_a_i_list(&a,3,lf[20],((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[4],t1,t5);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11438,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
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

/* k11462 in k11219 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in ... */
static void C_ccall f_11464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11464,c,av);}
/* chicken-syntax.scm:425: scheme#string->symbol */
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

/* map-loop1169 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in ... */
static void C_fcall f_11472(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11472,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:410: g1175 */
t4=((C_word*)t0)[4];
f_11161(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11495 in map-loop1169 in k11155 in k11152 in k11149 in k11143 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in ... */
static void C_ccall f_11497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11497,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11472(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k11505 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in ... */
static void C_ccall f_11507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11507,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11518,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:403: ##sys#current-module */
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
f_11145(2,av2);}}}

/* k11512 in k11505 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in ... */
static void C_ccall f_11514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11514,c,av);}
/* chicken-syntax.scm:402: chicken.base#symbol-append */
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

/* k11516 in k11505 in k11140 in k11137 in k11131 in a11128 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in ... */
static void C_ccall f_11518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11518,c,av);}
/* chicken-syntax.scm:403: ##sys#module-name */
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

/* k11524 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in ... */
static void C_ccall f_11526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11526,c,av);}
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
av2[2]=lf[209];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11527 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in ... */
static void C_ccall f_11528(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11528,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=setpixel(C_fix(-1),C_fix(-1),C_fix(0),C_fix(0),C_fix(0),C_fix(0));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k11539 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in ... */
static void C_ccall f_11541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11541,c,av);}
/* chicken-syntax.scm:370: ##sys#extend-macro-environment */
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

/* a11542 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in ... */
static void C_ccall f_11543(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11543,c,av);}
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

/* k11610 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in ... */
static void C_ccall f_11612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11612,c,av);}
/* chicken-syntax.scm:361: ##sys#extend-macro-environment */
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
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11613 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in ... */
static void C_ccall f_11614(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11614,c,av);}
t5=C_i_cdr(t2);
t6=C_i_car(t5);
t7=ssdelay(t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_car(C_u_i_cdr(t2));
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k11634 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11636,c,av);}
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
av2[2]=lf[212];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11638(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11638,c,av);}
a=C_alloc(14);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11648,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11677,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11733,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:309: ##sys#list? */
t9=*((C_word*)lf[219]+1);{
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
f_11648(2,av2);}}}

/* k11646 in a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 in ... */
static void C_ccall f_11648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11648,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11661,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
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
av2[2]=lf[213];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* chicken-syntax.scm:309: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[214]+1);{
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

/* k11659 in k11646 in a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in ... */
static void C_ccall f_11661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11661,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11675 in a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 in ... */
static void C_ccall f_11677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11677,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11683,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:309: ##sys#list? */
t3=*((C_word*)lf[219]+1);{
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
f_11648(2,av2);}}}

/* k11681 in k11675 in a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in ... */
static void C_ccall f_11683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11683,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11686,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:309: ##sys#length */
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
f_11648(2,av2);}}}

/* k11684 in k11681 in k11675 in a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in ... */
static void C_ccall f_11686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11686,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11692,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#>= */
t3=*((C_word*)lf[217]+1);{
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

/* k11690 in k11684 in k11681 in k11675 in a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in ... */
static void C_ccall f_11692(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11692,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11701,a[2]=t4,a[3]=((C_word)li129),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11701(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11648(2,av2);}}}

/* loop1088 in k11690 in k11684 in k11681 in k11675 in a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in ... */
static void C_fcall f_11701(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11701,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11708,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:309: ##sys#= */
t5=*((C_word*)lf[216]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11706 in loop1088 in k11690 in k11684 in k11681 in k11675 in a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in ... */
static void C_ccall f_11708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11708,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11722,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#+ */
t4=*((C_word*)lf[215]+1);{
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

/* k11720 in k11706 in loop1088 in k11690 in k11684 in k11681 in k11675 in a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in ... */
static void C_ccall f_11722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11722,c,av);}
/* chicken-syntax.scm:309: loop1088 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11701(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k11731 in a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 in ... */
static void C_ccall f_11733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11733,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:309: ##sys#length */
t3=*((C_word*)lf[218]+1);{
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
f_11677(2,av2);}}}

/* k11734 in k11731 in a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in ... */
static void C_ccall f_11736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11736,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#>= */
t3=*((C_word*)lf[217]+1);{
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

/* k11740 in k11734 in k11731 in a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in ... */
static void C_ccall f_11742(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11742,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11751,a[2]=t4,a[3]=((C_word)li130),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11751(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_11677(2,av2);}}}

/* loop1088 in k11740 in k11734 in k11731 in a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in ... */
static void C_fcall f_11751(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11751,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11758,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:309: ##sys#= */
t5=*((C_word*)lf[216]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11756 in loop1088 in k11740 in k11734 in k11731 in a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in ... */
static void C_ccall f_11758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11758,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11772,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:309: ##sys#+ */
t4=*((C_word*)lf[215]+1);{
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

/* k11770 in k11756 in loop1088 in k11740 in k11734 in k11731 in a11637 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in ... */
static void C_ccall f_11772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11772,c,av);}
/* chicken-syntax.scm:309: loop1088 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11751(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k11782 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11784,c,av);}
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
av2[2]=lf[220];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11785 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11786(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11786,c,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_eqp(C_i_cdr(t5),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11806,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:301: rename1057 */
t10=t3;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[221];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11820,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t9=C_i_cdr(t5);
t10=C_i_pairp(t9);
t11=t8;
f_11820(t11,(C_truep(t10)?C_eqp(C_i_cdr(t9),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}
else{
t9=t8;
f_11820(t9,C_SCHEME_FALSE);}}}

/* k11804 in a11785 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11806,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11818 in a11785 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_fcall f_11820(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11820,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11833,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:301: rename1057 */
t6=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[221];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* chicken-syntax.scm:301: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[214]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k11831 in k11818 in a11785 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 in ... */
static void C_ccall f_11833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11833,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11879 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11881,c,av);}
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
av2[2]=lf[222];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11882 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11883(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11883,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11887,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:292: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[222];
av2[3]=t2;
av2[4]=lf[224];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11885 in a11882 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11887,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11894,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
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
av2[2]=lf[223];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11892 in k11885 in a11882 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11894,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
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

/* k11900 in k11892 in k11885 in a11882 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 in ... */
static void C_ccall f_11902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11902,c,av);}
a=C_alloc(9);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11908 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11910,c,av);}
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
av2[2]=lf[223];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11911 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11912(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11912,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11916,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:284: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[223];
av2[3]=t2;
av2[4]=lf[227];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11914 in a11911 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11916,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,lf[26],t3);
/* chicken-syntax.scm:285: ##sys#register-meta-expression */
t5=*((C_word*)lf[226]+1);{
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

/* k11917 in k11914 in a11911 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11919,c,av);}
a=C_alloc(9);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[26],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[225],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11938 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11940,c,av);}
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
av2[2]=lf[228];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11941 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11942(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11942,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11946,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:277: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[228];
av2[3]=t2;
av2[4]=lf[230];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11944 in a11941 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_11946,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[229],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11955 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11957,c,av);}
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
av2[2]=lf[231];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a11958 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11959(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11959,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11963,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:251: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[231];
av2[3]=t2;
av2[4]=lf[239];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k11961 in a11958 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11963,c,av);}
a=C_alloc(5);
t2=C_i_memq(lf[232],*((C_word*)lf[233]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[234];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
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

/* k11970 in k11961 in a11958 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11972,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11975,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
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
av2[2]=lf[238];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11973 in k11970 in k11961 in a11958 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11975,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11978,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
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

/* k11976 in k11973 in k11970 in k11961 in a11958 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_11978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_11978,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],lf[235]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12001,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:262: chicken.compiler.scrutinizer#check-and-validate-type */
t5=*((C_word*)lf[237]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t1;
av2[3]=lf[231];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k11999 in k11976 in k11973 in k11970 in k11961 in a11958 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_12001,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[236],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[225],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12015 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12017,c,av);}
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
av2[2]=lf[240];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12018 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12019(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12019,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12023,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:226: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[240];
av2[3]=t2;
av2[4]=lf[243];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12021 in a12018 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12023,c,av);}
a=C_alloc(5);
t2=C_i_memq(lf[232],*((C_word*)lf[233]+1));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12029,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:228: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12027 in k12021 in a12018 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12029,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12032,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
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

/* k12030 in k12027 in k12021 in a12018 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12032(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12032,c,av);}
a=C_alloc(33);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12056,a[2]=((C_word*)t0)[4],a[3]=((C_word)li137),tmp=(C_word)a,a+=4,tmp);
t10=C_u_i_cdr(((C_word*)t0)[2]);
t11=C_u_i_cdr(t10);
t12=C_i_check_list_2(t11,lf[65]);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12094,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12096,a[2]=t7,a[3]=t15,a[4]=t9,a[5]=t8,a[6]=((C_word)li138),tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_12096(t17,t13,t11);}

/* g974 in k12030 in k12027 in k12021 in a12018 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_fcall f_12056(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_12056,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12060,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:235: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[37]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k12058 in g974 in k12030 in k12027 in k12021 in a12018 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12060(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12060,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(t1,lf[241]);
if(C_truep(t3)){
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[26],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list2(&a,2,lf[241],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
/* chicken-syntax.scm:240: chicken.compiler.scrutinizer#check-and-validate-type */
t4=*((C_word*)lf[237]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[240];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[26],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list2(&a,2,t1,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}

/* k12065 in k12058 in g974 in k12030 in k12027 in k12021 in a12018 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_12067,c,av);}
a=C_alloc(9);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[26],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list2(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12092 in k12030 in k12027 in k12021 in a12018 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_12094,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,lf[242],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop968 in k12030 in k12027 in k12021 in a12018 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_fcall f_12096(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_12096,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:234: g974 */
t4=((C_word*)t0)[4];
f_12056(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12119 in map-loop968 in k12030 in k12027 in k12021 in a12018 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12121,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_12096(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k12138 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12140,c,av);}
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
av2[2]=lf[244];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12142(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12142,c,av);}
a=C_alloc(5);
t5=C_i_memq(lf[232],*((C_word*)lf[233]+1));
if(C_truep(C_i_not(t5))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=lf[245];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12152,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:164: ##sys#check-syntax */
t7=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[244];
av2[3]=t2;
av2[4]=lf[253];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}

/* k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_12152,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12161,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:167: ##sys#globalize */
t5=*((C_word*)lf[252]+1);{
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

/* k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_12161,c,av);}
a=C_alloc(8);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12165,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
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

/* k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_12165,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12168,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:170: ##sys#globalize */
t3=*((C_word*)lf[252]+1);{
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

/* k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12168(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12168,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12171,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
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
f_12171(2,av2);}}}

/* k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_12171,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12174,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
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

/* k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12174(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12174,c,av);}
a=C_alloc(13);
t2=(C_truep(((C_word*)t0)[2])?C_i_cadddr(((C_word*)t0)[3]):C_i_caddr(((C_word*)t0)[3]));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12182,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=t4,a[9]=((C_word*)t0)[7],a[10]=((C_word)li143),tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_12182(t6,((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_fcall f_12182(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_12182,5,t0,t1,t2,t3,t4);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t3,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
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
t8=C_a_i_cons(&a,2,lf[250],t4);
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
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12433,a[2]=t2,a[3]=t5,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[8],a[7]=t1,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_listp(t5))){
t7=C_eqp(C_fix(2),C_u_i_length(t5));
t8=t6;
f_12433(t8,(C_truep(t7)?C_i_symbolp(C_i_car(t5)):C_SCHEME_FALSE));}
else{
t7=t6;
f_12433(t7,C_SCHEME_FALSE);}}}}

/* k12190 in loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_12192,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
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

/* k12193 in k12190 in loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12195(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12195,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12379,a[2]=t4,a[3]=((C_word)li142),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12379(t6,t2,((C_word*)t0)[10],C_fix(1));}

/* k12199 in k12375 in k12193 in k12190 in loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in ... */
static void C_ccall f_12201(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12201,c,av);}
a=C_alloc(44);
t2=C_a_i_list(&a,2,lf[246],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[247],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[193],t2,t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12236,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12238,a[2]=t8,a[3]=t12,a[4]=t9,a[5]=((C_word)li140),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_12238(t14,t10,((C_word*)t0)[3],((C_word*)t0)[7]);}

/* k12234 in k12199 in k12375 in k12193 in k12190 in loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in ... */
static void C_ccall f_12236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_12236,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,3,lf[35],t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[26],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop913 in k12199 in k12375 in k12193 in k12190 in loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in ... */
static void C_fcall f_12238(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_12238,4,t0,t1,t2,t3);}
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

/* k12294 in k12375 in k12193 in k12190 in loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in ... */
static void C_ccall f_12296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12296,c,av);}
/* chicken-syntax.scm:184: ##sys#put! */
t2=*((C_word*)lf[248]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[249];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k12298 in k12375 in k12193 in k12190 in loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in ... */
static void C_ccall f_12300(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12300,c,av);}
a=C_alloc(19);
t2=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12333,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12335,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li141),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_12335(t12,t8,((C_word*)t0)[2]);}
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

/* k12331 in k12298 in k12375 in k12193 in k12190 in loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in ... */
static void C_ccall f_12333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_12333,c,av);}
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

/* map-loop879 in k12298 in k12375 in k12193 in k12190 in loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in ... */
static void C_fcall f_12335(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12335,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12360,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[237]+1);
/* chicken-syntax.scm:192: g902 */
t6=*((C_word*)lf[237]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[244];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12358 in map-loop879 in k12298 in k12375 in k12193 in k12190 in loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in ... */
static void C_ccall f_12360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12360,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_12335(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k12375 in k12193 in k12190 in loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 in ... */
static void C_ccall f_12377(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12377,c,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12201,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12296,a[2]=t3,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12300,a[2]=((C_word*)t0)[10],a[3]=t2,a[4]=((C_word*)t0)[8],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
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
av2[3]=lf[249];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* loop2 in k12193 in k12190 in loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 in ... */
static void C_fcall f_12379(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_12379,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_a_i_vector1(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12397,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:183: loop2 */
t7=t5;
t8=C_i_cdr(t2);
t9=C_fixnum_plus(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k12395 in loop2 in k12193 in k12190 in loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in ... */
static void C_ccall f_12397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12397,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12431 in loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_fcall f_12433(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,5)))){
C_save_and_reclaim_args((void *)trf_12433,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12450,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:214: chicken.compiler.scrutinizer#check-and-validate-type */
t6=*((C_word*)lf[237]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=lf[244];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
/* chicken-syntax.scm:218: chicken.syntax#syntax-error */
t2=*((C_word*)lf[56]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[7];
av2[2]=lf[244];
av2[3]=lf[251];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k12448 in k12431 in loop in k12172 in k12169 in k12166 in k12163 in k12159 in k12150 in a12141 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_12450,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:210: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_12182(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k12505 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12507,c,av);}
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
av2[2]=lf[254];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12509(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12509,c,av);}
a=C_alloc(14);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12519,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12681,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12737,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#list? */
t9=*((C_word*)lf[219]+1);{
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
f_12519(2,av2);}}}

/* k12517 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12519(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12519,c,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[65]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12536,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12637,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li147),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_12637(t12,t8,t6);}
else{
/* chicken-syntax.scm:154: chicken.internal.syntax-rules#syntax-rules-mismatch */
t2=*((C_word*)lf[214]+1);{
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

/* k12534 in k12517 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12536(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12536,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[65]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12603,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li146),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_12603(t12,t8,t6);}

/* k12555 in k12534 in k12517 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_12557,c,av);}
a=C_alloc(7);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12567,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
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
av2[2]=lf[257];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k12565 in k12555 in k12534 in k12517 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_12567,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12577,a[2]=((C_word*)t0)[4],a[3]=((C_word)li145),tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#map-n */
t4=*((C_word*)lf[256]+1);{
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

/* k12573 in k12565 in k12555 in k12534 in k12517 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12575,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a12576 in k12565 in k12555 in k12534 in k12517 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12577(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12577,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12593,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: rename737 */
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[255];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k12591 in a12576 in k12565 in k12555 in k12534 in k12517 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12593(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12593,c,av);}
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

/* map-loop810 in k12534 in k12517 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_fcall f_12603(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_12603,3,t0,t1,t2);}
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

/* map-loop782 in k12517 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_fcall f_12637(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_12637,3,t0,t1,t2);}
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

/* k12679 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12681,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#list? */
t3=*((C_word*)lf[219]+1);{
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
f_12519(2,av2);}}}

/* k12685 in k12679 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12687,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12690,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#length */
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
f_12519(2,av2);}}}

/* k12688 in k12685 in k12679 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12690,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#>= */
t3=*((C_word*)lf[217]+1);{
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

/* k12694 in k12688 in k12685 in k12679 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12696(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12696,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12705,a[2]=t4,a[3]=((C_word)li148),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12705(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12519(2,av2);}}}

/* loop734 in k12694 in k12688 in k12685 in k12679 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_fcall f_12705(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12705,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12712,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:154: ##sys#= */
t5=*((C_word*)lf[216]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k12710 in loop734 in k12694 in k12688 in k12685 in k12679 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12712,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12726,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#+ */
t4=*((C_word*)lf[215]+1);{
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

/* k12724 in k12710 in loop734 in k12694 in k12688 in k12685 in k12679 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12726,c,av);}
/* chicken-syntax.scm:154: loop734 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12705(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12735 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12737,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:154: ##sys#length */
t3=*((C_word*)lf[218]+1);{
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
f_12681(2,av2);}}}

/* k12738 in k12735 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12740,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#>= */
t3=*((C_word*)lf[217]+1);{
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

/* k12744 in k12738 in k12735 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12746(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12746,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12755,a[2]=t4,a[3]=((C_word)li149),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12755(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12681(2,av2);}}}

/* loop734 in k12744 in k12738 in k12735 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_fcall f_12755(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12755,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12762,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:154: ##sys#= */
t5=*((C_word*)lf[216]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k12760 in loop734 in k12744 in k12738 in k12735 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12762(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12762,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12774,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_cdr(t2);
t5=C_i_pairp(t4);
t6=t3;
f_12774(t6,(C_truep(t5)?C_eqp(C_i_cdr(t4),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}
else{
t4=t3;
f_12774(t4,C_SCHEME_FALSE);}}}

/* k12772 in k12760 in loop734 in k12744 in k12738 in k12735 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_fcall f_12774(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_12774,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12785,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:154: ##sys#+ */
t4=*((C_word*)lf[215]+1);{
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

/* k12783 in k12772 in k12760 in loop734 in k12744 in k12738 in k12735 in a12508 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12785,c,av);}
/* chicken-syntax.scm:154: loop734 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12755(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12814 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12816,c,av);}
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
av2[2]=lf[255];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12817 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12818(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12818,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12822,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:145: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[255];
av2[3]=t2;
av2[4]=lf[258];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12820 in a12817 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_12822,c,av);}
a=C_alloc(4);
t2=C_i_memq(lf[232],*((C_word*)lf[233]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_caddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12838,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:148: chicken.compiler.scrutinizer#check-and-validate-type */
t4=*((C_word*)lf[237]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=lf[255];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k12836 in k12820 in a12817 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_12838,c,av);}
a=C_alloc(12);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[175],t1,C_SCHEME_TRUE,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12852 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12854,c,av);}
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
av2[2]=lf[259];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12855 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12856(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12856,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12860,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:122: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[259];
av2[3]=t2;
av2[4]=lf[266];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12858 in a12855 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12860,c,av);}
a=C_alloc(4);
t2=C_i_memq(lf[232],*((C_word*)lf[233]+1));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[260];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12869,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
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

/* k12867 in k12858 in a12855 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12869(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12869,c,av);}
a=C_alloc(11);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12876,a[2]=t1,a[3]=t3,a[4]=((C_word)li152),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12886,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word)li153),tmp=(C_word)a,a+=6,tmp);
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

/* a12875 in k12867 in k12858 in a12855 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12876,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12884,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
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

/* k12882 in a12875 in k12867 in k12858 in a12855 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12884,c,av);}
/* chicken-syntax.scm:130: chicken.compiler.scrutinizer#validate-type */
t2=*((C_word*)lf[261]+1);{
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

/* a12885 in k12867 in k12858 in a12855 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12886(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12886,c,av);}
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
av2[2]=lf[259];
av2[3]=lf[262];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
t5=C_i_cdddr(((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[2],t6);
t8=C_a_i_list(&a,2,lf[263],t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12911,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12915,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t11=C_a_i_list(&a,2,lf[265],((C_word*)t0)[2]);
t12=t10;
f_12915(t12,C_a_i_list(&a,1,t11));}
else{
t11=t10;
f_12915(t11,C_SCHEME_END_OF_LIST);}}}

/* k12909 in a12885 in k12867 in k12858 in a12855 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12911,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[193],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12913 in a12885 in k12867 in k12858 in a12855 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_fcall f_12915(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_12915,2,t0,t1);}
a=C_alloc(15);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[264],t2);
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

/* k12963 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12965,c,av);}
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
av2[2]=lf[269];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12967(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12967,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12971,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:81: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[269];
av2[3]=t2;
av2[4]=lf[278];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12971,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
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
av2[2]=lf[277];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12974,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12977,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
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
av2[2]=lf[276];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12975 in k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_12977,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12980,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
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
av2[2]=lf[275];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12978 in k12975 in k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_12980,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12983,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
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
av2[2]=lf[267];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12981 in k12978 in k12975 in k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_12983,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12986,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
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
av2[2]=lf[241];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12984 in k12981 in k12978 in k12975 in k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_12986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_12986,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12988,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li157),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_13118,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
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
av2[2]=lf[274];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* parse-clause in k12984 in k12981 in k12978 in k12975 in k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_fcall f_12988(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_12988,3,t0,t1,t2);}
a=C_alloc(23);
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=(C_truep(t4)?C_u_i_car(t2):C_SCHEME_FALSE);
t6=(C_truep(t5)?C_i_cadr(t2):C_u_i_car(t2));
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12998,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t8=C_a_i_list(&a,2,t5,((C_word*)t0)[6]);
t9=C_a_i_list(&a,1,t8);
t10=C_i_cddr(t2);
t11=C_a_i_cons(&a,2,t9,t10);
t12=t7;
f_12998(t12,C_a_i_cons(&a,2,lf[35],t11));}
else{
t8=C_u_i_cdr(t2);
t9=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t8);
t10=t7;
f_12998(t10,C_a_i_cons(&a,2,lf[35],t9));}}

/* k12996 in parse-clause in k12984 in k12981 in k12978 in k12975 in k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_fcall f_12998(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_12998,2,t0,t1);}
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
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13023,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li155),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13037,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13039,a[2]=t6,a[3]=t4,a[4]=t10,a[5]=t5,a[6]=((C_word)li156),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_13039(t12,t8,((C_word*)t0)[2]);}}

/* g623 in k12996 in parse-clause in k12984 in k12981 in k12978 in k12975 in k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static C_word C_fcall f_13023(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,lf[36],t1);
return(C_a_i_list(&a,3,((C_word*)t0)[2],t2,((C_word*)t0)[3]));}

/* k13035 in k12996 in parse-clause in k12984 in k12981 in k12978 in k12975 in k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_13037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_13037,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,t3,((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop617 in k12996 in parse-clause in k12984 in k12981 in k12978 in k12975 in k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_fcall f_13039(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_13039,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=(
/* chicken-syntax.scm:95: g623 */
  f_13023(C_a_i(&a,15),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k13116 in k12984 in k12981 in k12978 in k12975 in k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_13118(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13118,c,av);}
a=C_alloc(65);
t2=C_a_i_list(&a,2,lf[36],lf[270]);
t3=C_a_i_list(&a,3,lf[70],((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,3,lf[271],((C_word*)t0)[2],C_fix(1));
t5=C_a_i_list(&a,3,((C_word*)t0)[3],t3,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[4],t5);
t7=C_a_i_list(&a,1,t6);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_i_cddr(((C_word*)t0)[5]);
t13=C_i_check_list_2(t12,lf[65]);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13143,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13174,a[2]=t10,a[3]=t16,a[4]=((C_word*)t0)[9],a[5]=t11,a[6]=((C_word)li158),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_13174(t18,t14,t12);}

/* k13141 in k13116 in k12984 in k12981 in k12978 in k12975 in k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_13143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_13143,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
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
av2[2]=lf[273];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13148 in k13141 in k13116 in k12984 in k12981 in k12978 in k12975 in k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_13150(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13150,c,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13154,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
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
t3=C_a_i_list(&a,2,lf[272],((C_word*)t0)[6]);
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

/* k13152 in k13148 in k13141 in k13116 in k12984 in k12981 in k12978 in k12975 in k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_13154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_13154,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t2);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[6],((C_word*)t0)[7],t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop648 in k13116 in k12984 in k12981 in k12978 in k12975 in k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_fcall f_13174(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_13174,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:102: g654 */
t4=((C_word*)t0)[4];
f_12988(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k13197 in map-loop648 in k13116 in k12984 in k12981 in k12978 in k12975 in k12972 in k12969 in a12966 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_13199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13199,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_13174(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k13236 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_13238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13238,c,av);}
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
av2[2]=lf[274];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a13239 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_13240(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13240,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13244,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:60: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[274];
av2[3]=t2;
av2[4]=lf[284];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k13242 in a13239 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_13244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_13244,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
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
av2[2]=lf[283];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13245 in k13242 in a13239 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_13247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13247,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13250,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
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
av2[2]=lf[282];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13248 in k13245 in k13242 in a13239 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_13250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13250,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
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
av2[2]=lf[279];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k13259 in k13248 in k13245 in k13242 in a13239 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_13261(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13261,c,av);}
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
t20=C_a_i_list(&a,3,lf[281],t8,t19);
t21=C_a_i_list(&a,3,lf[20],t2,t20);
t22=C_a_i_list(&a,2,t1,t21);
t23=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t23;
av2[1]=C_a_i_list(&a,1,t22);
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}

/* k4249 */
static void C_ccall f_4251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4251,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4254,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k4252 in k4249 */
static void C_ccall f_4254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4254,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4257,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k4255 in k4252 in k4249 */
static void C_ccall f_4257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_4257,c,av);}
a=C_alloc(14);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_mutate(&lf[1] /* (set! take ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4367,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5539,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:53: ##sys#macro-environment */
t5=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* take in k4255 in k4252 in k4249 */
static void C_fcall f_4367(C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_4367,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4385,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:56: take */
t7=t5;
t8=C_u_i_cdr(t2);
t9=C_fixnum_difference(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k4383 in take in k4255 in k4252 in k4249 */
static void C_ccall f_4385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4385,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k7001 in a6994 in k6987 in k6977 in a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in ... */
static void C_fcall f_4425(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_4425,5,t0,t1,t2,t3,t4);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4439,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
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

/* k4437 in loop in k7001 in a6994 in k6987 in k6977 in a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in ... */
static void C_ccall f_4439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4439,c,av);}
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

/* k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5539(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5539,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5542,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[279],lf[280]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13238,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13240,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp);
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

/* k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5542(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5542,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[267],lf[268]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12965,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12967,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp);
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

/* k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5545,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5548,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
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

/* k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5548,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#chicken.condition-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5552,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:116: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5552,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5555,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12854,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12856,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp);
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

/* k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5555,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5558,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12816,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12818,a[2]=((C_word)li151),tmp=(C_word)a,a+=3,tmp);
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

/* k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5558,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12507,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12509,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp);
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

/* k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5561,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5564,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12140,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12142,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp);
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

/* k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
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
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5567,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12017,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12019,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
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

/* k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
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
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11957,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11959,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
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

/* k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5570,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5573,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
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

/* k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5573,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#chicken.type-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5577,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:270: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5577,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5580,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11940,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11942,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp);
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

/* k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5580,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11910,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11912,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp);
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

/* k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5583,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11881,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11883,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp);
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

/* k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5586,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11784,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11786,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp);
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

/* k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5589,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11636,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11638,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp);
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

/* k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 */
static void C_ccall f_5592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5592,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5595,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
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

/* k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in k4249 in ... */
static void C_ccall f_5595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5595,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#chicken.syntax-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5599,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:319: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in k4252 in ... */
static void C_ccall f_5599(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5599,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5602,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[137],lf[138]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11612,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11614,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:364: ##sys#er-transformer */
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

/* k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in k4255 in ... */
static void C_ccall f_5602(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5602,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[137],lf[138]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11541,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11543,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:373: ##sys#er-transformer */
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

/* k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in k5537 in ... */
static void C_ccall f_5605(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5605,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[137],lf[138]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11526,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11528,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:380: ##sys#er-transformer */
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

/* k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in k5540 in ... */
static void C_ccall f_5608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5608,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5611,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11127,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11129,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:395: ##sys#er-transformer */
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

/* k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in k5543 in ... */
static void C_ccall f_5611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5611,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11034,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11036,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:468: ##sys#er-transformer */
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

/* k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in k5546 in ... */
static void C_ccall f_5614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5614,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11020,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11022,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:486: ##sys#er-transformer */
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

/* k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in k5550 in ... */
static void C_ccall f_5617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5617,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5620,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10999,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11001,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:493: ##sys#er-transformer */
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

/* k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in k5553 in ... */
static void C_ccall f_5620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5620,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5623,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10982,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10984,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:500: ##sys#er-transformer */
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

/* k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in k5556 in ... */
static void C_ccall f_5623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5623,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5626,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10965,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10967,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:507: ##sys#er-transformer */
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

/* k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in k5559 in ... */
static void C_ccall f_5626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5626,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5629,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10312,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10314,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:514: ##sys#er-transformer */
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

/* k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in k5562 in ... */
static void C_ccall f_5629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5629,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5632,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9382,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9384,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:546: ##sys#er-transformer */
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

/* k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_5632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5632,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5635,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9298,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9300,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:601: ##sys#er-transformer */
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

/* k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in ... */
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
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9274,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9276,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:613: ##sys#er-transformer */
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

/* k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in ... */
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
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9246,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9248,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:621: ##sys#er-transformer */
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

/* k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
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
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9225,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9227,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:630: ##sys#er-transformer */
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

/* k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in ... */
static void C_ccall f_5644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5644,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5648,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9095,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9097,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:638: ##sys#er-transformer */
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

/* k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in ... */
static void C_ccall f_5648(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5648,c,av);}
a=C_alloc(10);
t2=C_mutate((C_word*)lf[5]+1 /* (set! chicken.syntax#define-values-definition ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5651,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8618,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8620,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:655: ##sys#er-transformer */
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

/* k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_5651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5651,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5654,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8564,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8566,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:709: ##sys#er-transformer */
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

/* k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_5654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5654,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8306,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8308,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:724: ##sys#er-transformer */
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

/* k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_ccall f_5657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5657,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5660,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8284,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8286,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:744: ##sys#er-transformer */
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

/* k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in ... */
static void C_ccall f_5660(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5660,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5663,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[137],lf[138]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8240,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8242,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:753: ##sys#er-transformer */
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

/* k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in ... */
static void C_ccall f_5663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5663,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5666,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8136,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8138,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:763: ##sys#er-transformer */
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

/* k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_ccall f_5666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5666,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5669,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7994,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7996,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:784: ##sys#er-transformer */
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

/* k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
static void C_ccall f_5669(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5669,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[110],lf[111]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7546,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7548,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:891: ##sys#er-transformer */
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

/* k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_ccall f_5672(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5672,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[110],lf[111]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7469,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7471,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:980: ##sys#er-transformer */
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

/* k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_ccall f_5675(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5675,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5678,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[110],lf[111]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7309,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7311,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1008: ##sys#er-transformer */
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

/* k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_5678(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5678,c,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5681,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[90],lf[91]);
t4=C_a_i_cons(&a,2,lf[92],lf[93]);
t5=C_a_i_cons(&a,2,lf[94],lf[95]);
t6=C_a_i_cons(&a,2,lf[96],lf[97]);
t7=C_a_i_cons(&a,2,lf[98],lf[99]);
t8=C_a_i_list(&a,5,t3,t4,t5,t6,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6865,a[2]=t2,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6867,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1045: ##sys#er-transformer */
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

/* k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in ... */
static void C_ccall f_5681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5681,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6749,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6751,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1108: ##sys#er-transformer */
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

/* k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in ... */
static void C_ccall f_5684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5684,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6310,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6312,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1143: ##sys#er-transformer */
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

/* k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_ccall f_5687(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5687,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5690,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[50],lf[51]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6138,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6140,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1232: ##sys#er-transformer */
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

/* k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_5690(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5690,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[50],lf[51]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5943,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5945,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1265: ##sys#er-transformer */
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

/* k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
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
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5878,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5880,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1306: ##sys#er-transformer */
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

/* k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_5696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5696,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5699,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5860,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5862,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1323: ##sys#er-transformer */
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

/* k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_5699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5699,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5771,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5773,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1332: ##sys#er-transformer */
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

/* k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_5702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5702,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5705,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1352: chicken.internal#macro-subset */
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

/* k5703 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in ... */
static void C_ccall f_5705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5705,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#chicken.base-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5709,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1358: ##sys#macro-environment */
t4=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5707 in k5703 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in ... */
static void C_ccall f_5709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5709,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5712,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5722,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5724,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1362: ##sys#er-transformer */
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

/* k5710 in k5707 in k5703 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in ... */
static void C_ccall f_5712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5712,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5715,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1374: chicken.internal#macro-subset */
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

/* k5713 in k5710 in k5707 in k5703 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_ccall f_5715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5715,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[7]+1 /* (set! ##sys#chicken.time-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5718,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1378: chicken.platform#register-feature! */
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

/* k5716 in k5713 in k5710 in k5707 in k5703 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in ... */
static void C_ccall f_5718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5718,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5720 in k5707 in k5703 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in ... */
static void C_ccall f_5722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5722,c,av);}
/* chicken-syntax.scm:1360: ##sys#extend-macro-environment */
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

/* a5723 in k5707 in k5703 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in ... */
static void C_ccall f_5724(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5724,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5728,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1364: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[27];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5726 in a5723 in k5707 in k5703 in k5700 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_ccall f_5728(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5728,c,av);}
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

/* k5769 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_5771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5771,c,av);}
/* chicken-syntax.scm:1330: ##sys#extend-macro-environment */
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

/* a5772 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_5773(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5773,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5777,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1335: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[30];
av2[3]=t2;
av2[4]=lf[44];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5775 in a5772 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in ... */
static void C_ccall f_5777(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5777,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?lf[31]:C_i_car(t4));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5788,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t8,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1339: r */
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

/* k5786 in k5775 in a5772 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in ... */
static void C_ccall f_5788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5788,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5791,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_stringp(((C_word*)((C_word*)t0)[5])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5843,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1341: chicken.syntax#get-line-number */
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
f_5791(t3,C_SCHEME_UNDEFINED);}}

/* k5789 in k5786 in k5775 in a5772 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in ... */
static void C_fcall f_5791(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,2)))){
C_save_and_reclaim_args((void *)trf_5791,2,t0,t1);}
a=C_alloc(25);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[32],((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5814,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t6=C_u_i_cdr(((C_word*)t0)[5]);
t7=t5;
f_5814(t7,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[6])[1],t6));}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5833,a[2]=t5,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1350: chicken.syntax#strip-syntax */
t7=*((C_word*)lf[37]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k5812 in k5789 in k5786 in k5775 in a5772 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_fcall f_5814(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,1)))){
C_save_and_reclaim_args((void *)trf_5814,2,t0,t1);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,lf[33],t1);
t3=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5831 in k5789 in k5786 in k5775 in a5772 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_ccall f_5833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_5833,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[36],t1);
t3=C_a_i_list(&a,1,t2);
t4=((C_word*)t0)[2];
f_5814(t4,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t3));}

/* k5841 in k5786 in k5775 in a5772 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in ... */
static void C_ccall f_5843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5843,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1342: string-append */
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
f_5791(t2,C_SCHEME_FALSE);}}

/* k5848 in k5841 in k5786 in k5775 in a5772 in k5697 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_ccall f_5850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5850,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5791(t3,t2);}

/* k5858 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_5860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5860,c,av);}
/* chicken-syntax.scm:1320: ##sys#extend-macro-environment */
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

/* a5861 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_5862(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5862,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5870,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1325: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[46];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5868 in a5861 in k5694 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_5870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5870,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5876 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_5878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5878,c,av);}
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
av2[2]=lf[47];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a5879 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_5880(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5880,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5884,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1308: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[47];
av2[3]=t2;
av2[4]=lf[49];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k5882 in a5879 in k5691 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_5884(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5884,c,av);}
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

/* k5941 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_5943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5943,c,av);}
/* chicken-syntax.scm:1262: ##sys#extend-macro-environment */
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

/* a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_5945(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5945,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5949,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1267: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[50];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_5949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5949,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5952,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1268: r */
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

/* k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_5952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5952,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1269: r */
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

/* k5953 in k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_5955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5955,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1271: chicken.syntax#syntax-error */
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
f_5958(2,av2);}}}

/* k5956 in k5953 in k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in ... */
static void C_ccall f_5958(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5958,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5965,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li5),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_5965(t6,((C_word*)t0)[8],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k5956 in k5953 in k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in ... */
static void C_fcall f_5965(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5965,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5975,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1274: scheme#reverse */
t8=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6044,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:1284: c */
t8=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[8];
av2[3]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* k5973 in loop in k5956 in k5953 in k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in ... */
static void C_ccall f_5975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5975,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1275: scheme#reverse */
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

/* k5976 in k5973 in loop in k5956 in k5953 in k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_ccall f_5978(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5978,c,av);}
a=C_alloc(21);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5984,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6021,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1277: chicken.base#gensym */
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

/* k5982 in k5976 in k5973 in loop in k5956 in k5953 in k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in ... */
static void C_ccall f_5984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5984,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1278: ##sys#append */
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

/* k5993 in k5982 in k5976 in k5973 in loop in k5956 in k5953 in k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in ... */
static void C_ccall f_5995(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5995,c,av);}
a=C_alloc(10);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6011,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,1,((C_word*)t0)[6]);
/* chicken-syntax.scm:1278: ##sys#append */
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

/* k6009 in k5993 in k5982 in k5976 in k5973 in loop in k5956 in k5953 in k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in ... */
static void C_ccall f_6011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_6011,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[20],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6019 in k5976 in k5973 in loop in k5956 in k5953 in k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in ... */
static void C_ccall f_6021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6021,c,av);}
/* chicken-syntax.scm:1277: r */
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

/* k6042 in loop in k5956 in k5953 in k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in ... */
static void C_ccall f_6044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6044,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6047,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6064,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1285: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1287: c */
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

/* k6045 in k6042 in loop in k5956 in k5953 in k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_ccall f_6047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_6047,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1286: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5965(t5,((C_word*)t0)[6],t2,t3,((C_word*)t0)[7],t4,C_SCHEME_FALSE);}

/* k6062 in k6042 in loop in k5956 in k5953 in k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_ccall f_6064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6064,c,av);}
/* chicken-syntax.scm:1285: r */
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

/* k6068 in k6042 in loop in k5956 in k5953 in k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_ccall f_6070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_6070,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1289: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5965(t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1290: chicken.syntax#syntax-error */
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
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6087,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6110,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1295: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6085 in k6068 in k6042 in loop in k5956 in k5953 in k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in ... */
static void C_ccall f_6087(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6087,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_list2(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1296: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_5965(t7,((C_word*)t0)[6],t2,((C_word*)t0)[7],t5,t6,C_SCHEME_FALSE);}

/* k6108 in k6068 in k6042 in loop in k5956 in k5953 in k5950 in k5947 in a5944 in k5688 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in ... */
static void C_ccall f_6110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6110,c,av);}
/* chicken-syntax.scm:1295: r */
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

/* k6136 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_6138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6138,c,av);}
/* chicken-syntax.scm:1229: ##sys#extend-macro-environment */
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

/* a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_6140(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6140,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6144,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1234: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[60];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6142 in a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_6144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6144,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6147,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1235: r */
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

/* k6145 in k6142 in a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_6147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6147,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1236: r */
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

/* k6148 in k6145 in k6142 in a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6150,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6153,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t3))){
/* chicken-syntax.scm:1238: chicken.syntax#syntax-error */
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
f_6153(2,av2);}}}

/* k6151 in k6148 in k6145 in k6142 in a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6153(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6153,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6160,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li7),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_6160(t6,((C_word*)t0)[8],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k6151 in k6148 in k6145 in k6142 in a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in ... */
static void C_fcall f_6160(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_6160,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6170,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1241: scheme#reverse */
t7=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6235,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1250: c */
t7=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[8];
av2[3]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k6168 in loop in k6151 in k6148 in k6145 in k6142 in a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in ... */
static void C_ccall f_6170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6170,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6173,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1242: scheme#reverse */
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

/* k6171 in k6168 in loop in k6151 in k6148 in k6145 in k6142 in a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in ... */
static void C_ccall f_6173(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6173,c,av);}
a=C_alloc(18);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6179,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6212,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1244: chicken.base#gensym */
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

/* k6177 in k6171 in k6168 in loop in k6151 in k6148 in k6145 in k6142 in a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_ccall f_6179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6179,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1245: ##sys#append */
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

/* k6184 in k6177 in k6171 in k6168 in loop in k6151 in k6148 in k6145 in k6142 in a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in ... */
static void C_ccall f_6186(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6186,c,av);}
a=C_alloc(9);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6202,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,1,((C_word*)t0)[5]);
/* chicken-syntax.scm:1245: ##sys#append */
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

/* k6200 in k6184 in k6177 in k6171 in k6168 in loop in k6151 in k6148 in k6145 in k6142 in a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in ... */
static void C_ccall f_6202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_6202,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[20],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6210 in k6171 in k6168 in loop in k6151 in k6148 in k6145 in k6142 in a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_ccall f_6212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6212,c,av);}
/* chicken-syntax.scm:1244: r */
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

/* k6233 in loop in k6151 in k6148 in k6145 in k6142 in a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in ... */
static void C_ccall f_6235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_6235,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6238,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6255,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1251: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1253: c */
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

/* k6236 in k6233 in loop in k6151 in k6148 in k6145 in k6142 in a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in ... */
static void C_ccall f_6238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_6238,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1252: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_6160(t5,((C_word*)t0)[6],t2,t3,t4,C_SCHEME_FALSE);}

/* k6253 in k6233 in loop in k6151 in k6148 in k6145 in k6142 in a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in ... */
static void C_ccall f_6255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6255,c,av);}
/* chicken-syntax.scm:1251: r */
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

/* k6259 in k6233 in loop in k6151 in k6148 in k6145 in k6142 in a6139 in k5685 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in ... */
static void C_ccall f_6261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_6261,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1255: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6160(t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1256: chicken.syntax#syntax-error */
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
/* chicken-syntax.scm:1260: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_6160(t5,((C_word*)t0)[4],t2,((C_word*)t0)[5],t4,C_SCHEME_FALSE);}}

/* k6308 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_ccall f_6310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6310,c,av);}
/* chicken-syntax.scm:1140: ##sys#extend-macro-environment */
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

/* a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_ccall f_6312(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6312,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6316,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1145: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[64];
av2[3]=t2;
av2[4]=lf[84];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_6316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6316,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6322,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1150: chicken.syntax#strip-syntax */
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

/* k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_6322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6322,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6734,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1151: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_6325(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6325,c,av);}
a=C_alloc(10);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_i_cadddr(((C_word*)t0)[2]);
t4=C_i_cddddr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6337,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1159: r */
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

/* k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6337,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1160: r */
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

/* k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6340,c,av);}
a=C_alloc(13);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6346,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t1,a[12]=((C_word*)t0)[10],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1162: r */
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

/* k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in ... */
static void C_ccall f_6346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6346,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1163: r */
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

/* k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in ... */
static void C_ccall f_6349(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6349,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6358,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t1,a[13]=((C_word*)t0)[2],tmp=(C_word)a,a+=14,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6699,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6699(t11,t7,((C_word*)t0)[2]);}

/* k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in ... */
static void C_ccall f_6358(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6358,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6359,a[2]=t1,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[67]);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6375,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6676,a[2]=t6,a[3]=t2,a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_6676(t8,t4,((C_word*)t0)[2]);}

/* g3049 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_fcall f_6359(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_6359,3,t0,t1,t2);}
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-syntax.scm:1168: chicken.syntax#syntax-error */
t3=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[64];
av2[3]=lf[66];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k6373 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_ccall f_6375(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6375,c,av);}
a=C_alloc(53);
t2=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,2,lf[36],((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6623,a[2]=((C_word*)t0)[5],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[6],lf[65]);
t11=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6636,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[2],a[8]=t3,a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6638,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li12),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_6638(t15,t11,((C_word*)t0)[6]);}

/* k6404 in k6634 in k6373 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in ... */
static void C_ccall f_6406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6406,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[26],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* loop in k6634 in k6373 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in ... */
static void C_fcall f_6408(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_6408,4,t0,t1,t2,t3);}
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
t8=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=t6,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=t7,a[13]=((C_word*)t0)[7],a[14]=((C_word*)t0)[8],tmp=(C_word)a,a+=15,tmp);
if(C_truep(C_i_pairp(t7))){
if(C_truep(C_i_pairp(C_u_i_cdr(t7)))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6580,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1193: c */
t10=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[75];
av2[3]=C_u_i_car(t7);
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t9=t8;
f_6427(t9,C_SCHEME_FALSE);}}
else{
t9=t8;
f_6427(t9,C_SCHEME_FALSE);}}}

/* k6425 in loop in k6634 in k6373 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in ... */
static void C_fcall f_6427(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_6427,2,t0,t1);}
a=C_alloc(128);
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[36],((C_word*)t0)[3]);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=C_a_i_list(&a,2,lf[36],t4);
t6=C_a_i_list(&a,4,lf[71],((C_word*)t0)[2],t3,t5);
t7=C_a_i_list(&a,2,lf[32],t6);
t8=C_a_i_list(&a,3,lf[72],((C_word*)t0)[2],((C_word*)t0)[5]);
t9=C_a_i_list(&a,4,lf[20],t2,t7,t8);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6433,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=t1,a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t9,tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[9])){
t11=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[14]);
t12=C_a_i_list(&a,2,lf[36],((C_word*)t0)[3]);
t13=C_a_i_list(&a,2,lf[36],t1);
t14=C_a_i_list(&a,4,lf[71],((C_word*)t0)[2],t12,t13);
t15=C_a_i_list(&a,2,lf[32],t14);
t16=C_a_i_list(&a,4,lf[74],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[14]);
t17=t10;
f_6433(t17,C_a_i_list(&a,4,lf[20],t11,t15,t16));}
else{
t11=t10;
f_6433(t11,C_SCHEME_FALSE);}}

/* k6431 in k6425 in loop in k6634 in k6373 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in ... */
static void C_fcall f_6433(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_6433,2,t0,t1);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t3=C_u_i_cdr(((C_word*)t0)[9]);
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6501,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[10],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t6=C_u_i_cdr(((C_word*)t0)[9]);
/* chicken-syntax.scm:1214: c */
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
f_6501(2,av2);}}}

/* k6438 in k6431 in k6425 in loop in k6634 in k6373 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in ... */
static void C_fcall f_6440(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_6440,2,t0,t1);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6444,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6448,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
if(C_truep(((C_word*)t0)[7])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6480,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1219: c */
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
f_6448(t5,C_a_i_list(&a,1,t4));}}
else{
t4=t3;
f_6448(t4,C_SCHEME_END_OF_LIST);}}

/* k6442 in k6438 in k6431 in k6425 in loop in k6634 in k6373 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in ... */
static void C_ccall f_6444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6444,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6446 in k6438 in k6431 in k6425 in loop in k6634 in k6373 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in ... */
static void C_fcall f_6448(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,3)))){
C_save_and_reclaim_args((void *)trf_6448,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6452,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_s_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
/* chicken-syntax.scm:1224: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_6408(t5,t2,t3,t4);}

/* k6450 in k6446 in k6438 in k6431 in k6425 in loop in k6634 in k6373 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in ... */
static void C_ccall f_6452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6452,c,av);}
/* chicken-syntax.scm:1212: ##sys#append */
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

/* k6478 in k6438 in k6431 in k6425 in loop in k6634 in k6373 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in ... */
static void C_ccall f_6480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6480,c,av);}
a=C_alloc(18);
if(C_truep(C_i_not(t1))){
t2=C_a_i_list(&a,2,lf[73],lf[73]);
t3=C_a_i_list(&a,3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=((C_word*)t0)[4];
f_6448(t4,C_a_i_list(&a,1,t3));}
else{
t2=((C_word*)t0)[4];
f_6448(t2,C_SCHEME_END_OF_LIST);}}

/* k6499 in k6431 in k6425 in loop in k6634 in k6373 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in ... */
static void C_ccall f_6501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6501,c,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
f_6440(t3,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],t2));}
else{
t2=((C_word*)t0)[5];
f_6440(t2,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[3]));}}

/* k6578 in loop in k6634 in k6373 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in ... */
static void C_ccall f_6580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6580,c,av);}
t2=((C_word*)t0)[2];
f_6427(t2,(C_truep(t1)?C_i_cadr(((C_word*)t0)[3]):C_SCHEME_FALSE));}

/* g3075 in k6373 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in ... */
static C_word C_fcall f_6623(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_memq(t1,((C_word*)t0)[2]);
return((C_truep(t2)?t1:lf[68]));}

/* k6634 in k6373 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in ... */
static void C_ccall f_6636(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6636,c,av);}
a=C_alloc(63);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[69],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
t6=C_a_i_list(&a,2,lf[36],((C_word*)t0)[7]);
t7=C_a_i_list(&a,3,lf[70],((C_word*)t0)[6],t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[3],t5,t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6406,a[2]=t8,a[3]=t4,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6408,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t11,a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word)li11),tmp=(C_word)a,a+=10,tmp));
t13=((C_word*)t11)[1];
f_6408(t13,t9,((C_word*)t0)[13],C_fix(1));}

/* map-loop3069 in k6373 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in ... */
static void C_fcall f_6638(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6638,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* chicken-syntax.scm:1179: g3075 */
  f_6623(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* for-each-loop3048 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_fcall f_6676(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6676,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6686,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1166: g3049 */
t4=((C_word*)t0)[3];
f_6359(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6684 in for-each-loop3048 in k6356 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in ... */
static void C_ccall f_6686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6686,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6676(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* map-loop3022 in k6347 in k6344 in k6338 in k6335 in k6323 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in ... */
static void C_fcall f_6699(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6699,3,t0,t1,t2);}
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

/* k6732 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_6734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6734,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6741,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6745,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1153: ##sys#current-module */
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
f_6325(2,av2);}}}

/* k6739 in k6732 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6741,c,av);}
/* chicken-syntax.scm:1152: chicken.base#symbol-append */
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

/* k6743 in k6732 in k6320 in k6314 in a6311 in k5682 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6745,c,av);}
/* chicken-syntax.scm:1153: ##sys#module-name */
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

/* k6747 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in ... */
static void C_ccall f_6749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6749,c,av);}
/* chicken-syntax.scm:1106: ##sys#extend-macro-environment */
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

/* a6750 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in ... */
static void C_ccall f_6751(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6751,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6755,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1110: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[85];
av2[3]=t2;
av2[4]=lf[89];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6753 in a6750 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_ccall f_6755(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6755,c,av);}
a=C_alloc(5);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6763,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1113: r */
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

/* k6761 in k6753 in a6750 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_6763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6763,c,av);}
a=C_alloc(9);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6772,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* chicken-syntax.scm:1115: ##sys#check-syntax */
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
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6822,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
/* chicken-syntax.scm:1128: ##sys#check-syntax */
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

/* k6770 in k6761 in k6753 in a6750 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_6772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6772,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1118: chicken.syntax#strip-syntax */
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

/* k6773 in k6770 in k6761 in k6753 in a6750 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_6775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6775,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6800,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1119: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6776 in k6773 in k6770 in k6761 in k6753 in a6750 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6778(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6778,c,av);}
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

/* k6798 in k6773 in k6770 in k6761 in k6753 in a6750 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6800,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6811,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1121: ##sys#current-module */
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
f_6778(2,av2);}}}

/* k6805 in k6798 in k6773 in k6770 in k6761 in k6753 in a6750 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6807,c,av);}
/* chicken-syntax.scm:1120: chicken.base#symbol-append */
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

/* k6809 in k6798 in k6773 in k6770 in k6761 in k6753 in a6750 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6811,c,av);}
/* chicken-syntax.scm:1121: ##sys#module-name */
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

/* k6820 in k6761 in k6753 in a6750 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_6822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6822,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1129: chicken.syntax#strip-syntax */
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

/* k6823 in k6820 in k6761 in k6753 in a6750 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_6825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6825,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6828,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6842,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1130: ##sys#current-module */
t4=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6826 in k6823 in k6820 in k6761 in k6753 in a6750 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6828,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[36],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6840 in k6823 in k6820 in k6761 in k6753 in a6750 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6842,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6853,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1132: ##sys#current-module */
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

/* k6847 in k6840 in k6823 in k6820 in k6761 in k6753 in a6750 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6849,c,av);}
/* chicken-syntax.scm:1131: chicken.base#symbol-append */
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

/* k6851 in k6840 in k6823 in k6820 in k6761 in k6753 in a6750 in k5679 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6853,c,av);}
/* chicken-syntax.scm:1132: ##sys#module-name */
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

/* k6863 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in ... */
static void C_ccall f_6865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6865,c,av);}
/* chicken-syntax.scm:1038: ##sys#extend-macro-environment */
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

/* a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in ... */
static void C_ccall f_6867(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6867,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6871,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1047: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[100];
av2[3]=t2;
av2[4]=lf[109];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in ... */
static void C_ccall f_6871(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6871,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6873,a[2]=((C_word*)t0)[2],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6908,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_cdr(((C_word*)t0)[3]);
t9=C_i_check_list_2(t8,lf[65]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7247,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7249,a[2]=t6,a[3]=t12,a[4]=t7,a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7249(t14,t10,t8);}

/* genvars in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_fcall f_6873(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_6873,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6879,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6879(t6,t1,C_fix(0));}

/* loop in genvars in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_fcall f_6879(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6879,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6893,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6905,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1052: chicken.base#gensym */
t5=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6891 in loop in genvars in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_6893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6893,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6897,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1052: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6879(t3,t2,C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* k6895 in k6891 in loop in genvars in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_6897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6897,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6903 in loop in genvars in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_6905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6905,c,av);}
/* chicken-syntax.scm:1052: r */
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

/* k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_ccall f_6908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6908,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1058: genvars */
t3=((C_word*)t0)[5];
f_6873(t3,t2,t1);}

/* k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_6911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6911,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6914,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1059: r */
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

/* k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_6914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6914,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6917,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1060: r */
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

/* k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_6917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6917,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6920,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1061: r */
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

/* k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_6920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6920,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6923,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1062: r */
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

/* k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_6923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6923,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1063: r */
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

/* k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in ... */
static void C_ccall f_6926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6926,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:1064: r */
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

/* k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in ... */
static void C_ccall f_6929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6929,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken-syntax.scm:1065: r */
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

/* k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in ... */
static void C_ccall f_6932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_6932,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6939,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:1067: scheme#append */
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

/* k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_ccall f_6939(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6939,c,av);}
a=C_alloc(35);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_u_i_cdr(((C_word*)t0)[5]);
t6=C_i_check_list_2(t5,lf[101]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6955,a[2]=t4,a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6957,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[13],a[11]=t9,a[12]=((C_word)li26),tmp=(C_word)a,a+=13,tmp));
t11=((C_word*)t9)[1];
f_6957(t11,t7,t5);}

/* k6953 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in ... */
static void C_ccall f_6955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_6955,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[35],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[20],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in ... */
static void C_fcall f_6957(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6957,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word)li25),tmp=(C_word)a,a+=12,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7210,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in ... */
static void C_fcall f_6965(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_6965,4,t0,t1,t2,t3);}
a=C_alloc(14);
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6975,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word)li24),tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:1072: ##sys#decompose-lambda-list */
t6=*((C_word*)lf[103]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in ... */
static void C_ccall f_6975(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6975,c,av);}
a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6979,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],tmp=(C_word)a,a+=17,tmp);
/* chicken-syntax.scm:1075: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[100];
av2[3]=C_i_car(((C_word*)t0)[5]);
av2[4]=lf[102];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6977 in a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in ... */
static void C_ccall f_6979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_6979,c,av);}
a=C_alloc(23);
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6989,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=C_eqp(t2,C_fix(0));
t5=t3;
f_6989(t5,(C_truep(t4)?C_SCHEME_TRUE:C_a_i_list(&a,3,((C_word*)t0)[14],((C_word*)t0)[15],t2)));}
else{
t4=t3;
f_6989(t4,C_a_i_list(&a,3,((C_word*)t0)[16],((C_word*)t0)[15],t2));}}

/* k6987 in k6977 in a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in ... */
static void C_fcall f_6989(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,4)))){
C_save_and_reclaim_args((void *)trf_6989,2,t0,t1);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6993,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6995,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li20),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7005,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word)li23),tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1082: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* k6991 in k6987 in k6977 in a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in ... */
static void C_ccall f_6993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6993,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[34],((C_word*)t0)[3],t1,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a6994 in k6987 in k6977 in a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in ... */
static void C_ccall f_6995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6995,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7003,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1083: take */
f_4367(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k7001 in a6994 in k6987 in k6977 in a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in ... */
static void C_ccall f_7003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_7003,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4425,a[2]=t3,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4425(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST,t1);}

/* a7004 in k6987 in k6977 in a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in ... */
static void C_ccall f_7005(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7005,c,av);}
a=C_alloc(16);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7009,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7081,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t6,a[7]=((C_word*)t0)[7],a[8]=((C_word)li22),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_7081(t8,t4,t3,((C_word*)t0)[8]);}

/* k7007 in a7004 in k6987 in k6977 in a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in ... */
static void C_ccall f_7009(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7009,c,av);}
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
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7031,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7033,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li21),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7033(t12,t8,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k7029 in k7007 in a7004 in k6987 in k6977 in a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in ... */
static void C_ccall f_7031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7031,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop2945 in k7007 in a7004 in k6987 in k6977 in a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in ... */
static void C_fcall f_7033(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_7033,4,t0,t1,t2,t3);}
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

/* build in a7004 in k6987 in k6977 in a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in ... */
static void C_fcall f_7081(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_7081,4,t0,t1,t2,t3);}
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
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7134,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7182,a[2]=((C_word*)t0)[7],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1090: chicken.base#gensym */
t6=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k7132 in build in a7004 in k6987 in k6977 in a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in ... */
static void C_ccall f_7134(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7134,c,av);}
a=C_alloc(34);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,2,t1,t5);
t7=C_a_i_list(&a,2,t4,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7145,a[2]=((C_word*)t0)[6],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1094: build */
t9=((C_word*)((C_word*)t0)[7])[1];
f_7081(t9,t8,C_u_i_cdr(((C_word*)t0)[2]),t1);}
else{
/* chicken-syntax.scm:1095: build */
t9=((C_word*)((C_word*)t0)[7])[1];
f_7081(t9,t8,C_SCHEME_END_OF_LIST,t1);}}

/* k7143 in k7132 in build in a7004 in k6987 in k6977 in a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in ... */
static void C_ccall f_7145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7145,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7180 in build in a7004 in k6987 in k6977 in a6974 in g2902 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in ... */
static void C_ccall f_7182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7182,c,av);}
/* chicken-syntax.scm:1090: r */
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

/* k7208 in foldr2897 in k6937 in k6930 in k6927 in k6924 in k6921 in k6918 in k6915 in k6912 in k6909 in k6906 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in ... */
static void C_ccall f_7210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7210,c,av);}
/* chicken-syntax.scm:1070: g2902 */
t2=((C_word*)t0)[2];
f_6965(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a7236 in map-loop2854 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_7237(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7237,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7245 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_ccall f_7247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7247,c,av);}{
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

/* map-loop2854 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_fcall f_7249(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7249,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7237,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1054: ##sys#decompose-lambda-list */
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

/* k7272 in map-loop2854 in k6869 in a6866 in k5676 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_7274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7274,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7249(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7307 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_7309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7309,c,av);}
/* chicken-syntax.scm:1003: ##sys#extend-macro-environment */
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

/* a7310 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_7311(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7311,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7315,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1010: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[112];
av2[3]=t2;
av2[4]=lf[114];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7313 in a7310 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in ... */
static void C_ccall f_7315(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7315,c,av);}
a=C_alloc(7);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7327,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1014: r */
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

/* k7325 in k7313 in a7310 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in ... */
static void C_ccall f_7327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7327,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1015: r */
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

/* k7328 in k7325 in k7313 in a7310 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_ccall f_7330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7330,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7333,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1016: r */
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

/* k7331 in k7328 in k7325 in k7313 in a7310 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_7333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7333,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1017: r */
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

/* k7334 in k7331 in k7328 in k7325 in k7313 in a7310 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_7336(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7336,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7347,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7349,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t6,a[7]=((C_word*)t0)[8],a[8]=((C_word)li30),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_7349(t8,t4,t1,((C_word*)t0)[9]);}

/* k7345 in k7334 in k7331 in k7328 in k7325 in k7313 in a7310 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_7347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7347,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k7334 in k7331 in k7328 in k7325 in k7313 in a7310 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_fcall f_7349(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_7349,4,t0,t1,t2,t3);}
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
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7375,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1025: r */
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

/* k7373 in loop in k7334 in k7331 in k7328 in k7325 in k7313 in a7310 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_7375(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7375,c,av);}
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
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7386,a[2]=((C_word*)t0)[7],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1032: loop */
t15=((C_word*)((C_word*)t0)[8])[1];
f_7349(t15,t14,t1,C_u_i_cdr(((C_word*)t0)[9]));}

/* k7384 in k7373 in loop in k7334 in k7331 in k7328 in k7325 in k7313 in a7310 in k5673 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_7386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7386,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7467 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_ccall f_7469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7469,c,av);}
/* chicken-syntax.scm:975: ##sys#extend-macro-environment */
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

/* a7470 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_ccall f_7471(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7471,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7475,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:982: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[115];
av2[3]=t2;
av2[4]=lf[116];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7473 in a7470 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_7475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7475,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7478,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:983: r */
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

/* k7476 in k7473 in a7470 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in ... */
static void C_ccall f_7478(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7478,c,av);}
a=C_alloc(16);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7518,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:985: r */
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

/* k7506 in k7516 in k7476 in k7473 in a7470 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_ccall f_7508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_7508,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[34],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7516 in k7476 in k7473 in a7470 in k5670 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in ... */
static void C_ccall f_7518(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7518,c,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_i_cddr(((C_word*)t0)[3]);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7508,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:987: r */
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

/* k7544 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_ccall f_7546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7546,c,av);}
/* chicken-syntax.scm:886: ##sys#extend-macro-environment */
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

/* a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_ccall f_7548(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7548,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7552,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:893: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[117];
av2[3]=t2;
av2[4]=lf[127];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_ccall f_7552(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7552,c,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7642,a[2]=((C_word*)t0)[3],a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7735,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:932: ##sys#check-syntax */
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

/* k7569 in k7803 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_7571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7571,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7575,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:903: scheme#reverse */
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

/* k7573 in k7569 in k7803 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in ... */
static void C_ccall f_7575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7575,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7579,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:904: scheme#reverse */
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

/* k7577 in k7573 in k7569 in k7803 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in ... */
static void C_ccall f_7579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_7579,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7581,a[2]=t3,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7581(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* recur in k7577 in k7573 in k7569 in k7803 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in ... */
static void C_fcall f_7581(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_7581,6,t0,t1,t2,t3,t4,t5);}
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
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7620,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t6,a[7]=t3,a[8]=t4,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:909: scheme#reverse */
t9=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k7600 in k7626 in k7618 in recur in k7577 in k7573 in k7569 in k7803 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in ... */
static void C_ccall f_7602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7602,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7618 in recur in k7577 in k7573 in k7569 in k7803 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in ... */
static void C_ccall f_7620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7620,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7628,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7632,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:910: scheme#reverse */
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

/* k7626 in k7618 in recur in k7577 in k7573 in k7569 in k7803 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in ... */
static void C_ccall f_7628(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7628,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[20],((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7602,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:911: recur */
t6=((C_word*)((C_word*)t0)[6])[1];
f_7581(t6,t5,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[8]),C_u_i_cdr(((C_word*)t0)[9]),C_u_i_car(((C_word*)t0)[8]));}

/* k7630 in k7618 in recur in k7577 in k7573 in k7569 in k7803 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in ... */
static void C_ccall f_7632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7632,c,av);}
a=C_alloc(3);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:908: ##sys#append */
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

/* make-if-tree in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_fcall f_7642(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7642,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(9);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7648,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word)li33),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_7648(t9,t1,t2,t3,C_SCHEME_END_OF_LIST);}

/* recur in make-if-tree in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in ... */
static void C_fcall f_7648(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7648,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7662,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:922: scheme#reverse */
t6=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7732,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t5,a[5]=t1,a[6]=t2,a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:924: r */
t7=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[110];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k7660 in recur in make-if-tree in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in ... */
static void C_ccall f_7662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7662,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7686 in k7710 in k7718 in k7726 in k7730 in recur in make-if-tree in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_7688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_7688,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,3,lf[35],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[34],((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7710 in k7718 in k7726 in k7730 in recur in make-if-tree in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_7712(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7712,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7688,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=C_u_i_cdr(((C_word*)t0)[7]);
t7=C_u_i_cdr(((C_word*)t0)[8]);
t8=C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[10]);
/* chicken-syntax.scm:928: recur */
t9=((C_word*)((C_word*)t0)[11])[1];
f_7648(t9,t5,t6,t7,t8);}

/* k7718 in k7726 in k7730 in recur in make-if-tree in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_7720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_7720,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7712,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:927: r */
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

/* k7726 in k7730 in recur in make-if-tree in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_ccall f_7728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_7728,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7720,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:926: r */
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

/* k7730 in recur in make-if-tree in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in ... */
static void C_ccall f_7732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7732,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7728,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:925: scheme#reverse */
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

/* k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_7735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_7735,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7738,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:933: ##sys#check-syntax */
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

/* k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in ... */
static void C_ccall f_7738(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7738,c,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7747,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7946,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7946(t11,t7,((C_word*)t0)[2]);}

/* k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in ... */
static void C_ccall f_7747(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7747,c,av);}
a=C_alloc(32);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7748,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7764,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(t1,lf[65]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7778,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7912,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7912(t13,t9,t1);}

/* prefix-sym in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_fcall f_7748(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7748,3,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7756,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7760,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:936: scheme#symbol->string */
t6=*((C_word*)lf[119]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k7754 in prefix-sym in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_7756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7756,c,av);}
/* chicken-syntax.scm:936: scheme#string->symbol */
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

/* k7758 in prefix-sym in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_7760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7760,c,av);}
/* chicken-syntax.scm:936: scheme#string-append */
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

/* g2707 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_fcall f_7764(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7764,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7772,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:941: prefix-sym */
f_7748(t3,lf[120],t2);}

/* k7770 in g2707 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_7772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7772,c,av);}
/* chicken-syntax.scm:941: r */
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

/* k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_ccall f_7778(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7778,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7784,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7878,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_7878(t10,t6,((C_word*)t0)[9]);}

/* k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_7784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7784,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:945: r */
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

/* k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in ... */
static void C_ccall f_7787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7787,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:948: r */
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

/* k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in ... */
static void C_ccall f_7790(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7790,c,av);}
a=C_alloc(31);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7805,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7844,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li39),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_7844(t11,t7,((C_word*)t0)[5]);}

/* g2764 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_fcall f_7794(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7794,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7802,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:950: prefix-sym */
f_7748(t3,lf[121],t2);}

/* k7800 in g2764 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_7802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7802,c,av);}
/* chicken-syntax.scm:950: r */
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

/* k7803 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_ccall f_7805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7805,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7571,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[11],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:902: scheme#reverse */
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

/* k7806 in k7803 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_7808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_7808,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:955: make-if-tree */
t3=((C_word*)t0)[9];
f_7642(t3,t2,((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[6],((C_word*)t0)[2]);}

/* k7809 in k7806 in k7803 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in ... */
static void C_ccall f_7811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7811,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7818,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:958: r */
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

/* k7816 in k7809 in k7806 in k7803 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in ... */
static void C_ccall f_7818(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7818,c,av);}
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

/* map-loop2758 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in ... */
static void C_fcall f_7844(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7844,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:950: g2764 */
t4=((C_word*)t0)[4];
f_7794(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7867 in map-loop2758 in k7788 in k7785 in k7782 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in ... */
static void C_ccall f_7869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7869,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7844(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2729 in k7776 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_fcall f_7878(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7878,3,t0,t1,t2);}
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

/* map-loop2701 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in ... */
static void C_fcall f_7912(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7912,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7937,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:941: g2707 */
t4=((C_word*)t0)[4];
f_7764(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7935 in map-loop2701 in k7745 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in ... */
static void C_ccall f_7937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7937,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7912(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2671 in k7736 in k7733 in k7550 in a7547 in k5667 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in ... */
static void C_fcall f_7946(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_7946,3,t0,t1,t2);}
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

/* k7992 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
static void C_ccall f_7994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7994,c,av);}
/* chicken-syntax.scm:782: ##sys#extend-macro-environment */
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

/* a7995 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
static void C_ccall f_7996(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7996,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8000,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:786: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[128];
av2[3]=t2;
av2[4]=lf[131];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k7998 in a7995 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_ccall f_8000(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8000,c,av);}
a=C_alloc(8);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8010,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8010(t8,((C_word*)t0)[4],t2,C_SCHEME_TRUE);}

/* fold in k7998 in a7995 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_fcall f_8010(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_8010,4,t0,t1,t2,t3);}
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
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8037,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:795: ##sys#check-syntax */
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
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8072,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8097,a[2]=((C_word*)t0)[4],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:800: chicken.base#gensym */
t10=*((C_word*)lf[54]+1);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8100,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:804: ##sys#check-syntax */
t9=*((C_word*)lf[43]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[128];
av2[3]=t4;
av2[4]=lf[130];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}}}

/* k8035 in fold in k7998 in a7995 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_8037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_8037,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8040,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8063,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:796: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8038 in k8035 in fold in k7998 in a7995 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in ... */
static void C_ccall f_8040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8040,c,av);}
a=C_alloc(14);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8055,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:798: fold */
t5=((C_word*)((C_word*)t0)[4])[1];
f_8010(t5,t4,((C_word*)t0)[5],t1);}

/* k8053 in k8038 in k8035 in fold in k7998 in a7995 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in ... */
static void C_ccall f_8055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8055,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8061 in k8035 in fold in k7998 in a7995 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in ... */
static void C_ccall f_8063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8063,c,av);}
/* chicken-syntax.scm:796: r */
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

/* k8070 in fold in k7998 in a7995 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_8072(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8072,c,av);}
a=C_alloc(14);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8087,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:802: fold */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8010(t6,t5,((C_word*)t0)[5],t1);}

/* k8085 in k8070 in fold in k7998 in a7995 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in ... */
static void C_ccall f_8087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8087,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8095 in fold in k7998 in a7995 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_8097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8097,c,av);}
/* chicken-syntax.scm:800: r */
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

/* k8098 in fold in k7998 in a7995 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_8100(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8100,c,av);}
a=C_alloc(14);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8116,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:807: fold */
t7=((C_word*)((C_word*)t0)[4])[1];
f_8010(t7,t6,((C_word*)t0)[5],t2);}

/* k8114 in k8098 in fold in k7998 in a7995 in k5664 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in ... */
static void C_ccall f_8116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8116,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8134 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_ccall f_8136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8136,c,av);}
/* chicken-syntax.scm:761: ##sys#extend-macro-environment */
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

/* a8137 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_ccall f_8138(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8138,c,av);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8140,a[2]=t4,a[3]=t3,a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
t7=t5=t6;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8228,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:780: quotify-proc */
t9=t5;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cdr(t2);
av2[3]=lf[132];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* quotify-proc2571 in a8137 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
static void C_ccall f_8140(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8140,c,av);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8144,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:767: ##sys#check-syntax */
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

/* k8142 in quotify-proc2571 in a8137 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_ccall f_8144(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8144,c,av);}
a=C_alloc(12);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_u_i_car(t2):t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8153,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_u_i_cdr(t2);
t7=C_u_i_cdr(((C_word*)t0)[2]);
t8=C_a_i_cons(&a,2,t6,t7);
t9=t5;
f_8153(t9,C_a_i_cons(&a,2,lf[20],t8));}
else{
t6=t5;
f_8153(t6,C_i_cadr(((C_word*)t0)[2]));}}

/* k8151 in k8142 in quotify-proc2571 in a8137 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_fcall f_8153(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_8153,2,t0,t1);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_pairp(t1);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8165,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_8165(t6,t4);}
else{
t6=C_i_car(t1);
t7=C_eqp(lf[20],t6);
if(C_truep(C_i_not(t7))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8181,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8185,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:775: r */
t10=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[134];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t8=t5;
f_8165(t8,C_SCHEME_FALSE);}}}

/* k8154 in k8151 in k8142 in quotify-proc2571 in a8137 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_8156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8156,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8163 in k8151 in k8142 in quotify-proc2571 in a8137 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_fcall f_8165(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_8165,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
/* chicken-syntax.scm:776: chicken.syntax#syntax-error */
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

/* k8179 in k8151 in k8142 in quotify-proc2571 in a8137 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_8181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8181,c,av);}
t2=((C_word*)t0)[2];
f_8165(t2,C_i_not(t1));}

/* k8183 in k8151 in k8142 in quotify-proc2571 in a8137 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_8185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8185,c,av);}
/* chicken-syntax.scm:775: c */
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

/* k8226 in a8137 in k5661 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
static void C_ccall f_8228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8228,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[136],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8238 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in ... */
static void C_ccall f_8240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8240,c,av);}
/* chicken-syntax.scm:750: ##sys#extend-macro-environment */
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

/* a8241 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in ... */
static void C_ccall f_8242(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8242,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8246,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:755: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[139];
av2[3]=t2;
av2[4]=lf[140];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8244 in a8241 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_ccall f_8246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8246,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:756: r */
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

/* k8247 in k8244 in a8241 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
static void C_ccall f_8249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8249,c,av);}
a=C_alloc(15);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[20],C_SCHEME_END_OF_LIST,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8268,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:759: r */
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

/* k8266 in k8247 in k8244 in a8241 in k5658 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_ccall f_8268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_8268,c,av);}
a=C_alloc(27);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,t1,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[20],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[25],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8282 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in ... */
static void C_ccall f_8284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8284,c,av);}
/* chicken-syntax.scm:741: ##sys#extend-macro-environment */
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

/* a8285 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in ... */
static void C_ccall f_8286(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8286,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8290,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:746: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[141];
av2[3]=t2;
av2[4]=lf[144];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8288 in a8285 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in ... */
static void C_ccall f_8290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8290,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:747: chicken.internal#check-for-multiple-bindings */
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

/* k8291 in k8288 in a8285 in k5655 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_ccall f_8293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8293,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[48],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8304 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_ccall f_8306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8306,c,av);}
/* chicken-syntax.scm:722: ##sys#extend-macro-environment */
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

/* a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_ccall f_8308(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8308,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8312,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:726: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[145];
av2[3]=t2;
av2[4]=lf[149];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in ... */
static void C_ccall f_8312(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8312,c,av);}
a=C_alloc(18);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t2,lf[65]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8326,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8528,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_8528(t14,t10,t2);}

/* k8324 in k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in ... */
static void C_ccall f_8326(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8326,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8332,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8494,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li54),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8494(t10,t6,((C_word*)t0)[4]);}

/* k8330 in k8324 in k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_ccall f_8332(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8332,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[146]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8354,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8458,a[2]=t9,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_8458(t11,t7,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k8352 in k8330 in k8324 in k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
static void C_ccall f_8354(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8354,c,av);}
a=C_alloc(14);
t2=C_i_check_list_2(t1,lf[65]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8360,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8424,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8424(t7,t3,t1);}

/* k8358 in k8352 in k8330 in k8324 in k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_ccall f_8360(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8360,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8364,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[147]+1);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8374,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8376,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li50),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_8376(t13,t9,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k8362 in k8358 in k8352 in k8330 in k8324 in k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_ccall f_8364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8364,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[35],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8372 in k8358 in k8352 in k8330 in k8324 in k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_ccall f_8374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8374,c,av);}
/* chicken-syntax.scm:731: ##sys#append */
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

/* map-loop2519 in k8358 in k8352 in k8330 in k8324 in k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_fcall f_8376(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_8376,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8405,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:738: g2525 */
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

/* k8403 in map-loop2519 in k8358 in k8352 in k8330 in k8324 in k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_8405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8405,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8376(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)));}

/* map-loop2471 in k8352 in k8330 in k8324 in k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_fcall f_8424(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8424,3,t0,t1,t2);}
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

/* foldl2494 in k8330 in k8324 in k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
static void C_fcall f_8458(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,5)))){
C_save_and_reclaim_args((void *)trf_8458,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8488,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_slot(t2,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8482,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8484,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:734: ##sys#decompose-lambda-list */
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

/* k8480 in foldl2494 in k8330 in k8324 in k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_ccall f_8482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8482,c,av);}
/* chicken-syntax.scm:734: ##sys#append */
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

/* a8483 in foldl2494 in k8330 in k8324 in k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_ccall f_8484(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8484,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8486 in foldl2494 in k8330 in k8324 in k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_ccall f_8488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8488,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8458(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop2442 in k8324 in k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_fcall f_8494(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8494,3,t0,t1,t2);}
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

/* map-loop2416 in k8310 in a8307 in k5652 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in ... */
static void C_fcall f_8528(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8528,3,t0,t1,t2);}
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

/* k8562 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_8564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8564,c,av);}
/* chicken-syntax.scm:707: ##sys#extend-macro-environment */
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

/* a8565 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
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
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8570,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:711: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[150];
av2[3]=t2;
av2[4]=lf[152];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8568 in a8565 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_ccall f_8570(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8570,c,av);}
a=C_alloc(5);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8578,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:714: r */
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

/* k8576 in k8568 in a8565 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in ... */
static void C_ccall f_8578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_8578,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8583,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=((C_word)li57),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_8583(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* fold in k8576 in k8568 in a8565 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in ... */
static void C_fcall f_8583(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8583,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8608,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:719: fold */
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}

/* k8606 in fold in k8576 in k8568 in a8565 in k5649 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_ccall f_8608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8608,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8616 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_8618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8618,c,av);}
/* chicken-syntax.scm:653: ##sys#extend-macro-environment */
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

/* a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_8620(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8620,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8624,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:657: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[151];
av2[3]=t2;
av2[4]=lf[153];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_8624(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8624,c,av);}
a=C_alloc(33);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8630,a[2]=t6,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8658,a[2]=t8,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t11=C_set_block_item(t6,0,t9);
t12=C_set_block_item(t8,0,t10);
t13=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t14=t13;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=((C_word*)t15)[1];
t17=C_i_check_list_2(t2,lf[65]);
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8706,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t8,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9059,a[2]=t15,a[3]=t20,a[4]=t16,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t22=((C_word*)t20)[1];
f_9059(t22,t18,t2);}

/* append*2222 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_ccall f_8630(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8630,c,av);}
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
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8651,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:664: append* */
t7=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=C_u_i_cdr(t2);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k8649 in append*2222 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in ... */
static void C_ccall f_8651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8651,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map*2223 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_ccall f_8658(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8658,c,av);}
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
/* chicken-syntax.scm:667: proc */
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8681,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:668: proc */
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(t3);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}

/* k8679 in map*2223 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in ... */
static void C_ccall f_8681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8681,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8685,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:668: map* */
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

/* k8683 in k8679 in map*2223 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in ... */
static void C_ccall f_8685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8685,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_ccall f_8706(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8706,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8709,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9021,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_9021(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in ... */
static void C_ccall f_8709(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8709,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8713,a[2]=((C_word*)t0)[2],a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(t1,lf[65]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8731,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8987,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li68),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_8987(t12,t8,t1);}

/* g2283 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in ... */
static void C_fcall f_8713(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8713,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8721,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8725,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:679: chicken.base#gensym */
t5=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8719 in g2283 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_ccall f_8721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8721,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8723 in g2283 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_ccall f_8725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8725,c,av);}
/* chicken-syntax.scm:679: r */
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

/* k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in ... */
static void C_ccall f_8731(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8731,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8732,a[2]=t1,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8743,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8943,a[2]=t5,a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word)li67),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8943(t7,t3,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* lookup in k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_ccall f_8732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8732,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_cdr(C_i_assq(t2,((C_word*)t0)[2]));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8741 in k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_ccall f_8743(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8743,c,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8909,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8909(t10,t6,((C_word*)t0)[7]);}

/* k8756 in k8741 in k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
static void C_ccall f_8758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_8758,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8760,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word)li65),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_8760(t5,((C_word*)t0)[5],((C_word*)t0)[6],t1,((C_word*)t0)[7]);}

/* fold in k8756 in k8741 in k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_fcall f_8760(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_8760,5,t0,t1,t2,t3,t4);}
a=C_alloc(22);
if(C_truep(C_i_nullp(t2))){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8779,a[2]=((C_word*)t0)[2],a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8793,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8795,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,a[6]=((C_word)li64),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_8795(t15,t11,((C_word*)t0)[3]);}
else{
t5=C_i_car(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_nullp(C_i_cdar(t4)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_caar(t4);
t9=C_i_car(t3);
t10=C_a_i_list(&a,2,t8,t9);
t11=C_a_i_list(&a,1,t10);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8844,a[2]=t1,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:699: fold */
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
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8881,a[2]=t10,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:705: fold */
t16=t11;
t17=C_i_cdr(t2);
t18=C_u_i_cdr(t3);
t19=C_u_i_cdr(t4);
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}}}

/* g2334 in fold in k8756 in k8741 in k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_fcall f_8779(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8779,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8787,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:694: lookup */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
f_8732(3,av2);}}

/* k8785 in g2334 in fold in k8756 in k8741 in k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_8787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8787,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8791 in fold in k8756 in k8741 in k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_ccall f_8793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8793,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[35],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2328 in fold in k8756 in k8741 in k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_fcall f_8795(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8795,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:694: g2334 */
t4=((C_word*)t0)[4];
f_8779(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8818 in map-loop2328 in fold in k8756 in k8741 in k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_8820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8820,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8795(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k8842 in fold in k8756 in k8741 in k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_ccall f_8844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_8844,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8879 in fold in k8756 in k8741 in k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_ccall f_8881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_8881,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[20],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[25],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2363 in k8741 in k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
static void C_fcall f_8909(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8909,3,t0,t1,t2);}
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

/* loop in k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_fcall f_8943(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8943,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
/* chicken-syntax.scm:683: scheme#reverse */
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
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8974,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:686: lookup */
t7=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
f_8732(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8981,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:687: map* */
t7=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}}

/* k8972 in loop in k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
static void C_ccall f_8974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8974,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:688: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8943(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]),t2);}

/* k8979 in loop in k8729 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
static void C_ccall f_8981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8981,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:688: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8943(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]),t2);}

/* map-loop2277 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in ... */
static void C_fcall f_8987(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8987,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:679: g2283 */
t4=((C_word*)t0)[4];
f_8713(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9010 in map-loop2277 in k8707 in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_ccall f_9012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9012,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8987(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* loop in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in ... */
static void C_fcall f_9021(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9021,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9034,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t4))){
/* chicken-syntax.scm:675: scheme#append */
t6=*((C_word*)lf[105]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
if(C_truep(C_i_pairp(t4))){
/* chicken-syntax.scm:676: append* */
t6=((C_word*)((C_word*)t0)[3])[1];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=C_a_i_cons(&a,2,t4,t3);
/* chicken-syntax.scm:678: loop */
t8=t1;
t9=C_u_i_cdr(t2);
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}}

/* k9032 in loop in k8704 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in ... */
static void C_ccall f_9034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9034,c,av);}
/* chicken-syntax.scm:678: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9021(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),t1);}

/* map-loop2239 in k8622 in a8619 in k5646 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_fcall f_9059(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9059,3,t0,t1,t2);}
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

/* k9093 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in ... */
static void C_ccall f_9095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9095,c,av);}
/* chicken-syntax.scm:636: ##sys#extend-macro-environment */
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

/* a9096 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in ... */
static void C_ccall f_9097(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9097,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9101,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:640: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[154];
av2[3]=t2;
av2[4]=lf[159];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9099 in a9096 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_9101(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9101,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9108,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9112,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9134,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:642: ##sys#decompose-lambda-list */
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

/* k9106 in k9099 in a9096 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_9108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9108,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[26],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9110 in k9099 in a9096 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_9112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9112,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9120,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:651: ##sys#expand-multiple-values-assignment */
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

/* k9118 in k9110 in k9099 in a9096 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_ccall f_9120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9120,c,av);}
a=C_alloc(3);
t2=C_a_i_list(&a,1,t1);
/* chicken-syntax.scm:641: ##sys#append */
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

/* a9133 in k9099 in a9096 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_9134(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9134,c,av);}
a=C_alloc(10);
t5=C_i_check_list_2(t2,lf[67]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9153,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9200,a[2]=t8,a[3]=((C_word)li73),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_9200(t10,t6,t2);}

/* k9138 in for-each-loop2168 in a9133 in k9099 in a9096 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in ... */
static void C_ccall f_9140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9140,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9147,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:647: ##sys#current-module */
t3=*((C_word*)lf[83]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9145 in k9138 in for-each-loop2168 in a9133 in k9099 in a9096 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in ... */
static void C_ccall f_9147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9147,c,av);}
/* chicken-syntax.scm:647: ##sys#register-export */
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

/* k9151 in a9133 in k9099 in a9096 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_ccall f_9153(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9153,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9166,a[2]=t4,a[3]=t7,a[4]=t5,a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_9166(t9,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* map-loop2178 in k9151 in a9133 in k9099 in a9096 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in ... */
static void C_fcall f_9166(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9166,3,t0,t1,t2);}
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

/* for-each-loop2168 in a9133 in k9099 in a9096 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_fcall f_9200(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_9200,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9210,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9140,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:646: ##sys#get */
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

/* k9208 in for-each-loop2168 in a9133 in k9099 in a9096 in k5642 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in ... */
static void C_ccall f_9210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9210,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9200(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k9223 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in ... */
static void C_ccall f_9225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9225,c,av);}
/* chicken-syntax.scm:628: ##sys#extend-macro-environment */
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

/* a9226 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in ... */
static void C_ccall f_9227(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9227,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9231,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:632: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[160];
av2[3]=t2;
av2[4]=lf[161];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9229 in a9226 in k5639 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in ... */
static void C_ccall f_9231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9231,c,av);}
/* chicken-syntax.scm:633: ##sys#expand-multiple-values-assignment */
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

/* k9244 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
static void C_ccall f_9246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9246,c,av);}
/* chicken-syntax.scm:619: ##sys#extend-macro-environment */
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

/* a9247 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
static void C_ccall f_9248(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9248,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9252,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:623: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[162];
av2[3]=t2;
av2[4]=lf[164];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9250 in a9247 in k5636 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in ... */
static void C_ccall f_9252(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9252,c,av);}
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

/* k9272 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in ... */
static void C_ccall f_9274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9274,c,av);}
/* chicken-syntax.scm:611: ##sys#extend-macro-environment */
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

/* a9275 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in ... */
static void C_ccall f_9276(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9276,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9280,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:615: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[165];
av2[3]=t2;
av2[4]=lf[166];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9278 in a9275 in k5633 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
static void C_ccall f_9280(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9280,c,av);}
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

/* k9296 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in ... */
static void C_ccall f_9298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9298,c,av);}
/* chicken-syntax.scm:598: ##sys#extend-macro-environment */
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

/* a9299 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in ... */
static void C_ccall f_9300(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9300,c,av);}
a=C_alloc(22);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9309,a[2]=t3,a[3]=t4,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp);
t10=C_i_cdr(t2);
t11=C_i_check_list_2(t10,lf[65]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9344,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9346,a[2]=t7,a[3]=t14,a[4]=t9,a[5]=t8,a[6]=((C_word)li82),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_9346(t16,t12,t10);}

/* g2093 in a9299 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in ... */
static void C_fcall f_9309(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,8)))){
C_save_and_reclaim_args((void *)trf_9309,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9315,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li79),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9321,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:605: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a9314 in g2093 in a9299 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
static void C_ccall f_9315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9315,c,av);}
/* chicken-syntax.scm:605: ##sys#decompose-import */
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

/* a9320 in g2093 in a9299 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
static void C_ccall f_9321(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9321,c,av);}
a=C_alloc(4);
if(C_truep(C_i_not(t3))){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=lf[169];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9335,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:608: chicken.internal#module-requirement */
t9=*((C_word*)lf[171]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k9333 in a9320 in g2093 in a9299 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in ... */
static void C_ccall f_9335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9335,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[170],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9342 in a9299 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in ... */
static void C_ccall f_9344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9344,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[26],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop2087 in a9299 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in ... */
static void C_fcall f_9346(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9346,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:604: g2093 */
t4=((C_word*)t0)[4];
f_9309(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9369 in map-loop2087 in a9299 in k5630 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
static void C_ccall f_9371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9371,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_9346(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k9380 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_9382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9382,c,av);}
/* chicken-syntax.scm:544: ##sys#extend-macro-environment */
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

/* a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in k5565 in ... */
static void C_ccall f_9384(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9384,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9403,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:552: ##sys#check-syntax */
t6=*((C_word*)lf[43]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[172];
av2[3]=t2;
av2[4]=lf[180];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in k5568 in ... */
static void C_ccall f_9403(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9403,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9411,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:555: r */
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

/* k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in k5571 in ... */
static void C_ccall f_9411(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9411,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9420,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10276,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10276(t11,t7,((C_word*)t0)[2]);}

/* k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in k5575 in ... */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9420,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9426,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10242,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li100),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10242(t10,t6,((C_word*)t0)[6]);}

/* k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in k5578 in ... */
static void C_ccall f_9426(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9426,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9430,a[2]=((C_word*)t0)[2],a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9444,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10208,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li99),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_10208(t12,t8,((C_word*)t0)[3]);}

/* g1678 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in ... */
static void C_fcall f_9430(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9430,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9438,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t2))){
/* chicken-syntax.scm:550: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* chicken-syntax.scm:551: chicken.base#gensym */
t4=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[173];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k9436 in g1678 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_9438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9438,c,av);}
/* chicken-syntax.scm:558: r */
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

/* k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in k5581 in ... */
static void C_ccall f_9444(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9444,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9448,a[2]=((C_word*)t0)[2],a[3]=((C_word)li85),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9459,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10174,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li98),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10174(t11,t7,((C_word*)t0)[7]);}

/* g1706 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_fcall f_9448(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9448,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9456,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:559: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[174];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9454 in g1706 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_9456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9456,c,av);}
/* chicken-syntax.scm:559: r */
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

/* k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in k5584 in ... */
static void C_ccall f_9459(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9459,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9463,a[2]=((C_word*)t0)[2],a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9474,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10140,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li97),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10140(t11,t7,((C_word*)t0)[8]);}

/* g1734 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_fcall f_9463(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9463,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9471,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:560: chicken.base#gensym */
t3=*((C_word*)lf[54]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[42];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9469 in g1734 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_ccall f_9471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9471,c,av);}
/* chicken-syntax.scm:560: r */
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

/* k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in k5587 in ... */
static void C_ccall f_9474(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9474,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9487,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10092,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li96),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10092(t11,t7,((C_word*)t0)[2],((C_word*)t0)[8]);}

/* k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in k5590 in ... */
static void C_ccall f_9487(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9487,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[65]);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9504,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10044,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li95),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10044(t12,t8,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in k5593 in ... */
static void C_ccall f_9504(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9504,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9515,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9996,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li94),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_9996(t10,t6,((C_word*)t0)[7],((C_word*)t0)[7]);}

/* k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in ... */
static void C_ccall f_9515(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9515,c,av);}
a=C_alloc(51);
t2=C_a_i_list(&a,4,lf[175],lf[176],C_SCHEME_TRUE,C_SCHEME_TRUE);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9766,a[2]=((C_word*)t0)[2],a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[65]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9784,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9926,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li93),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_9926(t15,t11,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[3]);}

/* k9561 in k9786 in k9782 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
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
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,4)))){
C_save_and_reclaim((void *)f_9563,c,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9567,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9579,a[2]=t2,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9641,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li89),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9641(t11,t7,((C_word*)t0)[11],((C_word*)t0)[9]);}

/* k9565 in k9561 in k9786 in k9782 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_ccall f_9567(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9567,c,av);}
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

/* k9577 in k9561 in k9786 in k9782 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_ccall f_9579(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9579,c,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9591,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9593,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_9593(t10,t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k9589 in k9577 in k9561 in k9786 in k9782 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_ccall f_9591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9591,c,av);}
/* chicken-syntax.scm:561: ##sys#append */
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

/* map-loop2043 in k9577 in k9561 in k9786 in k9782 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in ... */
static void C_fcall f_9593(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9593,4,t0,t1,t2,t3);}
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

/* map-loop2007 in k9561 in k9786 in k9782 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_fcall f_9641(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9641,4,t0,t1,t2,t3);}
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

/* map-loop1965 in k9786 in k9782 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_fcall f_9689(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_9689,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9696,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_9696(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_9696(t6,C_SCHEME_FALSE);}}

/* k9694 in map-loop1965 in k9786 in k9782 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in ... */
static void C_fcall f_9696(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_9696,2,t0,t1);}
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
f_9689(t9,((C_word*)t0)[6],C_slot(((C_word*)t0)[2],C_fix(1)),C_slot(((C_word*)t0)[7],C_fix(1)),C_slot(((C_word*)t0)[3],C_fix(1)));}
else{
t2=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[8],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g1857 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static C_word C_fcall f_9766(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t4=C_a_i_list(&a,4,t1,t2,C_SCHEME_TRUE,C_SCHEME_FALSE);
t5=C_a_i_list(&a,4,lf[34],((C_word*)t0)[2],t4,t2);
return(C_a_i_list(&a,2,t3,t5));}

/* k9782 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_ccall f_9784(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9784,c,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9788,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9804,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9878,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li92),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9878(t11,t7,((C_word*)t0)[10],((C_word*)t0)[8]);}

/* k9786 in k9782 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
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
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(46,c,5)))){
C_save_and_reclaim((void *)f_9788,c,av);}
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
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9563,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9689,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li90),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9689(t15,t11,((C_word*)t0)[11],((C_word*)t0)[9],((C_word*)t0)[10]);}

/* k9802 in k9782 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
static void C_ccall f_9804(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9804,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9808,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9820,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9830,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_9830(t11,t7,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k9806 in k9802 in k9782 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_ccall f_9808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9808,c,av);}
/* chicken-syntax.scm:561: ##sys#append */
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

/* k9818 in k9802 in k9782 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_ccall f_9820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_9820,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,lf[178],((C_word*)t0)[2],C_SCHEME_FALSE);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:561: ##sys#append */
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

/* map-loop1929 in k9802 in k9782 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in ... */
static void C_fcall f_9830(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9830,4,t0,t1,t2,t3);}
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

/* map-loop1893 in k9782 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
static void C_fcall f_9878(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9878,4,t0,t1,t2,t3);}
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

/* map-loop1851 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in ... */
static void C_fcall f_9926(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_9926,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9933,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t1,a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_9933(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_9933(t6,C_SCHEME_FALSE);}}

/* k9931 in map-loop1851 in k9513 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in ... */
static void C_fcall f_9933(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,4)))){
C_save_and_reclaim_args((void *)trf_9933,2,t0,t1);}
a=C_alloc(33);
if(C_truep(t1)){
t2=(
/* chicken-syntax.scm:576: g1857 */
  f_9766(C_a_i(&a,30),((C_word*)t0)[2],C_slot(((C_word*)t0)[3],C_fix(0)),C_slot(((C_word*)t0)[4],C_fix(0)),C_slot(((C_word*)t0)[5],C_fix(0)))
);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=((C_word*)((C_word*)t0)[7])[1];
f_9926(t6,((C_word*)t0)[8],C_slot(((C_word*)t0)[3],C_fix(1)),C_slot(((C_word*)t0)[4],C_fix(1)),C_slot(((C_word*)t0)[5],C_fix(1)));}
else{
t2=((C_word*)t0)[8];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[9],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* map-loop1820 in k9502 in k9485 in k9472 in k9457 in k9442 in k9424 in k9418 in k9409 in k9401 in a9383 in k5627 in k5624 in k5621 in k5618 in k5615 in k5612 in k5609 in k5606 in k5603 in k5600 in k5597 in ... */
static void C_fcall f_9996(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_9996,4,t0,t1,t2,t3);}
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
if(C_unlikely(!C_demand_2(2777))){
C_save(t1);
C_rereclaim2(2777*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,285);
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
lf[211]=C_h_intern(&lf[211],7, C_text("ssdelay"));
lf[212]=C_h_intern(&lf[212],19, C_text("let-compiler-syntax"));
lf[213]=C_h_intern(&lf[213],26, C_text("##core#let-compiler-syntax"));
lf[214]=C_h_intern(&lf[214],51, C_text("chicken.internal.syntax-rules#syntax-rules-mismatch"));
lf[215]=C_h_intern(&lf[215],7, C_text("##sys#+"));
lf[216]=C_h_intern(&lf[216],7, C_text("##sys#="));
lf[217]=C_h_intern(&lf[217],8, C_text("##sys#>="));
lf[218]=C_h_intern(&lf[218],12, C_text("##sys#length"));
lf[219]=C_h_intern(&lf[219],11, C_text("##sys#list\077"));
lf[220]=C_h_intern(&lf[220],22, C_text("define-compiler-syntax"));
lf[221]=C_h_intern(&lf[221],29, C_text("##core#define-compiler-syntax"));
lf[222]=C_h_intern(&lf[222],17, C_text("define-for-syntax"));
lf[223]=C_h_intern(&lf[223],16, C_text("begin-for-syntax"));
lf[224]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[225]=C_h_intern(&lf[225],26, C_text("##core#elaborationtimeonly"));
lf[226]=C_h_intern(&lf[226],30, C_text("##sys#register-meta-expression"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000"));
lf[228]=C_h_intern(&lf[228],6, C_text("syntax"));
lf[229]=C_h_intern(&lf[229],13, C_text("##core#syntax"));
lf[230]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[231]=C_h_intern(&lf[231],11, C_text("define-type"));
lf[232]=C_h_intern_kw(&lf[232],9, C_text("compiling"));
lf[233]=C_h_intern(&lf[233],14, C_text("##sys#features"));
lf[234]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[235]=C_h_intern(&lf[235],28, C_text("##compiler#type-abbreviation"));
lf[236]=C_h_intern(&lf[236],18, C_text("##sys#put/restore!"));
lf[237]=C_h_intern(&lf[237],52, C_text("chicken.compiler.scrutinizer#check-and-validate-type"));
lf[238]=C_h_intern(&lf[238],5, C_text("quote"));
lf[239]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[240]=C_h_intern(&lf[240],17, C_text("compiler-typecase"));
lf[241]=C_h_intern(&lf[241],4, C_text("else"));
lf[242]=C_h_intern(&lf[242],15, C_text("##core#typecase"));
lf[243]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001\376\377\001\000\000\000\001"));
lf[244]=C_h_intern(&lf[244],21, C_text("define-specialization"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[246]=C_h_intern(&lf[246],6, C_text("inline"));
lf[247]=C_h_intern(&lf[247],4, C_text("hide"));
lf[248]=C_h_intern(&lf[248],10, C_text("##sys#put!"));
lf[249]=C_h_intern(&lf[249],32, C_text("##compiler#local-specializations"));
lf[250]=C_h_intern(&lf[250],1, C_text("\052"));
lf[251]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027invalid argument syntax"));
lf[252]=C_h_intern(&lf[252],15, C_text("##sys#globalize"));
lf[253]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\001\001_\376"
"\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[254]=C_h_intern(&lf[254],6, C_text("assume"));
lf[255]=C_h_intern(&lf[255],3, C_text("the"));
lf[256]=C_h_intern(&lf[256],11, C_text("##sys#map-n"));
lf[257]=C_h_intern(&lf[257],3, C_text("let"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[259]=C_h_intern(&lf[259],1, C_text(":"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001##core#undefined\376\377\016"));
lf[261]=C_h_intern(&lf[261],42, C_text("chicken.compiler.scrutinizer#validate-type"));
lf[262]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023invalid type syntax"));
lf[263]=C_h_intern(&lf[263],4, C_text("type"));
lf[264]=C_h_intern(&lf[264],9, C_text("predicate"));
lf[265]=C_h_intern(&lf[265],4, C_text("pure"));
lf[266]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001symbol\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[267]=C_h_intern(&lf[267],4, C_text("memv"));
lf[268]=C_h_intern(&lf[268],11, C_text("scheme#memv"));
lf[269]=C_h_intern(&lf[269],14, C_text("condition-case"));
lf[270]=C_h_intern(&lf[270],9, C_text("condition"));
lf[271]=C_h_intern(&lf[271],10, C_text("##sys#slot"));
lf[272]=C_h_intern(&lf[272],24, C_text("chicken.condition#signal"));
lf[273]=C_h_intern(&lf[273],4, C_text("cond"));
lf[274]=C_h_intern(&lf[274],17, C_text("handle-exceptions"));
lf[275]=C_h_intern(&lf[275],3, C_text("and"));
lf[276]=C_h_intern(&lf[276],4, C_text("kvar"));
lf[277]=C_h_intern(&lf[277],5, C_text("exvar"));
lf[278]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[279]=C_h_intern(&lf[279],30, C_text("call-with-current-continuation"));
lf[280]=C_h_intern(&lf[280],37, C_text("scheme#call-with-current-continuation"));
lf[281]=C_h_intern(&lf[281],40, C_text("chicken.condition#with-exception-handler"));
lf[282]=C_h_intern(&lf[282],4, C_text("args"));
lf[283]=C_h_intern(&lf[283],1, C_text("k"));
lf[284]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
C_register_lf2(lf,285,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4251,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[667] = {
{C_text("f_10044:chicken_2dsyntax_2escm"),(void*)f_10044},
{C_text("f_10092:chicken_2dsyntax_2escm"),(void*)f_10092},
{C_text("f_10140:chicken_2dsyntax_2escm"),(void*)f_10140},
{C_text("f_10165:chicken_2dsyntax_2escm"),(void*)f_10165},
{C_text("f_10174:chicken_2dsyntax_2escm"),(void*)f_10174},
{C_text("f_10199:chicken_2dsyntax_2escm"),(void*)f_10199},
{C_text("f_10208:chicken_2dsyntax_2escm"),(void*)f_10208},
{C_text("f_10233:chicken_2dsyntax_2escm"),(void*)f_10233},
{C_text("f_10242:chicken_2dsyntax_2escm"),(void*)f_10242},
{C_text("f_10276:chicken_2dsyntax_2escm"),(void*)f_10276},
{C_text("f_10312:chicken_2dsyntax_2escm"),(void*)f_10312},
{C_text("f_10314:chicken_2dsyntax_2escm"),(void*)f_10314},
{C_text("f_10318:chicken_2dsyntax_2escm"),(void*)f_10318},
{C_text("f_10332:chicken_2dsyntax_2escm"),(void*)f_10332},
{C_text("f_10336:chicken_2dsyntax_2escm"),(void*)f_10336},
{C_text("f_10344:chicken_2dsyntax_2escm"),(void*)f_10344},
{C_text("f_10347:chicken_2dsyntax_2escm"),(void*)f_10347},
{C_text("f_10351:chicken_2dsyntax_2escm"),(void*)f_10351},
{C_text("f_10359:chicken_2dsyntax_2escm"),(void*)f_10359},
{C_text("f_10362:chicken_2dsyntax_2escm"),(void*)f_10362},
{C_text("f_10369:chicken_2dsyntax_2escm"),(void*)f_10369},
{C_text("f_10393:chicken_2dsyntax_2escm"),(void*)f_10393},
{C_text("f_10405:chicken_2dsyntax_2escm"),(void*)f_10405},
{C_text("f_10409:chicken_2dsyntax_2escm"),(void*)f_10409},
{C_text("f_10421:chicken_2dsyntax_2escm"),(void*)f_10421},
{C_text("f_10431:chicken_2dsyntax_2escm"),(void*)f_10431},
{C_text("f_10479:chicken_2dsyntax_2escm"),(void*)f_10479},
{C_text("f_10537:chicken_2dsyntax_2escm"),(void*)f_10537},
{C_text("f_10552:chicken_2dsyntax_2escm"),(void*)f_10552},
{C_text("f_10556:chicken_2dsyntax_2escm"),(void*)f_10556},
{C_text("f_10568:chicken_2dsyntax_2escm"),(void*)f_10568},
{C_text("f_10578:chicken_2dsyntax_2escm"),(void*)f_10578},
{C_text("f_10626:chicken_2dsyntax_2escm"),(void*)f_10626},
{C_text("f_10682:chicken_2dsyntax_2escm"),(void*)f_10682},
{C_text("f_10691:chicken_2dsyntax_2escm"),(void*)f_10691},
{C_text("f_10698:chicken_2dsyntax_2escm"),(void*)f_10698},
{C_text("f_10707:chicken_2dsyntax_2escm"),(void*)f_10707},
{C_text("f_10709:chicken_2dsyntax_2escm"),(void*)f_10709},
{C_text("f_10759:chicken_2dsyntax_2escm"),(void*)f_10759},
{C_text("f_10773:chicken_2dsyntax_2escm"),(void*)f_10773},
{C_text("f_10779:chicken_2dsyntax_2escm"),(void*)f_10779},
{C_text("f_10827:chicken_2dsyntax_2escm"),(void*)f_10827},
{C_text("f_10861:chicken_2dsyntax_2escm"),(void*)f_10861},
{C_text("f_10886:chicken_2dsyntax_2escm"),(void*)f_10886},
{C_text("f_10895:chicken_2dsyntax_2escm"),(void*)f_10895},
{C_text("f_10920:chicken_2dsyntax_2escm"),(void*)f_10920},
{C_text("f_10929:chicken_2dsyntax_2escm"),(void*)f_10929},
{C_text("f_10965:chicken_2dsyntax_2escm"),(void*)f_10965},
{C_text("f_10967:chicken_2dsyntax_2escm"),(void*)f_10967},
{C_text("f_10971:chicken_2dsyntax_2escm"),(void*)f_10971},
{C_text("f_10982:chicken_2dsyntax_2escm"),(void*)f_10982},
{C_text("f_10984:chicken_2dsyntax_2escm"),(void*)f_10984},
{C_text("f_10988:chicken_2dsyntax_2escm"),(void*)f_10988},
{C_text("f_10999:chicken_2dsyntax_2escm"),(void*)f_10999},
{C_text("f_11001:chicken_2dsyntax_2escm"),(void*)f_11001},
{C_text("f_11005:chicken_2dsyntax_2escm"),(void*)f_11005},
{C_text("f_11020:chicken_2dsyntax_2escm"),(void*)f_11020},
{C_text("f_11022:chicken_2dsyntax_2escm"),(void*)f_11022},
{C_text("f_11034:chicken_2dsyntax_2escm"),(void*)f_11034},
{C_text("f_11036:chicken_2dsyntax_2escm"),(void*)f_11036},
{C_text("f_11040:chicken_2dsyntax_2escm"),(void*)f_11040},
{C_text("f_11062:chicken_2dsyntax_2escm"),(void*)f_11062},
{C_text("f_11127:chicken_2dsyntax_2escm"),(void*)f_11127},
{C_text("f_11129:chicken_2dsyntax_2escm"),(void*)f_11129},
{C_text("f_11133:chicken_2dsyntax_2escm"),(void*)f_11133},
{C_text("f_11139:chicken_2dsyntax_2escm"),(void*)f_11139},
{C_text("f_11142:chicken_2dsyntax_2escm"),(void*)f_11142},
{C_text("f_11145:chicken_2dsyntax_2escm"),(void*)f_11145},
{C_text("f_11151:chicken_2dsyntax_2escm"),(void*)f_11151},
{C_text("f_11154:chicken_2dsyntax_2escm"),(void*)f_11154},
{C_text("f_11157:chicken_2dsyntax_2escm"),(void*)f_11157},
{C_text("f_11161:chicken_2dsyntax_2escm"),(void*)f_11161},
{C_text("f_11174:chicken_2dsyntax_2escm"),(void*)f_11174},
{C_text("f_11189:chicken_2dsyntax_2escm"),(void*)f_11189},
{C_text("f_11221:chicken_2dsyntax_2escm"),(void*)f_11221},
{C_text("f_11252:chicken_2dsyntax_2escm"),(void*)f_11252},
{C_text("f_11254:chicken_2dsyntax_2escm"),(void*)f_11254},
{C_text("f_11270:chicken_2dsyntax_2escm"),(void*)f_11270},
{C_text("f_11273:chicken_2dsyntax_2escm"),(void*)f_11273},
{C_text("f_11276:chicken_2dsyntax_2escm"),(void*)f_11276},
{C_text("f_11290:chicken_2dsyntax_2escm"),(void*)f_11290},
{C_text("f_11302:chicken_2dsyntax_2escm"),(void*)f_11302},
{C_text("f_11306:chicken_2dsyntax_2escm"),(void*)f_11306},
{C_text("f_11399:chicken_2dsyntax_2escm"),(void*)f_11399},
{C_text("f_11403:chicken_2dsyntax_2escm"),(void*)f_11403},
{C_text("f_11418:chicken_2dsyntax_2escm"),(void*)f_11418},
{C_text("f_11438:chicken_2dsyntax_2escm"),(void*)f_11438},
{C_text("f_11444:chicken_2dsyntax_2escm"),(void*)f_11444},
{C_text("f_11464:chicken_2dsyntax_2escm"),(void*)f_11464},
{C_text("f_11472:chicken_2dsyntax_2escm"),(void*)f_11472},
{C_text("f_11497:chicken_2dsyntax_2escm"),(void*)f_11497},
{C_text("f_11507:chicken_2dsyntax_2escm"),(void*)f_11507},
{C_text("f_11514:chicken_2dsyntax_2escm"),(void*)f_11514},
{C_text("f_11518:chicken_2dsyntax_2escm"),(void*)f_11518},
{C_text("f_11526:chicken_2dsyntax_2escm"),(void*)f_11526},
{C_text("f_11528:chicken_2dsyntax_2escm"),(void*)f_11528},
{C_text("f_11541:chicken_2dsyntax_2escm"),(void*)f_11541},
{C_text("f_11543:chicken_2dsyntax_2escm"),(void*)f_11543},
{C_text("f_11612:chicken_2dsyntax_2escm"),(void*)f_11612},
{C_text("f_11614:chicken_2dsyntax_2escm"),(void*)f_11614},
{C_text("f_11636:chicken_2dsyntax_2escm"),(void*)f_11636},
{C_text("f_11638:chicken_2dsyntax_2escm"),(void*)f_11638},
{C_text("f_11648:chicken_2dsyntax_2escm"),(void*)f_11648},
{C_text("f_11661:chicken_2dsyntax_2escm"),(void*)f_11661},
{C_text("f_11677:chicken_2dsyntax_2escm"),(void*)f_11677},
{C_text("f_11683:chicken_2dsyntax_2escm"),(void*)f_11683},
{C_text("f_11686:chicken_2dsyntax_2escm"),(void*)f_11686},
{C_text("f_11692:chicken_2dsyntax_2escm"),(void*)f_11692},
{C_text("f_11701:chicken_2dsyntax_2escm"),(void*)f_11701},
{C_text("f_11708:chicken_2dsyntax_2escm"),(void*)f_11708},
{C_text("f_11722:chicken_2dsyntax_2escm"),(void*)f_11722},
{C_text("f_11733:chicken_2dsyntax_2escm"),(void*)f_11733},
{C_text("f_11736:chicken_2dsyntax_2escm"),(void*)f_11736},
{C_text("f_11742:chicken_2dsyntax_2escm"),(void*)f_11742},
{C_text("f_11751:chicken_2dsyntax_2escm"),(void*)f_11751},
{C_text("f_11758:chicken_2dsyntax_2escm"),(void*)f_11758},
{C_text("f_11772:chicken_2dsyntax_2escm"),(void*)f_11772},
{C_text("f_11784:chicken_2dsyntax_2escm"),(void*)f_11784},
{C_text("f_11786:chicken_2dsyntax_2escm"),(void*)f_11786},
{C_text("f_11806:chicken_2dsyntax_2escm"),(void*)f_11806},
{C_text("f_11820:chicken_2dsyntax_2escm"),(void*)f_11820},
{C_text("f_11833:chicken_2dsyntax_2escm"),(void*)f_11833},
{C_text("f_11881:chicken_2dsyntax_2escm"),(void*)f_11881},
{C_text("f_11883:chicken_2dsyntax_2escm"),(void*)f_11883},
{C_text("f_11887:chicken_2dsyntax_2escm"),(void*)f_11887},
{C_text("f_11894:chicken_2dsyntax_2escm"),(void*)f_11894},
{C_text("f_11902:chicken_2dsyntax_2escm"),(void*)f_11902},
{C_text("f_11910:chicken_2dsyntax_2escm"),(void*)f_11910},
{C_text("f_11912:chicken_2dsyntax_2escm"),(void*)f_11912},
{C_text("f_11916:chicken_2dsyntax_2escm"),(void*)f_11916},
{C_text("f_11919:chicken_2dsyntax_2escm"),(void*)f_11919},
{C_text("f_11940:chicken_2dsyntax_2escm"),(void*)f_11940},
{C_text("f_11942:chicken_2dsyntax_2escm"),(void*)f_11942},
{C_text("f_11946:chicken_2dsyntax_2escm"),(void*)f_11946},
{C_text("f_11957:chicken_2dsyntax_2escm"),(void*)f_11957},
{C_text("f_11959:chicken_2dsyntax_2escm"),(void*)f_11959},
{C_text("f_11963:chicken_2dsyntax_2escm"),(void*)f_11963},
{C_text("f_11972:chicken_2dsyntax_2escm"),(void*)f_11972},
{C_text("f_11975:chicken_2dsyntax_2escm"),(void*)f_11975},
{C_text("f_11978:chicken_2dsyntax_2escm"),(void*)f_11978},
{C_text("f_12001:chicken_2dsyntax_2escm"),(void*)f_12001},
{C_text("f_12017:chicken_2dsyntax_2escm"),(void*)f_12017},
{C_text("f_12019:chicken_2dsyntax_2escm"),(void*)f_12019},
{C_text("f_12023:chicken_2dsyntax_2escm"),(void*)f_12023},
{C_text("f_12029:chicken_2dsyntax_2escm"),(void*)f_12029},
{C_text("f_12032:chicken_2dsyntax_2escm"),(void*)f_12032},
{C_text("f_12056:chicken_2dsyntax_2escm"),(void*)f_12056},
{C_text("f_12060:chicken_2dsyntax_2escm"),(void*)f_12060},
{C_text("f_12067:chicken_2dsyntax_2escm"),(void*)f_12067},
{C_text("f_12094:chicken_2dsyntax_2escm"),(void*)f_12094},
{C_text("f_12096:chicken_2dsyntax_2escm"),(void*)f_12096},
{C_text("f_12121:chicken_2dsyntax_2escm"),(void*)f_12121},
{C_text("f_12140:chicken_2dsyntax_2escm"),(void*)f_12140},
{C_text("f_12142:chicken_2dsyntax_2escm"),(void*)f_12142},
{C_text("f_12152:chicken_2dsyntax_2escm"),(void*)f_12152},
{C_text("f_12161:chicken_2dsyntax_2escm"),(void*)f_12161},
{C_text("f_12165:chicken_2dsyntax_2escm"),(void*)f_12165},
{C_text("f_12168:chicken_2dsyntax_2escm"),(void*)f_12168},
{C_text("f_12171:chicken_2dsyntax_2escm"),(void*)f_12171},
{C_text("f_12174:chicken_2dsyntax_2escm"),(void*)f_12174},
{C_text("f_12182:chicken_2dsyntax_2escm"),(void*)f_12182},
{C_text("f_12192:chicken_2dsyntax_2escm"),(void*)f_12192},
{C_text("f_12195:chicken_2dsyntax_2escm"),(void*)f_12195},
{C_text("f_12201:chicken_2dsyntax_2escm"),(void*)f_12201},
{C_text("f_12236:chicken_2dsyntax_2escm"),(void*)f_12236},
{C_text("f_12238:chicken_2dsyntax_2escm"),(void*)f_12238},
{C_text("f_12296:chicken_2dsyntax_2escm"),(void*)f_12296},
{C_text("f_12300:chicken_2dsyntax_2escm"),(void*)f_12300},
{C_text("f_12333:chicken_2dsyntax_2escm"),(void*)f_12333},
{C_text("f_12335:chicken_2dsyntax_2escm"),(void*)f_12335},
{C_text("f_12360:chicken_2dsyntax_2escm"),(void*)f_12360},
{C_text("f_12377:chicken_2dsyntax_2escm"),(void*)f_12377},
{C_text("f_12379:chicken_2dsyntax_2escm"),(void*)f_12379},
{C_text("f_12397:chicken_2dsyntax_2escm"),(void*)f_12397},
{C_text("f_12433:chicken_2dsyntax_2escm"),(void*)f_12433},
{C_text("f_12450:chicken_2dsyntax_2escm"),(void*)f_12450},
{C_text("f_12507:chicken_2dsyntax_2escm"),(void*)f_12507},
{C_text("f_12509:chicken_2dsyntax_2escm"),(void*)f_12509},
{C_text("f_12519:chicken_2dsyntax_2escm"),(void*)f_12519},
{C_text("f_12536:chicken_2dsyntax_2escm"),(void*)f_12536},
{C_text("f_12557:chicken_2dsyntax_2escm"),(void*)f_12557},
{C_text("f_12567:chicken_2dsyntax_2escm"),(void*)f_12567},
{C_text("f_12575:chicken_2dsyntax_2escm"),(void*)f_12575},
{C_text("f_12577:chicken_2dsyntax_2escm"),(void*)f_12577},
{C_text("f_12593:chicken_2dsyntax_2escm"),(void*)f_12593},
{C_text("f_12603:chicken_2dsyntax_2escm"),(void*)f_12603},
{C_text("f_12637:chicken_2dsyntax_2escm"),(void*)f_12637},
{C_text("f_12681:chicken_2dsyntax_2escm"),(void*)f_12681},
{C_text("f_12687:chicken_2dsyntax_2escm"),(void*)f_12687},
{C_text("f_12690:chicken_2dsyntax_2escm"),(void*)f_12690},
{C_text("f_12696:chicken_2dsyntax_2escm"),(void*)f_12696},
{C_text("f_12705:chicken_2dsyntax_2escm"),(void*)f_12705},
{C_text("f_12712:chicken_2dsyntax_2escm"),(void*)f_12712},
{C_text("f_12726:chicken_2dsyntax_2escm"),(void*)f_12726},
{C_text("f_12737:chicken_2dsyntax_2escm"),(void*)f_12737},
{C_text("f_12740:chicken_2dsyntax_2escm"),(void*)f_12740},
{C_text("f_12746:chicken_2dsyntax_2escm"),(void*)f_12746},
{C_text("f_12755:chicken_2dsyntax_2escm"),(void*)f_12755},
{C_text("f_12762:chicken_2dsyntax_2escm"),(void*)f_12762},
{C_text("f_12774:chicken_2dsyntax_2escm"),(void*)f_12774},
{C_text("f_12785:chicken_2dsyntax_2escm"),(void*)f_12785},
{C_text("f_12816:chicken_2dsyntax_2escm"),(void*)f_12816},
{C_text("f_12818:chicken_2dsyntax_2escm"),(void*)f_12818},
{C_text("f_12822:chicken_2dsyntax_2escm"),(void*)f_12822},
{C_text("f_12838:chicken_2dsyntax_2escm"),(void*)f_12838},
{C_text("f_12854:chicken_2dsyntax_2escm"),(void*)f_12854},
{C_text("f_12856:chicken_2dsyntax_2escm"),(void*)f_12856},
{C_text("f_12860:chicken_2dsyntax_2escm"),(void*)f_12860},
{C_text("f_12869:chicken_2dsyntax_2escm"),(void*)f_12869},
{C_text("f_12876:chicken_2dsyntax_2escm"),(void*)f_12876},
{C_text("f_12884:chicken_2dsyntax_2escm"),(void*)f_12884},
{C_text("f_12886:chicken_2dsyntax_2escm"),(void*)f_12886},
{C_text("f_12911:chicken_2dsyntax_2escm"),(void*)f_12911},
{C_text("f_12915:chicken_2dsyntax_2escm"),(void*)f_12915},
{C_text("f_12965:chicken_2dsyntax_2escm"),(void*)f_12965},
{C_text("f_12967:chicken_2dsyntax_2escm"),(void*)f_12967},
{C_text("f_12971:chicken_2dsyntax_2escm"),(void*)f_12971},
{C_text("f_12974:chicken_2dsyntax_2escm"),(void*)f_12974},
{C_text("f_12977:chicken_2dsyntax_2escm"),(void*)f_12977},
{C_text("f_12980:chicken_2dsyntax_2escm"),(void*)f_12980},
{C_text("f_12983:chicken_2dsyntax_2escm"),(void*)f_12983},
{C_text("f_12986:chicken_2dsyntax_2escm"),(void*)f_12986},
{C_text("f_12988:chicken_2dsyntax_2escm"),(void*)f_12988},
{C_text("f_12998:chicken_2dsyntax_2escm"),(void*)f_12998},
{C_text("f_13023:chicken_2dsyntax_2escm"),(void*)f_13023},
{C_text("f_13037:chicken_2dsyntax_2escm"),(void*)f_13037},
{C_text("f_13039:chicken_2dsyntax_2escm"),(void*)f_13039},
{C_text("f_13118:chicken_2dsyntax_2escm"),(void*)f_13118},
{C_text("f_13143:chicken_2dsyntax_2escm"),(void*)f_13143},
{C_text("f_13150:chicken_2dsyntax_2escm"),(void*)f_13150},
{C_text("f_13154:chicken_2dsyntax_2escm"),(void*)f_13154},
{C_text("f_13174:chicken_2dsyntax_2escm"),(void*)f_13174},
{C_text("f_13199:chicken_2dsyntax_2escm"),(void*)f_13199},
{C_text("f_13238:chicken_2dsyntax_2escm"),(void*)f_13238},
{C_text("f_13240:chicken_2dsyntax_2escm"),(void*)f_13240},
{C_text("f_13244:chicken_2dsyntax_2escm"),(void*)f_13244},
{C_text("f_13247:chicken_2dsyntax_2escm"),(void*)f_13247},
{C_text("f_13250:chicken_2dsyntax_2escm"),(void*)f_13250},
{C_text("f_13261:chicken_2dsyntax_2escm"),(void*)f_13261},
{C_text("f_4251:chicken_2dsyntax_2escm"),(void*)f_4251},
{C_text("f_4254:chicken_2dsyntax_2escm"),(void*)f_4254},
{C_text("f_4257:chicken_2dsyntax_2escm"),(void*)f_4257},
{C_text("f_4367:chicken_2dsyntax_2escm"),(void*)f_4367},
{C_text("f_4385:chicken_2dsyntax_2escm"),(void*)f_4385},
{C_text("f_4425:chicken_2dsyntax_2escm"),(void*)f_4425},
{C_text("f_4439:chicken_2dsyntax_2escm"),(void*)f_4439},
{C_text("f_5539:chicken_2dsyntax_2escm"),(void*)f_5539},
{C_text("f_5542:chicken_2dsyntax_2escm"),(void*)f_5542},
{C_text("f_5545:chicken_2dsyntax_2escm"),(void*)f_5545},
{C_text("f_5548:chicken_2dsyntax_2escm"),(void*)f_5548},
{C_text("f_5552:chicken_2dsyntax_2escm"),(void*)f_5552},
{C_text("f_5555:chicken_2dsyntax_2escm"),(void*)f_5555},
{C_text("f_5558:chicken_2dsyntax_2escm"),(void*)f_5558},
{C_text("f_5561:chicken_2dsyntax_2escm"),(void*)f_5561},
{C_text("f_5564:chicken_2dsyntax_2escm"),(void*)f_5564},
{C_text("f_5567:chicken_2dsyntax_2escm"),(void*)f_5567},
{C_text("f_5570:chicken_2dsyntax_2escm"),(void*)f_5570},
{C_text("f_5573:chicken_2dsyntax_2escm"),(void*)f_5573},
{C_text("f_5577:chicken_2dsyntax_2escm"),(void*)f_5577},
{C_text("f_5580:chicken_2dsyntax_2escm"),(void*)f_5580},
{C_text("f_5583:chicken_2dsyntax_2escm"),(void*)f_5583},
{C_text("f_5586:chicken_2dsyntax_2escm"),(void*)f_5586},
{C_text("f_5589:chicken_2dsyntax_2escm"),(void*)f_5589},
{C_text("f_5592:chicken_2dsyntax_2escm"),(void*)f_5592},
{C_text("f_5595:chicken_2dsyntax_2escm"),(void*)f_5595},
{C_text("f_5599:chicken_2dsyntax_2escm"),(void*)f_5599},
{C_text("f_5602:chicken_2dsyntax_2escm"),(void*)f_5602},
{C_text("f_5605:chicken_2dsyntax_2escm"),(void*)f_5605},
{C_text("f_5608:chicken_2dsyntax_2escm"),(void*)f_5608},
{C_text("f_5611:chicken_2dsyntax_2escm"),(void*)f_5611},
{C_text("f_5614:chicken_2dsyntax_2escm"),(void*)f_5614},
{C_text("f_5617:chicken_2dsyntax_2escm"),(void*)f_5617},
{C_text("f_5620:chicken_2dsyntax_2escm"),(void*)f_5620},
{C_text("f_5623:chicken_2dsyntax_2escm"),(void*)f_5623},
{C_text("f_5626:chicken_2dsyntax_2escm"),(void*)f_5626},
{C_text("f_5629:chicken_2dsyntax_2escm"),(void*)f_5629},
{C_text("f_5632:chicken_2dsyntax_2escm"),(void*)f_5632},
{C_text("f_5635:chicken_2dsyntax_2escm"),(void*)f_5635},
{C_text("f_5638:chicken_2dsyntax_2escm"),(void*)f_5638},
{C_text("f_5641:chicken_2dsyntax_2escm"),(void*)f_5641},
{C_text("f_5644:chicken_2dsyntax_2escm"),(void*)f_5644},
{C_text("f_5648:chicken_2dsyntax_2escm"),(void*)f_5648},
{C_text("f_5651:chicken_2dsyntax_2escm"),(void*)f_5651},
{C_text("f_5654:chicken_2dsyntax_2escm"),(void*)f_5654},
{C_text("f_5657:chicken_2dsyntax_2escm"),(void*)f_5657},
{C_text("f_5660:chicken_2dsyntax_2escm"),(void*)f_5660},
{C_text("f_5663:chicken_2dsyntax_2escm"),(void*)f_5663},
{C_text("f_5666:chicken_2dsyntax_2escm"),(void*)f_5666},
{C_text("f_5669:chicken_2dsyntax_2escm"),(void*)f_5669},
{C_text("f_5672:chicken_2dsyntax_2escm"),(void*)f_5672},
{C_text("f_5675:chicken_2dsyntax_2escm"),(void*)f_5675},
{C_text("f_5678:chicken_2dsyntax_2escm"),(void*)f_5678},
{C_text("f_5681:chicken_2dsyntax_2escm"),(void*)f_5681},
{C_text("f_5684:chicken_2dsyntax_2escm"),(void*)f_5684},
{C_text("f_5687:chicken_2dsyntax_2escm"),(void*)f_5687},
{C_text("f_5690:chicken_2dsyntax_2escm"),(void*)f_5690},
{C_text("f_5693:chicken_2dsyntax_2escm"),(void*)f_5693},
{C_text("f_5696:chicken_2dsyntax_2escm"),(void*)f_5696},
{C_text("f_5699:chicken_2dsyntax_2escm"),(void*)f_5699},
{C_text("f_5702:chicken_2dsyntax_2escm"),(void*)f_5702},
{C_text("f_5705:chicken_2dsyntax_2escm"),(void*)f_5705},
{C_text("f_5709:chicken_2dsyntax_2escm"),(void*)f_5709},
{C_text("f_5712:chicken_2dsyntax_2escm"),(void*)f_5712},
{C_text("f_5715:chicken_2dsyntax_2escm"),(void*)f_5715},
{C_text("f_5718:chicken_2dsyntax_2escm"),(void*)f_5718},
{C_text("f_5722:chicken_2dsyntax_2escm"),(void*)f_5722},
{C_text("f_5724:chicken_2dsyntax_2escm"),(void*)f_5724},
{C_text("f_5728:chicken_2dsyntax_2escm"),(void*)f_5728},
{C_text("f_5771:chicken_2dsyntax_2escm"),(void*)f_5771},
{C_text("f_5773:chicken_2dsyntax_2escm"),(void*)f_5773},
{C_text("f_5777:chicken_2dsyntax_2escm"),(void*)f_5777},
{C_text("f_5788:chicken_2dsyntax_2escm"),(void*)f_5788},
{C_text("f_5791:chicken_2dsyntax_2escm"),(void*)f_5791},
{C_text("f_5814:chicken_2dsyntax_2escm"),(void*)f_5814},
{C_text("f_5833:chicken_2dsyntax_2escm"),(void*)f_5833},
{C_text("f_5843:chicken_2dsyntax_2escm"),(void*)f_5843},
{C_text("f_5850:chicken_2dsyntax_2escm"),(void*)f_5850},
{C_text("f_5860:chicken_2dsyntax_2escm"),(void*)f_5860},
{C_text("f_5862:chicken_2dsyntax_2escm"),(void*)f_5862},
{C_text("f_5870:chicken_2dsyntax_2escm"),(void*)f_5870},
{C_text("f_5878:chicken_2dsyntax_2escm"),(void*)f_5878},
{C_text("f_5880:chicken_2dsyntax_2escm"),(void*)f_5880},
{C_text("f_5884:chicken_2dsyntax_2escm"),(void*)f_5884},
{C_text("f_5943:chicken_2dsyntax_2escm"),(void*)f_5943},
{C_text("f_5945:chicken_2dsyntax_2escm"),(void*)f_5945},
{C_text("f_5949:chicken_2dsyntax_2escm"),(void*)f_5949},
{C_text("f_5952:chicken_2dsyntax_2escm"),(void*)f_5952},
{C_text("f_5955:chicken_2dsyntax_2escm"),(void*)f_5955},
{C_text("f_5958:chicken_2dsyntax_2escm"),(void*)f_5958},
{C_text("f_5965:chicken_2dsyntax_2escm"),(void*)f_5965},
{C_text("f_5975:chicken_2dsyntax_2escm"),(void*)f_5975},
{C_text("f_5978:chicken_2dsyntax_2escm"),(void*)f_5978},
{C_text("f_5984:chicken_2dsyntax_2escm"),(void*)f_5984},
{C_text("f_5995:chicken_2dsyntax_2escm"),(void*)f_5995},
{C_text("f_6011:chicken_2dsyntax_2escm"),(void*)f_6011},
{C_text("f_6021:chicken_2dsyntax_2escm"),(void*)f_6021},
{C_text("f_6044:chicken_2dsyntax_2escm"),(void*)f_6044},
{C_text("f_6047:chicken_2dsyntax_2escm"),(void*)f_6047},
{C_text("f_6064:chicken_2dsyntax_2escm"),(void*)f_6064},
{C_text("f_6070:chicken_2dsyntax_2escm"),(void*)f_6070},
{C_text("f_6087:chicken_2dsyntax_2escm"),(void*)f_6087},
{C_text("f_6110:chicken_2dsyntax_2escm"),(void*)f_6110},
{C_text("f_6138:chicken_2dsyntax_2escm"),(void*)f_6138},
{C_text("f_6140:chicken_2dsyntax_2escm"),(void*)f_6140},
{C_text("f_6144:chicken_2dsyntax_2escm"),(void*)f_6144},
{C_text("f_6147:chicken_2dsyntax_2escm"),(void*)f_6147},
{C_text("f_6150:chicken_2dsyntax_2escm"),(void*)f_6150},
{C_text("f_6153:chicken_2dsyntax_2escm"),(void*)f_6153},
{C_text("f_6160:chicken_2dsyntax_2escm"),(void*)f_6160},
{C_text("f_6170:chicken_2dsyntax_2escm"),(void*)f_6170},
{C_text("f_6173:chicken_2dsyntax_2escm"),(void*)f_6173},
{C_text("f_6179:chicken_2dsyntax_2escm"),(void*)f_6179},
{C_text("f_6186:chicken_2dsyntax_2escm"),(void*)f_6186},
{C_text("f_6202:chicken_2dsyntax_2escm"),(void*)f_6202},
{C_text("f_6212:chicken_2dsyntax_2escm"),(void*)f_6212},
{C_text("f_6235:chicken_2dsyntax_2escm"),(void*)f_6235},
{C_text("f_6238:chicken_2dsyntax_2escm"),(void*)f_6238},
{C_text("f_6255:chicken_2dsyntax_2escm"),(void*)f_6255},
{C_text("f_6261:chicken_2dsyntax_2escm"),(void*)f_6261},
{C_text("f_6310:chicken_2dsyntax_2escm"),(void*)f_6310},
{C_text("f_6312:chicken_2dsyntax_2escm"),(void*)f_6312},
{C_text("f_6316:chicken_2dsyntax_2escm"),(void*)f_6316},
{C_text("f_6322:chicken_2dsyntax_2escm"),(void*)f_6322},
{C_text("f_6325:chicken_2dsyntax_2escm"),(void*)f_6325},
{C_text("f_6337:chicken_2dsyntax_2escm"),(void*)f_6337},
{C_text("f_6340:chicken_2dsyntax_2escm"),(void*)f_6340},
{C_text("f_6346:chicken_2dsyntax_2escm"),(void*)f_6346},
{C_text("f_6349:chicken_2dsyntax_2escm"),(void*)f_6349},
{C_text("f_6358:chicken_2dsyntax_2escm"),(void*)f_6358},
{C_text("f_6359:chicken_2dsyntax_2escm"),(void*)f_6359},
{C_text("f_6375:chicken_2dsyntax_2escm"),(void*)f_6375},
{C_text("f_6406:chicken_2dsyntax_2escm"),(void*)f_6406},
{C_text("f_6408:chicken_2dsyntax_2escm"),(void*)f_6408},
{C_text("f_6427:chicken_2dsyntax_2escm"),(void*)f_6427},
{C_text("f_6433:chicken_2dsyntax_2escm"),(void*)f_6433},
{C_text("f_6440:chicken_2dsyntax_2escm"),(void*)f_6440},
{C_text("f_6444:chicken_2dsyntax_2escm"),(void*)f_6444},
{C_text("f_6448:chicken_2dsyntax_2escm"),(void*)f_6448},
{C_text("f_6452:chicken_2dsyntax_2escm"),(void*)f_6452},
{C_text("f_6480:chicken_2dsyntax_2escm"),(void*)f_6480},
{C_text("f_6501:chicken_2dsyntax_2escm"),(void*)f_6501},
{C_text("f_6580:chicken_2dsyntax_2escm"),(void*)f_6580},
{C_text("f_6623:chicken_2dsyntax_2escm"),(void*)f_6623},
{C_text("f_6636:chicken_2dsyntax_2escm"),(void*)f_6636},
{C_text("f_6638:chicken_2dsyntax_2escm"),(void*)f_6638},
{C_text("f_6676:chicken_2dsyntax_2escm"),(void*)f_6676},
{C_text("f_6686:chicken_2dsyntax_2escm"),(void*)f_6686},
{C_text("f_6699:chicken_2dsyntax_2escm"),(void*)f_6699},
{C_text("f_6734:chicken_2dsyntax_2escm"),(void*)f_6734},
{C_text("f_6741:chicken_2dsyntax_2escm"),(void*)f_6741},
{C_text("f_6745:chicken_2dsyntax_2escm"),(void*)f_6745},
{C_text("f_6749:chicken_2dsyntax_2escm"),(void*)f_6749},
{C_text("f_6751:chicken_2dsyntax_2escm"),(void*)f_6751},
{C_text("f_6755:chicken_2dsyntax_2escm"),(void*)f_6755},
{C_text("f_6763:chicken_2dsyntax_2escm"),(void*)f_6763},
{C_text("f_6772:chicken_2dsyntax_2escm"),(void*)f_6772},
{C_text("f_6775:chicken_2dsyntax_2escm"),(void*)f_6775},
{C_text("f_6778:chicken_2dsyntax_2escm"),(void*)f_6778},
{C_text("f_6800:chicken_2dsyntax_2escm"),(void*)f_6800},
{C_text("f_6807:chicken_2dsyntax_2escm"),(void*)f_6807},
{C_text("f_6811:chicken_2dsyntax_2escm"),(void*)f_6811},
{C_text("f_6822:chicken_2dsyntax_2escm"),(void*)f_6822},
{C_text("f_6825:chicken_2dsyntax_2escm"),(void*)f_6825},
{C_text("f_6828:chicken_2dsyntax_2escm"),(void*)f_6828},
{C_text("f_6842:chicken_2dsyntax_2escm"),(void*)f_6842},
{C_text("f_6849:chicken_2dsyntax_2escm"),(void*)f_6849},
{C_text("f_6853:chicken_2dsyntax_2escm"),(void*)f_6853},
{C_text("f_6865:chicken_2dsyntax_2escm"),(void*)f_6865},
{C_text("f_6867:chicken_2dsyntax_2escm"),(void*)f_6867},
{C_text("f_6871:chicken_2dsyntax_2escm"),(void*)f_6871},
{C_text("f_6873:chicken_2dsyntax_2escm"),(void*)f_6873},
{C_text("f_6879:chicken_2dsyntax_2escm"),(void*)f_6879},
{C_text("f_6893:chicken_2dsyntax_2escm"),(void*)f_6893},
{C_text("f_6897:chicken_2dsyntax_2escm"),(void*)f_6897},
{C_text("f_6905:chicken_2dsyntax_2escm"),(void*)f_6905},
{C_text("f_6908:chicken_2dsyntax_2escm"),(void*)f_6908},
{C_text("f_6911:chicken_2dsyntax_2escm"),(void*)f_6911},
{C_text("f_6914:chicken_2dsyntax_2escm"),(void*)f_6914},
{C_text("f_6917:chicken_2dsyntax_2escm"),(void*)f_6917},
{C_text("f_6920:chicken_2dsyntax_2escm"),(void*)f_6920},
{C_text("f_6923:chicken_2dsyntax_2escm"),(void*)f_6923},
{C_text("f_6926:chicken_2dsyntax_2escm"),(void*)f_6926},
{C_text("f_6929:chicken_2dsyntax_2escm"),(void*)f_6929},
{C_text("f_6932:chicken_2dsyntax_2escm"),(void*)f_6932},
{C_text("f_6939:chicken_2dsyntax_2escm"),(void*)f_6939},
{C_text("f_6955:chicken_2dsyntax_2escm"),(void*)f_6955},
{C_text("f_6957:chicken_2dsyntax_2escm"),(void*)f_6957},
{C_text("f_6965:chicken_2dsyntax_2escm"),(void*)f_6965},
{C_text("f_6975:chicken_2dsyntax_2escm"),(void*)f_6975},
{C_text("f_6979:chicken_2dsyntax_2escm"),(void*)f_6979},
{C_text("f_6989:chicken_2dsyntax_2escm"),(void*)f_6989},
{C_text("f_6993:chicken_2dsyntax_2escm"),(void*)f_6993},
{C_text("f_6995:chicken_2dsyntax_2escm"),(void*)f_6995},
{C_text("f_7003:chicken_2dsyntax_2escm"),(void*)f_7003},
{C_text("f_7005:chicken_2dsyntax_2escm"),(void*)f_7005},
{C_text("f_7009:chicken_2dsyntax_2escm"),(void*)f_7009},
{C_text("f_7031:chicken_2dsyntax_2escm"),(void*)f_7031},
{C_text("f_7033:chicken_2dsyntax_2escm"),(void*)f_7033},
{C_text("f_7081:chicken_2dsyntax_2escm"),(void*)f_7081},
{C_text("f_7134:chicken_2dsyntax_2escm"),(void*)f_7134},
{C_text("f_7145:chicken_2dsyntax_2escm"),(void*)f_7145},
{C_text("f_7182:chicken_2dsyntax_2escm"),(void*)f_7182},
{C_text("f_7210:chicken_2dsyntax_2escm"),(void*)f_7210},
{C_text("f_7237:chicken_2dsyntax_2escm"),(void*)f_7237},
{C_text("f_7247:chicken_2dsyntax_2escm"),(void*)f_7247},
{C_text("f_7249:chicken_2dsyntax_2escm"),(void*)f_7249},
{C_text("f_7274:chicken_2dsyntax_2escm"),(void*)f_7274},
{C_text("f_7309:chicken_2dsyntax_2escm"),(void*)f_7309},
{C_text("f_7311:chicken_2dsyntax_2escm"),(void*)f_7311},
{C_text("f_7315:chicken_2dsyntax_2escm"),(void*)f_7315},
{C_text("f_7327:chicken_2dsyntax_2escm"),(void*)f_7327},
{C_text("f_7330:chicken_2dsyntax_2escm"),(void*)f_7330},
{C_text("f_7333:chicken_2dsyntax_2escm"),(void*)f_7333},
{C_text("f_7336:chicken_2dsyntax_2escm"),(void*)f_7336},
{C_text("f_7347:chicken_2dsyntax_2escm"),(void*)f_7347},
{C_text("f_7349:chicken_2dsyntax_2escm"),(void*)f_7349},
{C_text("f_7375:chicken_2dsyntax_2escm"),(void*)f_7375},
{C_text("f_7386:chicken_2dsyntax_2escm"),(void*)f_7386},
{C_text("f_7469:chicken_2dsyntax_2escm"),(void*)f_7469},
{C_text("f_7471:chicken_2dsyntax_2escm"),(void*)f_7471},
{C_text("f_7475:chicken_2dsyntax_2escm"),(void*)f_7475},
{C_text("f_7478:chicken_2dsyntax_2escm"),(void*)f_7478},
{C_text("f_7508:chicken_2dsyntax_2escm"),(void*)f_7508},
{C_text("f_7518:chicken_2dsyntax_2escm"),(void*)f_7518},
{C_text("f_7546:chicken_2dsyntax_2escm"),(void*)f_7546},
{C_text("f_7548:chicken_2dsyntax_2escm"),(void*)f_7548},
{C_text("f_7552:chicken_2dsyntax_2escm"),(void*)f_7552},
{C_text("f_7571:chicken_2dsyntax_2escm"),(void*)f_7571},
{C_text("f_7575:chicken_2dsyntax_2escm"),(void*)f_7575},
{C_text("f_7579:chicken_2dsyntax_2escm"),(void*)f_7579},
{C_text("f_7581:chicken_2dsyntax_2escm"),(void*)f_7581},
{C_text("f_7602:chicken_2dsyntax_2escm"),(void*)f_7602},
{C_text("f_7620:chicken_2dsyntax_2escm"),(void*)f_7620},
{C_text("f_7628:chicken_2dsyntax_2escm"),(void*)f_7628},
{C_text("f_7632:chicken_2dsyntax_2escm"),(void*)f_7632},
{C_text("f_7642:chicken_2dsyntax_2escm"),(void*)f_7642},
{C_text("f_7648:chicken_2dsyntax_2escm"),(void*)f_7648},
{C_text("f_7662:chicken_2dsyntax_2escm"),(void*)f_7662},
{C_text("f_7688:chicken_2dsyntax_2escm"),(void*)f_7688},
{C_text("f_7712:chicken_2dsyntax_2escm"),(void*)f_7712},
{C_text("f_7720:chicken_2dsyntax_2escm"),(void*)f_7720},
{C_text("f_7728:chicken_2dsyntax_2escm"),(void*)f_7728},
{C_text("f_7732:chicken_2dsyntax_2escm"),(void*)f_7732},
{C_text("f_7735:chicken_2dsyntax_2escm"),(void*)f_7735},
{C_text("f_7738:chicken_2dsyntax_2escm"),(void*)f_7738},
{C_text("f_7747:chicken_2dsyntax_2escm"),(void*)f_7747},
{C_text("f_7748:chicken_2dsyntax_2escm"),(void*)f_7748},
{C_text("f_7756:chicken_2dsyntax_2escm"),(void*)f_7756},
{C_text("f_7760:chicken_2dsyntax_2escm"),(void*)f_7760},
{C_text("f_7764:chicken_2dsyntax_2escm"),(void*)f_7764},
{C_text("f_7772:chicken_2dsyntax_2escm"),(void*)f_7772},
{C_text("f_7778:chicken_2dsyntax_2escm"),(void*)f_7778},
{C_text("f_7784:chicken_2dsyntax_2escm"),(void*)f_7784},
{C_text("f_7787:chicken_2dsyntax_2escm"),(void*)f_7787},
{C_text("f_7790:chicken_2dsyntax_2escm"),(void*)f_7790},
{C_text("f_7794:chicken_2dsyntax_2escm"),(void*)f_7794},
{C_text("f_7802:chicken_2dsyntax_2escm"),(void*)f_7802},
{C_text("f_7805:chicken_2dsyntax_2escm"),(void*)f_7805},
{C_text("f_7808:chicken_2dsyntax_2escm"),(void*)f_7808},
{C_text("f_7811:chicken_2dsyntax_2escm"),(void*)f_7811},
{C_text("f_7818:chicken_2dsyntax_2escm"),(void*)f_7818},
{C_text("f_7844:chicken_2dsyntax_2escm"),(void*)f_7844},
{C_text("f_7869:chicken_2dsyntax_2escm"),(void*)f_7869},
{C_text("f_7878:chicken_2dsyntax_2escm"),(void*)f_7878},
{C_text("f_7912:chicken_2dsyntax_2escm"),(void*)f_7912},
{C_text("f_7937:chicken_2dsyntax_2escm"),(void*)f_7937},
{C_text("f_7946:chicken_2dsyntax_2escm"),(void*)f_7946},
{C_text("f_7994:chicken_2dsyntax_2escm"),(void*)f_7994},
{C_text("f_7996:chicken_2dsyntax_2escm"),(void*)f_7996},
{C_text("f_8000:chicken_2dsyntax_2escm"),(void*)f_8000},
{C_text("f_8010:chicken_2dsyntax_2escm"),(void*)f_8010},
{C_text("f_8037:chicken_2dsyntax_2escm"),(void*)f_8037},
{C_text("f_8040:chicken_2dsyntax_2escm"),(void*)f_8040},
{C_text("f_8055:chicken_2dsyntax_2escm"),(void*)f_8055},
{C_text("f_8063:chicken_2dsyntax_2escm"),(void*)f_8063},
{C_text("f_8072:chicken_2dsyntax_2escm"),(void*)f_8072},
{C_text("f_8087:chicken_2dsyntax_2escm"),(void*)f_8087},
{C_text("f_8097:chicken_2dsyntax_2escm"),(void*)f_8097},
{C_text("f_8100:chicken_2dsyntax_2escm"),(void*)f_8100},
{C_text("f_8116:chicken_2dsyntax_2escm"),(void*)f_8116},
{C_text("f_8136:chicken_2dsyntax_2escm"),(void*)f_8136},
{C_text("f_8138:chicken_2dsyntax_2escm"),(void*)f_8138},
{C_text("f_8140:chicken_2dsyntax_2escm"),(void*)f_8140},
{C_text("f_8144:chicken_2dsyntax_2escm"),(void*)f_8144},
{C_text("f_8153:chicken_2dsyntax_2escm"),(void*)f_8153},
{C_text("f_8156:chicken_2dsyntax_2escm"),(void*)f_8156},
{C_text("f_8165:chicken_2dsyntax_2escm"),(void*)f_8165},
{C_text("f_8181:chicken_2dsyntax_2escm"),(void*)f_8181},
{C_text("f_8185:chicken_2dsyntax_2escm"),(void*)f_8185},
{C_text("f_8228:chicken_2dsyntax_2escm"),(void*)f_8228},
{C_text("f_8240:chicken_2dsyntax_2escm"),(void*)f_8240},
{C_text("f_8242:chicken_2dsyntax_2escm"),(void*)f_8242},
{C_text("f_8246:chicken_2dsyntax_2escm"),(void*)f_8246},
{C_text("f_8249:chicken_2dsyntax_2escm"),(void*)f_8249},
{C_text("f_8268:chicken_2dsyntax_2escm"),(void*)f_8268},
{C_text("f_8284:chicken_2dsyntax_2escm"),(void*)f_8284},
{C_text("f_8286:chicken_2dsyntax_2escm"),(void*)f_8286},
{C_text("f_8290:chicken_2dsyntax_2escm"),(void*)f_8290},
{C_text("f_8293:chicken_2dsyntax_2escm"),(void*)f_8293},
{C_text("f_8306:chicken_2dsyntax_2escm"),(void*)f_8306},
{C_text("f_8308:chicken_2dsyntax_2escm"),(void*)f_8308},
{C_text("f_8312:chicken_2dsyntax_2escm"),(void*)f_8312},
{C_text("f_8326:chicken_2dsyntax_2escm"),(void*)f_8326},
{C_text("f_8332:chicken_2dsyntax_2escm"),(void*)f_8332},
{C_text("f_8354:chicken_2dsyntax_2escm"),(void*)f_8354},
{C_text("f_8360:chicken_2dsyntax_2escm"),(void*)f_8360},
{C_text("f_8364:chicken_2dsyntax_2escm"),(void*)f_8364},
{C_text("f_8374:chicken_2dsyntax_2escm"),(void*)f_8374},
{C_text("f_8376:chicken_2dsyntax_2escm"),(void*)f_8376},
{C_text("f_8405:chicken_2dsyntax_2escm"),(void*)f_8405},
{C_text("f_8424:chicken_2dsyntax_2escm"),(void*)f_8424},
{C_text("f_8458:chicken_2dsyntax_2escm"),(void*)f_8458},
{C_text("f_8482:chicken_2dsyntax_2escm"),(void*)f_8482},
{C_text("f_8484:chicken_2dsyntax_2escm"),(void*)f_8484},
{C_text("f_8488:chicken_2dsyntax_2escm"),(void*)f_8488},
{C_text("f_8494:chicken_2dsyntax_2escm"),(void*)f_8494},
{C_text("f_8528:chicken_2dsyntax_2escm"),(void*)f_8528},
{C_text("f_8564:chicken_2dsyntax_2escm"),(void*)f_8564},
{C_text("f_8566:chicken_2dsyntax_2escm"),(void*)f_8566},
{C_text("f_8570:chicken_2dsyntax_2escm"),(void*)f_8570},
{C_text("f_8578:chicken_2dsyntax_2escm"),(void*)f_8578},
{C_text("f_8583:chicken_2dsyntax_2escm"),(void*)f_8583},
{C_text("f_8608:chicken_2dsyntax_2escm"),(void*)f_8608},
{C_text("f_8618:chicken_2dsyntax_2escm"),(void*)f_8618},
{C_text("f_8620:chicken_2dsyntax_2escm"),(void*)f_8620},
{C_text("f_8624:chicken_2dsyntax_2escm"),(void*)f_8624},
{C_text("f_8630:chicken_2dsyntax_2escm"),(void*)f_8630},
{C_text("f_8651:chicken_2dsyntax_2escm"),(void*)f_8651},
{C_text("f_8658:chicken_2dsyntax_2escm"),(void*)f_8658},
{C_text("f_8681:chicken_2dsyntax_2escm"),(void*)f_8681},
{C_text("f_8685:chicken_2dsyntax_2escm"),(void*)f_8685},
{C_text("f_8706:chicken_2dsyntax_2escm"),(void*)f_8706},
{C_text("f_8709:chicken_2dsyntax_2escm"),(void*)f_8709},
{C_text("f_8713:chicken_2dsyntax_2escm"),(void*)f_8713},
{C_text("f_8721:chicken_2dsyntax_2escm"),(void*)f_8721},
{C_text("f_8725:chicken_2dsyntax_2escm"),(void*)f_8725},
{C_text("f_8731:chicken_2dsyntax_2escm"),(void*)f_8731},
{C_text("f_8732:chicken_2dsyntax_2escm"),(void*)f_8732},
{C_text("f_8743:chicken_2dsyntax_2escm"),(void*)f_8743},
{C_text("f_8758:chicken_2dsyntax_2escm"),(void*)f_8758},
{C_text("f_8760:chicken_2dsyntax_2escm"),(void*)f_8760},
{C_text("f_8779:chicken_2dsyntax_2escm"),(void*)f_8779},
{C_text("f_8787:chicken_2dsyntax_2escm"),(void*)f_8787},
{C_text("f_8793:chicken_2dsyntax_2escm"),(void*)f_8793},
{C_text("f_8795:chicken_2dsyntax_2escm"),(void*)f_8795},
{C_text("f_8820:chicken_2dsyntax_2escm"),(void*)f_8820},
{C_text("f_8844:chicken_2dsyntax_2escm"),(void*)f_8844},
{C_text("f_8881:chicken_2dsyntax_2escm"),(void*)f_8881},
{C_text("f_8909:chicken_2dsyntax_2escm"),(void*)f_8909},
{C_text("f_8943:chicken_2dsyntax_2escm"),(void*)f_8943},
{C_text("f_8974:chicken_2dsyntax_2escm"),(void*)f_8974},
{C_text("f_8981:chicken_2dsyntax_2escm"),(void*)f_8981},
{C_text("f_8987:chicken_2dsyntax_2escm"),(void*)f_8987},
{C_text("f_9012:chicken_2dsyntax_2escm"),(void*)f_9012},
{C_text("f_9021:chicken_2dsyntax_2escm"),(void*)f_9021},
{C_text("f_9034:chicken_2dsyntax_2escm"),(void*)f_9034},
{C_text("f_9059:chicken_2dsyntax_2escm"),(void*)f_9059},
{C_text("f_9095:chicken_2dsyntax_2escm"),(void*)f_9095},
{C_text("f_9097:chicken_2dsyntax_2escm"),(void*)f_9097},
{C_text("f_9101:chicken_2dsyntax_2escm"),(void*)f_9101},
{C_text("f_9108:chicken_2dsyntax_2escm"),(void*)f_9108},
{C_text("f_9112:chicken_2dsyntax_2escm"),(void*)f_9112},
{C_text("f_9120:chicken_2dsyntax_2escm"),(void*)f_9120},
{C_text("f_9134:chicken_2dsyntax_2escm"),(void*)f_9134},
{C_text("f_9140:chicken_2dsyntax_2escm"),(void*)f_9140},
{C_text("f_9147:chicken_2dsyntax_2escm"),(void*)f_9147},
{C_text("f_9153:chicken_2dsyntax_2escm"),(void*)f_9153},
{C_text("f_9166:chicken_2dsyntax_2escm"),(void*)f_9166},
{C_text("f_9200:chicken_2dsyntax_2escm"),(void*)f_9200},
{C_text("f_9210:chicken_2dsyntax_2escm"),(void*)f_9210},
{C_text("f_9225:chicken_2dsyntax_2escm"),(void*)f_9225},
{C_text("f_9227:chicken_2dsyntax_2escm"),(void*)f_9227},
{C_text("f_9231:chicken_2dsyntax_2escm"),(void*)f_9231},
{C_text("f_9246:chicken_2dsyntax_2escm"),(void*)f_9246},
{C_text("f_9248:chicken_2dsyntax_2escm"),(void*)f_9248},
{C_text("f_9252:chicken_2dsyntax_2escm"),(void*)f_9252},
{C_text("f_9274:chicken_2dsyntax_2escm"),(void*)f_9274},
{C_text("f_9276:chicken_2dsyntax_2escm"),(void*)f_9276},
{C_text("f_9280:chicken_2dsyntax_2escm"),(void*)f_9280},
{C_text("f_9298:chicken_2dsyntax_2escm"),(void*)f_9298},
{C_text("f_9300:chicken_2dsyntax_2escm"),(void*)f_9300},
{C_text("f_9309:chicken_2dsyntax_2escm"),(void*)f_9309},
{C_text("f_9315:chicken_2dsyntax_2escm"),(void*)f_9315},
{C_text("f_9321:chicken_2dsyntax_2escm"),(void*)f_9321},
{C_text("f_9335:chicken_2dsyntax_2escm"),(void*)f_9335},
{C_text("f_9344:chicken_2dsyntax_2escm"),(void*)f_9344},
{C_text("f_9346:chicken_2dsyntax_2escm"),(void*)f_9346},
{C_text("f_9371:chicken_2dsyntax_2escm"),(void*)f_9371},
{C_text("f_9382:chicken_2dsyntax_2escm"),(void*)f_9382},
{C_text("f_9384:chicken_2dsyntax_2escm"),(void*)f_9384},
{C_text("f_9403:chicken_2dsyntax_2escm"),(void*)f_9403},
{C_text("f_9411:chicken_2dsyntax_2escm"),(void*)f_9411},
{C_text("f_9420:chicken_2dsyntax_2escm"),(void*)f_9420},
{C_text("f_9426:chicken_2dsyntax_2escm"),(void*)f_9426},
{C_text("f_9430:chicken_2dsyntax_2escm"),(void*)f_9430},
{C_text("f_9438:chicken_2dsyntax_2escm"),(void*)f_9438},
{C_text("f_9444:chicken_2dsyntax_2escm"),(void*)f_9444},
{C_text("f_9448:chicken_2dsyntax_2escm"),(void*)f_9448},
{C_text("f_9456:chicken_2dsyntax_2escm"),(void*)f_9456},
{C_text("f_9459:chicken_2dsyntax_2escm"),(void*)f_9459},
{C_text("f_9463:chicken_2dsyntax_2escm"),(void*)f_9463},
{C_text("f_9471:chicken_2dsyntax_2escm"),(void*)f_9471},
{C_text("f_9474:chicken_2dsyntax_2escm"),(void*)f_9474},
{C_text("f_9487:chicken_2dsyntax_2escm"),(void*)f_9487},
{C_text("f_9504:chicken_2dsyntax_2escm"),(void*)f_9504},
{C_text("f_9515:chicken_2dsyntax_2escm"),(void*)f_9515},
{C_text("f_9563:chicken_2dsyntax_2escm"),(void*)f_9563},
{C_text("f_9567:chicken_2dsyntax_2escm"),(void*)f_9567},
{C_text("f_9579:chicken_2dsyntax_2escm"),(void*)f_9579},
{C_text("f_9591:chicken_2dsyntax_2escm"),(void*)f_9591},
{C_text("f_9593:chicken_2dsyntax_2escm"),(void*)f_9593},
{C_text("f_9641:chicken_2dsyntax_2escm"),(void*)f_9641},
{C_text("f_9689:chicken_2dsyntax_2escm"),(void*)f_9689},
{C_text("f_9696:chicken_2dsyntax_2escm"),(void*)f_9696},
{C_text("f_9766:chicken_2dsyntax_2escm"),(void*)f_9766},
{C_text("f_9784:chicken_2dsyntax_2escm"),(void*)f_9784},
{C_text("f_9788:chicken_2dsyntax_2escm"),(void*)f_9788},
{C_text("f_9804:chicken_2dsyntax_2escm"),(void*)f_9804},
{C_text("f_9808:chicken_2dsyntax_2escm"),(void*)f_9808},
{C_text("f_9820:chicken_2dsyntax_2escm"),(void*)f_9820},
{C_text("f_9830:chicken_2dsyntax_2escm"),(void*)f_9830},
{C_text("f_9878:chicken_2dsyntax_2escm"),(void*)f_9878},
{C_text("f_9926:chicken_2dsyntax_2escm"),(void*)f_9926},
{C_text("f_9933:chicken_2dsyntax_2escm"),(void*)f_9933},
{C_text("f_9996:chicken_2dsyntax_2escm"),(void*)f_9996},
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
o|eliminated procedure checks: 743 
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
o|  70 (scheme#cdr pair)
o|  24 (scheme#car pair)
(o e)|safe calls: 1501 
o|safe globals: (posv posq make-list iota find-tail find length+ lset=/eq? lset<=/eq? list-tabulate lset-intersection/eq? lset-union/eq? lset-difference/eq? lset-adjoin/eq? list-index last unzip1 remove filter-map filter alist-cons delete-duplicates fifth fourth third second first delete concatenate cons* any every append-map split-at drop take span partition) 
o|removed side-effect free assignment to unused variable: partition 
o|removed side-effect free assignment to unused variable: span 
o|inlining procedure: k4369 
o|inlining procedure: k4369 
o|removed side-effect free assignment to unused variable: drop 
o|removed side-effect free assignment to unused variable: append-map 
o|inlining procedure: k4639 
o|inlining procedure: k4639 
o|inlining procedure: k4670 
o|inlining procedure: k4670 
o|removed side-effect free assignment to unused variable: cons* 
o|removed side-effect free assignment to unused variable: concatenate 
o|removed side-effect free assignment to unused variable: first 
o|removed side-effect free assignment to unused variable: second 
o|removed side-effect free assignment to unused variable: third 
o|removed side-effect free assignment to unused variable: fourth 
o|removed side-effect free assignment to unused variable: fifth 
o|removed side-effect free assignment to unused variable: delete-duplicates 
o|removed side-effect free assignment to unused variable: alist-cons 
o|inlining procedure: k4887 
o|inlining procedure: k4887 
o|inlining procedure: k4879 
o|inlining procedure: k4879 
o|removed side-effect free assignment to unused variable: filter-map 
o|removed side-effect free assignment to unused variable: remove 
o|removed side-effect free assignment to unused variable: unzip1 
o|removed side-effect free assignment to unused variable: last 
o|removed side-effect free assignment to unused variable: list-index 
o|removed side-effect free assignment to unused variable: lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: lset-difference/eq? 
o|removed side-effect free assignment to unused variable: lset-union/eq? 
o|removed side-effect free assignment to unused variable: lset-intersection/eq? 
o|inlining procedure: k5278 
o|inlining procedure: k5278 
o|removed side-effect free assignment to unused variable: lset<=/eq? 
o|removed side-effect free assignment to unused variable: lset=/eq? 
o|removed side-effect free assignment to unused variable: length+ 
o|removed side-effect free assignment to unused variable: find 
o|removed side-effect free assignment to unused variable: find-tail 
o|removed side-effect free assignment to unused variable: iota 
o|removed side-effect free assignment to unused variable: make-list 
o|removed side-effect free assignment to unused variable: posq 
o|removed side-effect free assignment to unused variable: posv 
o|inlining procedure: k5816 
o|inlining procedure: k5816 
o|inlining procedure: k5844 
o|inlining procedure: k5844 
o|inlining procedure: k5888 
o|inlining procedure: k5888 
o|inlining procedure: k5967 
o|inlining procedure: k5967 
o|inlining procedure: k6065 
o|inlining procedure: k6065 
o|inlining procedure: k6162 
o|inlining procedure: k6162 
o|inlining procedure: k6256 
o|inlining procedure: k6256 
o|inlining procedure: k6361 
o|inlining procedure: k6361 
o|inlining procedure: k6410 
o|inlining procedure: k6410 
o|inlining procedure: k6457 
o|inlining procedure: k6457 
o|inlining procedure: k6496 
o|inlining procedure: k6496 
o|inlining procedure: k6569 
o|inlining procedure: k6569 
o|inlining procedure: k6625 
o|inlining procedure: k6625 
o|inlining procedure: k6640 
o|inlining procedure: k6640 
o|inlining procedure: k6678 
o|inlining procedure: k6678 
o|inlining procedure: k6701 
o|inlining procedure: k6701 
o|inlining procedure: k6764 
o|inlining procedure: k6764 
o|inlining procedure: k6881 
o|inlining procedure: k6881 
o|contracted procedure: "(chicken-syntax.scm:1083) split-at" 
o|inlining procedure: k4427 
o|inlining procedure: k4427 
o|inlining procedure: k7010 
o|inlining procedure: k7010 
o|inlining procedure: k7035 
o|inlining procedure: k7035 
o|inlining procedure: k7083 
o|inlining procedure: k7111 
o|inlining procedure: k7111 
o|inlining procedure: k7083 
o|inlining procedure: k7143 
o|inlining procedure: k7143 
o|inlining procedure: k7183 
o|inlining procedure: k7183 
o|inlining procedure: k6959 
o|inlining procedure: k6959 
o|inlining procedure: k7251 
o|contracted procedure: "(chicken-syntax.scm:1053) g28602869" 
o|inlining procedure: k7251 
o|inlining procedure: k7351 
o|inlining procedure: k7351 
o|removed unused formal parameters: (rename2655) 
o|inlining procedure: k7650 
o|inlining procedure: k7650 
o|removed unused parameter to known procedure: rename2655 "(chicken-syntax.scm:955) make-if-tree2635" 
o|contracted procedure: "(chicken-syntax.scm:953) make-default-procs2634" 
o|inlining procedure: k7583 
o|inlining procedure: k7583 
o|inlining procedure: k7846 
o|inlining procedure: k7846 
o|inlining procedure: k7880 
o|inlining procedure: k7880 
o|inlining procedure: k7914 
o|inlining procedure: k7914 
o|inlining procedure: k7948 
o|inlining procedure: k7948 
o|inlining procedure: k8012 
o|inlining procedure: k8012 
o|inlining procedure: k8064 
o|inlining procedure: k8064 
o|inlining procedure: k8154 
o|inlining procedure: k8154 
o|inlining procedure: k8169 
o|inlining procedure: k8169 
o|inlining procedure: k8378 
o|inlining procedure: k8378 
o|inlining procedure: k8426 
o|contracted procedure: "(chicken-syntax.scm:732) g24772486" 
o|inlining procedure: k8426 
o|inlining procedure: k8460 
o|contracted procedure: "(chicken-syntax.scm:733) g25012502" 
o|inlining procedure: k8460 
o|substituted constant variable: g24932496 
o|inlining procedure: k8496 
o|inlining procedure: k8496 
o|inlining procedure: k8530 
o|inlining procedure: k8530 
o|inlining procedure: k8585 
o|inlining procedure: k8585 
o|inlining procedure: k8632 
o|inlining procedure: k8632 
o|inlining procedure: k8660 
o|inlining procedure: k8660 
o|inlining procedure: k8762 
o|inlining procedure: k8797 
o|inlining procedure: k8797 
o|inlining procedure: k8762 
o|inlining procedure: k8911 
o|contracted procedure: "(chicken-syntax.scm:690) g23692378" 
o|inlining procedure: k8911 
o|inlining procedure: k8945 
o|inlining procedure: k8945 
o|inlining procedure: k8989 
o|inlining procedure: k8989 
o|inlining procedure: k9023 
o|inlining procedure: k9023 
o|inlining procedure: k9046 
o|inlining procedure: k9046 
o|inlining procedure: k9061 
o|inlining procedure: k9061 
o|inlining procedure: k9168 
o|contracted procedure: "(chicken-syntax.scm:649) g21842202" 
o|inlining procedure: k9168 
o|inlining procedure: k9202 
o|contracted procedure: "(chicken-syntax.scm:645) g21692191" 
o|inlining procedure: k9202 
o|inlining procedure: k9323 
o|inlining procedure: k9323 
o|inlining procedure: k9348 
o|inlining procedure: k9348 
o|contracted procedure: "(chicken-syntax.scm:558) pname1610" 
o|inlining procedure: k9389 
o|inlining procedure: k9389 
o|removed unused formal parameters: (z1717) 
o|removed unused formal parameters: (z1745) 
o|inlining procedure: k9595 
o|contracted procedure: "(chicken-syntax.scm:595) g20492059" 
o|inlining procedure: k9595 
o|inlining procedure: k9643 
o|contracted procedure: "(chicken-syntax.scm:593) g20132023" 
o|inlining procedure: k9643 
o|inlining procedure: k9691 
o|contracted procedure: "(chicken-syntax.scm:590) g19711982" 
o|inlining procedure: k9691 
o|inlining procedure: k9741 
o|inlining procedure: k9741 
o|inlining procedure: k9832 
o|contracted procedure: "(chicken-syntax.scm:583) g19351945" 
o|inlining procedure: k9832 
o|inlining procedure: k9880 
o|contracted procedure: "(chicken-syntax.scm:580) g18991909" 
o|inlining procedure: k9880 
o|inlining procedure: k9928 
o|inlining procedure: k9928 
o|inlining procedure: k9978 
o|inlining procedure: k9978 
o|inlining procedure: k9998 
o|inlining procedure: k9998 
o|inlining procedure: k10046 
o|inlining procedure: k10046 
o|inlining procedure: k10094 
o|inlining procedure: k10094 
o|inlining procedure: k10142 
o|removed unused parameter to known procedure: z1745 "(chicken-syntax.scm:560) g17341743" 
o|inlining procedure: k10142 
o|inlining procedure: k10176 
o|removed unused parameter to known procedure: z1717 "(chicken-syntax.scm:559) g17061715" 
o|inlining procedure: k10176 
o|inlining procedure: k10210 
o|inlining procedure: k10210 
o|inlining procedure: k10244 
o|inlining procedure: k10244 
o|inlining procedure: k10278 
o|inlining procedure: k10278 
o|removed unused formal parameters: (x1332) 
o|removed unused formal parameters: (x1360) 
o|inlining procedure: k10433 
o|contracted procedure: "(chicken-syntax.scm:540) g15781588" 
o|inlining procedure: k10433 
o|inlining procedure: k10481 
o|contracted procedure: "(chicken-syntax.scm:538) g15421552" 
o|inlining procedure: k10481 
o|inlining procedure: k10580 
o|contracted procedure: "(chicken-syntax.scm:533) g15061516" 
o|inlining procedure: k10580 
o|inlining procedure: k10628 
o|contracted procedure: "(chicken-syntax.scm:531) g14701480" 
o|inlining procedure: k10628 
o|inlining procedure: k10711 
o|inlining procedure: k10711 
o|inlining procedure: k10761 
o|inlining procedure: k10761 
o|inlining procedure: k10781 
o|inlining procedure: k10781 
o|inlining procedure: k10829 
o|inlining procedure: k10829 
o|inlining procedure: k10863 
o|removed unused parameter to known procedure: x1360 "(chicken-syntax.scm:521) g13491358" 
o|inlining procedure: k10863 
o|inlining procedure: k10897 
o|removed unused parameter to known procedure: x1332 "(chicken-syntax.scm:520) g13211330" 
o|inlining procedure: k10897 
o|inlining procedure: k10931 
o|inlining procedure: k10931 
o|inlining procedure: k11041 
o|inlining procedure: k11041 
o|inlining procedure: k11163 
o|inlining procedure: k11163 
o|inlining procedure: k11184 
o|inlining procedure: k11196 
o|inlining procedure: k11196 
o|inlining procedure: k11184 
o|inlining procedure: k11256 
o|inlining procedure: k11256 
o|inlining procedure: k11316 
o|inlining procedure: k11316 
o|inlining procedure: k11405 
o|inlining procedure: k11405 
o|substituted constant variable: a11440 
o|substituted constant variable: a11465 
o|inlining procedure: k11474 
o|inlining procedure: k11474 
o|inlining procedure: k11643 
o|inlining procedure: k11643 
o|inlining procedure: k11672 
o|inlining procedure: k11687 
o|inlining procedure: k11703 
o|inlining procedure: k11703 
o|inlining procedure: k11687 
o|inlining procedure: k11672 
o|inlining procedure: k11737 
o|inlining procedure: k11753 
o|inlining procedure: k11753 
o|inlining procedure: k11737 
o|inlining procedure: k11791 
o|inlining procedure: k11791 
o|inlining procedure: k11855 
o|inlining procedure: k11855 
o|inlining procedure: k11964 
o|inlining procedure: k11964 
o|inlining procedure: k12077 
o|inlining procedure: k12077 
o|inlining procedure: k12098 
o|inlining procedure: k12098 
o|inlining procedure: k12144 
o|inlining procedure: k12144 
o|inlining procedure: k12184 
o|inlining procedure: k12240 
o|contracted procedure: "(chicken-syntax.scm:201) g919929" 
o|inlining procedure: k12240 
o|inlining procedure: k12310 
o|inlining procedure: k12337 
o|contracted procedure: "(chicken-syntax.scm:192) g885894" 
o|propagated global variable: g902903 chicken.compiler.scrutinizer#check-and-validate-type 
o|inlining procedure: k12337 
o|inlining procedure: k12310 
o|inlining procedure: k12381 
o|inlining procedure: k12381 
o|inlining procedure: k12184 
o|inlining procedure: k12428 
o|inlining procedure: k12428 
o|inlining procedure: k12465 
o|inlining procedure: k12465 
o|inlining procedure: k12514 
o|inlining procedure: k12605 
o|contracted procedure: "(chicken-syntax.scm:154) g816825" 
o|inlining procedure: k12605 
o|inlining procedure: k12639 
o|contracted procedure: "(chicken-syntax.scm:154) g788797" 
o|inlining procedure: k12639 
o|inlining procedure: k12514 
o|inlining procedure: k12676 
o|inlining procedure: k12691 
o|inlining procedure: k12707 
o|inlining procedure: k12707 
o|inlining procedure: k12691 
o|inlining procedure: k12676 
o|inlining procedure: k12741 
o|inlining procedure: k12757 
o|inlining procedure: k12757 
o|inlining procedure: k12792 
o|inlining procedure: k12792 
o|inlining procedure: k12741 
o|inlining procedure: k12823 
o|inlining procedure: k12823 
o|inlining procedure: k12861 
o|inlining procedure: k12861 
o|inlining procedure: k12888 
o|inlining procedure: k12888 
o|inlining procedure: k12917 
o|inlining procedure: k12917 
o|inlining procedure: k12999 
o|inlining procedure: k12999 
o|inlining procedure: k13041 
o|inlining procedure: k13041 
o|inlining procedure: k13156 
o|inlining procedure: k13156 
o|inlining procedure: k13176 
o|inlining procedure: k13176 
o|replaced variables: 2124 
o|removed binding forms: 476 
o|substituted constant variable: r437013338 
o|removed side-effect free assignment to unused variable: every 
o|removed side-effect free assignment to unused variable: any 
o|removed side-effect free assignment to unused variable: filter 
o|removed side-effect free assignment to unused variable: list-tabulate 
o|substituted constant variable: r584513355 
o|substituted constant variable: r641113368 
o|substituted constant variable: r657013377 
o|substituted constant variable: r662613379 
o|substituted constant variable: r688213388 
o|substituted constant variable: r718413404 
o|substituted constant variable: r696013407 
o|converted assignments to bindings: (genvars2846) 
o|substituted constant variable: r758413414 
o|converted assignments to bindings: (make-if-tree2635) 
o|substituted constant variable: r817013439 
o|substituted constant variable: r866113454 
o|substituted constant variable: r932413476 
o|substituted constant variable: r974213489 
o|substituted constant variable: r997913497 
o|substituted constant variable: r1076213524 
o|substituted constant variable: r1119713542 
o|substituted constant variable: r1118513543 
o|substituted constant variable: r1168813562 
o|substituted constant variable: r1167313563 
o|substituted constant variable: r1173813567 
o|substituted constant variable: r1185613571 
o|substituted constant variable: r1196513572 
o|substituted constant variable: r1214513578 
o|substituted constant variable: r1238213589 
o|substituted constant variable: r1246613595 
o|substituted constant variable: r1269213606 
o|substituted constant variable: r1267713607 
o|substituted constant variable: r1279313612 
o|substituted constant variable: r1274213613 
o|substituted constant variable: r1286213616 
o|substituted constant variable: r1291813622 
o|substituted constant variable: r1291813622 
o|substituted constant variable: r1315713628 
o|substituted constant variable: r1315713628 
o|converted assignments to bindings: (parse-clause597) 
o|simplifications: ((let . 3)) 
o|replaced variables: 77 
o|removed binding forms: 1860 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:590) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:560) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:559) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:521) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:520) ##sys#slot" 
o|removed binding forms: 112 
o|contracted procedure: k9728 
o|contracted procedure: k10167 
o|contracted procedure: k10201 
o|contracted procedure: k10888 
o|contracted procedure: k10922 
o|removed binding forms: 5 
o|removed binding forms: 5 
o|simplifications: ((let . 33) (if . 30) (##core#call . 1245)) 
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
o|    scheme#cdr	21
o|    ##sys#cons	143
o|    ##sys#list	294
o|    chicken.fixnum#fx<=	2
o|    scheme#car	53
o|    chicken.fixnum#fx-	4
o|    scheme#cons	128
o|contracted procedure: k4372 
o|contracted procedure: k4379 
o|contracted procedure: k4389 
o|contracted procedure: k5733 
o|contracted procedure: k5765 
o|contracted procedure: k5761 
o|contracted procedure: k5741 
o|contracted procedure: k5757 
o|contracted procedure: k5749 
o|contracted procedure: k5753 
o|contracted procedure: k5745 
o|contracted procedure: k5737 
o|contracted procedure: k5778 
o|contracted procedure: k5851 
o|contracted procedure: k5783 
o|contracted procedure: k5835 
o|contracted procedure: k5796 
o|contracted procedure: k5804 
o|contracted procedure: k5808 
o|contracted procedure: k5800 
o|contracted procedure: k5819 
o|contracted procedure: k5827 
o|contracted procedure: k5816 
o|contracted procedure: k5838 
o|contracted procedure: k5872 
o|contracted procedure: k5885 
o|contracted procedure: k5891 
o|contracted procedure: k5914 
o|contracted procedure: k5910 
o|contracted procedure: k5904 
o|contracted procedure: k5898 
o|contracted procedure: k5930 
o|contracted procedure: k5926 
o|contracted procedure: k6128 
o|contracted procedure: k5937 
o|contracted procedure: k5970 
o|contracted procedure: k6005 
o|contracted procedure: k6001 
o|contracted procedure: k5997 
o|contracted procedure: k5989 
o|contracted procedure: k6015 
o|contracted procedure: k6034 
o|contracted procedure: k6030 
o|contracted procedure: k6026 
o|contracted procedure: k6054 
o|contracted procedure: k6058 
o|contracted procedure: k6074 
o|contracted procedure: k6102 
o|contracted procedure: k6094 
o|contracted procedure: k6098 
o|contracted procedure: k6114 
o|contracted procedure: k6124 
o|contracted procedure: k6117 
o|contracted procedure: k6304 
o|contracted procedure: k6132 
o|contracted procedure: k6165 
o|contracted procedure: k6196 
o|contracted procedure: k6192 
o|contracted procedure: k6188 
o|contracted procedure: k6206 
o|contracted procedure: k6227 
o|contracted procedure: k6221 
o|contracted procedure: k6217 
o|contracted procedure: k6245 
o|contracted procedure: k6249 
o|contracted procedure: k6265 
o|contracted procedure: k6282 
o|contracted procedure: k6290 
o|contracted procedure: k6300 
o|contracted procedure: k6293 
o|contracted procedure: k6317 
o|contracted procedure: k6326 
o|contracted procedure: k6329 
o|contracted procedure: k6332 
o|contracted procedure: k6341 
o|contracted procedure: k6350 
o|contracted procedure: k6353 
o|contracted procedure: k6364 
o|contracted procedure: k6370 
o|contracted procedure: k6672 
o|contracted procedure: k6384 
o|contracted procedure: k6616 
o|contracted procedure: k6620 
o|contracted procedure: k6628 
o|contracted procedure: k6631 
o|contracted procedure: k6612 
o|contracted procedure: k6608 
o|contracted procedure: k6392 
o|contracted procedure: k6596 
o|contracted procedure: k6604 
o|contracted procedure: k6600 
o|contracted procedure: k6400 
o|contracted procedure: k6396 
o|contracted procedure: k6388 
o|contracted procedure: k6380 
o|contracted procedure: k6413 
o|contracted procedure: k6416 
o|contracted procedure: k6592 
o|contracted procedure: k6419 
o|contracted procedure: k6422 
o|contracted procedure: k6539 
o|contracted procedure: k6555 
o|contracted procedure: k6563 
o|contracted procedure: k6559 
o|contracted procedure: k6551 
o|contracted procedure: k6543 
o|contracted procedure: k6547 
o|contracted procedure: k6428 
o|contracted procedure: k6463 
o|contracted procedure: k6474 
o|contracted procedure: k6470 
o|contracted procedure: k6482 
o|contracted procedure: k6489 
o|contracted procedure: k6496 
o|contracted procedure: k6515 
o|contracted procedure: k6531 
o|contracted procedure: k6535 
o|contracted procedure: k6527 
o|contracted procedure: k6519 
o|contracted procedure: k6523 
o|contracted procedure: k6566 
o|contracted procedure: k6572 
o|contracted procedure: k6643 
o|contracted procedure: k6646 
o|contracted procedure: k6649 
o|contracted procedure: k6657 
o|contracted procedure: k6665 
o|contracted procedure: k6681 
o|contracted procedure: k6691 
o|contracted procedure: k6695 
o|contracted procedure: k6704 
o|contracted procedure: k6726 
o|contracted procedure: k6722 
o|contracted procedure: k6707 
o|contracted procedure: k6710 
o|contracted procedure: k6718 
o|contracted procedure: k6756 
o|contracted procedure: k6767 
o|contracted procedure: k6783 
o|contracted procedure: k6795 
o|contracted procedure: k6791 
o|contracted procedure: k6787 
o|contracted procedure: k6813 
o|contracted procedure: k6817 
o|contracted procedure: k6837 
o|contracted procedure: k6833 
o|contracted procedure: k6855 
o|contracted procedure: k7283 
o|contracted procedure: k7287 
o|contracted procedure: k7291 
o|contracted procedure: k7295 
o|contracted procedure: k7299 
o|contracted procedure: k6859 
o|contracted procedure: k6884 
o|contracted procedure: k6899 
o|contracted procedure: k7220 
o|contracted procedure: k7216 
o|contracted procedure: k6945 
o|contracted procedure: k6950 
o|contracted procedure: k6941 
o|contracted procedure: k6962 
o|contracted procedure: k6971 
o|contracted procedure: k6984 
o|contracted procedure: k4430 
o|contracted procedure: k4444 
o|contracted procedure: k4454 
o|contracted procedure: k4448 
o|contracted procedure: k7013 
o|contracted procedure: k7020 
o|contracted procedure: k7023 
o|contracted procedure: k7026 
o|contracted procedure: k7074 
o|contracted procedure: k7038 
o|contracted procedure: k7064 
o|contracted procedure: k7068 
o|contracted procedure: k7060 
o|contracted procedure: k7041 
o|contracted procedure: k7044 
o|contracted procedure: k7052 
o|contracted procedure: k7056 
o|contracted procedure: k7086 
o|contracted procedure: k7108 
o|contracted procedure: k7100 
o|contracted procedure: k7104 
o|contracted procedure: k7096 
o|contracted procedure: k7129 
o|contracted procedure: k7114 
o|contracted procedure: k7123 
o|contracted procedure: k7172 
o|contracted procedure: k7176 
o|contracted procedure: k7160 
o|contracted procedure: k7168 
o|contracted procedure: k7164 
o|contracted procedure: k7139 
o|contracted procedure: k7146 
o|contracted procedure: k7186 
o|contracted procedure: k7197 
o|contracted procedure: k7204 
o|contracted procedure: k7212 
o|contracted procedure: k7224 
o|contracted procedure: k7239 
o|contracted procedure: k7242 
o|contracted procedure: k7254 
o|contracted procedure: k7257 
o|contracted procedure: k7260 
o|contracted procedure: k7268 
o|contracted procedure: k7276 
o|contracted procedure: k7233 
o|contracted procedure: k7451 
o|contracted procedure: k7455 
o|contracted procedure: k7459 
o|contracted procedure: k7303 
o|contracted procedure: k7316 
o|contracted procedure: k7319 
o|contracted procedure: k7447 
o|contracted procedure: k7341 
o|contracted procedure: k7354 
o|contracted procedure: k7361 
o|contracted procedure: k7364 
o|contracted procedure: k7370 
o|contracted procedure: k7420 
o|contracted procedure: k7424 
o|contracted procedure: k7428 
o|contracted procedure: k7416 
o|contracted procedure: k7390 
o|contracted procedure: k7402 
o|contracted procedure: k7406 
o|contracted procedure: k7410 
o|contracted procedure: k7398 
o|contracted procedure: k7394 
o|contracted procedure: k7380 
o|contracted procedure: k7443 
o|contracted procedure: k7439 
o|contracted procedure: k7435 
o|contracted procedure: k7528 
o|contracted procedure: k7532 
o|contracted procedure: k7536 
o|contracted procedure: k7463 
o|contracted procedure: k7524 
o|contracted procedure: k7520 
o|contracted procedure: k7483 
o|contracted procedure: k7491 
o|contracted procedure: k7495 
o|contracted procedure: k7509 
o|contracted procedure: k7498 
o|contracted procedure: k7502 
o|contracted procedure: k7487 
o|contracted procedure: k7980 
o|contracted procedure: k7984 
o|contracted procedure: k7988 
o|contracted procedure: k7540 
o|contracted procedure: k7553 
o|contracted procedure: k7556 
o|contracted procedure: k7653 
o|contracted procedure: k7663 
o|contracted procedure: k7670 
o|contracted procedure: k7722 
o|contracted procedure: k7674 
o|contracted procedure: k7714 
o|contracted procedure: k7698 
o|contracted procedure: k7706 
o|contracted procedure: k7702 
o|contracted procedure: k7682 
o|contracted procedure: k7678 
o|contracted procedure: k7694 
o|contracted procedure: k7739 
o|contracted procedure: k7742 
o|contracted procedure: k7761 
o|contracted procedure: k7773 
o|contracted procedure: k7779 
o|contracted procedure: k7791 
o|contracted procedure: k7824 
o|contracted procedure: k7840 
o|contracted procedure: k7836 
o|contracted procedure: k7832 
o|contracted procedure: k7828 
o|contracted procedure: k7820 
o|contracted procedure: k7586 
o|contracted procedure: k7589 
o|contracted procedure: k7610 
o|contracted procedure: k7622 
o|contracted procedure: k7614 
o|contracted procedure: k7596 
o|contracted procedure: k7638 
o|contracted procedure: k7634 
o|contracted procedure: k7849 
o|contracted procedure: k7852 
o|contracted procedure: k7855 
o|contracted procedure: k7863 
o|contracted procedure: k7871 
o|contracted procedure: k7883 
o|contracted procedure: k7905 
o|contracted procedure: k7901 
o|contracted procedure: k7886 
o|contracted procedure: k7889 
o|contracted procedure: k7897 
o|contracted procedure: k7917 
o|contracted procedure: k7920 
o|contracted procedure: k7923 
o|contracted procedure: k7931 
o|contracted procedure: k7939 
o|contracted procedure: k7951 
o|contracted procedure: k7973 
o|contracted procedure: k7969 
o|contracted procedure: k7954 
o|contracted procedure: k7957 
o|contracted procedure: k7965 
o|contracted procedure: k8001 
o|contracted procedure: k8015 
o|contracted procedure: k8022 
o|contracted procedure: k8025 
o|contracted procedure: k8130 
o|contracted procedure: k8032 
o|contracted procedure: k8057 
o|contracted procedure: k8045 
o|contracted procedure: k8049 
o|contracted procedure: k8126 
o|contracted procedure: k8067 
o|contracted procedure: k8089 
o|contracted procedure: k8077 
o|contracted procedure: k8081 
o|contracted procedure: k8122 
o|contracted procedure: k8118 
o|contracted procedure: k8106 
o|contracted procedure: k8110 
o|contracted procedure: k8145 
o|contracted procedure: k8217 
o|contracted procedure: k8148 
o|contracted procedure: k8197 
o|contracted procedure: k8160 
o|contracted procedure: k8193 
o|contracted procedure: k8189 
o|contracted procedure: k8172 
o|contracted procedure: k8200 
o|contracted procedure: k8207 
o|contracted procedure: k8230 
o|contracted procedure: k8278 
o|contracted procedure: k8234 
o|contracted procedure: k8274 
o|contracted procedure: k8254 
o|contracted procedure: k8270 
o|contracted procedure: k8262 
o|contracted procedure: k8258 
o|contracted procedure: k8300 
o|contracted procedure: k8313 
o|contracted procedure: k8318 
o|contracted procedure: k8321 
o|contracted procedure: k8327 
o|contracted procedure: k8341 
o|contracted procedure: k8349 
o|contracted procedure: k8355 
o|contracted procedure: k8337 
o|contracted procedure: k8366 
o|contracted procedure: k8369 
o|contracted procedure: k8417 
o|contracted procedure: k8381 
o|contracted procedure: k8384 
o|contracted procedure: k8387 
o|contracted procedure: k8395 
o|contracted procedure: k8399 
o|contracted procedure: k8407 
o|contracted procedure: k8411 
o|contracted procedure: k8429 
o|contracted procedure: k8451 
o|contracted procedure: k8447 
o|contracted procedure: k8432 
o|contracted procedure: k8435 
o|contracted procedure: k8443 
o|contracted procedure: k8463 
o|contracted procedure: k8470 
o|contracted procedure: k8490 
o|contracted procedure: k8499 
o|contracted procedure: k8521 
o|contracted procedure: k8517 
o|contracted procedure: k8502 
o|contracted procedure: k8505 
o|contracted procedure: k8513 
o|contracted procedure: k8533 
o|contracted procedure: k8555 
o|contracted procedure: k8551 
o|contracted procedure: k8536 
o|contracted procedure: k8539 
o|contracted procedure: k8547 
o|contracted procedure: k8571 
o|contracted procedure: k8588 
o|contracted procedure: k8595 
o|contracted procedure: k8612 
o|contracted procedure: k8602 
o|contracted procedure: k8625 
o|contracted procedure: k8655 
o|contracted procedure: k8635 
o|contracted procedure: k8645 
o|contracted procedure: k8663 
o|contracted procedure: k8693 
o|contracted procedure: k8669 
o|contracted procedure: k8689 
o|contracted procedure: k8698 
o|contracted procedure: k8701 
o|contracted procedure: k8710 
o|contracted procedure: k8726 
o|contracted procedure: k8738 
o|contracted procedure: k8748 
o|contracted procedure: k8765 
o|contracted procedure: k8776 
o|contracted procedure: k8788 
o|contracted procedure: k8772 
o|contracted procedure: k8800 
o|contracted procedure: k8803 
o|contracted procedure: k8806 
o|contracted procedure: k8814 
o|contracted procedure: k8822 
o|contracted procedure: k8858 
o|contracted procedure: k8862 
o|contracted procedure: k8854 
o|contracted procedure: k8838 
o|contracted procedure: k8846 
o|contracted procedure: k8891 
o|contracted procedure: k8869 
o|contracted procedure: k8873 
o|contracted procedure: k8883 
o|contracted procedure: k8905 
o|contracted procedure: k8894 
o|contracted procedure: k8901 
o|contracted procedure: k8914 
o|contracted procedure: k8936 
o|contracted procedure: k8932 
o|contracted procedure: k8917 
o|contracted procedure: k8920 
o|contracted procedure: k8928 
o|contracted procedure: k8948 
o|contracted procedure: k8954 
o|contracted procedure: k8983 
o|contracted procedure: k8965 
o|inlining procedure: k8957 
o|inlining procedure: k8957 
o|contracted procedure: k8992 
o|contracted procedure: k8995 
o|contracted procedure: k8998 
o|contracted procedure: k9006 
o|contracted procedure: k9014 
o|contracted procedure: k9026 
o|contracted procedure: k9029 
o|contracted procedure: k9040 
o|contracted procedure: k9049 
o|inlining procedure: k9032 
o|contracted procedure: k9064 
o|contracted procedure: k9086 
o|contracted procedure: k9082 
o|contracted procedure: k9067 
o|contracted procedure: k9070 
o|contracted procedure: k9078 
o|contracted procedure: k9114 
o|contracted procedure: k9122 
o|contracted procedure: k9126 
o|contracted procedure: k9130 
o|contracted procedure: k9148 
o|contracted procedure: k9154 
o|contracted procedure: k9171 
o|contracted procedure: k9193 
o|contracted procedure: k9189 
o|contracted procedure: k9174 
o|contracted procedure: k9177 
o|contracted procedure: k9185 
o|contracted procedure: k9205 
o|contracted procedure: k9215 
o|contracted procedure: k9219 
o|contracted procedure: k9236 
o|contracted procedure: k9240 
o|contracted procedure: k9257 
o|contracted procedure: k9261 
o|contracted procedure: k9265 
o|contracted procedure: k9285 
o|contracted procedure: k9289 
o|contracted procedure: k9306 
o|contracted procedure: k9326 
o|contracted procedure: k9336 
o|contracted procedure: k9339 
o|contracted procedure: k9351 
o|contracted procedure: k9354 
o|contracted procedure: k9357 
o|contracted procedure: k9365 
o|contracted procedure: k9373 
o|contracted procedure: k9404 
o|contracted procedure: k9412 
o|contracted procedure: k9415 
o|contracted procedure: k9421 
o|contracted procedure: k9427 
o|contracted procedure: k9392 
o|contracted procedure: k9439 
o|contracted procedure: k9445 
o|contracted procedure: k9460 
o|contracted procedure: k9479 
o|contracted procedure: k9482 
o|contracted procedure: k9493 
o|contracted procedure: k9496 
o|contracted procedure: k9499 
o|contracted procedure: k9510 
o|contracted procedure: k9992 
o|contracted procedure: k9988 
o|contracted procedure: k9521 
o|contracted procedure: k9763 
o|contracted procedure: k9776 
o|contracted procedure: k9772 
o|contracted procedure: k9779 
o|contracted procedure: k9759 
o|contracted procedure: k9755 
o|contracted procedure: k9529 
o|contracted procedure: k9751 
o|contracted procedure: k9533 
o|contracted procedure: k9549 
o|contracted procedure: k9545 
o|contracted procedure: k9541 
o|contracted procedure: k9537 
o|contracted procedure: k9525 
o|contracted procedure: k9517 
o|contracted procedure: k9506 
o|contracted procedure: k9489 
o|contracted procedure: k9569 
o|contracted procedure: k9581 
o|contracted procedure: k9634 
o|contracted procedure: k9598 
o|contracted procedure: k9624 
o|contracted procedure: k9628 
o|contracted procedure: k9620 
o|contracted procedure: k9601 
o|contracted procedure: k9604 
o|contracted procedure: k9612 
o|contracted procedure: k9616 
o|contracted procedure: k9682 
o|contracted procedure: k9646 
o|contracted procedure: k9672 
o|contracted procedure: k9676 
o|contracted procedure: k9668 
o|contracted procedure: k9649 
o|contracted procedure: k9652 
o|contracted procedure: k9660 
o|contracted procedure: k9664 
o|contracted procedure: k9724 
o|contracted procedure: k9732 
o|contracted procedure: k9558 
o|contracted procedure: k9720 
o|contracted procedure: k9697 
o|contracted procedure: k9700 
o|contracted procedure: k9708 
o|contracted procedure: k9712 
o|contracted procedure: k9716 
o|contracted procedure: k9738 
o|contracted procedure: k9744 
o|contracted procedure: k9790 
o|contracted procedure: k9810 
o|contracted procedure: k9826 
o|contracted procedure: k9822 
o|contracted procedure: k9871 
o|contracted procedure: k9835 
o|contracted procedure: k9861 
o|contracted procedure: k9865 
o|contracted procedure: k9857 
o|contracted procedure: k9838 
o|contracted procedure: k9841 
o|contracted procedure: k9849 
o|contracted procedure: k9853 
o|contracted procedure: k9919 
o|contracted procedure: k9883 
o|contracted procedure: k9909 
o|contracted procedure: k9913 
o|contracted procedure: k9799 
o|contracted procedure: k9905 
o|contracted procedure: k9886 
o|contracted procedure: k9889 
o|contracted procedure: k9897 
o|contracted procedure: k9901 
o|contracted procedure: k9934 
o|contracted procedure: k9937 
o|contracted procedure: k9945 
o|contracted procedure: k9949 
o|contracted procedure: k9953 
o|contracted procedure: k9961 
o|contracted procedure: k9965 
o|contracted procedure: k9969 
o|contracted procedure: k9975 
o|contracted procedure: k9981 
o|contracted procedure: k10037 
o|contracted procedure: k10001 
o|contracted procedure: k10027 
o|contracted procedure: k10031 
o|contracted procedure: k10023 
o|contracted procedure: k10004 
o|contracted procedure: k10007 
o|contracted procedure: k10015 
o|contracted procedure: k10019 
o|contracted procedure: k10085 
o|contracted procedure: k10049 
o|contracted procedure: k10075 
o|contracted procedure: k10079 
o|contracted procedure: k10071 
o|contracted procedure: k10052 
o|contracted procedure: k10055 
o|contracted procedure: k10063 
o|contracted procedure: k10067 
o|contracted procedure: k10133 
o|contracted procedure: k10097 
o|contracted procedure: k10123 
o|contracted procedure: k10127 
o|contracted procedure: k10119 
o|contracted procedure: k10100 
o|contracted procedure: k10103 
o|contracted procedure: k10111 
o|contracted procedure: k10115 
o|contracted procedure: k10145 
o|contracted procedure: k10148 
o|contracted procedure: k10151 
o|contracted procedure: k10159 
o|contracted procedure: k10179 
o|contracted procedure: k10182 
o|contracted procedure: k10185 
o|contracted procedure: k10193 
o|contracted procedure: k10213 
o|contracted procedure: k10216 
o|contracted procedure: k10219 
o|contracted procedure: k10227 
o|contracted procedure: k10235 
o|contracted procedure: k10247 
o|contracted procedure: k10269 
o|contracted procedure: k10265 
o|contracted procedure: k10250 
o|contracted procedure: k10253 
o|contracted procedure: k10261 
o|contracted procedure: k10281 
o|contracted procedure: k10303 
o|contracted procedure: k10299 
o|contracted procedure: k10284 
o|contracted procedure: k10287 
o|contracted procedure: k10295 
o|contracted procedure: k10319 
o|contracted procedure: k10324 
o|contracted procedure: k10327 
o|contracted procedure: k10333 
o|contracted procedure: k10348 
o|contracted procedure: k10531 
o|contracted procedure: k10375 
o|contracted procedure: k10527 
o|contracted procedure: k10379 
o|contracted procedure: k10387 
o|contracted procedure: k10383 
o|contracted procedure: k10371 
o|contracted procedure: k10395 
o|contracted procedure: k10411 
o|contracted procedure: k10427 
o|contracted procedure: k10423 
o|contracted procedure: k10472 
o|contracted procedure: k10436 
o|contracted procedure: k10462 
o|contracted procedure: k10466 
o|contracted procedure: k10458 
o|contracted procedure: k10439 
o|contracted procedure: k10442 
o|contracted procedure: k10450 
o|contracted procedure: k10454 
o|contracted procedure: k10520 
o|contracted procedure: k10484 
o|contracted procedure: k10510 
o|contracted procedure: k10514 
o|contracted procedure: k10506 
o|contracted procedure: k10487 
o|contracted procedure: k10490 
o|contracted procedure: k10498 
o|contracted procedure: k10502 
o|contracted procedure: k10539 
o|contracted procedure: k10547 
o|contracted procedure: k10558 
o|contracted procedure: k10574 
o|contracted procedure: k10570 
o|contracted procedure: k10619 
o|contracted procedure: k10583 
o|contracted procedure: k10609 
o|contracted procedure: k10613 
o|contracted procedure: k10605 
o|contracted procedure: k10586 
o|contracted procedure: k10589 
o|contracted procedure: k10597 
o|contracted procedure: k10601 
o|contracted procedure: k10667 
o|contracted procedure: k10631 
o|contracted procedure: k10657 
o|contracted procedure: k10661 
o|contracted procedure: k10653 
o|contracted procedure: k10634 
o|contracted procedure: k10637 
o|contracted procedure: k10645 
o|contracted procedure: k10649 
o|contracted procedure: k10674 
o|contracted procedure: k10677 
o|contracted procedure: k10683 
o|contracted procedure: k10686 
o|contracted procedure: k10693 
o|contracted procedure: k10699 
o|contracted procedure: k10702 
o|contracted procedure: k10750 
o|contracted procedure: k10714 
o|contracted procedure: k10740 
o|contracted procedure: k10744 
o|contracted procedure: k10736 
o|contracted procedure: k10717 
o|contracted procedure: k10720 
o|contracted procedure: k10728 
o|contracted procedure: k10732 
o|contracted procedure: k10764 
o|contracted procedure: k10775 
o|contracted procedure: k10820 
o|contracted procedure: k10784 
o|contracted procedure: k10810 
o|contracted procedure: k10814 
o|contracted procedure: k10806 
o|contracted procedure: k10787 
o|contracted procedure: k10790 
o|contracted procedure: k10798 
o|contracted procedure: k10802 
o|contracted procedure: k10832 
o|contracted procedure: k10854 
o|contracted procedure: k10850 
o|contracted procedure: k10835 
o|contracted procedure: k10838 
o|contracted procedure: k10846 
o|contracted procedure: k10866 
o|contracted procedure: k10869 
o|contracted procedure: k10872 
o|contracted procedure: k10880 
o|contracted procedure: k10900 
o|contracted procedure: k10903 
o|contracted procedure: k10906 
o|contracted procedure: k10914 
o|contracted procedure: k10934 
o|contracted procedure: k10956 
o|contracted procedure: k10952 
o|contracted procedure: k10937 
o|contracted procedure: k10940 
o|contracted procedure: k10948 
o|contracted procedure: k10976 
o|contracted procedure: k10993 
o|contracted procedure: k11014 
o|contracted procedure: k11010 
o|contracted procedure: k11028 
o|contracted procedure: k11121 
o|contracted procedure: k11044 
o|contracted procedure: k11055 
o|contracted procedure: k11051 
o|contracted procedure: k11063 
o|contracted procedure: k11066 
o|contracted procedure: k11112 
o|contracted procedure: k11075 
o|contracted procedure: k11094 
o|contracted procedure: k11090 
o|contracted procedure: k11086 
o|contracted procedure: k11082 
o|contracted procedure: k11101 
o|contracted procedure: k11109 
o|contracted procedure: k11105 
o|contracted procedure: k11134 
o|contracted procedure: k11146 
o|contracted procedure: k11158 
o|contracted procedure: k11166 
o|contracted procedure: k11181 
o|contracted procedure: k11193 
o|contracted procedure: k11209 
o|contracted procedure: k11199 
o|inlining procedure: k11172 
o|inlining procedure: k11172 
o|inlining procedure: k11172 
o|contracted procedure: k11216 
o|contracted procedure: k11468 
o|contracted procedure: k11230 
o|contracted procedure: k11458 
o|contracted procedure: k11454 
o|contracted procedure: k11450 
o|contracted procedure: k11446 
o|contracted procedure: k11238 
o|contracted procedure: k11424 
o|contracted procedure: k11432 
o|contracted procedure: k11428 
o|contracted procedure: k11420 
o|contracted procedure: k11246 
o|contracted procedure: k11242 
o|contracted procedure: k11234 
o|contracted procedure: k11226 
o|contracted procedure: k11259 
o|contracted procedure: k11262 
o|contracted procedure: k11412 
o|contracted procedure: k11265 
o|contracted procedure: k11377 
o|contracted procedure: k11393 
o|contracted procedure: k11389 
o|contracted procedure: k11381 
o|contracted procedure: k11385 
o|contracted procedure: k11277 
o|contracted procedure: k11284 
o|contracted procedure: k11292 
o|contracted procedure: k11296 
o|contracted procedure: k11312 
o|contracted procedure: k11308 
o|contracted procedure: k11327 
o|contracted procedure: k11343 
o|contracted procedure: k11339 
o|contracted procedure: k11331 
o|contracted procedure: k11335 
o|contracted procedure: k11323 
o|contracted procedure: k11350 
o|contracted procedure: k11366 
o|contracted procedure: k11362 
o|contracted procedure: k11354 
o|contracted procedure: k11358 
o|contracted procedure: k11373 
o|contracted procedure: k11405 
o|contracted procedure: k11477 
o|contracted procedure: k11480 
o|contracted procedure: k11483 
o|contracted procedure: k11491 
o|contracted procedure: k11499 
o|contracted procedure: k11531 
o|contracted procedure: k11520 
o|contracted procedure: k11602 
o|contracted procedure: k11535 
o|contracted procedure: k11598 
o|contracted procedure: k11546 
o|contracted procedure: k11594 
o|contracted procedure: k11550 
o|contracted procedure: k11590 
o|contracted procedure: k11554 
o|contracted procedure: k11586 
o|contracted procedure: k11558 
o|contracted procedure: k11582 
o|contracted procedure: k11578 
o|contracted procedure: k11562 
o|contracted procedure: k11574 
o|contracted procedure: k11570 
o|contracted procedure: k11566 
o|contracted procedure: k11630 
o|contracted procedure: k11606 
o|contracted procedure: k11626 
o|contracted procedure: k11617 
o|contracted procedure: k11640 
o|contracted procedure: k11649 
o|contracted procedure: k11652 
o|contracted procedure: k11663 
o|contracted procedure: k11669 
o|contracted procedure: k11697 
o|contracted procedure: k11716 
o|contracted procedure: k11724 
o|contracted procedure: k11728 
o|contracted procedure: k11747 
o|contracted procedure: k11766 
o|contracted procedure: k11774 
o|contracted procedure: k11778 
o|contracted procedure: k11788 
o|contracted procedure: k11797 
o|contracted procedure: k11812 
o|contracted procedure: k11808 
o|contracted procedure: k11821 
o|contracted procedure: k11843 
o|contracted procedure: k11824 
o|contracted procedure: k11839 
o|contracted procedure: k11835 
o|contracted procedure: k11849 
o|contracted procedure: k11852 
o|contracted procedure: k11858 
o|contracted procedure: k11865 
o|contracted procedure: k11868 
o|contracted procedure: k11875 
o|contracted procedure: k11904 
o|contracted procedure: k11896 
o|contracted procedure: k11924 
o|contracted procedure: k11934 
o|contracted procedure: k11930 
o|contracted procedure: k11951 
o|contracted procedure: k12011 
o|contracted procedure: k11967 
o|contracted procedure: k11987 
o|contracted procedure: k11991 
o|contracted procedure: k11995 
o|contracted procedure: k11983 
o|contracted procedure: k12003 
o|contracted procedure: k12007 
o|contracted procedure: k12024 
o|contracted procedure: k12134 
o|contracted procedure: k12130 
o|contracted procedure: k12037 
o|contracted procedure: k12053 
o|contracted procedure: k12069 
o|contracted procedure: k12074 
o|contracted procedure: k12084 
o|contracted procedure: k12089 
o|contracted procedure: k12049 
o|contracted procedure: k12045 
o|contracted procedure: k12041 
o|contracted procedure: k12101 
o|contracted procedure: k12104 
o|contracted procedure: k12107 
o|contracted procedure: k12115 
o|contracted procedure: k12123 
o|contracted procedure: k12501 
o|contracted procedure: k12147 
o|contracted procedure: k12153 
o|contracted procedure: k12156 
o|contracted procedure: k12175 
o|contracted procedure: k12187 
o|contracted procedure: k12196 
o|contracted procedure: k12286 
o|contracted procedure: k12290 
o|contracted procedure: k12206 
o|contracted procedure: k12214 
o|contracted procedure: k12222 
o|contracted procedure: k12218 
o|contracted procedure: k12210 
o|contracted procedure: k12279 
o|contracted procedure: k12243 
o|contracted procedure: k12269 
o|contracted procedure: k12273 
o|contracted procedure: k12231 
o|contracted procedure: k12265 
o|contracted procedure: k12246 
o|contracted procedure: k12249 
o|contracted procedure: k12257 
o|contracted procedure: k12261 
o|contracted procedure: k12306 
o|contracted procedure: k12302 
o|contracted procedure: k12313 
o|contracted procedure: k12320 
o|contracted procedure: k12328 
o|contracted procedure: k12340 
o|contracted procedure: k12343 
o|contracted procedure: k12346 
o|contracted procedure: k12354 
o|contracted procedure: k12362 
o|contracted procedure: k12384 
o|contracted procedure: k12391 
o|contracted procedure: k12399 
o|contracted procedure: k12403 
o|contracted procedure: k12406 
o|contracted procedure: k12412 
o|contracted procedure: k12421 
o|contracted procedure: k12425 
o|contracted procedure: k12456 
o|contracted procedure: k12440 
o|contracted procedure: k12444 
o|contracted procedure: k12452 
o|contracted procedure: k12462 
o|contracted procedure: k12468 
o|contracted procedure: k12475 
o|contracted procedure: k12497 
o|contracted procedure: k12486 
o|contracted procedure: k12511 
o|contracted procedure: k12520 
o|contracted procedure: k12528 
o|contracted procedure: k12531 
o|contracted procedure: k12537 
o|contracted procedure: k12549 
o|contracted procedure: k12552 
o|contracted procedure: k12558 
o|contracted procedure: k12569 
o|contracted procedure: k12599 
o|contracted procedure: k12595 
o|contracted procedure: k12587 
o|contracted procedure: k12583 
o|contracted procedure: k12608 
o|contracted procedure: k12630 
o|contracted procedure: k12546 
o|contracted procedure: k12626 
o|contracted procedure: k12611 
o|contracted procedure: k12614 
o|contracted procedure: k12622 
o|contracted procedure: k12642 
o|contracted procedure: k12664 
o|contracted procedure: k12660 
o|contracted procedure: k12645 
o|contracted procedure: k12648 
o|contracted procedure: k12656 
o|contracted procedure: k12673 
o|contracted procedure: k12701 
o|contracted procedure: k12720 
o|contracted procedure: k12728 
o|contracted procedure: k12732 
o|contracted procedure: k12751 
o|contracted procedure: k12769 
o|contracted procedure: k12779 
o|contracted procedure: k12786 
o|contracted procedure: k12789 
o|contracted procedure: k12795 
o|contracted procedure: k12802 
o|contracted procedure: k12806 
o|contracted procedure: k12810 
o|contracted procedure: k12848 
o|contracted procedure: k12826 
o|contracted procedure: k12840 
o|contracted procedure: k12844 
o|contracted procedure: k12955 
o|contracted procedure: k12864 
o|contracted procedure: k12891 
o|contracted procedure: k12947 
o|contracted procedure: k12943 
o|contracted procedure: k12939 
o|contracted procedure: k12905 
o|contracted procedure: k12901 
o|contracted procedure: k12928 
o|contracted procedure: k12924 
o|contracted procedure: k12917 
o|contracted procedure: k12935 
o|contracted procedure: k12951 
o|contracted procedure: k13228 
o|contracted procedure: k12959 
o|contracted procedure: k13109 
o|contracted procedure: k13104 
o|contracted procedure: k12990 
o|contracted procedure: k12993 
o|contracted procedure: k13002 
o|contracted procedure: k13020 
o|contracted procedure: k13029 
o|contracted procedure: k13032 
o|contracted procedure: k13016 
o|contracted procedure: k13012 
o|contracted procedure: k13044 
o|contracted procedure: k13047 
o|contracted procedure: k13050 
o|contracted procedure: k13058 
o|contracted procedure: k13066 
o|contracted procedure: k13088 
o|contracted procedure: k13080 
o|contracted procedure: k13084 
o|contracted procedure: k13076 
o|contracted procedure: k13095 
o|contracted procedure: k13224 
o|contracted procedure: k13216 
o|contracted procedure: k13220 
o|contracted procedure: k13212 
o|contracted procedure: k13208 
o|contracted procedure: k13128 
o|contracted procedure: k13132 
o|contracted procedure: k13135 
o|contracted procedure: k13138 
o|contracted procedure: k13144 
o|contracted procedure: k13120 
o|contracted procedure: k13124 
o|contracted procedure: k13159 
o|contracted procedure: k13170 
o|contracted procedure: k13166 
o|contracted procedure: k13156 
o|contracted procedure: k13179 
o|contracted procedure: k13182 
o|contracted procedure: k13185 
o|contracted procedure: k13193 
o|contracted procedure: k13201 
o|contracted procedure: k13335 
o|contracted procedure: k13232 
o|contracted procedure: k13267 
o|contracted procedure: k13331 
o|contracted procedure: k13315 
o|contracted procedure: k13327 
o|contracted procedure: k13323 
o|contracted procedure: k13319 
o|contracted procedure: k13275 
o|contracted procedure: k13307 
o|contracted procedure: k13287 
o|contracted procedure: k13303 
o|contracted procedure: k13299 
o|contracted procedure: k13295 
o|contracted procedure: k13291 
o|contracted procedure: k13283 
o|contracted procedure: k13279 
o|contracted procedure: k13271 
o|contracted procedure: k13263 
o|contracted procedure: k13255 
o|simplifications: ((if . 5) (let . 236)) 
o|removed binding forms: 1063 
o|inlining procedure: k6826 
o|contracted procedure: k8831 
o|substituted constant variable: r1117314713 
o|substituted constant variable: r1117314714 
o|inlining procedure: k11316 
o|inlining procedure: k11316 
o|contracted procedure: k11794 
o|inlining procedure: k12065 
o|inlining procedure: k12065 
o|inlining procedure: k12310 
o|inlining procedure: k12310 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|removed conditional forms: 2 
o|substituted constant variable: r1206614884 
o|replaced variables: 2 
o|removed binding forms: 4 
o|removed binding forms: 3 
o|direct leaf routine/allocation: g30753084 0 
o|direct leaf routine/allocation: g18571868 30 
o|direct leaf routine/allocation: g623632 15 
o|contracted procedure: "(chicken-syntax.scm:1179) k6661" 
o|contracted procedure: "(chicken-syntax.scm:576) k9957" 
o|contracted procedure: "(chicken-syntax.scm:95) k13062" 
o|removed binding forms: 3 
o|customizable procedures: (parse-clause597 map-loop648665 k12996 map-loop617638 k12913 k12772 loop734755 loop734771 map-loop782800 map-loop810828 k12431 loop855 loop2869 map-loop879904 map-loop913937 g974983 map-loop968990 k11818 loop10881109 loop10881120 g11751184 map-loop11691195 k11304 mapslots1205 k11172 map-loop12881305 g13211330 map-loop13151333 g13491358 map-loop13431361 map-loop13941411 map-loop13731418 loop1449 map-loop14301452 map-loop14641488 map-loop15001524 map-loop15361560 map-loop15721596 map-loop16181635 map-loop16451662 g16781687 map-loop16721690 g17061715 map-loop17001718 g17341743 map-loop17281746 map-loop17581777 map-loop17891808 map-loop18201839 k9931 map-loop18511878 map-loop18931917 map-loop19291953 k9694 map-loop19651992 map-loop20072031 map-loop20432067 g20932102 map-loop20872132 for-each-loop21682195 map-loop21782208 map-loop22392256 loop2264 g22832292 map-loop22772295 loop2305 map-loop23632381 fold2315 g23342343 map-loop23282346 fold2397 map-loop24162433 map-loop24422459 foldl24942498 map-loop24712510 map-loop25192538 k8151 k8163 fold2597 map-loop26712688 g27072716 map-loop27012719 map-loop27292746 g27642773 map-loop27582776 recur2641 make-if-tree2635 prefix-sym2695 recur2656 loop2824 map-loop28542875 genvars2846 foldr28972900 g29022903 k6987 build2922 map-loop29452964 loop122 loop2848 map-loop30223039 g30493059 for-each-loop30483062 map-loop30693087 k6425 k6431 k6438 k6446 loop3094 loop3139 loop3169 k5789 k5812 take) 
o|calls to known targets: 246 
o|identified direct recursive calls: f_4367 1 
o|identified direct recursive calls: f_6638 1 
o|identified direct recursive calls: f_6699 1 
o|identified direct recursive calls: f_4425 1 
o|identified direct recursive calls: f_7033 1 
o|identified direct recursive calls: f_6957 1 
o|identified direct recursive calls: f_7878 1 
o|identified direct recursive calls: f_7946 1 
o|identified direct recursive calls: f_8424 1 
o|identified direct recursive calls: f_8494 1 
o|identified direct recursive calls: f_8528 1 
o|identified direct recursive calls: f_8583 1 
o|identified direct recursive calls: f_8760 2 
o|identified direct recursive calls: f_8909 1 
o|identified direct recursive calls: f_9021 1 
o|identified direct recursive calls: f_9059 1 
o|identified direct recursive calls: f_9166 1 
o|identified direct recursive calls: f_9593 1 
o|identified direct recursive calls: f_9641 1 
o|identified direct recursive calls: f_9830 1 
o|identified direct recursive calls: f_9878 1 
o|identified direct recursive calls: f_9996 1 
o|identified direct recursive calls: f_10044 1 
o|identified direct recursive calls: f_10092 1 
o|identified direct recursive calls: f_10242 1 
o|identified direct recursive calls: f_10276 1 
o|identified direct recursive calls: f_10431 1 
o|identified direct recursive calls: f_10479 1 
o|identified direct recursive calls: f_10578 1 
o|identified direct recursive calls: f_10626 1 
o|identified direct recursive calls: f_10709 1 
o|identified direct recursive calls: f_10759 1 
o|identified direct recursive calls: f_10779 1 
o|identified direct recursive calls: f_10827 1 
o|identified direct recursive calls: f_10929 1 
o|identified direct recursive calls: f_12238 1 
o|identified direct recursive calls: f_12379 1 
o|identified direct recursive calls: f_12182 1 
o|identified direct recursive calls: f_12603 1 
o|identified direct recursive calls: f_12637 1 
o|identified direct recursive calls: f_13039 1 
o|fast box initializations: 78 
o|fast global references: 2 
o|fast global assignments: 1 
o|dropping unused closure argument: f_4367 
o|dropping unused closure argument: f_7748 
*/
/* end of file */
