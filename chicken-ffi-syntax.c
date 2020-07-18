/* Generated from chicken-ffi-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.2.0 (rev 317468e4)
   macosx-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: chicken-ffi-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file chicken-ffi-syntax.c
   unit: chicken-ffi-syntax
   uses: data-structures extras internal library expand
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[98];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,16),40,97,50,54,56,49,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,42),40,99,111,109,112,105,108,101,114,45,111,110,108,121,45,101,114,45,116,114,97,110,115,102,111,114,109,101,114,32,116,114,97,110,115,102,111,114,109,101,114,41,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,49,52,32,103,56,50,54,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,45),40,97,110,110,111,116,97,116,101,45,102,111,114,101,105,103,110,45,112,114,111,99,101,100,117,114,101,32,101,32,97,114,103,116,121,112,101,115,32,114,116,121,112,101,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,16),40,97,50,56,53,56,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,55,48,32,103,57,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,16),40,97,50,57,48,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,97,50,57,55,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,51,48,32,103,57,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,16),40,97,51,48,48,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,16),40,97,51,48,55,52,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,56,55,32,103,56,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,97,51,49,48,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,16),40,97,51,49,57,56,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,16),40,97,51,50,49,53,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,16),40,97,51,50,51,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,16),40,97,51,50,53,51,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,16),40,97,51,51,49,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,6),40,103,55,50,48,41,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,98,105,110,100,105,110,103,115,32,97,108,105,97,115,101,115,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,11),40,97,51,52,57,52,32,98,32,97,41,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,10),40,103,49,53,56,32,120,32,114,41,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,15),40,102,111,108,100,114,49,53,51,32,103,49,53,52,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,49,57,53,32,103,50,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,49,54,56,32,103,49,56,48,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,115,116,115,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,49,52,32,103,55,50,54,41,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,16),40,97,51,51,57,50,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,16),40,97,51,53,53,57,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,13),40,97,51,54,52,53,32,120,32,114,32,99,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,53,50,32,103,54,54,52,41,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,50,53,32,103,54,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,16),40,97,51,54,54,54,32,102,111,114,109,32,114,32,99,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1380)
static void C_ccall f_1380(C_word c,C_word *av) C_noret;
C_noret_decl(f_1383)
static void C_ccall f_1383(C_word c,C_word *av) C_noret;
C_noret_decl(f_1386)
static void C_ccall f_1386(C_word c,C_word *av) C_noret;
C_noret_decl(f_1389)
static void C_ccall f_1389(C_word c,C_word *av) C_noret;
C_noret_decl(f_1392)
static void C_ccall f_1392(C_word c,C_word *av) C_noret;
C_noret_decl(f_1608)
static void C_fcall f_1608(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1616)
static void C_fcall f_1616(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word *av) C_noret;
C_noret_decl(f_1635)
static void C_ccall f_1635(C_word c,C_word *av) C_noret;
C_noret_decl(f_1648)
static void C_fcall f_1648(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word *av) C_noret;
C_noret_decl(f_1666)
static void C_ccall f_1666(C_word c,C_word *av) C_noret;
C_noret_decl(f_1678)
static void C_ccall f_1678(C_word c,C_word *av) C_noret;
C_noret_decl(f_1680)
static void C_fcall f_1680(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1727)
static void C_ccall f_1727(C_word c,C_word *av) C_noret;
C_noret_decl(f_1729)
static void C_fcall f_1729(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1769)
static C_word C_fcall f_1769(C_word t0);
C_noret_decl(f_1803)
static C_word C_fcall f_1803(C_word t0);
C_noret_decl(f_2674)
static void C_ccall f_2674(C_word c,C_word *av) C_noret;
C_noret_decl(f_2676)
static void C_fcall f_2676(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682(C_word c,C_word *av) C_noret;
C_noret_decl(f_2689)
static void C_ccall f_2689(C_word c,C_word *av) C_noret;
C_noret_decl(f_2702)
static void C_ccall f_2702(C_word c,C_word *av) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word *av) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word *av) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word *av) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word *av) C_noret;
C_noret_decl(f_2717)
static void C_ccall f_2717(C_word c,C_word *av) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word *av) C_noret;
C_noret_decl(f_2722)
static void C_fcall f_2722(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2734)
static void C_ccall f_2734(C_word c,C_word *av) C_noret;
C_noret_decl(f_2740)
static void C_ccall f_2740(C_word c,C_word *av) C_noret;
C_noret_decl(f_2743)
static void C_ccall f_2743(C_word c,C_word *av) C_noret;
C_noret_decl(f_2749)
static void C_fcall f_2749(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word *av) C_noret;
C_noret_decl(f_2794)
static void C_fcall f_2794(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word *av) C_noret;
C_noret_decl(f_2829)
static void C_ccall f_2829(C_word c,C_word *av) C_noret;
C_noret_decl(f_2832)
static void C_ccall f_2832(C_word c,C_word *av) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word *av) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word *av) C_noret;
C_noret_decl(f_2841)
static void C_ccall f_2841(C_word c,C_word *av) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word *av) C_noret;
C_noret_decl(f_2847)
static void C_ccall f_2847(C_word c,C_word *av) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word *av) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word *av) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word *av) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859(C_word c,C_word *av) C_noret;
C_noret_decl(f_2863)
static void C_ccall f_2863(C_word c,C_word *av) C_noret;
C_noret_decl(f_2866)
static void C_ccall f_2866(C_word c,C_word *av) C_noret;
C_noret_decl(f_2869)
static void C_ccall f_2869(C_word c,C_word *av) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word *av) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word *av) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word *av) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903(C_word c,C_word *av) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word *av) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word *av) C_noret;
C_noret_decl(f_2933)
static void C_fcall f_2933(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word *av) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word *av) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word *av) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word *av) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003(C_word c,C_word *av) C_noret;
C_noret_decl(f_3007)
static void C_ccall f_3007(C_word c,C_word *av) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word *av) C_noret;
C_noret_decl(f_3033)
static void C_fcall f_3033(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3073)
static void C_ccall f_3073(C_word c,C_word *av) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word *av) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word *av) C_noret;
C_noret_decl(f_3101)
static void C_ccall f_3101(C_word c,C_word *av) C_noret;
C_noret_decl(f_3103)
static void C_ccall f_3103(C_word c,C_word *av) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word *av) C_noret;
C_noret_decl(f_3110)
static void C_fcall f_3110(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3125)
static void C_ccall f_3125(C_word c,C_word *av) C_noret;
C_noret_decl(f_3136)
static void C_fcall f_3136(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3197)
static void C_ccall f_3197(C_word c,C_word *av) C_noret;
C_noret_decl(f_3199)
static void C_ccall f_3199(C_word c,C_word *av) C_noret;
C_noret_decl(f_3203)
static void C_ccall f_3203(C_word c,C_word *av) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word *av) C_noret;
C_noret_decl(f_3216)
static void C_ccall f_3216(C_word c,C_word *av) C_noret;
C_noret_decl(f_3220)
static void C_ccall f_3220(C_word c,C_word *av) C_noret;
C_noret_decl(f_3231)
static void C_ccall f_3231(C_word c,C_word *av) C_noret;
C_noret_decl(f_3233)
static void C_ccall f_3233(C_word c,C_word *av) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word *av) C_noret;
C_noret_decl(f_3252)
static void C_ccall f_3252(C_word c,C_word *av) C_noret;
C_noret_decl(f_3254)
static void C_ccall f_3254(C_word c,C_word *av) C_noret;
C_noret_decl(f_3258)
static void C_ccall f_3258(C_word c,C_word *av) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word *av) C_noret;
C_noret_decl(f_3271)
static void C_fcall f_3271(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3279)
static void C_ccall f_3279(C_word c,C_word *av) C_noret;
C_noret_decl(f_3283)
static void C_ccall f_3283(C_word c,C_word *av) C_noret;
C_noret_decl(f_3295)
static void C_ccall f_3295(C_word c,C_word *av) C_noret;
C_noret_decl(f_3318)
static void C_ccall f_3318(C_word c,C_word *av) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word *av) C_noret;
C_noret_decl(f_3324)
static void C_ccall f_3324(C_word c,C_word *av) C_noret;
C_noret_decl(f_3327)
static void C_ccall f_3327(C_word c,C_word *av) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word *av) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word *av) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word *av) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word *av) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word *av) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word *av) C_noret;
C_noret_decl(f_3368)
static void C_ccall f_3368(C_word c,C_word *av) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word *av) C_noret;
C_noret_decl(f_3375)
static void C_ccall f_3375(C_word c,C_word *av) C_noret;
C_noret_decl(f_3387)
static void C_ccall f_3387(C_word c,C_word *av) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391(C_word c,C_word *av) C_noret;
C_noret_decl(f_3393)
static void C_ccall f_3393(C_word c,C_word *av) C_noret;
C_noret_decl(f_3397)
static void C_ccall f_3397(C_word c,C_word *av) C_noret;
C_noret_decl(f_3406)
static void C_fcall f_3406(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word *av) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word *av) C_noret;
C_noret_decl(f_3427)
static void C_ccall f_3427(C_word c,C_word *av) C_noret;
C_noret_decl(f_3431)
static void C_ccall f_3431(C_word c,C_word *av) C_noret;
C_noret_decl(f_3433)
static void C_fcall f_3433(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word *av) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word *av) C_noret;
C_noret_decl(f_3518)
static void C_fcall f_3518(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3543)
static void C_ccall f_3543(C_word c,C_word *av) C_noret;
C_noret_decl(f_3558)
static void C_ccall f_3558(C_word c,C_word *av) C_noret;
C_noret_decl(f_3560)
static void C_ccall f_3560(C_word c,C_word *av) C_noret;
C_noret_decl(f_3564)
static void C_ccall f_3564(C_word c,C_word *av) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word *av) C_noret;
C_noret_decl(f_3586)
static void C_ccall f_3586(C_word c,C_word *av) C_noret;
C_noret_decl(f_3622)
static void C_ccall f_3622(C_word c,C_word *av) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626(C_word c,C_word *av) C_noret;
C_noret_decl(f_3640)
static void C_ccall f_3640(C_word c,C_word *av) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word *av) C_noret;
C_noret_decl(f_3646)
static void C_ccall f_3646(C_word c,C_word *av) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word *av) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word *av) C_noret;
C_noret_decl(f_3667)
static void C_ccall f_3667(C_word c,C_word *av) C_noret;
C_noret_decl(f_3677)
static void C_fcall f_3677(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word *av) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word *av) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word *av) C_noret;
C_noret_decl(f_3753)
static void C_ccall f_3753(C_word c,C_word *av) C_noret;
C_noret_decl(f_3783)
static void C_ccall f_3783(C_word c,C_word *av) C_noret;
C_noret_decl(f_3799)
static void C_ccall f_3799(C_word c,C_word *av) C_noret;
C_noret_decl(f_3811)
static void C_fcall f_3811(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3858)
static void C_ccall f_3858(C_word c,C_word *av) C_noret;
C_noret_decl(f_3860)
static void C_fcall f_3860(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3957)
static void C_ccall f_3957(C_word c,C_word *av) C_noret;
C_noret_decl(f_3961)
static void C_ccall f_3961(C_word c,C_word *av) C_noret;
C_noret_decl(f_3965)
static void C_ccall f_3965(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_externexport void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1608)
static void C_ccall trf_1608(C_word c,C_word *av) C_noret;
static void C_ccall trf_1608(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1608(t0,t1,t2);}

C_noret_decl(trf_1616)
static void C_ccall trf_1616(C_word c,C_word *av) C_noret;
static void C_ccall trf_1616(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1616(t0,t1,t2,t3);}

C_noret_decl(trf_1648)
static void C_ccall trf_1648(C_word c,C_word *av) C_noret;
static void C_ccall trf_1648(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1648(t0,t1,t2);}

C_noret_decl(trf_1680)
static void C_ccall trf_1680(C_word c,C_word *av) C_noret;
static void C_ccall trf_1680(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1680(t0,t1,t2);}

C_noret_decl(trf_1729)
static void C_ccall trf_1729(C_word c,C_word *av) C_noret;
static void C_ccall trf_1729(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1729(t0,t1,t2);}

C_noret_decl(trf_2676)
static void C_ccall trf_2676(C_word c,C_word *av) C_noret;
static void C_ccall trf_2676(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2676(t0,t1);}

C_noret_decl(trf_2722)
static void C_ccall trf_2722(C_word c,C_word *av) C_noret;
static void C_ccall trf_2722(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2722(t0,t1,t2,t3);}

C_noret_decl(trf_2749)
static void C_ccall trf_2749(C_word c,C_word *av) C_noret;
static void C_ccall trf_2749(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2749(t0,t1);}

C_noret_decl(trf_2794)
static void C_ccall trf_2794(C_word c,C_word *av) C_noret;
static void C_ccall trf_2794(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2794(t0,t1,t2);}

C_noret_decl(trf_2933)
static void C_ccall trf_2933(C_word c,C_word *av) C_noret;
static void C_ccall trf_2933(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2933(t0,t1,t2);}

C_noret_decl(trf_3033)
static void C_ccall trf_3033(C_word c,C_word *av) C_noret;
static void C_ccall trf_3033(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3033(t0,t1,t2);}

C_noret_decl(trf_3110)
static void C_ccall trf_3110(C_word c,C_word *av) C_noret;
static void C_ccall trf_3110(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3110(t0,t1);}

C_noret_decl(trf_3136)
static void C_ccall trf_3136(C_word c,C_word *av) C_noret;
static void C_ccall trf_3136(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3136(t0,t1,t2);}

C_noret_decl(trf_3271)
static void C_ccall trf_3271(C_word c,C_word *av) C_noret;
static void C_ccall trf_3271(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3271(t0,t1);}

C_noret_decl(trf_3406)
static void C_ccall trf_3406(C_word c,C_word *av) C_noret;
static void C_ccall trf_3406(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3406(t0,t1);}

C_noret_decl(trf_3433)
static void C_ccall trf_3433(C_word c,C_word *av) C_noret;
static void C_ccall trf_3433(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3433(t0,t1,t2,t3);}

C_noret_decl(trf_3518)
static void C_ccall trf_3518(C_word c,C_word *av) C_noret;
static void C_ccall trf_3518(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3518(t0,t1,t2);}

C_noret_decl(trf_3677)
static void C_ccall trf_3677(C_word c,C_word *av) C_noret;
static void C_ccall trf_3677(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3677(t0,t1);}

C_noret_decl(trf_3811)
static void C_ccall trf_3811(C_word c,C_word *av) C_noret;
static void C_ccall trf_3811(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3811(t0,t1,t2);}

C_noret_decl(trf_3860)
static void C_ccall trf_3860(C_word c,C_word *av) C_noret;
static void C_ccall trf_3860(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3860(t0,t1,t2);}

/* k1378 */
static void C_ccall f_1380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1380,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1383,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1381 in k1378 */
static void C_ccall f_1383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1383,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1386,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k1384 in k1381 in k1378 */
static void C_ccall f_1386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1386,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1389,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_1389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1389,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1392,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_1392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1392,c,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2674,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:51: ##sys#macro-environment */
t4=*((C_word*)lf[97]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* foldr153 in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_1608(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_1608,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1616,a[2]=((C_word*)t0)[2],a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1635,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=t5;
t8=C_slot(t2,C_fix(1));
t1=t7;
t2=t8;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g158 in foldr153 in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_1616(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1616,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1624,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:72: proc */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1622 in g158 in foldr153 in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_1624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1624,c,av);}
/* mini-srfi-1.scm:72: scheme#append */
t2=*((C_word*)lf[78]+1);{
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

/* k1633 in foldr153 in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_1635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1635,c,av);}
/* mini-srfi-1.scm:72: g158 */
t2=((C_word*)t0)[2];
f_1616(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_1648(C_word t0,C_word t1,C_word t2){
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
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_1648,3,t0,t1,t2);}
a=C_alloc(25);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1803,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t4=(
  f_1803(t2)
);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1662,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(t2,lf[6]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1727,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1729,a[2]=t8,a[3]=t13,a[4]=t9,a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_1729(t15,t11,t2);}}

/* k1660 in loop in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_1662(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1662,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1666,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1678,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1680,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_1680(t11,t7,((C_word*)t0)[4]);}

/* k1664 in k1660 in loop in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_1666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1666,c,av);}
/* mini-srfi-1.scm:76: scheme#append */
t2=*((C_word*)lf[78]+1);{
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

/* k1676 in k1660 in loop in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_1678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1678,c,av);}
/* mini-srfi-1.scm:77: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1648(t2,((C_word*)t0)[3],t1);}

/* map-loop195 in k1660 in loop in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_1680(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1680,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
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

/* k1725 in loop in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_1727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1727,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop168 in loop in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_1729(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1729,3,t0,t1,t2);}
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

/* loop in k2741 in k2738 in k2732 in annotate-foreign-procedure in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static C_word C_fcall f_1769(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
t4=C_eqp(lf[9],t3);
if(C_truep(C_i_not(t4))){
return(C_SCHEME_FALSE);}
else{
t6=C_u_i_cdr(t1);
t1=t6;
goto loop;}}}

/* loop in loop in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static C_word C_fcall f_1803(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=C_i_car(t1);
t3=C_i_nullp(t2);
if(C_truep(t3)){
return(t3);}
else{
t5=C_u_i_cdr(t1);
t1=t5;
goto loop;}}}

/* k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2674,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2676,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2702,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3965,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:66: chicken.base#alist-ref */
t5=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[88];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* compiler-only-er-transformer in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_2676(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_2676,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2682,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:57: ##sys#er-transformer */
t4=*((C_word*)lf[5]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a2681 in compiler-only-er-transformer in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2682(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2682,c,av);}
a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2689,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:59: chicken.platform#feature? */
t6=*((C_word*)lf[3]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2687 in a2681 in compiler-only-er-transformer in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2689,c,av);}
if(C_truep(t1)){
/* chicken-ffi-syntax.scm:60: transformer */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
/* chicken-ffi-syntax.scm:61: chicken.syntax#syntax-error */
t2=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_i_car(((C_word*)t0)[4]);
av2[3]=lf[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2702,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3644,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3646,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:106: compiler-only-er-transformer */
f_2676(t3,t4);}

/* k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2705,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3640,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:113: chicken.base#alist-ref */
t4=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[80];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2708,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3391,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3393,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:131: compiler-only-er-transformer */
f_2676(t3,t4);}

/* k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2711,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3387,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:166: chicken.base#alist-ref */
t4=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[59];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2714,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3252,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3254,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:182: compiler-only-er-transformer */
f_2676(t3,t4);}

/* k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2717,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3231,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3233,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:208: compiler-only-er-transformer */
f_2676(t3,t4);}

/* k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_2720,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2722,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2829,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3214,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3216,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:247: compiler-only-er-transformer */
f_2676(t4,t5);}

/* annotate-foreign-procedure in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_2722(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_2722,4,t1,t2,t3,t4);}
a=C_alloc(12);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2734,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=t7,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:218: chicken.syntax#strip-syntax */
t10=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k2732 in annotate-foreign-procedure in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2734(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2734,c,av);}
a=C_alloc(13);
t2=C_i_check_list_2(t1,lf[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2794,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2794(t7,t3,t1);}

/* k2738 in k2732 in annotate-foreign-procedure in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2740,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2792,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:221: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_2743(2,av2);}}}

/* k2741 in k2738 in k2732 in annotate-foreign-procedure in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2743(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2743,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2749,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_not(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:C_eqp(t1,lf[9]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1769,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
t6=t2;
f_2749(t6,(
  f_1769(((C_word*)t0)[5])
));}
else{
t5=t2;
f_2749(t5,C_SCHEME_FALSE);}}

/* k2747 in k2741 in k2738 in k2732 in annotate-foreign-procedure in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_2749(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,1)))){
C_save_and_reclaim_args((void *)trf_2749,2,t0,t1);}
a=C_alloc(21);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=C_a_i_list1(&a,1,((C_word*)t0)[5]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=C_a_i_cons(&a,2,lf[7],t3);
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,4,lf[8],t4,C_SCHEME_FALSE,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],lf[9]);
t3=C_a_i_cons(&a,2,lf[7],t2);
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,4,lf[8],t3,C_SCHEME_FALSE,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k2790 in k2738 in k2732 in annotate-foreign-procedure in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2792,c,av);}
/* chicken-ffi-syntax.scm:220: chicken.compiler.support#foreign-type->scrutiny-type */
t2=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[11];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop814 in k2732 in annotate-foreign-procedure in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_2794(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2794,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[10]+1);
/* chicken-ffi-syntax.scm:217: g837 */
t6=*((C_word*)lf[10]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[13];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2817 in map-loop814 in k2732 in annotate-foreign-procedure in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2819,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_2794(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_2829,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3197,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3199,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:255: compiler-only-er-transformer */
f_2676(t3,t4);}

/* k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_2832,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3101,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3103,a[2]=((C_word*)t0)[5],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:263: compiler-only-er-transformer */
f_2676(t3,t4);}

/* k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_2835,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3073,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3075,a[2]=((C_word*)t0)[5],a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:277: compiler-only-er-transformer */
f_2676(t3,t4);}

/* k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_2838,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3001,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3003,a[2]=((C_word*)t0)[5],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:287: compiler-only-er-transformer */
f_2676(t3,t4);}

/* k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_2841,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2973,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2975,a[2]=((C_word*)t0)[5],a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:297: compiler-only-er-transformer */
f_2676(t3,t4);}

/* k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_2844,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2847,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2901,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2903,a[2]=((C_word*)t0)[5],a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:307: compiler-only-er-transformer */
f_2676(t3,t4);}

/* k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_2847,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2857,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2859,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:317: compiler-only-er-transformer */
f_2676(t3,t4);}

/* k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2850,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2853,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:332: chicken.internal#macro-subset */
t3=*((C_word*)lf[15]+1);{
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

/* k2851 in k2848 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 in ... */
static void C_ccall f_2853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2853,c,av);}
t2=C_mutate((C_word*)lf[14]+1 /* (set! ##sys#chicken-ffi-macro-environment ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2855 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2857,c,av);}
/* chicken-ffi-syntax.scm:314: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[17];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a2858 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2859(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2859,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2863,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:319: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[17];
av2[3]=t2;
av2[4]=lf[30];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2861 in a2858 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 in ... */
static void C_ccall f_2863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2863,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2866,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:320: chicken.syntax#strip-syntax */
t3=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2864 in k2861 in a2858 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in ... */
static void C_ccall f_2866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2866,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2869,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:321: chicken.base#gensym */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[28];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2867 in k2864 in k2861 in a2858 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in ... */
static void C_ccall f_2869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2869,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2872,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
f_2872(2,av2);}}
else{
/* chicken-ffi-syntax.scm:326: chicken.compiler.c-backend#foreign-type-declaration */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[26];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k2870 in k2867 in k2864 in k2861 in a2858 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in ... */
static void C_ccall f_2872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2872,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:328: scheme#string-append */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[23];
av2[3]=t1;
av2[4]=lf[24];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2885 in k2870 in k2867 in k2864 in k2861 in a2858 in k2845 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in ... */
static void C_ccall f_2887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_2887,c,av);}
a=C_alloc(33);
t2=C_a_i_list(&a,4,lf[18],((C_word*)t0)[2],lf[19],t1);
t3=C_a_i_list(&a,4,lf[8],lf[20],C_SCHEME_FALSE,((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[21],t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2899 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2901,c,av);}
/* chicken-ffi-syntax.scm:304: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[31];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a2902 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2903(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2903,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2907,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:309: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[31];
av2[3]=t2;
av2[4]=lf[33];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2905 in a2902 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2907(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_2907,c,av);}
a=C_alloc(22);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[32],t2);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_caddr(((C_word*)t0)[2]);
t9=C_i_check_list_2(t8,lf[6]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2927,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2933,a[2]=t6,a[3]=t12,a[4]=t7,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_2933(t14,t10,t8);}

/* k2925 in k2905 in a2902 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 in ... */
static void C_ccall f_2927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2927,c,av);}
/* chicken-ffi-syntax.scm:310: annotate-foreign-procedure */
f_2722(((C_word*)t0)[3],((C_word*)t0)[4],t1,C_i_cadr(((C_word*)t0)[5]));}

/* map-loop970 in k2905 in a2902 in k2842 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 in ... */
static void C_fcall f_2933(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2933,3,t0,t1,t2);}
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

/* k2971 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2973,c,av);}
/* chicken-ffi-syntax.scm:294: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[34];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a2974 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2975(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2975,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2979,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:299: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[34];
av2[3]=t2;
av2[4]=lf[36];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k2977 in a2974 in k2839 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_2979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2979,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[35],t2);
t4=C_i_cdddr(((C_word*)t0)[2]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:300: annotate-foreign-procedure */
f_2722(((C_word*)t0)[4],t3,t4,C_u_i_car(t5));}

/* k2999 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3001,c,av);}
/* chicken-ffi-syntax.scm:284: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[37];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3002 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3003(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3003,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3007,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:289: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[37];
av2[3]=t2;
av2[4]=lf[39];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3005 in a3002 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3007(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_3007,c,av);}
a=C_alloc(22);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[38],t2);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_caddr(((C_word*)t0)[2]);
t9=C_i_check_list_2(t8,lf[6]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3027,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3033,a[2]=t6,a[3]=t12,a[4]=t7,a[5]=((C_word)li9),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_3033(t14,t10,t8);}

/* k3025 in k3005 in a3002 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3027,c,av);}
/* chicken-ffi-syntax.scm:290: annotate-foreign-procedure */
f_2722(((C_word*)t0)[3],((C_word*)t0)[4],t1,C_i_cadr(((C_word*)t0)[5]));}

/* map-loop930 in k3005 in a3002 in k2836 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_3033(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3033,3,t0,t1,t2);}
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

/* k3071 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3073,c,av);}
/* chicken-ffi-syntax.scm:274: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[40];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3074 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3075(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3075,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3079,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:279: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[40];
av2[3]=t2;
av2[4]=lf[42];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3077 in a3074 in k2833 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3079,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[41],t2);
t4=C_i_cdddr(((C_word*)t0)[2]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:280: annotate-foreign-procedure */
f_2722(((C_word*)t0)[4],t3,t4,C_u_i_car(t5));}

/* k3099 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3101,c,av);}
/* chicken-ffi-syntax.scm:260: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[43];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3102 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3103(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3103,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3107,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:265: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[43];
av2[3]=t2;
av2[4]=lf[45];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3105 in a3102 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3107,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t2;
f_3110(t5,C_i_not(C_i_stringp(t4)));}
else{
t4=t2;
f_3110(t4,C_SCHEME_FALSE);}}

/* k3108 in k3105 in a3102 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_3110(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,3)))){
C_save_and_reclaim_args((void *)trf_3110,2,t0,t1);}
a=C_alloc(19);
t2=(C_truep(t1)?C_u_i_car(C_u_i_cdr(((C_word*)t0)[2])):C_SCHEME_FALSE);
t3=(C_truep(t1)?C_i_caddr(((C_word*)t0)[2]):C_u_i_car(C_u_i_cdr(((C_word*)t0)[2])));
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(t3,lf[6]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3136,a[2]=t6,a[3]=t11,a[4]=t7,a[5]=((C_word)li12),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3136(t13,t9,t3);}

/* k3123 in k3108 in k3105 in a3102 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3125,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[44],t2);
/* chicken-ffi-syntax.scm:270: annotate-foreign-procedure */
f_2722(((C_word*)t0)[4],t3,t1,((C_word*)t0)[5]);}

/* map-loop887 in k3108 in k3105 in a3102 in k2830 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_3136(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3136,3,t0,t1,t2);}
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

/* k3195 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3197,c,av);}
/* chicken-ffi-syntax.scm:252: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[46];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3198 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3199(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3199,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3203,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:257: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[46];
av2[3]=t2;
av2[4]=lf[47];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3201 in a3198 in k2827 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3203,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[18],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3212 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3214,c,av);}
/* chicken-ffi-syntax.scm:244: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[48];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3215 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3216(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3216,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3220,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:249: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[48];
av2[3]=t2;
av2[4]=lf[50];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3218 in a3215 in k2718 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3220,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[49],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3229 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3231,c,av);}
/* chicken-ffi-syntax.scm:205: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[51];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3232 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3233(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3233,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3237,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:210: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[51];
av2[3]=t2;
av2[4]=lf[53];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3235 in a3232 in k2715 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3237,c,av);}
a=C_alloc(9);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[51],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[52],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3250 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3252,c,av);}
/* chicken-ffi-syntax.scm:179: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[54];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3253 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3254(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3254,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3258,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:184: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[54];
av2[3]=t2;
av2[4]=lf[58];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3256 in a3253 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3258,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:185: chicken.base#gensym */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[57];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3259 in k3256 in a3253 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_3261,c,av);}
a=C_alloc(22);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3271,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_i_caddr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3295,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_stringp(t2))){
t6=t3;
f_3271(t6,C_a_i_list(&a,4,lf[18],t1,t4,t2));}
else{
if(C_truep(C_i_symbolp(t2))){
/* chicken-ffi-syntax.scm:191: scheme#symbol->string */
t6=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
/* chicken-ffi-syntax.scm:193: chicken.syntax#syntax-error */
t6=*((C_word*)lf[1]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[54];
av2[3]=lf[56];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}}

/* k3269 in k3259 in k3256 in a3253 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_3271(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3271,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3283,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:198: chicken.syntax#strip-syntax */
t4=*((C_word*)lf[12]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_caddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3277 in k3269 in k3259 in k3256 in a3253 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_3279,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[8],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[21],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3281 in k3269 in k3259 in k3256 in a3253 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3283,c,av);}
/* chicken-ffi-syntax.scm:197: chicken.compiler.support#foreign-type->scrutiny-type */
t2=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[11];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3293 in k3259 in k3256 in a3253 in k2712 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_3295,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
f_3271(t2,C_a_i_list(&a,4,lf[18],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k3316 in k3385 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3318,c,av);}
/* chicken-ffi-syntax.scm:164: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[60];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3319 in k3385 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3320(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3320,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3324,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:169: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[60];
av2[3]=t2;
av2[4]=lf[72];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3322 in a3319 in k3385 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3324,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:170: chicken.base#gensym */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[71];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3325 in k3322 in a3319 in k3385 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3327,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3342,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:172: r */
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

/* k3340 in k3325 in k3322 in a3319 in k3385 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3342,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3350,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:174: chicken.base#open-output-string */
t3=*((C_word*)lf[70]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3348 in k3340 in k3325 in k3322 in a3319 in k3385 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3350,c,av);}
a=C_alloc(7);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[61]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:174: ##sys#print */
t4=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[69];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3354 in k3348 in k3340 in k3325 in k3322 in a3319 in k3385 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3356,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3359,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:174: ##sys#print */
t3=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3357 in k3354 in k3348 in k3340 in k3325 in k3322 in a3319 in k3385 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3359,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:174: ##sys#print */
t3=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[68];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3360 in k3357 in k3354 in k3348 in k3340 in k3325 in k3322 in a3319 in k3385 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3362,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3365,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3375,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:176: chicken.string#string-intersperse */
t4=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cdr(((C_word*)t0)[6]);
av2[3]=lf[67];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3363 in k3360 in k3357 in k3354 in k3348 in k3340 in k3325 in k3322 in a3319 in k3385 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3365,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:174: ##sys#print */
t3=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[65];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3366 in k3363 in k3360 in k3357 in k3354 in k3348 in k3340 in k3325 in k3322 in a3319 in k3385 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3368,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:174: chicken.base#get-output-string */
t3=*((C_word*)lf[63]+1);{
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

/* k3369 in k3366 in k3363 in k3360 in k3357 in k3354 in k3348 in k3340 in k3325 in k3322 in a3319 in k3385 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 in ... */
static void C_ccall f_3371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_3371,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,lf[51],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,lf[62],((C_word*)t0)[3]);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[21],t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3373 in k3360 in k3357 in k3354 in k3348 in k3340 in k3325 in k3322 in a3319 in k3385 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3375,c,av);}
/* chicken-ffi-syntax.scm:174: ##sys#print */
t2=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3385 in k2709 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3387(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3387,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,lf[59],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3318,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3320,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:167: compiler-only-er-transformer */
f_2676(t4,t5);}

/* k3389 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3391,c,av);}
/* chicken-ffi-syntax.scm:128: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[74];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3393(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3393,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3397,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:133: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[74];
av2[3]=t2;
av2[4]=lf[79];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3397(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_3397,c,av);}
a=C_alloc(23);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3406,a[2]=((C_word*)t0)[3],a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(t2,lf[6]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3420,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3518,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,a[6]=((C_word)li28),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_3518(t15,t11,t2);}

/* g720 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_3406(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3406,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3414,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:136: chicken.base#gensym */
t3=*((C_word*)lf[27]+1);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3412 in g720 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3414,c,av);}
/* chicken-ffi-syntax.scm:136: r */
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

/* k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3420(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_3420,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3495,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list(&a,1,t1);
if(C_truep(C_i_nullp(t4))){
t5=C_i_check_list_2(((C_word*)t0)[4],lf[77]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1608,a[2]=t3,a[3]=t7,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1608(t9,t2,((C_word*)t0)[4]);}
else{
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1648,a[2]=t7,a[3]=t3,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1648(t9,t2,t5);}}

/* k3425 in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_3427,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3431,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3433,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_3433(t6,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3429 in k3425 in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3431,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[75],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k3425 in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_3433(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3433,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[75],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_car(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3456,a[2]=t4,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:149: loop */
t8=t6;
t9=C_u_i_cdr(t2);
t10=C_u_i_cdr(t3);
t1=t8;
t2=t9;
t3=t10;
goto loop;}}

/* k3454 in loop in k3425 in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3456(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3456,c,av);}
a=C_alloc(15);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(3),t2);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_cadr(((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,5,lf[76],t4,t5,((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_cadr(((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[76],t4,t5,t1);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* a3494 in k3418 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3495(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3495,c,av);}
a=C_alloc(6);
t4=C_i_cddr(t2);
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_cdr(t2);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list1(&a,1,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* map-loop714 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_3518(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3518,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3543,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:136: g720 */
t4=((C_word*)t0)[4];
f_3406(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3541 in map-loop714 in k3395 in a3392 in k2706 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3543,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3518(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k3556 in k3638 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3558,c,av);}
/* chicken-ffi-syntax.scm:111: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[81];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3559 in k3638 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3560(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3560,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3564,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:116: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[81];
av2[3]=t2;
av2[4]=lf[84];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3562 in a3559 in k3638 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3564(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3564,c,av);}
a=C_alloc(11);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_i_car(t6));
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3579,a[2]=t2,a[3]=t3,a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3626,a[2]=((C_word*)t0)[4],a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:120: chicken.base#gensym */
t11=*((C_word*)lf[27]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* k3577 in k3562 in a3559 in k3638 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3579,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:121: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[80];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3584 in k3577 in k3562 in a3559 in k3638 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3586,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:122: scheme#symbol->string */
t3=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3620 in k3584 in k3577 in k3562 in a3559 in k3638 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3622(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(48,c,1)))){
C_save_and_reclaim((void *)f_3622,c,av);}
a=C_alloc(48);
t2=C_a_i_list(&a,4,lf[18],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_list(&a,5,lf[82],((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4]);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t4=C_u_i_car(((C_word*)t0)[5]);
t5=C_a_i_list(&a,3,lf[83],((C_word*)t0)[2],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=C_a_i_cons(&a,2,t2,t7);
t9=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[7],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,t2,t4);
t6=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[7],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3624 in k3562 in a3559 in k3638 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3626,c,av);}
/* chicken-ffi-syntax.scm:120: r */
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

/* k3638 in k2703 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3640(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3640,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,lf[80],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3558,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3560,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:114: compiler-only-er-transformer */
f_2676(t4,t5);}

/* k3642 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3644,c,av);}
/* chicken-ffi-syntax.scm:103: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
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

/* a3645 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3646(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3646,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3650,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:108: ##sys#check-syntax */
t6=*((C_word*)lf[29]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[85];
av2[3]=t2;
av2[4]=lf[87];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3648 in a3645 in k2700 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3650,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[86],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3663 in k3955 in k3959 in k3963 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3665,c,av);}
/* chicken-ffi-syntax.scm:64: ##sys#extend-macro-environment */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[90];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a3666 in k3955 in k3959 in k3963 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3667(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3667,c,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_stringp(C_u_i_car(t5)):C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3677,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_not(t7))){
t9=C_i_pairp(t5);
t10=t8;
f_3677(t10,(C_truep(t9)?C_i_symbolp(C_u_i_car(t5)):C_SCHEME_FALSE));}
else{
t9=t8;
f_3677(t9,C_SCHEME_FALSE);}}

/* k3675 in a3666 in k3955 in k3959 in k3963 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_3677(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3677,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3683,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:75: ##sys#check-syntax */
t3=*((C_word*)lf[29]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[90];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[91];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3740,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* chicken-ffi-syntax.scm:85: ##sys#check-syntax */
t3=*((C_word*)lf[29]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[90];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[95];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
/* chicken-ffi-syntax.scm:86: ##sys#check-syntax */
t3=*((C_word*)lf[29]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[90];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[96];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}}

/* k3681 in k3675 in a3666 in k3955 in k3959 in k3963 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3683,c,av);}
a=C_alloc(5);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3693,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:77: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[80];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3691 in k3681 in k3675 in a3666 in k3955 in k3959 in k3963 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3693(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,1)))){
C_save_and_reclaim((void *)f_3693,c,av);}
a=C_alloc(42);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[18],((C_word*)t0)[3],t2);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_car(t4);
t6=C_a_i_list(&a,4,lf[82],((C_word*)t0)[3],t5,C_SCHEME_TRUE);
t7=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(C_u_i_cdr(t7)))){
t8=C_i_caddr(((C_word*)t0)[2]);
t9=C_a_i_list(&a,3,lf[83],((C_word*)t0)[3],t8);
t10=C_a_i_list(&a,1,t9);
t11=C_a_i_cons(&a,2,t6,t10);
t12=C_a_i_cons(&a,2,t3,t11);
t13=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_a_i_cons(&a,2,t1,t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t8=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t3,t8);
t10=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_a_i_cons(&a,2,t1,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k3738 in k3675 in a3666 in k3955 in k3959 in k3963 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3740,c,av);}
a=C_alloc(8);
t2=(C_truep(((C_word*)t0)[2])?C_i_cadr(((C_word*)t0)[3]):C_i_car(((C_word*)t0)[3]));
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3753,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:89: r */
t5=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[88];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3751 in k3738 in k3675 in a3666 in k3955 in k3959 in k3963 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3753(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,3)))){
C_save_and_reclaim((void *)f_3753,c,av);}
a=C_alloc(37);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,lf[92],t3);
t5=(C_truep(((C_word*)t0)[3])?C_i_car(((C_word*)t0)[4]):lf[93]);
t6=(C_truep(((C_word*)t0)[3])?C_i_caddr(((C_word*)t0)[4]):C_i_cadr(((C_word*)t0)[4]));
t7=C_a_i_list(&a,2,lf[92],t6);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_i_check_list_2(((C_word*)t0)[5],lf[6]);
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3858,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t5,a[6]=t7,a[7]=((C_word*)t0)[6],a[8]=t1,a[9]=t2,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3860,a[2]=t10,a[3]=t15,a[4]=t11,a[5]=((C_word)li33),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_3860(t17,t13,((C_word*)t0)[5]);}

/* k3781 in k3856 in k3751 in k3738 in k3675 in a3666 in k3955 in k3959 in k3963 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3783(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_3783,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3811,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li32),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_3811(t10,t6,((C_word*)t0)[11]);}

/* k3797 in k3781 in k3856 in k3751 in k3738 in k3675 in a3666 in k3955 in k3959 in k3963 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_3799,c,av);}
a=C_alloc(33);
t2=(C_truep(((C_word*)t0)[2])?C_i_cdddr(((C_word*)t0)[3]):C_i_cddr(((C_word*)t0)[3]));
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,6,lf[94],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],t4);
t6=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[10],((C_word*)t0)[11],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* map-loop652 in k3781 in k3856 in k3751 in k3738 in k3675 in a3666 in k3955 in k3959 in k3963 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_3811(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3811,3,t0,t1,t2);}
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

/* k3856 in k3751 in k3738 in k3675 in a3666 in k3955 in k3959 in k3963 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_3858,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,lf[92],t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-ffi-syntax.scm:95: r */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[89];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* map-loop625 in k3751 in k3738 in k3675 in a3666 in k3955 in k3959 in k3963 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_fcall f_3860(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3860,3,t0,t1,t2);}
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

/* k3955 in k3959 in k3963 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,5)))){
C_save_and_reclaim((void *)f_3957,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,lf[89],t1);
t3=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3665,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3667,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:69: compiler-only-er-transformer */
f_2676(t4,t5);}

/* k3959 in k3963 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3961,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,lf[80],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3957,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:68: chicken.base#alist-ref */
t4=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[89];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3963 in k2672 in k1390 in k1387 in k1384 in k1381 in k1378 */
static void C_ccall f_3965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3965,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,lf[88],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3961,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:67: chicken.base#alist-ref */
t4=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[80];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("chicken-ffi-syntax"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_chicken_2dffi_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1118))){
C_save(t1);
C_rereclaim2(1118*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,98);
lf[0]=C_h_intern(&lf[0],18, C_text("chicken-ffi-syntax"));
lf[1]=C_h_intern(&lf[1],27, C_text("chicken.syntax#syntax-error"));
lf[2]=C_decode_literal(C_heaptop,C_text("\376B\000\000,The FFI is not supported in interpreted mode"));
lf[3]=C_h_intern(&lf[3],25, C_text("chicken.platform#feature\077"));
lf[4]=C_h_intern(&lf[4],9, C_text("compiling"));
lf[5]=C_h_intern(&lf[5],20, C_text("##sys#er-transformer"));
lf[6]=C_h_intern(&lf[6],3, C_text("map"));
lf[7]=C_h_intern(&lf[7],9, C_text("procedure"));
lf[8]=C_h_intern(&lf[8],10, C_text("##core#the"));
lf[9]=C_h_intern(&lf[9],1, C_text("\052"));
lf[10]=C_h_intern(&lf[10],52, C_text("chicken.compiler.support#foreign-type->scrutiny-type"));
lf[11]=C_h_intern(&lf[11],6, C_text("result"));
lf[12]=C_h_intern(&lf[12],27, C_text("chicken.syntax#strip-syntax"));
lf[13]=C_h_intern(&lf[13],3, C_text("arg"));
lf[14]=C_h_intern(&lf[14],35, C_text("##sys#chicken-ffi-macro-environment"));
lf[15]=C_h_intern(&lf[15],29, C_text("chicken.internal#macro-subset"));
lf[16]=C_h_intern(&lf[16],30, C_text("##sys#extend-macro-environment"));
lf[17]=C_h_intern(&lf[17],17, C_text("foreign-type-size"));
lf[18]=C_h_intern(&lf[18],30, C_text("##core#define-foreign-variable"));
lf[19]=C_h_intern(&lf[19],6, C_text("size_t"));
lf[20]=C_h_intern(&lf[20],6, C_text("fixnum"));
lf[21]=C_h_intern(&lf[21],12, C_text("##core#begin"));
lf[22]=C_h_intern(&lf[22],20, C_text("scheme#string-append"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007sizeof("));
lf[24]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001)"));
lf[25]=C_h_intern(&lf[25],51, C_text("chicken.compiler.c-backend#foreign-type-declaration"));
lf[26]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[27]=C_h_intern(&lf[27],19, C_text("chicken.base#gensym"));
lf[28]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005code_"));
lf[29]=C_h_intern(&lf[29],18, C_text("##sys#check-syntax"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[31]=C_h_intern(&lf[31],20, C_text("foreign-safe-lambda\052"));
lf[32]=C_h_intern(&lf[32],27, C_text("##core#foreign-safe-lambda\052"));
lf[33]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[34]=C_h_intern(&lf[34],19, C_text("foreign-safe-lambda"));
lf[35]=C_h_intern(&lf[35],26, C_text("##core#foreign-safe-lambda"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[37]=C_h_intern(&lf[37],15, C_text("foreign-lambda\052"));
lf[38]=C_h_intern(&lf[38],22, C_text("##core#foreign-lambda\052"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[40]=C_h_intern(&lf[40],14, C_text("foreign-lambda"));
lf[41]=C_h_intern(&lf[41],21, C_text("##core#foreign-lambda"));
lf[42]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[43]=C_h_intern(&lf[43],17, C_text("foreign-primitive"));
lf[44]=C_h_intern(&lf[44],24, C_text("##core#foreign-primitive"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\001\000\000\001\001_"));
lf[46]=C_h_intern(&lf[46],23, C_text("define-foreign-variable"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001symbol\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\006\001string\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[48]=C_h_intern(&lf[48],19, C_text("define-foreign-type"));
lf[49]=C_h_intern(&lf[49],26, C_text("##core#define-foreign-type"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001symbol\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\002"));
lf[51]=C_h_intern(&lf[51],15, C_text("foreign-declare"));
lf[52]=C_h_intern(&lf[52],14, C_text("##core#declare"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\006\001string\376\377\001\000\000\000\000"));
lf[54]=C_h_intern(&lf[54],13, C_text("foreign-value"));
lf[55]=C_h_intern(&lf[55],21, C_text("scheme#symbol->string"));
lf[56]=C_decode_literal(C_heaptop,C_text("\376B\000\000\052bad argument type - not a string or symbol"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005code_"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[59]=C_h_intern(&lf[59],7, C_text("declare"));
lf[60]=C_h_intern(&lf[60],12, C_text("foreign-code"));
lf[61]=C_h_intern(&lf[61],6, C_text("format"));
lf[62]=C_h_intern(&lf[62],13, C_text("##core#inline"));
lf[63]=C_h_intern(&lf[63],30, C_text("chicken.base#get-output-string"));
lf[64]=C_h_intern(&lf[64],11, C_text("##sys#print"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376B\000\000 \012; return C_SCHEME_UNDEFINED; }\012"));
lf[66]=C_h_intern(&lf[66],33, C_text("chicken.string#string-intersperse"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\012"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005() { "));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016static C_word "));
lf[70]=C_h_intern(&lf[70],31, C_text("chicken.base#open-output-string"));
lf[71]=C_h_intern(&lf[71],5, C_text("code_"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\006\001string\376\377\001\000\000\000\000"));
lf[73]=C_h_intern(&lf[73],22, C_text("chicken.base#alist-ref"));
lf[74]=C_h_intern(&lf[74],12, C_text("let-location"));
lf[75]=C_h_intern(&lf[75],10, C_text("##core#let"));
lf[76]=C_h_intern(&lf[76],19, C_text("##core#let-location"));
lf[77]=C_h_intern(&lf[77],5, C_text("foldr"));
lf[78]=C_h_intern(&lf[78],13, C_text("scheme#append"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001\376"
"\377\001\000\000\000\000\376\001\000\000\001\001_"));
lf[80]=C_h_intern(&lf[80],5, C_text("begin"));
lf[81]=C_h_intern(&lf[81],15, C_text("define-location"));
lf[82]=C_h_intern(&lf[82],31, C_text("##core#define-external-variable"));
lf[83]=C_h_intern(&lf[83],11, C_text("##core#set!"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\010\001variable\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[85]=C_h_intern(&lf[85],8, C_text("location"));
lf[86]=C_h_intern(&lf[86],15, C_text("##core#location"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\001location\376\003\000\000\002\376\001\000\000\001\001_\376\377\016"));
lf[88]=C_h_intern(&lf[88],6, C_text("define"));
lf[89]=C_h_intern(&lf[89],6, C_text("lambda"));
lf[90]=C_h_intern(&lf[90],15, C_text("define-external"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001symbol\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\003\376\001\000\000\001\001_\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[92]=C_h_intern(&lf[92],12, C_text("##core#quote"));
lf[93]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[94]=C_h_intern(&lf[94],31, C_text("##core#foreign-callback-wrapper"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001string\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001symbol\376\377\016\376\377\001\000"
"\000\000\000\376\003\000\000\002\376\001\000\000\001\001_\376\000\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001symbol\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001\001_\376\003\000\000\002\376\001\000\000\006\001symbol\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001\001_\376\000"
"\000\000\002\376\001\000\000\001\001_\376\377\001\000\000\000\001"));
lf[97]=C_h_intern(&lf[97],23, C_text("##sys#macro-environment"));
C_register_lf2(lf,98,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1380,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[147] = {
{C_text("f_1380:chicken_2dffi_2dsyntax_2escm"),(void*)f_1380},
{C_text("f_1383:chicken_2dffi_2dsyntax_2escm"),(void*)f_1383},
{C_text("f_1386:chicken_2dffi_2dsyntax_2escm"),(void*)f_1386},
{C_text("f_1389:chicken_2dffi_2dsyntax_2escm"),(void*)f_1389},
{C_text("f_1392:chicken_2dffi_2dsyntax_2escm"),(void*)f_1392},
{C_text("f_1608:chicken_2dffi_2dsyntax_2escm"),(void*)f_1608},
{C_text("f_1616:chicken_2dffi_2dsyntax_2escm"),(void*)f_1616},
{C_text("f_1624:chicken_2dffi_2dsyntax_2escm"),(void*)f_1624},
{C_text("f_1635:chicken_2dffi_2dsyntax_2escm"),(void*)f_1635},
{C_text("f_1648:chicken_2dffi_2dsyntax_2escm"),(void*)f_1648},
{C_text("f_1662:chicken_2dffi_2dsyntax_2escm"),(void*)f_1662},
{C_text("f_1666:chicken_2dffi_2dsyntax_2escm"),(void*)f_1666},
{C_text("f_1678:chicken_2dffi_2dsyntax_2escm"),(void*)f_1678},
{C_text("f_1680:chicken_2dffi_2dsyntax_2escm"),(void*)f_1680},
{C_text("f_1727:chicken_2dffi_2dsyntax_2escm"),(void*)f_1727},
{C_text("f_1729:chicken_2dffi_2dsyntax_2escm"),(void*)f_1729},
{C_text("f_1769:chicken_2dffi_2dsyntax_2escm"),(void*)f_1769},
{C_text("f_1803:chicken_2dffi_2dsyntax_2escm"),(void*)f_1803},
{C_text("f_2674:chicken_2dffi_2dsyntax_2escm"),(void*)f_2674},
{C_text("f_2676:chicken_2dffi_2dsyntax_2escm"),(void*)f_2676},
{C_text("f_2682:chicken_2dffi_2dsyntax_2escm"),(void*)f_2682},
{C_text("f_2689:chicken_2dffi_2dsyntax_2escm"),(void*)f_2689},
{C_text("f_2702:chicken_2dffi_2dsyntax_2escm"),(void*)f_2702},
{C_text("f_2705:chicken_2dffi_2dsyntax_2escm"),(void*)f_2705},
{C_text("f_2708:chicken_2dffi_2dsyntax_2escm"),(void*)f_2708},
{C_text("f_2711:chicken_2dffi_2dsyntax_2escm"),(void*)f_2711},
{C_text("f_2714:chicken_2dffi_2dsyntax_2escm"),(void*)f_2714},
{C_text("f_2717:chicken_2dffi_2dsyntax_2escm"),(void*)f_2717},
{C_text("f_2720:chicken_2dffi_2dsyntax_2escm"),(void*)f_2720},
{C_text("f_2722:chicken_2dffi_2dsyntax_2escm"),(void*)f_2722},
{C_text("f_2734:chicken_2dffi_2dsyntax_2escm"),(void*)f_2734},
{C_text("f_2740:chicken_2dffi_2dsyntax_2escm"),(void*)f_2740},
{C_text("f_2743:chicken_2dffi_2dsyntax_2escm"),(void*)f_2743},
{C_text("f_2749:chicken_2dffi_2dsyntax_2escm"),(void*)f_2749},
{C_text("f_2792:chicken_2dffi_2dsyntax_2escm"),(void*)f_2792},
{C_text("f_2794:chicken_2dffi_2dsyntax_2escm"),(void*)f_2794},
{C_text("f_2819:chicken_2dffi_2dsyntax_2escm"),(void*)f_2819},
{C_text("f_2829:chicken_2dffi_2dsyntax_2escm"),(void*)f_2829},
{C_text("f_2832:chicken_2dffi_2dsyntax_2escm"),(void*)f_2832},
{C_text("f_2835:chicken_2dffi_2dsyntax_2escm"),(void*)f_2835},
{C_text("f_2838:chicken_2dffi_2dsyntax_2escm"),(void*)f_2838},
{C_text("f_2841:chicken_2dffi_2dsyntax_2escm"),(void*)f_2841},
{C_text("f_2844:chicken_2dffi_2dsyntax_2escm"),(void*)f_2844},
{C_text("f_2847:chicken_2dffi_2dsyntax_2escm"),(void*)f_2847},
{C_text("f_2850:chicken_2dffi_2dsyntax_2escm"),(void*)f_2850},
{C_text("f_2853:chicken_2dffi_2dsyntax_2escm"),(void*)f_2853},
{C_text("f_2857:chicken_2dffi_2dsyntax_2escm"),(void*)f_2857},
{C_text("f_2859:chicken_2dffi_2dsyntax_2escm"),(void*)f_2859},
{C_text("f_2863:chicken_2dffi_2dsyntax_2escm"),(void*)f_2863},
{C_text("f_2866:chicken_2dffi_2dsyntax_2escm"),(void*)f_2866},
{C_text("f_2869:chicken_2dffi_2dsyntax_2escm"),(void*)f_2869},
{C_text("f_2872:chicken_2dffi_2dsyntax_2escm"),(void*)f_2872},
{C_text("f_2887:chicken_2dffi_2dsyntax_2escm"),(void*)f_2887},
{C_text("f_2901:chicken_2dffi_2dsyntax_2escm"),(void*)f_2901},
{C_text("f_2903:chicken_2dffi_2dsyntax_2escm"),(void*)f_2903},
{C_text("f_2907:chicken_2dffi_2dsyntax_2escm"),(void*)f_2907},
{C_text("f_2927:chicken_2dffi_2dsyntax_2escm"),(void*)f_2927},
{C_text("f_2933:chicken_2dffi_2dsyntax_2escm"),(void*)f_2933},
{C_text("f_2973:chicken_2dffi_2dsyntax_2escm"),(void*)f_2973},
{C_text("f_2975:chicken_2dffi_2dsyntax_2escm"),(void*)f_2975},
{C_text("f_2979:chicken_2dffi_2dsyntax_2escm"),(void*)f_2979},
{C_text("f_3001:chicken_2dffi_2dsyntax_2escm"),(void*)f_3001},
{C_text("f_3003:chicken_2dffi_2dsyntax_2escm"),(void*)f_3003},
{C_text("f_3007:chicken_2dffi_2dsyntax_2escm"),(void*)f_3007},
{C_text("f_3027:chicken_2dffi_2dsyntax_2escm"),(void*)f_3027},
{C_text("f_3033:chicken_2dffi_2dsyntax_2escm"),(void*)f_3033},
{C_text("f_3073:chicken_2dffi_2dsyntax_2escm"),(void*)f_3073},
{C_text("f_3075:chicken_2dffi_2dsyntax_2escm"),(void*)f_3075},
{C_text("f_3079:chicken_2dffi_2dsyntax_2escm"),(void*)f_3079},
{C_text("f_3101:chicken_2dffi_2dsyntax_2escm"),(void*)f_3101},
{C_text("f_3103:chicken_2dffi_2dsyntax_2escm"),(void*)f_3103},
{C_text("f_3107:chicken_2dffi_2dsyntax_2escm"),(void*)f_3107},
{C_text("f_3110:chicken_2dffi_2dsyntax_2escm"),(void*)f_3110},
{C_text("f_3125:chicken_2dffi_2dsyntax_2escm"),(void*)f_3125},
{C_text("f_3136:chicken_2dffi_2dsyntax_2escm"),(void*)f_3136},
{C_text("f_3197:chicken_2dffi_2dsyntax_2escm"),(void*)f_3197},
{C_text("f_3199:chicken_2dffi_2dsyntax_2escm"),(void*)f_3199},
{C_text("f_3203:chicken_2dffi_2dsyntax_2escm"),(void*)f_3203},
{C_text("f_3214:chicken_2dffi_2dsyntax_2escm"),(void*)f_3214},
{C_text("f_3216:chicken_2dffi_2dsyntax_2escm"),(void*)f_3216},
{C_text("f_3220:chicken_2dffi_2dsyntax_2escm"),(void*)f_3220},
{C_text("f_3231:chicken_2dffi_2dsyntax_2escm"),(void*)f_3231},
{C_text("f_3233:chicken_2dffi_2dsyntax_2escm"),(void*)f_3233},
{C_text("f_3237:chicken_2dffi_2dsyntax_2escm"),(void*)f_3237},
{C_text("f_3252:chicken_2dffi_2dsyntax_2escm"),(void*)f_3252},
{C_text("f_3254:chicken_2dffi_2dsyntax_2escm"),(void*)f_3254},
{C_text("f_3258:chicken_2dffi_2dsyntax_2escm"),(void*)f_3258},
{C_text("f_3261:chicken_2dffi_2dsyntax_2escm"),(void*)f_3261},
{C_text("f_3271:chicken_2dffi_2dsyntax_2escm"),(void*)f_3271},
{C_text("f_3279:chicken_2dffi_2dsyntax_2escm"),(void*)f_3279},
{C_text("f_3283:chicken_2dffi_2dsyntax_2escm"),(void*)f_3283},
{C_text("f_3295:chicken_2dffi_2dsyntax_2escm"),(void*)f_3295},
{C_text("f_3318:chicken_2dffi_2dsyntax_2escm"),(void*)f_3318},
{C_text("f_3320:chicken_2dffi_2dsyntax_2escm"),(void*)f_3320},
{C_text("f_3324:chicken_2dffi_2dsyntax_2escm"),(void*)f_3324},
{C_text("f_3327:chicken_2dffi_2dsyntax_2escm"),(void*)f_3327},
{C_text("f_3342:chicken_2dffi_2dsyntax_2escm"),(void*)f_3342},
{C_text("f_3350:chicken_2dffi_2dsyntax_2escm"),(void*)f_3350},
{C_text("f_3356:chicken_2dffi_2dsyntax_2escm"),(void*)f_3356},
{C_text("f_3359:chicken_2dffi_2dsyntax_2escm"),(void*)f_3359},
{C_text("f_3362:chicken_2dffi_2dsyntax_2escm"),(void*)f_3362},
{C_text("f_3365:chicken_2dffi_2dsyntax_2escm"),(void*)f_3365},
{C_text("f_3368:chicken_2dffi_2dsyntax_2escm"),(void*)f_3368},
{C_text("f_3371:chicken_2dffi_2dsyntax_2escm"),(void*)f_3371},
{C_text("f_3375:chicken_2dffi_2dsyntax_2escm"),(void*)f_3375},
{C_text("f_3387:chicken_2dffi_2dsyntax_2escm"),(void*)f_3387},
{C_text("f_3391:chicken_2dffi_2dsyntax_2escm"),(void*)f_3391},
{C_text("f_3393:chicken_2dffi_2dsyntax_2escm"),(void*)f_3393},
{C_text("f_3397:chicken_2dffi_2dsyntax_2escm"),(void*)f_3397},
{C_text("f_3406:chicken_2dffi_2dsyntax_2escm"),(void*)f_3406},
{C_text("f_3414:chicken_2dffi_2dsyntax_2escm"),(void*)f_3414},
{C_text("f_3420:chicken_2dffi_2dsyntax_2escm"),(void*)f_3420},
{C_text("f_3427:chicken_2dffi_2dsyntax_2escm"),(void*)f_3427},
{C_text("f_3431:chicken_2dffi_2dsyntax_2escm"),(void*)f_3431},
{C_text("f_3433:chicken_2dffi_2dsyntax_2escm"),(void*)f_3433},
{C_text("f_3456:chicken_2dffi_2dsyntax_2escm"),(void*)f_3456},
{C_text("f_3495:chicken_2dffi_2dsyntax_2escm"),(void*)f_3495},
{C_text("f_3518:chicken_2dffi_2dsyntax_2escm"),(void*)f_3518},
{C_text("f_3543:chicken_2dffi_2dsyntax_2escm"),(void*)f_3543},
{C_text("f_3558:chicken_2dffi_2dsyntax_2escm"),(void*)f_3558},
{C_text("f_3560:chicken_2dffi_2dsyntax_2escm"),(void*)f_3560},
{C_text("f_3564:chicken_2dffi_2dsyntax_2escm"),(void*)f_3564},
{C_text("f_3579:chicken_2dffi_2dsyntax_2escm"),(void*)f_3579},
{C_text("f_3586:chicken_2dffi_2dsyntax_2escm"),(void*)f_3586},
{C_text("f_3622:chicken_2dffi_2dsyntax_2escm"),(void*)f_3622},
{C_text("f_3626:chicken_2dffi_2dsyntax_2escm"),(void*)f_3626},
{C_text("f_3640:chicken_2dffi_2dsyntax_2escm"),(void*)f_3640},
{C_text("f_3644:chicken_2dffi_2dsyntax_2escm"),(void*)f_3644},
{C_text("f_3646:chicken_2dffi_2dsyntax_2escm"),(void*)f_3646},
{C_text("f_3650:chicken_2dffi_2dsyntax_2escm"),(void*)f_3650},
{C_text("f_3665:chicken_2dffi_2dsyntax_2escm"),(void*)f_3665},
{C_text("f_3667:chicken_2dffi_2dsyntax_2escm"),(void*)f_3667},
{C_text("f_3677:chicken_2dffi_2dsyntax_2escm"),(void*)f_3677},
{C_text("f_3683:chicken_2dffi_2dsyntax_2escm"),(void*)f_3683},
{C_text("f_3693:chicken_2dffi_2dsyntax_2escm"),(void*)f_3693},
{C_text("f_3740:chicken_2dffi_2dsyntax_2escm"),(void*)f_3740},
{C_text("f_3753:chicken_2dffi_2dsyntax_2escm"),(void*)f_3753},
{C_text("f_3783:chicken_2dffi_2dsyntax_2escm"),(void*)f_3783},
{C_text("f_3799:chicken_2dffi_2dsyntax_2escm"),(void*)f_3799},
{C_text("f_3811:chicken_2dffi_2dsyntax_2escm"),(void*)f_3811},
{C_text("f_3858:chicken_2dffi_2dsyntax_2escm"),(void*)f_3858},
{C_text("f_3860:chicken_2dffi_2dsyntax_2escm"),(void*)f_3860},
{C_text("f_3957:chicken_2dffi_2dsyntax_2escm"),(void*)f_3957},
{C_text("f_3961:chicken_2dffi_2dsyntax_2escm"),(void*)f_3961},
{C_text("f_3965:chicken_2dffi_2dsyntax_2escm"),(void*)f_3965},
{C_text("toplevel:chicken_2dffi_2dsyntax_2escm"),(void*)C_chicken_2dffi_2dsyntax_toplevel},
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
S|  chicken.format#sprintf		1
S|  chicken.base#foldl		3
S|  scheme#map		10
S|  chicken.base#foldr		3
o|eliminated procedure checks: 128 
o|specializations:
o|  1 (##sys#check-output-port * * *)
o|  1 (scheme#= fixnum fixnum)
o|  1 (scheme#cdddr (pair * (pair * pair)))
o|  3 (scheme#cddr (pair * pair))
o|  5 (scheme#cadr (pair * pair))
o|  1 (scheme#eqv? * *)
o|  4 (##sys#check-list (or pair list) *)
o|  25 (scheme#cdr pair)
o|  12 (scheme#car pair)
(o e)|safe calls: 389 
o|safe globals: (posv posq make-list iota find-tail find length+ lset=/eq? lset<=/eq? list-tabulate lset-intersection/eq? lset-union/eq? lset-difference/eq? lset-adjoin/eq? list-index last unzip1 remove filter-map filter alist-cons delete-duplicates fifth fourth third second first delete concatenate cons* any every append-map split-at drop take span partition) 
o|removed side-effect free assignment to unused variable: partition 
o|removed side-effect free assignment to unused variable: span 
o|removed side-effect free assignment to unused variable: drop 
o|removed side-effect free assignment to unused variable: split-at 
o|inlining procedure: k1774 
o|inlining procedure: k1774 
o|inlining procedure: k1805 
o|inlining procedure: k1805 
o|removed side-effect free assignment to unused variable: cons* 
o|removed side-effect free assignment to unused variable: concatenate 
o|removed side-effect free assignment to unused variable: first 
o|removed side-effect free assignment to unused variable: second 
o|removed side-effect free assignment to unused variable: third 
o|removed side-effect free assignment to unused variable: fourth 
o|removed side-effect free assignment to unused variable: fifth 
o|removed side-effect free assignment to unused variable: delete-duplicates 
o|removed side-effect free assignment to unused variable: alist-cons 
o|inlining procedure: k2022 
o|inlining procedure: k2022 
o|inlining procedure: k2014 
o|inlining procedure: k2014 
o|removed side-effect free assignment to unused variable: filter-map 
o|removed side-effect free assignment to unused variable: remove 
o|removed side-effect free assignment to unused variable: unzip1 
o|removed side-effect free assignment to unused variable: last 
o|removed side-effect free assignment to unused variable: list-index 
o|removed side-effect free assignment to unused variable: lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: lset-difference/eq? 
o|removed side-effect free assignment to unused variable: lset-union/eq? 
o|removed side-effect free assignment to unused variable: lset-intersection/eq? 
o|inlining procedure: k2413 
o|inlining procedure: k2413 
o|removed side-effect free assignment to unused variable: lset<=/eq? 
o|removed side-effect free assignment to unused variable: lset=/eq? 
o|removed side-effect free assignment to unused variable: length+ 
o|removed side-effect free assignment to unused variable: find 
o|removed side-effect free assignment to unused variable: find-tail 
o|removed side-effect free assignment to unused variable: iota 
o|removed side-effect free assignment to unused variable: make-list 
o|removed side-effect free assignment to unused variable: posq 
o|removed side-effect free assignment to unused variable: posv 
o|inlining procedure: k2684 
o|inlining procedure: k2684 
o|inlining procedure: k2744 
o|inlining procedure: k2744 
o|inlining procedure: k2762 
o|inlining procedure: k2762 
o|inlining procedure: k2796 
o|contracted procedure: "(chicken-ffi-syntax.scm:217) g820829" 
o|propagated global variable: g837838 chicken.compiler.support#foreign-type->scrutiny-type 
o|inlining procedure: k2796 
o|inlining procedure: k2935 
o|inlining procedure: k2935 
o|inlining procedure: k3035 
o|inlining procedure: k3035 
o|inlining procedure: k3138 
o|inlining procedure: k3138 
o|inlining procedure: k3293 
o|inlining procedure: k3293 
o|substituted constant variable: a3352 
o|substituted constant variable: a3353 
o|removed unused formal parameters: (_731) 
o|inlining procedure: k3435 
o|inlining procedure: k3435 
o|substituted constant variable: a3485 
o|inlining procedure: k3497 
o|inlining procedure: k3497 
o|contracted procedure: "(chicken-ffi-syntax.scm:138) append-map" 
o|inlining procedure: k1595 
o|inlining procedure: k1610 
o|inlining procedure: k1610 
o|inlining procedure: k1595 
o|inlining procedure: k1650 
o|inlining procedure: k1650 
o|inlining procedure: k1682 
o|contracted procedure: "(mini-srfi-1.scm:77) g201210" 
o|inlining procedure: k1682 
o|inlining procedure: k1731 
o|contracted procedure: "(mini-srfi-1.scm:76) g174183" 
o|inlining procedure: k1731 
o|inlining procedure: k3520 
o|removed unused parameter to known procedure: _731 "(chicken-ffi-syntax.scm:136) g720729" 
o|inlining procedure: k3520 
o|inlining procedure: k3604 
o|inlining procedure: k3604 
o|inlining procedure: k3678 
o|inlining procedure: k3711 
o|inlining procedure: k3711 
o|inlining procedure: k3678 
o|inlining procedure: k3801 
o|inlining procedure: k3801 
o|inlining procedure: k3813 
o|contracted procedure: "(chicken-ffi-syntax.scm:96) g658667" 
o|inlining procedure: k3813 
o|inlining procedure: k3862 
o|contracted procedure: "(chicken-ffi-syntax.scm:94) g631640" 
o|inlining procedure: k3862 
o|inlining procedure: k3894 
o|inlining procedure: k3894 
o|inlining procedure: k3923 
o|inlining procedure: k3923 
o|replaced variables: 425 
o|removed binding forms: 134 
o|removed side-effect free assignment to unused variable: filter 
o|removed side-effect free assignment to unused variable: list-tabulate 
o|substituted constant variable: r27633982 
o|substituted constant variable: r27633982 
o|contracted procedure: "(chicken-ffi-syntax.scm:232) every" 
o|converted assignments to bindings: (annotate-foreign-procedure806) 
o|substituted constant variable: r34983999 
o|substituted constant variable: r16114003 
o|substituted constant variable: r16514005 
o|contracted procedure: "(mini-srfi-1.scm:74) any" 
o|substituted constant variable: r18063968 
o|substituted constant variable: r36054015 
o|substituted constant variable: r36054015 
o|substituted constant variable: r37124020 
o|substituted constant variable: r37124020 
o|substituted constant variable: r39244036 
o|converted assignments to bindings: (compiler-only-er-transformer590) 
o|simplifications: ((let . 2)) 
o|replaced variables: 21 
o|removed binding forms: 374 
o|removed call to pure procedure with unused result: "(chicken-ffi-syntax.scm:136) ##sys#slot" 
o|replaced variables: 5 
o|removed binding forms: 32 
o|inlining procedure: "(mini-srfi-1.scm:82) a2777" 
o|contracted procedure: k3545 
o|removed binding forms: 7 
o|replaced variables: 2 
o|removed binding forms: 2 
o|removed binding forms: 2 
o|simplifications: ((if . 10) (let . 11) (##core#call . 220)) 
o|  call simplifications:
o|    scheme#apply
o|    scheme#length
o|    scheme#symbol?	2
o|    scheme#cddr	3
o|    scheme#cdddr	3
o|    scheme#cdr	11
o|    scheme#caddr	9
o|    scheme#cadr	13
o|    scheme#string?	4
o|    ##sys#check-list	8
o|    scheme#pair?	16
o|    scheme#cons	20
o|    ##sys#setslot	9
o|    ##sys#slot	28
o|    scheme#null?	6
o|    scheme#eq?	3
o|    scheme#not	4
o|    scheme#list	2
o|    ##sys#cons	28
o|    ##sys#list	33
o|    scheme#car	16
o|contracted procedure: k2697 
o|contracted procedure: k2724 
o|contracted procedure: k2735 
o|contracted procedure: k2754 
o|contracted procedure: k2762 
o|contracted procedure: k2768 
o|contracted procedure: k2771 
o|contracted procedure: k1771 
o|contracted procedure: k1793 
o|contracted procedure: k1789 
o|contracted procedure: k1780 
o|contracted procedure: k2799 
o|contracted procedure: k2802 
o|contracted procedure: k2805 
o|contracted procedure: k2813 
o|contracted procedure: k2821 
o|contracted procedure: k2877 
o|contracted procedure: k2881 
o|contracted procedure: k2888 
o|contracted procedure: k2895 
o|contracted procedure: k2967 
o|contracted procedure: k2912 
o|contracted procedure: k2916 
o|contracted procedure: k2919 
o|contracted procedure: k2922 
o|contracted procedure: k2929 
o|contracted procedure: k2938 
o|contracted procedure: k2960 
o|contracted procedure: k2956 
o|contracted procedure: k2941 
o|contracted procedure: k2944 
o|contracted procedure: k2952 
o|contracted procedure: k2995 
o|contracted procedure: k2984 
o|contracted procedure: k2988 
o|contracted procedure: k3067 
o|contracted procedure: k3012 
o|contracted procedure: k3016 
o|contracted procedure: k3019 
o|contracted procedure: k3022 
o|contracted procedure: k3029 
o|contracted procedure: k3038 
o|contracted procedure: k3060 
o|contracted procedure: k3056 
o|contracted procedure: k3041 
o|contracted procedure: k3044 
o|contracted procedure: k3052 
o|contracted procedure: k3095 
o|contracted procedure: k3084 
o|contracted procedure: k3088 
o|contracted procedure: k3111 
o|contracted procedure: k3114 
o|contracted procedure: k3117 
o|contracted procedure: k3120 
o|contracted procedure: k3130 
o|contracted procedure: k3141 
o|contracted procedure: k3163 
o|contracted procedure: k3159 
o|contracted procedure: k3144 
o|contracted procedure: k3147 
o|contracted procedure: k3155 
o|contracted procedure: k3191 
o|contracted procedure: k3176 
o|contracted procedure: k3187 
o|contracted procedure: k3183 
o|contracted procedure: k3208 
o|contracted procedure: k3225 
o|contracted procedure: k3246 
o|contracted procedure: k3242 
o|contracted procedure: k3262 
o|contracted procedure: k3273 
o|contracted procedure: k3285 
o|contracted procedure: k3289 
o|contracted procedure: k3296 
o|contracted procedure: k3302 
o|contracted procedure: k3381 
o|contracted procedure: k3312 
o|contracted procedure: k3344 
o|contracted procedure: k3332 
o|contracted procedure: k3336 
o|contracted procedure: k3377 
o|contracted procedure: k3398 
o|contracted procedure: k3403 
o|contracted procedure: k3415 
o|contracted procedure: k3438 
o|contracted procedure: k3445 
o|contracted procedure: k3448 
o|contracted procedure: k3451 
o|contracted procedure: k3487 
o|contracted procedure: k3460 
o|contracted procedure: k3467 
o|contracted procedure: k3471 
o|contracted procedure: k3478 
o|contracted procedure: k3482 
o|contracted procedure: k3514 
o|contracted procedure: k3500 
o|contracted procedure: k3507 
o|contracted procedure: k1598 
o|contracted procedure: k1601 
o|contracted procedure: k1613 
o|contracted procedure: k1629 
o|contracted procedure: k1637 
o|contracted procedure: k1644 
o|contracted procedure: k1668 
o|contracted procedure: k1685 
o|contracted procedure: k1707 
o|contracted procedure: k1703 
o|contracted procedure: k1688 
o|contracted procedure: k1691 
o|contracted procedure: k1699 
o|contracted procedure: k1714 
o|contracted procedure: k1722 
o|contracted procedure: k1734 
o|contracted procedure: k1756 
o|contracted procedure: k1752 
o|contracted procedure: k1737 
o|contracted procedure: k1740 
o|contracted procedure: k1748 
o|contracted procedure: k1808 
o|contracted procedure: k1823 
o|contracted procedure: k1811 
o|contracted procedure: k3523 
o|contracted procedure: k3526 
o|contracted procedure: k3529 
o|contracted procedure: k3537 
o|contracted procedure: k3634 
o|contracted procedure: k3552 
o|contracted procedure: k3565 
o|contracted procedure: k3568 
o|contracted procedure: k3627 
o|contracted procedure: k3574 
o|contracted procedure: k3592 
o|contracted procedure: k3588 
o|contracted procedure: k3600 
o|contracted procedure: k3607 
o|contracted procedure: k3614 
o|contracted procedure: k3604 
o|contracted procedure: k3655 
o|contracted procedure: k3943 
o|contracted procedure: k3947 
o|contracted procedure: k3951 
o|contracted procedure: k3659 
o|contracted procedure: k3669 
o|contracted procedure: k3934 
o|contracted procedure: k3672 
o|contracted procedure: k3684 
o|contracted procedure: k3735 
o|contracted procedure: k3699 
o|contracted procedure: k3695 
o|contracted procedure: k3707 
o|contracted procedure: k3714 
o|contracted procedure: k3725 
o|contracted procedure: k3721 
o|contracted procedure: k3711 
o|contracted procedure: k3741 
o|contracted procedure: k3744 
o|contracted procedure: k3761 
o|contracted procedure: k3765 
o|contracted procedure: k3894 
o|contracted procedure: k3769 
o|contracted procedure: k3845 
o|contracted procedure: k3853 
o|contracted procedure: k3773 
o|contracted procedure: k3789 
o|contracted procedure: k3801 
o|contracted procedure: k3785 
o|contracted procedure: k3777 
o|contracted procedure: k3757 
o|contracted procedure: k3816 
o|contracted procedure: k3838 
o|contracted procedure: k3834 
o|contracted procedure: k3819 
o|contracted procedure: k3822 
o|contracted procedure: k3830 
o|contracted procedure: k3865 
o|contracted procedure: k3887 
o|contracted procedure: k3883 
o|contracted procedure: k3868 
o|contracted procedure: k3871 
o|contracted procedure: k3879 
o|contracted procedure: k3920 
o|contracted procedure: k3926 
o|simplifications: ((let . 39)) 
o|removed binding forms: 182 
o|inlining procedure: k2758 
o|inlining procedure: k2758 
o|inlining procedure: k3596 
o|inlining procedure: k3596 
o|inlining procedure: k3703 
o|inlining procedure: k3703 
o|removed binding forms: 3 
o|direct leaf routine/allocation: loop224 0 
o|direct leaf routine/allocation: loop237 0 
o|converted assignments to bindings: (loop224) 
o|contracted procedure: k1653 
o|converted assignments to bindings: (loop237) 
o|simplifications: ((let . 2)) 
o|removed binding forms: 1 
o|customizable procedures: (k3675 map-loop625643 map-loop652670 g720729 map-loop714732 map-loop168186 map-loop195213 loop164 foldr153156 g158159 loop744 k3269 k3108 map-loop887904 map-loop930947 map-loop970987 annotate-foreign-procedure806 compiler-only-er-transformer590 map-loop814839 k2747) 
o|calls to known targets: 56 
o|identified direct recursive calls: f_1769 1 
o|identified direct recursive calls: f_2933 1 
o|identified direct recursive calls: f_3033 1 
o|identified direct recursive calls: f_3136 1 
o|identified direct recursive calls: f_3433 1 
o|identified direct recursive calls: f_1608 1 
o|identified direct recursive calls: f_1803 1 
o|identified direct recursive calls: f_1680 1 
o|identified direct recursive calls: f_1729 1 
o|identified direct recursive calls: f_3811 1 
o|identified direct recursive calls: f_3860 1 
o|fast box initializations: 12 
o|dropping unused closure argument: f_1769 
o|dropping unused closure argument: f_1803 
o|dropping unused closure argument: f_2676 
o|dropping unused closure argument: f_2722 
*/
/* end of file */
