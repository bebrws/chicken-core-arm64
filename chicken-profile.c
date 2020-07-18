/* Generated from chicken-profile.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.2.0 (rev 317468e4)
   macosx-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: chicken-profile.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -output-file chicken-profile.c
   uses: library eval expand file posix internal data-structures
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_externimport void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_externimport void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[94];
static double C_possibly_force_alignment;


C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word *av) C_noret;
C_noret_decl(f_1253)
static void C_ccall f_1253(C_word c,C_word *av) C_noret;
C_noret_decl(f_1256)
static void C_ccall f_1256(C_word c,C_word *av) C_noret;
C_noret_decl(f_1259)
static void C_ccall f_1259(C_word c,C_word *av) C_noret;
C_noret_decl(f_1262)
static void C_ccall f_1262(C_word c,C_word *av) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word *av) C_noret;
C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word *av) C_noret;
C_noret_decl(f_1271)
static void C_ccall f_1271(C_word c,C_word *av) C_noret;
C_noret_decl(f_1381)
static void C_fcall f_1381(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1399)
static void C_ccall f_1399(C_word c,C_word *av) C_noret;
C_noret_decl(f_1891)
static void C_fcall f_1891(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word *av) C_noret;
C_noret_decl(f_2558)
static void C_fcall f_2558(C_word t0) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word *av) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word *av) C_noret;
C_noret_decl(f_2605)
static void C_fcall f_2605(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2615)
static void C_fcall f_2615(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622(C_word c,C_word *av) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word *av) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word *av) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word *av) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word *av) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word *av) C_noret;
C_noret_decl(f_2655)
static void C_fcall f_2655(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2674)
static void C_fcall f_2674(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2678)
static void C_ccall f_2678(C_word c,C_word *av) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word *av) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word *av) C_noret;
C_noret_decl(f_2715)
static void C_ccall f_2715(C_word c,C_word *av) C_noret;
C_noret_decl(f_2722)
static void C_ccall f_2722(C_word c,C_word *av) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word *av) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word *av) C_noret;
C_noret_decl(f_2752)
static void C_ccall f_2752(C_word c,C_word *av) C_noret;
C_noret_decl(f_2788)
static void C_ccall f_2788(C_word c,C_word *av) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word *av) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word *av) C_noret;
C_noret_decl(f_2882)
static void C_ccall f_2882(C_word c,C_word *av) C_noret;
C_noret_decl(f_2910)
static void C_ccall f_2910(C_word c,C_word *av) C_noret;
C_noret_decl(f_2918)
static void C_ccall f_2918(C_word c,C_word *av) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word *av) C_noret;
C_noret_decl(f_2936)
static void C_fcall f_2936(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word *av) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word *av) C_noret;
C_noret_decl(f_2974)
static void C_ccall f_2974(C_word c,C_word *av) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word *av) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word *av) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word *av) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word *av) C_noret;
C_noret_decl(f_3007)
static void C_ccall f_3007(C_word c,C_word *av) C_noret;
C_noret_decl(f_3010)
static void C_ccall f_3010(C_word c,C_word *av) C_noret;
C_noret_decl(f_3015)
static void C_ccall f_3015(C_word c,C_word *av) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word *av) C_noret;
C_noret_decl(f_3026)
static void C_fcall f_3026(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3036)
static void C_ccall f_3036(C_word c,C_word *av) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word *av) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word *av) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word *av) C_noret;
C_noret_decl(f_3082)
static void C_fcall f_3082(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3092)
static void C_fcall f_3092(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word *av) C_noret;
C_noret_decl(f_3162)
static void C_ccall f_3162(C_word c,C_word *av) C_noret;
C_noret_decl(f_3209)
static void C_fcall f_3209(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word *av) C_noret;
C_noret_decl(f_3220)
static void C_ccall f_3220(C_word c,C_word *av) C_noret;
C_noret_decl(f_3228)
static void C_ccall f_3228(C_word c,C_word *av) C_noret;
C_noret_decl(f_3232)
static void C_ccall f_3232(C_word c,C_word *av) C_noret;
C_noret_decl(f_3240)
static void C_ccall f_3240(C_word c,C_word *av) C_noret;
C_noret_decl(f_3244)
static void C_ccall f_3244(C_word c,C_word *av) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word *av) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word *av) C_noret;
C_noret_decl(f_3270)
static void C_ccall f_3270(C_word c,C_word *av) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word *av) C_noret;
C_noret_decl(f_3283)
static void C_ccall f_3283(C_word c,C_word *av) C_noret;
C_noret_decl(f_3286)
static void C_ccall f_3286(C_word c,C_word *av) C_noret;
C_noret_decl(f_3289)
static void C_fcall f_3289(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3314)
static void C_ccall f_3314(C_word c,C_word *av) C_noret;
C_noret_decl(f_3318)
static void C_ccall f_3318(C_word c,C_word *av) C_noret;
C_noret_decl(f_3322)
static void C_ccall f_3322(C_word c,C_word *av) C_noret;
C_noret_decl(f_3326)
static void C_ccall f_3326(C_word c,C_word *av) C_noret;
C_noret_decl(f_3330)
static void C_ccall f_3330(C_word c,C_word *av) C_noret;
C_noret_decl(f_3334)
static void C_ccall f_3334(C_word c,C_word *av) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340(C_word c,C_word *av) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word *av) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word *av) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word *av) C_noret;
C_noret_decl(f_3380)
static void C_ccall f_3380(C_word c,C_word *av) C_noret;
C_noret_decl(f_3382)
static void C_fcall f_3382(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3390)
static void C_ccall f_3390(C_word c,C_word *av) C_noret;
C_noret_decl(f_3403)
static void C_ccall f_3403(C_word c,C_word *av) C_noret;
C_noret_decl(f_3405)
static void C_fcall f_3405(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3412)
static void C_fcall f_3412(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3438)
static void C_ccall f_3438(C_word c,C_word *av) C_noret;
C_noret_decl(f_3468)
static void C_ccall f_3468(C_word c,C_word *av) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word *av) C_noret;
C_noret_decl(f_3479)
static void C_fcall f_3479(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word *av) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word *av) C_noret;
C_noret_decl(f_3515)
static void C_ccall f_3515(C_word c,C_word *av) C_noret;
C_noret_decl(f_3525)
static void C_fcall f_3525(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3549)
static void C_fcall f_3549(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word *av) C_noret;
C_noret_decl(f_3589)
static void C_fcall f_3589(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word *av) C_noret;
C_noret_decl(f_3637)
static void C_fcall f_3637(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3672)
static void C_ccall f_3672(C_word c,C_word *av) C_noret;
C_noret_decl(f_3680)
static void C_fcall f_3680(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3728)
static void C_ccall f_3728(C_word c,C_word *av) C_noret;
C_noret_decl(f_3732)
static void C_ccall f_3732(C_word c,C_word *av) C_noret;
C_noret_decl(f_3741)
static void C_fcall f_3741(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word *av) C_noret;
C_noret_decl(f_3766)
static void C_fcall f_3766(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word *av) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word *av) C_noret;
C_noret_decl(f_3797)
static void C_fcall f_3797(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3822)
static void C_ccall f_3822(C_word c,C_word *av) C_noret;
C_noret_decl(f_3831)
static void C_fcall f_3831(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3852)
static void C_ccall f_3852(C_word c,C_word *av) C_noret;
C_noret_decl(f_3860)
static void C_ccall f_3860(C_word c,C_word *av) C_noret;
C_noret_decl(f_3869)
static void C_ccall f_3869(C_word c,C_word *av) C_noret;
C_noret_decl(f_3880)
static void C_ccall f_3880(C_word c,C_word *av) C_noret;
C_noret_decl(f_3886)
static void C_ccall f_3886(C_word c,C_word *av) C_noret;
C_noret_decl(f_3890)
static void C_ccall f_3890(C_word c,C_word *av) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(va4337)
static void C_fcall va4337(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1381)
static void C_ccall trf_1381(C_word c,C_word *av) C_noret;
static void C_ccall trf_1381(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1381(t0,t1,t2);}

C_noret_decl(trf_1891)
static void C_ccall trf_1891(C_word c,C_word *av) C_noret;
static void C_ccall trf_1891(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1891(t0,t1,t2);}

C_noret_decl(trf_2558)
static void C_ccall trf_2558(C_word c,C_word *av) C_noret;
static void C_ccall trf_2558(C_word c,C_word *av){
C_word t0=av[0];
f_2558(t0);}

C_noret_decl(trf_2605)
static void C_ccall trf_2605(C_word c,C_word *av) C_noret;
static void C_ccall trf_2605(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2605(t0,t1,t2);}

C_noret_decl(trf_2615)
static void C_ccall trf_2615(C_word c,C_word *av) C_noret;
static void C_ccall trf_2615(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2615(t0,t1);}

C_noret_decl(trf_2655)
static void C_ccall trf_2655(C_word c,C_word *av) C_noret;
static void C_ccall trf_2655(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2655(t0,t1);}

C_noret_decl(trf_2674)
static void C_ccall trf_2674(C_word c,C_word *av) C_noret;
static void C_ccall trf_2674(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2674(t0,t1);}

C_noret_decl(trf_2936)
static void C_ccall trf_2936(C_word c,C_word *av) C_noret;
static void C_ccall trf_2936(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2936(t0,t1,t2);}

C_noret_decl(trf_3026)
static void C_ccall trf_3026(C_word c,C_word *av) C_noret;
static void C_ccall trf_3026(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3026(t0,t1,t2);}

C_noret_decl(trf_3082)
static void C_ccall trf_3082(C_word c,C_word *av) C_noret;
static void C_ccall trf_3082(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3082(t0,t1,t2,t3);}

C_noret_decl(trf_3092)
static void C_ccall trf_3092(C_word c,C_word *av) C_noret;
static void C_ccall trf_3092(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3092(t0,t1);}

C_noret_decl(trf_3209)
static void C_ccall trf_3209(C_word c,C_word *av) C_noret;
static void C_ccall trf_3209(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3209(t0,t1,t2);}

C_noret_decl(trf_3289)
static void C_ccall trf_3289(C_word c,C_word *av) C_noret;
static void C_ccall trf_3289(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3289(t0,t1);}

C_noret_decl(trf_3382)
static void C_ccall trf_3382(C_word c,C_word *av) C_noret;
static void C_ccall trf_3382(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3382(t0,t1,t2);}

C_noret_decl(trf_3405)
static void C_ccall trf_3405(C_word c,C_word *av) C_noret;
static void C_ccall trf_3405(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3405(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3412)
static void C_ccall trf_3412(C_word c,C_word *av) C_noret;
static void C_ccall trf_3412(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3412(t0,t1);}

C_noret_decl(trf_3479)
static void C_ccall trf_3479(C_word c,C_word *av) C_noret;
static void C_ccall trf_3479(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3479(t0,t1,t2);}

C_noret_decl(trf_3525)
static void C_ccall trf_3525(C_word c,C_word *av) C_noret;
static void C_ccall trf_3525(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3525(t0,t1,t2,t3);}

C_noret_decl(trf_3549)
static void C_ccall trf_3549(C_word c,C_word *av) C_noret;
static void C_ccall trf_3549(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3549(t0,t1,t2,t3);}

C_noret_decl(trf_3589)
static void C_ccall trf_3589(C_word c,C_word *av) C_noret;
static void C_ccall trf_3589(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3589(t0,t1,t2,t3);}

C_noret_decl(trf_3637)
static void C_ccall trf_3637(C_word c,C_word *av) C_noret;
static void C_ccall trf_3637(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3637(t0,t1,t2);}

C_noret_decl(trf_3680)
static void C_ccall trf_3680(C_word c,C_word *av) C_noret;
static void C_ccall trf_3680(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3680(t0,t1,t2);}

C_noret_decl(trf_3741)
static void C_ccall trf_3741(C_word c,C_word *av) C_noret;
static void C_ccall trf_3741(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3741(t0,t1,t2);}

C_noret_decl(trf_3766)
static void C_ccall trf_3766(C_word c,C_word *av) C_noret;
static void C_ccall trf_3766(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3766(t0,t1);}

C_noret_decl(trf_3797)
static void C_ccall trf_3797(C_word c,C_word *av) C_noret;
static void C_ccall trf_3797(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3797(t0,t1,t2);}

C_noret_decl(trf_3831)
static void C_ccall trf_3831(C_word c,C_word *av) C_noret;
static void C_ccall trf_3831(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3831(t0,t1,t2,t3);}

C_noret_decl(trva4337)
static void C_ccall trva4337(C_word c,C_word *av) C_noret;
static void C_ccall trva4337(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va4337(t0,t1);}

/* k1248 */
static void C_ccall f_1250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1250,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1253,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1251 in k1248 */
static void C_ccall f_1253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1253,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1256,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k1254 in k1251 in k1248 */
static void C_ccall f_1256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1256,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1259,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_1259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1259,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1262,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_1262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1262,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1265,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_1265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1265,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1268,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_1268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_1268,c,av);}
a=C_alloc(13);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1271,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3892,tmp=(C_word)a,a+=2,tmp);
/* chicken-profile.scm:29: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[93]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_1271(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_1271,c,av);}
a=C_alloc(24);
t2=C_mutate(&lf[1] /* (set! main#take ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1381,tmp=(C_word)a,a+=2,tmp));
t3=lf[2] /* main#file */ =C_SCHEME_FALSE;;
t4=lf[3] /* main#no-unused */ =C_SCHEME_FALSE;;
t5=lf[4] /* main#seconds-digits */ =C_fix(3);;
t6=lf[5] /* main#average-digits */ =C_fix(3);;
t7=lf[6] /* main#percent-digits */ =C_fix(3);;
t8=lf[7] /* main#top */ =C_fix(0);;
t9=C_mutate(&lf[8] /* (set! main#print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2558,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[16] /* (set! main#sort-by-calls ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2819,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate(&lf[17] /* (set! main#sort-by-time ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2853,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate(&lf[18] /* (set! main#sort-by-avg ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2882,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate(&lf[19] /* (set! main#sort-by-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2910,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[17],C_text("main#sort-by-time")));
t15=C_mutate(&lf[23] /* (set! main#read-profile ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2994,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate(&lf[32] /* (set! main#format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3143,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate(&lf[35] /* (set! main#format-real ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3209,tmp=(C_word)a,a+=2,tmp));
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3880,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3890,a[2]=t18,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:262: chicken.process-context#command-line-arguments */
t20=C_fast_retrieve(lf[90]);{
C_word *av2=av;
av2[0]=t20;
av2[1]=t19;
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}

/* main#take in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_1381(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1381,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1399,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:56: take */
t7=t5;
t8=C_u_i_cdr(t2);
t9=C_fixnum_difference(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k1397 in main#take in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_1399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1399,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* foldr281 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_1891(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1891,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1920,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=t4;
t7=C_slot(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1918 in foldr281 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_1920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1920,c,av);}
a=C_alloc(3);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_greaterp(t2,C_fix(0));
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_a_i_cons(&a,2,((C_word*)t0)[2],t1):t1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* main#print-usage in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_2558(C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(27,0,2)))){
C_save_and_reclaim_args((void *)trf_2558,1,t1);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2562,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2569,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[11],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,C_retrieve2(lf[6],C_text("main#percent-digits")),t4);
t6=C_a_i_cons(&a,2,lf[12],t5);
t7=C_a_i_cons(&a,2,C_retrieve2(lf[5],C_text("main#average-digits")),t6);
t8=C_a_i_cons(&a,2,lf[13],t7);
t9=C_a_i_cons(&a,2,C_retrieve2(lf[4],C_text("main#seconds-digits")),t8);
t10=C_a_i_cons(&a,2,lf[14],t9);
/* chicken-profile.scm:29: ##sys#print-to-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[3];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t3;
av2[2]=t10;
tp(3,av2);}}

/* k2560 in main#print-usage in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2562,c,av);}
/* chicken-profile.scm:76: chicken.base#exit */
t2=C_fast_retrieve(lf[9]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(64);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2567 in main#print-usage in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2569,c,av);}
/* chicken-profile.scm:55: scheme#display */
t2=*((C_word*)lf[10]+1);{
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

/* loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_2605(C_word t0,C_word t1,C_word t2){
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
C_word t16;
C_word t17;
C_word t18;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,3)))){
C_save_and_reclaim_args((void *)trf_2605,3,t0,t1,t2);}
a=C_alloc(23);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2615,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[2],C_text("main#file")))){
t4=t3;
f_2615(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2622,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:84: chicken.file#glob */
t5=C_fast_retrieve(lf[68]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[69];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2655,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2674,a[2]=t3,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2697,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_truep(C_i_equalp(t3,lf[73]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[74]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[75]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
/* chicken-profile.scm:104: print-usage */
f_2558(t11);}
else{
if(C_truep(C_i_string_equal_p(t3,lf[76]))){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2715,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2722,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:106: chicken.platform#chicken-version */
t14=C_fast_retrieve(lf[78]);{
C_word av2[2];
av2[0]=t14;
av2[1]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[79]))){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2730,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2737,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:109: chicken.platform#chicken-version */
t14=C_fast_retrieve(lf[78]);{
C_word av2[2];
av2[0]=t14;
av2[1]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[80]))){
t12=lf[3] /* main#no-unused */ =C_SCHEME_TRUE;;
/* chicken-profile.scm:122: loop */
t17=t1;
t18=((C_word*)t5)[1];
t1=t17;
t2=t18;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[81]))){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2752,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:112: next-number */
t13=t8;
f_2674(t13,t12);}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[82]))){
t12=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[16],C_text("main#sort-by-calls")));
/* chicken-profile.scm:122: loop */
t17=t1;
t18=((C_word*)t5)[1];
t1=t17;
t2=t18;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[83]))){
t12=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[17],C_text("main#sort-by-time")));
/* chicken-profile.scm:122: loop */
t17=t1;
t18=((C_word*)t5)[1];
t1=t17;
t2=t18;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[84]))){
t12=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[18],C_text("main#sort-by-avg")));
/* chicken-profile.scm:122: loop */
t17=t1;
t18=((C_word*)t5)[1];
t1=t17;
t2=t18;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[85]))){
t12=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[19],C_text("main#sort-by-name")));
t13=t11;{
C_word av2[2];
av2[0]=t13;
av2[1]=t12;
f_2697(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(t3,lf[86]))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2788,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
/* chicken-profile.scm:117: next-arg */
t13=((C_word*)t7)[1];
f_2655(t13,t12);}
else{
t12=C_block_size(t3);
t13=C_fixnum_greaterp(t12,C_fix(1));
t14=(C_truep(t13)?C_u_i_char_equalp(C_make_character(45),C_i_string_ref(t3,C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t14)){
/* chicken-profile.scm:119: chicken.base#error */
t15=*((C_word*)lf[65]+1);{
C_word av2[4];
av2[0]=t15;
av2[1]=t11;
av2[2]=lf[89];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[2],C_text("main#file")))){
/* chicken-profile.scm:120: print-usage */
f_2558(t11);}
else{
t15=C_mutate(&lf[2] /* (set! main#file ...) */,t3);
/* chicken-profile.scm:122: loop */
t17=t1;
t18=((C_word*)t5)[1];
t1=t17;
t2=t18;
goto loop;}}}}}}}}}}}}}}

/* k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_2615(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_2615,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3270,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:205: chicken.base#print */
t3=*((C_word*)lf[51]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[63];
av2[3]=C_retrieve2(lf[2],C_text("main#file"));
av2[4]=lf[64];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2620 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2622,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2625,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t1))){
/* chicken-profile.scm:86: chicken.base#error */
t3=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[66];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2638,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2640,tmp=(C_word)a,a+=2,tmp);
/* chicken-profile.scm:87: chicken.sort#sort */
t5=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2623 in k2620 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2625,c,av);}
t2=C_mutate(&lf[2] /* (set! main#file ...) */,t1);
t3=((C_word*)t0)[2];
f_2615(t3,t2);}

/* k2636 in k2620 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2638,c,av);}
t2=C_i_car(t1);
t3=C_mutate(&lf[2] /* (set! main#file ...) */,t2);
t4=((C_word*)t0)[2];
f_2615(t4,t3);}

/* a2639 in k2620 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2640,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2645,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:89: chicken.file.posix#file-modification-time */
t5=C_fast_retrieve(lf[67]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2643 in a2639 in k2620 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2645,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2649,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:90: chicken.file.posix#file-modification-time */
t3=C_fast_retrieve(lf[67]);{
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

/* k2647 in k2643 in a2639 in k2620 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2649,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_integer_greaterp(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* next-arg in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_2655(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2655,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
/* chicken-profile.scm:96: chicken.base#error */
t2=*((C_word*)lf[65]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[70];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* next-number in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_2674(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_2674,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2678,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2694,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:101: next-arg */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2655(t4,t3);}

/* k2676 in next-number in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2678,c,av);}
if(C_truep(t1)){
if(C_truep(C_i_greaterp(t1,C_fix(0)))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-profile.scm:102: chicken.base#error */
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[71];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}
else{
/* chicken-profile.scm:102: chicken.base#error */
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[71];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2692 in next-number in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2694,c,av);}
/* chicken-profile.scm:101: scheme#string->number */
t2=*((C_word*)lf[72]+1);{
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

/* k2695 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2697,c,av);}
/* chicken-profile.scm:122: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2605(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2713 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2715,c,av);}
/* chicken-profile.scm:107: chicken.base#exit */
t2=C_fast_retrieve(lf[9]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2720 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2722,c,av);}
/* chicken-profile.scm:106: chicken.base#print */
t2=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[77];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2728 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2730,c,av);}
/* chicken-profile.scm:110: chicken.base#exit */
t2=C_fast_retrieve(lf[9]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2735 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2737,c,av);}
/* chicken-profile.scm:109: chicken.base#print */
t2=*((C_word*)lf[51]+1);{
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

/* k2750 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2752,c,av);}
t2=C_mutate(&lf[7] /* (set! main#top ...) */,t1);
/* chicken-profile.scm:122: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2605(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2786 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2788,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2936,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_i_string_length(t1);
t4=C_eqp(t3,C_fix(3));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2970,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-profile.scm:159: arg-digit */
t6=t2;
f_2936(t6,t5,C_fix(0));}
else{
/* chicken-profile.scm:162: chicken.base#error */
t5=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[88];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* main#sort-by-calls in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2819(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2819,c,av);}
t4=C_i_cadr(t2);
t5=C_i_cadr(t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=(C_truep(C_i_eqvp(t4,t5))?C_i_greaterp(C_i_caddr(t2),C_i_caddr(t3)):(C_truep(t4)?(C_truep(t5)?C_i_greaterp(t4,t5):C_SCHEME_TRUE):C_SCHEME_TRUE));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* main#sort-by-time in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2853(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2853,c,av);}
t4=C_i_caddr(t2);
t5=C_i_caddr(t3);
t6=C_i_nequalp(t4,t5);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(C_truep(t6)?C_i_greaterp(C_i_cadr(t2),C_i_cadr(t3)):C_i_greaterp(t4,t5));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* main#sort-by-avg in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2882(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2882,c,av);}
t4=C_i_cadddr(t2);
t5=C_i_cadddr(t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=(C_truep(C_i_eqvp(t4,t5))?C_i_greaterp(C_i_caddr(t2),C_i_caddr(t3)):C_i_greaterp(t4,t5));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* main#sort-by-name in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2910,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2918,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:146: scheme#symbol->string */
t5=*((C_word*)lf[21]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2916 in main#sort-by-name in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2918,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2922,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:146: scheme#symbol->string */
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2920 in k2916 in main#sort-by-name in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2922,c,av);}
/* chicken-profile.scm:146: scheme#string<? */
t2=*((C_word*)lf[20]+1);{
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

/* arg-digit in k2786 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_2936(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2936,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_string_ref(((C_word*)t0)[2],t2);
t4=C_fix(C_character_code(t3));
t5=C_a_i_fixnum_difference(&a,2,t4,C_fix(48));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2948,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:154: scheme#<= */{
C_word av2[5];
av2[0]=0;
av2[1]=t6;
av2[2]=C_fix(0);
av2[3]=t5;
av2[4]=C_fix(9);
C_less_or_equal_p(5,av2);}}

/* k2946 in arg-digit in k2786 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2948,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(C_i_integer_equalp(((C_word*)t0)[3],C_fix(9)))?C_fix(8):((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-profile.scm:156: chicken.base#error */
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[87];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2968 in k2786 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2970,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[4] /* (set! main#seconds-digits ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken-profile.scm:160: arg-digit */
t4=((C_word*)t0)[5];
f_2936(t4,t3,C_fix(1));}

/* k2972 in k2968 in k2786 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2974,c,av);}
a=C_alloc(5);
t2=C_mutate(&lf[5] /* (set! main#average-digits ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:161: arg-digit */
t4=((C_word*)t0)[5];
f_2936(t4,t3,C_fix(2));}

/* k2976 in k2972 in k2968 in k2786 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2978,c,av);}
t2=C_mutate(&lf[6] /* (set! main#percent-digits ...) */,t1);
/* chicken-profile.scm:122: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2605(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2994,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2998,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:165: scheme#make-vector */
t3=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(3001);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2996 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_2998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2998,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3001,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:169: scheme#read */
t3=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2999 in k2996 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3001,c,av);}
a=C_alloc(9);
t2=C_i_symbolp(t1);
t3=(C_truep(t2)?t1:lf[24]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3007,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3024,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t1))){
/* chicken-profile.scm:171: scheme#read */
t6=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
f_3024(2,av2);}}}

/* k3005 in k2999 in k2996 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_3007,c,av);}
a=C_alloc(10);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3010,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3015,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:179: chicken.internal#hash-table-for-each */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[25]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t4;
av2[2]=t5;
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k3008 in k3005 in k2999 in k2996 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3010,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3014 in k3005 in k2999 in k2996 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3015(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3015,c,av);}
a=C_alloc(6);
t4=((C_word*)((C_word*)t0)[2])[1];
t5=C_a_i_cons(&a,2,t2,t3);
t6=C_a_i_cons(&a,2,t5,t4);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k3022 in k2999 in k2996 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3024,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3026,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3026(t5,((C_word*)t0)[3],t1);}

/* doloop637 in k3022 in k2999 in k2996 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3026(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,3)))){
C_save_and_reclaim_args((void *)trf_3026,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3036,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3065,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t7,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* chicken-profile.scm:176: chicken.internal#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word av2[4];
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t9;
av2[2]=((C_word*)t0)[3];
av2[3]=C_i_car(t2);
tp(4,av2);}}}

/* k3034 in doloop637 in k3022 in k2999 in k2996 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3036,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3043,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:171: scheme#read */
t3=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3041 in k3034 in doloop637 in k3022 in k2999 in k2996 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3043,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3026(t2,((C_word*)t0)[3],t1);}

/* k3063 in doloop637 in k3022 in k2999 in k2996 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3065(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3065,c,av);}
a=C_alloc(12);
t2=(C_truep(t1)?t1:lf[27]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_check_list_2(t2,lf[28]);
t5=C_i_check_list_2(t3,lf[28]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3080,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3082,a[2]=((C_word*)t0)[6],a[3]=t8,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3082(t10,t6,t2,t3);}

/* k3078 in k3063 in doloop637 in k3022 in k2999 in k2996 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3080,c,av);}
/* chicken-profile.scm:173: chicken.internal#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* map-loop642 in k3063 in doloop637 in k3022 in k2999 in k2996 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3082(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(39,0,2)))){
C_save_and_reclaim_args((void *)trf_3082,4,t0,t1,t2,t3);}
a=C_alloc(39);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
if(C_truep(t7)){
if(C_truep(t8)){
t9=C_s_a_i_plus(&a,2,t7,t8);
t10=t6;
f_3092(t10,C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST));}
else{
t9=t6;
f_3092(t9,C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST));}}
else{
t9=t6;
f_3092(t9,C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST));}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3090 in map-loop642 in k3063 in doloop637 in k3022 in k2999 in k2996 in main#read-profile in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3092(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3092,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t4=((C_word*)((C_word*)t0)[3])[1];
f_3082(t4,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)));}

/* main#format-string in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3143(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3143,c,av);}
a=C_alloc(5);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_make_character(32):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_i_string_length(t2);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3162,a[2]=t5,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t12=C_fixnum_difference(t3,t10);
/* chicken-profile.scm:187: scheme#make-string */
t13=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t11;
av2[2]=C_i_fixnum_max(C_fix(0),t12);
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}

/* k3160 in main#format-string in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3162,c,av);}
if(C_truep(((C_word*)t0)[2])){
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
tp(4,av2);}}}

/* main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3209(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3209,3,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3213,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3264,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:193: scheme#truncate */
t6=*((C_word*)lf[42]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3211 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3213,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=C_fix(10);
tp(4,av2);}}

/* k3218 in k3211 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3220(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(48,c,2)))){
C_save_and_reclaim((void *)f_3220,c,av);}
a=C_alloc(48);
t2=C_i_greaterp(((C_word*)t0)[2],C_fix(0));
t3=(C_truep(t2)?lf[36]:lf[37]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3228,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3232,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3240,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3244,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va4337,a[2]=t7,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=t8;
va4337(t9,C_s_a_i_minus(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]));}

/* k3226 in k3218 in k3211 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3228,c,av);}
/* chicken-profile.scm:194: scheme#string-append */
t2=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3230 in k3218 in k3211 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_3232,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* chicken-profile.scm:197: scheme#substring */
t3=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_fix(1);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3238 in k3218 in k3211 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3240,c,av);}
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(10);
tp(4,av2);}}

/* k3242 in k3218 in k3211 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3244,c,av);}
/* chicken-profile.scm:199: scheme#inexact->exact */
t2=*((C_word*)lf[41]+1);{
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

/* k3254 */
static void C_ccall f_3256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_3256,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,((C_word*)t0)[2],t1);
/* chicken-profile.scm:200: scheme#truncate */
t3=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3262 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3264,c,av);}
/* chicken-profile.scm:193: scheme#inexact->exact */
t2=*((C_word*)lf[41]+1);{
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

/* k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3270,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3273,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm:206: scheme#with-input-from-file */
t3=C_fast_retrieve(lf[62]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[2],C_text("main#file"));
av2[3]=C_retrieve2(lf[23],C_text("main#read-profile"));
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3273(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_3273,c,av);}
a=C_alloc(10);
t2=C_i_car(t1);
t3=C_u_i_cdr(t1);
t4=C_i_check_list_2(t3,lf[45]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3283,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3831,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3831(t9,t5,t3,C_fix(0));}

/* k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3283(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_3283,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3286,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3741,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3795,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3797,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_3797(t12,t8,((C_word*)t0)[3]);}

/* k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_3286,c,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3289,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3728,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:230: scheme#< */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=C_fix(0);
av2[3]=C_retrieve2(lf[7],C_text("main#top"));
av2[4]=C_i_length(((C_word*)t3)[1]);
C_lessp(5,av2);}}

/* k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3289(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_3289,2,t0,t1);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[3],C_text("main#no-unused")))){
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_i_check_list_2(t7,lf[59]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1891,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t12=((C_word*)t10)[1];
f_1891(t12,t6,t7);}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_3356(2,av2);}}}

/* k3312 in map-loop775 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3314,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3318,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_not(((C_word*)t0)[9]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[57];
f_3318(2,av2);}}
else{
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=C_fix(10);
tp(4,av2);}}}

/* k3316 in k3312 in map-loop775 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3318,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3322,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3340,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#/-2 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
av2[3]=C_fix(1000);
tp(4,av2);}}

/* k3320 in k3316 in k3312 in map-loop775 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3322,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3334,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#/-2 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
av2[3]=C_fix(1000);
tp(4,av2);}}

/* k3324 in k3320 in k3316 in k3312 in map-loop775 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_ccall f_3326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3326,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-profile.scm:241: format-real */
f_3209(t2,((C_word*)t0)[9],C_retrieve2(lf[6],C_text("main#percent-digits")));}

/* k3328 in k3324 in k3320 in k3316 in k3312 in map-loop775 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in ... */
static void C_ccall f_3330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_3330,c,av);}
a=C_alloc(18);
t2=C_a_i_list5(&a,5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=((C_word*)((C_word*)t0)[7])[1];
f_3680(t6,((C_word*)t0)[8],C_slot(((C_word*)t0)[9],C_fix(1)));}

/* k3332 in k3320 in k3316 in k3312 in map-loop775 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_ccall f_3334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3334,c,av);}
/* chicken-profile.scm:240: format-real */
f_3209(((C_word*)t0)[2],t1,C_retrieve2(lf[5],C_text("main#average-digits")));}

/* k3338 in k3316 in k3312 in map-loop775 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3340,c,av);}
/* chicken-profile.scm:239: format-real */
f_3209(((C_word*)t0)[2],t1,C_retrieve2(lf[4],C_text("main#seconds-digits")));}

/* k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3356(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3356,c,av);}
a=C_alloc(11);
t2=C_i_check_list_2(t1,lf[28]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3680,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3680(t7,t3,t1);}

/* k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,3)))){
C_save_and_reclaim((void *)f_3362,c,av);}
a=C_alloc(36);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_a_i_list5(&a,5,lf[46],lf[47],lf[48],lf[49],lf[50]);
t4=C_a_i_list5(&a,5,C_SCHEME_FALSE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3371,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[55]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t5;
av2[2]=C_fix(2);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3371(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,4)))){
C_save_and_reclaim((void *)f_3371,c,av);}
a=C_alloc(30);
t2=C_a_i_list5(&a,5,C_fix(0),C_fix(0),C_fix(0),C_fix(0),C_fix(0));
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3380,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3549,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_3549(t8,t4,t3,t2);}

/* k3378 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3380,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3382,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3468,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:256: print-row */
t4=t2;
f_3382(t4,t3,((C_word*)t0)[6]);}

/* print-row in k3378 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3382(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,5)))){
C_save_and_reclaim_args((void *)trf_3382,3,t0,t1,t2);}
a=C_alloc(19);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3390,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_retrieve2(lf[32],C_text("main#format-string"));
t9=C_i_check_list_2(t2,lf[28]);
t10=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3403,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3405,a[2]=t6,a[3]=t13,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_3405(t15,t11,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k3388 in print-row in k3378 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_ccall f_3390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3390,c,av);}
/* chicken-profile.scm:255: chicken.base#print */
t2=*((C_word*)lf[51]+1);{
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

/* k3401 in print-row in k3378 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_ccall f_3403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3403,c,av);}
/* chicken-profile.scm:255: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[52]);{
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

/* map-loop899 in print-row in k3378 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_fcall f_3405(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3405,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,a[7]=t4,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_3412(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_3412(t6,C_SCHEME_FALSE);}}

/* k3410 in map-loop899 in print-row in k3378 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in ... */
static void C_fcall f_3412(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_3412,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3438,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken-profile.scm:255: g905 */
t3=C_retrieve2(lf[32],C_text("main#format-string"));{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_slot(((C_word*)t0)[5],C_fix(0));
av2[3]=C_slot(((C_word*)t0)[6],C_fix(0));
av2[4]=C_slot(((C_word*)t0)[7],C_fix(0));
f_3143(5,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[8],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3436 in k3410 in map-loop899 in print-row in k3378 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in ... */
static void C_ccall f_3438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3438,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3405(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)),C_slot(((C_word*)t0)[7],C_fix(1)));}

/* k3466 in k3378 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3468(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_3468,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3504,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_check_list_2(((C_word*)t0)[5],lf[45]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3515,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3525,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_3525(t9,t5,((C_word*)t0)[5],C_fix(0));}

/* k3469 in k3466 in k3378 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_ccall f_3471(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3471,c,av);}
a=C_alloc(6);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(t2,lf[53]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3479,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3479(t7,((C_word*)t0)[4],t2);}

/* for-each-loop888 in k3469 in k3466 in k3378 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in ... */
static void C_fcall f_3479(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3479,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3489,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:260: g889 */
t4=((C_word*)t0)[3];
f_3382(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3487 in for-each-loop888 in k3469 in k3466 in k3378 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in ... */
static void C_ccall f_3489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3489,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3479(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k3502 in k3466 in k3378 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_ccall f_3504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3504,c,av);}
/* chicken-profile.scm:257: chicken.base#print */
t2=*((C_word*)lf[51]+1);{
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

/* k3513 in k3466 in k3378 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_ccall f_3515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_3515,c,av);}
a=C_alloc(39);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_a_i_fixnum_difference(&a,2,t2,C_fix(1));
t4=C_s_a_u_i_integer_times(&a,2,C_fix(2),t3);
t5=C_s_a_i_plus(&a,2,t1,t4);
/* chicken-profile.scm:257: scheme#make-string */
t6=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=t5;
av2[3]=C_make_character(45);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* foldl938 in k3466 in k3378 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_fcall f_3525(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_3525,4,t0,t1,t2,t3);}
a=C_alloc(29);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_s_a_i_plus(&a,2,t3,t5);
t8=t1;
t9=t4;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* foldl815 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3549(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(28,0,3)))){
C_save_and_reclaim_args((void *)trf_3549,4,t0,t1,t2,t3);}
a=C_alloc(28);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3672,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_slot(t2,C_fix(0));
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t12=t11;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t13)[1];
t15=C_i_check_list_2(t6,lf[28]);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3578,a[2]=t3,a[3]=t9,a[4]=t10,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3637,a[2]=t13,a[3]=t18,a[4]=t14,tmp=(C_word)a,a+=5,tmp));
t20=((C_word*)t18)[1];
f_3637(t20,t16,t6);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3576 in foldl815 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3578(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3578,c,av);}
a=C_alloc(7);
t2=C_i_check_list_2(t1,lf[28]);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3589,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3589(t7,((C_word*)t0)[5],t1,((C_word*)t0)[2]);}

/* map-loop828 in k3576 in foldl815 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 in ... */
static void C_fcall f_3589(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_3589,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm:251: g834 */
t7=*((C_word*)lf[54]+1);{
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
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3616 in map-loop828 in k3576 in foldl815 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in ... */
static void C_ccall f_3618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3618,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3589(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)));}

/* map-loop849 in foldl815 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3637(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3637,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_string_length(t3);
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

/* k3670 in foldl815 in k3369 in k3360 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3672,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3549(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop775 in k3354 in k3287 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3680(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_3680,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_i_caddr(t3);
t6=C_i_cadddr(t3);
t7=C_i_cddddr(t3);
t8=C_i_car(t7);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t8,a[7]=t6,a[8]=t5,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* chicken-profile.scm:237: ##sys#symbol->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word av2[3];
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t9;
av2[2]=C_i_car(t3);
tp(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3726 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3728,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3732,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:231: take */
f_1381(t2,((C_word*)((C_word*)t0)[2])[1],C_retrieve2(lf[7],C_text("main#top")));}
else{
t2=((C_word*)t0)[3];
f_3289(t2,C_SCHEME_UNDEFINED);}}

/* k3730 in k3726 in k3284 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3732,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_3289(t3,t2);}

/* g743 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3741(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3741,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cadr(t2);
t4=C_i_caddr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3759,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
if(C_truep(C_i_greaterp(t3,C_fix(0)))){
/* ##sys#/-2 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
tp(4,av2);}}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_3759(2,av2);}}}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_3759(2,av2);}}}

/* k3757 in g743 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3759,c,av);}
a=C_alloc(8);
t2=(C_truep(t1)?t1:C_fix(0));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3766,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(((C_word*)t0)[4],C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3779,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#/-2 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
t4=t3;
f_3766(t4,C_SCHEME_FALSE);}}

/* k3764 in k3757 in g743 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3766(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3766,2,t0,t1);}
a=C_alloc(6);
t2=(C_truep(t1)?C_a_i_list2(&a,2,((C_word*)t0)[2],t1):C_a_i_list2(&a,2,((C_word*)t0)[2],C_fix(0)));
/* chicken-profile.scm:219: scheme#append */
t3=*((C_word*)lf[60]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3777 in k3757 in g743 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_3779,c,av);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
f_3766(t2,C_s_a_i_times(&a,2,t1,C_fix(100)));}

/* k3793 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3795,c,av);}
/* chicken-profile.scm:217: chicken.sort#sort */
t2=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[22],C_text("main#sort-by"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop737 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3797(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3797,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3822,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-profile.scm:217: g743 */
t4=((C_word*)t0)[4];
f_3741(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3820 in map-loop737 in k3281 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3822,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3797(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* foldl719 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall f_3831(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_3831,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=C_eqp(((C_word*)t0)[2],lf[24]);
t6=(C_truep(t5)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3860,tmp=(C_word)a,a+=2,tmp):(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3869,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3852,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm:213: g726 */
t8=t6;{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
av2[3]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3850 in foldl719 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3852,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3831(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_3860 in foldl719 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3860,c,av);}
/* chicken-profile.scm:214: scheme#max */
t4=*((C_word*)lf[54]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_i_caddr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* f_3869 in foldl719 in k3271 in k3268 in k2613 in loop in k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_3869,c,av);}
a=C_alloc(29);
t4=C_i_caddr(t3);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_s_a_i_plus(&a,2,t2,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3878 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3880,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3886,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base#implicit-exit-handler */
t3=C_fast_retrieve(lf[44]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3884 in k3878 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3886,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3888 in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3890,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2605,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2605(t5,((C_word*)t0)[2],t1);}

/* a3891 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_ccall f_3892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_3892,c,av);}
/* chicken-profile.scm:29: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[91]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[91]+1);
av2[1]=t1;
av2[2]=lf[92];
av2[3]=lf[92];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=C_SCHEME_END_OF_LIST;
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
tp(8,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point

void C_ccall C_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(307))){
C_save(t1);
C_rereclaim2(307*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,94);
lf[0]=C_h_intern(&lf[0],5, C_text("main#"));
lf[9]=C_h_intern(&lf[9],17, C_text("chicken.base#exit"));
lf[10]=C_h_intern(&lf[10],14, C_text("scheme#display"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376B\000\001\242)\012 -no-unused                remove procedures that are never called\012 -top "
"N                    display only the top N entries\012 -help                     s"
"how this text and exit\012 -version                  show version and exit\012 -releas"
"e                  show release number and exit\012\012 FILENAME defaults to the `PROF"
"ILE.<number>\047, selecting the one with\012 the highest modification time, in case mu"
"ltiple profiles exist.\012"));
lf[12]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376B\000\001\321Usage: chicken-profile [OPTION ...] [FILENAME ...]\012\012 -sort-by-calls        "
"    sort output by call frequency\012 -sort-by-time             sort output by proc"
"edure execution time\012 -sort-by-avg              sort output by average procedure"
" execution time\012 -sort-by-name             sort output alphabetically by procedu"
"re name\012 -decimals DDD             set number of decimals for seconds, average a"
"nd\012                           percent columns (three digits, default: "));
lf[15]=C_h_intern(&lf[15],21, C_text("##sys#print-to-string"));
lf[20]=C_h_intern(&lf[20],15, C_text("scheme#string<\077"));
lf[21]=C_h_intern(&lf[21],21, C_text("scheme#symbol->string"));
lf[24]=C_h_intern(&lf[24],12, C_text("instrumented"));
lf[25]=C_h_intern(&lf[25],36, C_text("chicken.internal#hash-table-for-each"));
lf[26]=C_h_intern(&lf[26],11, C_text("scheme#read"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\000\376\377\016"));
lf[28]=C_h_intern(&lf[28],3, C_text("map"));
lf[29]=C_h_intern(&lf[29],32, C_text("chicken.internal#hash-table-set!"));
lf[30]=C_h_intern(&lf[30],31, C_text("chicken.internal#hash-table-ref"));
lf[31]=C_h_intern(&lf[31],18, C_text("scheme#make-vector"));
lf[33]=C_h_intern(&lf[33],19, C_text("##sys#string-append"));
lf[34]=C_h_intern(&lf[34],18, C_text("scheme#make-string"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001."));
lf[37]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[38]=C_h_intern(&lf[38],20, C_text("scheme#string-append"));
lf[39]=C_h_intern(&lf[39],16, C_text("scheme#substring"));
lf[40]=C_h_intern(&lf[40],20, C_text("##sys#number->string"));
lf[41]=C_h_intern(&lf[41],21, C_text("scheme#inexact->exact"));
lf[42]=C_h_intern(&lf[42],15, C_text("scheme#truncate"));
lf[43]=C_h_intern(&lf[43],11, C_text("scheme#expt"));
lf[44]=C_h_intern(&lf[44],34, C_text("chicken.base#implicit-exit-handler"));
lf[45]=C_h_intern(&lf[45],5, C_text("foldl"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011procedure"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005calls"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007seconds"));
lf[49]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007average"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007percent"));
lf[51]=C_h_intern(&lf[51],18, C_text("chicken.base#print"));
lf[52]=C_h_intern(&lf[52],33, C_text("chicken.string#string-intersperse"));
lf[53]=C_h_intern(&lf[53],8, C_text("for-each"));
lf[54]=C_h_intern(&lf[54],10, C_text("scheme#max"));
lf[55]=C_h_intern(&lf[55],17, C_text("##sys#make-string"));
lf[56]=C_h_intern(&lf[56],9, C_text("##sys#/-2"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010overflow"));
lf[58]=C_h_intern(&lf[58],20, C_text("##sys#symbol->string"));
lf[59]=C_h_intern(&lf[59],5, C_text("foldr"));
lf[60]=C_h_intern(&lf[60],13, C_text("scheme#append"));
lf[61]=C_h_intern(&lf[61],17, C_text("chicken.sort#sort"));
lf[62]=C_h_intern(&lf[62],27, C_text("scheme#with-input-from-file"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011reading `"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006\047 ...\012"));
lf[65]=C_h_intern(&lf[65],18, C_text("chicken.base#error"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021no PROFILEs found"));
lf[67]=C_h_intern(&lf[67],41, C_text("chicken.file.posix#file-modification-time"));
lf[68]=C_h_intern(&lf[68],17, C_text("chicken.file#glob"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011PROFILE.\052"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032missing argument to option"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032invalid argument to option"));
lf[72]=C_h_intern(&lf[72],21, C_text("scheme#string->number"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-h"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-help"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006--help"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-version"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032chicken-profile - Version "));
lf[78]=C_h_intern(&lf[78],32, C_text("chicken.platform#chicken-version"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-release"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012-no-unused"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004-top"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016-sort-by-calls"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-sort-by-time"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000\014-sort-by-avg"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015-sort-by-name"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011-decimals"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000$invalid argument to -decimals option"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376B\000\000$invalid argument to -decimals option"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376B\000\000\016invalid option"));
lf[90]=C_h_intern(&lf[90],46, C_text("chicken.process-context#command-line-arguments"));
lf[91]=C_h_intern(&lf[91],30, C_text("##sys#register-compiled-module"));
lf[92]=C_h_intern(&lf[92],4, C_text("main"));
lf[93]=C_h_intern(&lf[93],22, C_text("##sys#with-environment"));
C_register_lf2(lf,94,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1250,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* va4337 in k3218 in k3211 in main#format-real in k1269 in k1266 in k1263 in k1260 in k1257 in k1254 in k1251 in k1248 */
static void C_fcall va4337(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,3)))){
C_save_and_reclaim_args((void *)trva4337,2,t0,t1);}
a=C_alloc(33);
t2=C_s_a_i_minus(&a,2,t1,C_fix(-1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3256,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm:201: scheme#expt */
t4=*((C_word*)lf[43]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[126] = {
{C_text("f_1250:chicken_2dprofile_2escm"),(void*)f_1250},
{C_text("f_1253:chicken_2dprofile_2escm"),(void*)f_1253},
{C_text("f_1256:chicken_2dprofile_2escm"),(void*)f_1256},
{C_text("f_1259:chicken_2dprofile_2escm"),(void*)f_1259},
{C_text("f_1262:chicken_2dprofile_2escm"),(void*)f_1262},
{C_text("f_1265:chicken_2dprofile_2escm"),(void*)f_1265},
{C_text("f_1268:chicken_2dprofile_2escm"),(void*)f_1268},
{C_text("f_1271:chicken_2dprofile_2escm"),(void*)f_1271},
{C_text("f_1381:chicken_2dprofile_2escm"),(void*)f_1381},
{C_text("f_1399:chicken_2dprofile_2escm"),(void*)f_1399},
{C_text("f_1891:chicken_2dprofile_2escm"),(void*)f_1891},
{C_text("f_1920:chicken_2dprofile_2escm"),(void*)f_1920},
{C_text("f_2558:chicken_2dprofile_2escm"),(void*)f_2558},
{C_text("f_2562:chicken_2dprofile_2escm"),(void*)f_2562},
{C_text("f_2569:chicken_2dprofile_2escm"),(void*)f_2569},
{C_text("f_2605:chicken_2dprofile_2escm"),(void*)f_2605},
{C_text("f_2615:chicken_2dprofile_2escm"),(void*)f_2615},
{C_text("f_2622:chicken_2dprofile_2escm"),(void*)f_2622},
{C_text("f_2625:chicken_2dprofile_2escm"),(void*)f_2625},
{C_text("f_2638:chicken_2dprofile_2escm"),(void*)f_2638},
{C_text("f_2640:chicken_2dprofile_2escm"),(void*)f_2640},
{C_text("f_2645:chicken_2dprofile_2escm"),(void*)f_2645},
{C_text("f_2649:chicken_2dprofile_2escm"),(void*)f_2649},
{C_text("f_2655:chicken_2dprofile_2escm"),(void*)f_2655},
{C_text("f_2674:chicken_2dprofile_2escm"),(void*)f_2674},
{C_text("f_2678:chicken_2dprofile_2escm"),(void*)f_2678},
{C_text("f_2694:chicken_2dprofile_2escm"),(void*)f_2694},
{C_text("f_2697:chicken_2dprofile_2escm"),(void*)f_2697},
{C_text("f_2715:chicken_2dprofile_2escm"),(void*)f_2715},
{C_text("f_2722:chicken_2dprofile_2escm"),(void*)f_2722},
{C_text("f_2730:chicken_2dprofile_2escm"),(void*)f_2730},
{C_text("f_2737:chicken_2dprofile_2escm"),(void*)f_2737},
{C_text("f_2752:chicken_2dprofile_2escm"),(void*)f_2752},
{C_text("f_2788:chicken_2dprofile_2escm"),(void*)f_2788},
{C_text("f_2819:chicken_2dprofile_2escm"),(void*)f_2819},
{C_text("f_2853:chicken_2dprofile_2escm"),(void*)f_2853},
{C_text("f_2882:chicken_2dprofile_2escm"),(void*)f_2882},
{C_text("f_2910:chicken_2dprofile_2escm"),(void*)f_2910},
{C_text("f_2918:chicken_2dprofile_2escm"),(void*)f_2918},
{C_text("f_2922:chicken_2dprofile_2escm"),(void*)f_2922},
{C_text("f_2936:chicken_2dprofile_2escm"),(void*)f_2936},
{C_text("f_2948:chicken_2dprofile_2escm"),(void*)f_2948},
{C_text("f_2970:chicken_2dprofile_2escm"),(void*)f_2970},
{C_text("f_2974:chicken_2dprofile_2escm"),(void*)f_2974},
{C_text("f_2978:chicken_2dprofile_2escm"),(void*)f_2978},
{C_text("f_2994:chicken_2dprofile_2escm"),(void*)f_2994},
{C_text("f_2998:chicken_2dprofile_2escm"),(void*)f_2998},
{C_text("f_3001:chicken_2dprofile_2escm"),(void*)f_3001},
{C_text("f_3007:chicken_2dprofile_2escm"),(void*)f_3007},
{C_text("f_3010:chicken_2dprofile_2escm"),(void*)f_3010},
{C_text("f_3015:chicken_2dprofile_2escm"),(void*)f_3015},
{C_text("f_3024:chicken_2dprofile_2escm"),(void*)f_3024},
{C_text("f_3026:chicken_2dprofile_2escm"),(void*)f_3026},
{C_text("f_3036:chicken_2dprofile_2escm"),(void*)f_3036},
{C_text("f_3043:chicken_2dprofile_2escm"),(void*)f_3043},
{C_text("f_3065:chicken_2dprofile_2escm"),(void*)f_3065},
{C_text("f_3080:chicken_2dprofile_2escm"),(void*)f_3080},
{C_text("f_3082:chicken_2dprofile_2escm"),(void*)f_3082},
{C_text("f_3092:chicken_2dprofile_2escm"),(void*)f_3092},
{C_text("f_3143:chicken_2dprofile_2escm"),(void*)f_3143},
{C_text("f_3162:chicken_2dprofile_2escm"),(void*)f_3162},
{C_text("f_3209:chicken_2dprofile_2escm"),(void*)f_3209},
{C_text("f_3213:chicken_2dprofile_2escm"),(void*)f_3213},
{C_text("f_3220:chicken_2dprofile_2escm"),(void*)f_3220},
{C_text("f_3228:chicken_2dprofile_2escm"),(void*)f_3228},
{C_text("f_3232:chicken_2dprofile_2escm"),(void*)f_3232},
{C_text("f_3240:chicken_2dprofile_2escm"),(void*)f_3240},
{C_text("f_3244:chicken_2dprofile_2escm"),(void*)f_3244},
{C_text("f_3256:chicken_2dprofile_2escm"),(void*)f_3256},
{C_text("f_3264:chicken_2dprofile_2escm"),(void*)f_3264},
{C_text("f_3270:chicken_2dprofile_2escm"),(void*)f_3270},
{C_text("f_3273:chicken_2dprofile_2escm"),(void*)f_3273},
{C_text("f_3283:chicken_2dprofile_2escm"),(void*)f_3283},
{C_text("f_3286:chicken_2dprofile_2escm"),(void*)f_3286},
{C_text("f_3289:chicken_2dprofile_2escm"),(void*)f_3289},
{C_text("f_3314:chicken_2dprofile_2escm"),(void*)f_3314},
{C_text("f_3318:chicken_2dprofile_2escm"),(void*)f_3318},
{C_text("f_3322:chicken_2dprofile_2escm"),(void*)f_3322},
{C_text("f_3326:chicken_2dprofile_2escm"),(void*)f_3326},
{C_text("f_3330:chicken_2dprofile_2escm"),(void*)f_3330},
{C_text("f_3334:chicken_2dprofile_2escm"),(void*)f_3334},
{C_text("f_3340:chicken_2dprofile_2escm"),(void*)f_3340},
{C_text("f_3356:chicken_2dprofile_2escm"),(void*)f_3356},
{C_text("f_3362:chicken_2dprofile_2escm"),(void*)f_3362},
{C_text("f_3371:chicken_2dprofile_2escm"),(void*)f_3371},
{C_text("f_3380:chicken_2dprofile_2escm"),(void*)f_3380},
{C_text("f_3382:chicken_2dprofile_2escm"),(void*)f_3382},
{C_text("f_3390:chicken_2dprofile_2escm"),(void*)f_3390},
{C_text("f_3403:chicken_2dprofile_2escm"),(void*)f_3403},
{C_text("f_3405:chicken_2dprofile_2escm"),(void*)f_3405},
{C_text("f_3412:chicken_2dprofile_2escm"),(void*)f_3412},
{C_text("f_3438:chicken_2dprofile_2escm"),(void*)f_3438},
{C_text("f_3468:chicken_2dprofile_2escm"),(void*)f_3468},
{C_text("f_3471:chicken_2dprofile_2escm"),(void*)f_3471},
{C_text("f_3479:chicken_2dprofile_2escm"),(void*)f_3479},
{C_text("f_3489:chicken_2dprofile_2escm"),(void*)f_3489},
{C_text("f_3504:chicken_2dprofile_2escm"),(void*)f_3504},
{C_text("f_3515:chicken_2dprofile_2escm"),(void*)f_3515},
{C_text("f_3525:chicken_2dprofile_2escm"),(void*)f_3525},
{C_text("f_3549:chicken_2dprofile_2escm"),(void*)f_3549},
{C_text("f_3578:chicken_2dprofile_2escm"),(void*)f_3578},
{C_text("f_3589:chicken_2dprofile_2escm"),(void*)f_3589},
{C_text("f_3618:chicken_2dprofile_2escm"),(void*)f_3618},
{C_text("f_3637:chicken_2dprofile_2escm"),(void*)f_3637},
{C_text("f_3672:chicken_2dprofile_2escm"),(void*)f_3672},
{C_text("f_3680:chicken_2dprofile_2escm"),(void*)f_3680},
{C_text("f_3728:chicken_2dprofile_2escm"),(void*)f_3728},
{C_text("f_3732:chicken_2dprofile_2escm"),(void*)f_3732},
{C_text("f_3741:chicken_2dprofile_2escm"),(void*)f_3741},
{C_text("f_3759:chicken_2dprofile_2escm"),(void*)f_3759},
{C_text("f_3766:chicken_2dprofile_2escm"),(void*)f_3766},
{C_text("f_3779:chicken_2dprofile_2escm"),(void*)f_3779},
{C_text("f_3795:chicken_2dprofile_2escm"),(void*)f_3795},
{C_text("f_3797:chicken_2dprofile_2escm"),(void*)f_3797},
{C_text("f_3822:chicken_2dprofile_2escm"),(void*)f_3822},
{C_text("f_3831:chicken_2dprofile_2escm"),(void*)f_3831},
{C_text("f_3852:chicken_2dprofile_2escm"),(void*)f_3852},
{C_text("f_3860:chicken_2dprofile_2escm"),(void*)f_3860},
{C_text("f_3869:chicken_2dprofile_2escm"),(void*)f_3869},
{C_text("f_3880:chicken_2dprofile_2escm"),(void*)f_3880},
{C_text("f_3886:chicken_2dprofile_2escm"),(void*)f_3886},
{C_text("f_3890:chicken_2dprofile_2escm"),(void*)f_3890},
{C_text("f_3892:chicken_2dprofile_2escm"),(void*)f_3892},
{C_text("toplevel:chicken_2dprofile_2escm"),(void*)C_toplevel},
{C_text("va4337:chicken_2dprofile_2escm"),(void*)va4337},
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
o|hiding unexported module binding: main#partition 
o|hiding unexported module binding: main#span 
o|hiding unexported module binding: main#take 
o|hiding unexported module binding: main#drop 
o|hiding unexported module binding: main#split-at 
o|hiding unexported module binding: main#append-map 
o|hiding unexported module binding: main#every 
o|hiding unexported module binding: main#any 
o|hiding unexported module binding: main#cons* 
o|hiding unexported module binding: main#concatenate 
o|hiding unexported module binding: main#delete 
o|hiding unexported module binding: main#first 
o|hiding unexported module binding: main#second 
o|hiding unexported module binding: main#third 
o|hiding unexported module binding: main#fourth 
o|hiding unexported module binding: main#fifth 
o|hiding unexported module binding: main#delete-duplicates 
o|hiding unexported module binding: main#alist-cons 
o|hiding unexported module binding: main#filter 
o|hiding unexported module binding: main#filter-map 
o|hiding unexported module binding: main#remove 
o|hiding unexported module binding: main#unzip1 
o|hiding unexported module binding: main#last 
o|hiding unexported module binding: main#list-index 
o|hiding unexported module binding: main#lset-adjoin/eq? 
o|hiding unexported module binding: main#lset-difference/eq? 
o|hiding unexported module binding: main#lset-union/eq? 
o|hiding unexported module binding: main#lset-intersection/eq? 
o|hiding unexported module binding: main#list-tabulate 
o|hiding unexported module binding: main#lset<=/eq? 
o|hiding unexported module binding: main#lset=/eq? 
o|hiding unexported module binding: main#length+ 
o|hiding unexported module binding: main#find 
o|hiding unexported module binding: main#find-tail 
o|hiding unexported module binding: main#iota 
o|hiding unexported module binding: main#make-list 
o|hiding unexported module binding: main#posq 
o|hiding unexported module binding: main#posv 
o|hiding unexported module binding: main#symbol-table-size 
o|hiding unexported module binding: main#sort-by 
o|hiding unexported module binding: main#file 
o|hiding unexported module binding: main#no-unused 
o|hiding unexported module binding: main#seconds-digits 
o|hiding unexported module binding: main#average-digits 
o|hiding unexported module binding: main#percent-digits 
o|hiding unexported module binding: main#top 
o|hiding unexported module binding: main#print-usage 
o|hiding unexported module binding: main#run 
o|hiding unexported module binding: main#sort-by-calls 
o|hiding unexported module binding: main#sort-by-time 
o|hiding unexported module binding: main#sort-by-avg 
o|hiding unexported module binding: main#sort-by-name 
o|hiding unexported module binding: main#set-decimals 
o|hiding unexported module binding: main#make-symbol-table 
o|hiding unexported module binding: main#read-profile 
o|hiding unexported module binding: main#format-string 
o|hiding unexported module binding: main#format-real 
o|hiding unexported module binding: main#write-profile 
S|applied compiler syntax:
S|  scheme#for-each		1
S|  chicken.base#foldl		6
S|  scheme#map		9
S|  chicken.base#foldr		3
o|eliminated procedure checks: 64 
o|folded constant expression: (scheme#char->integer (quote #\0)) 
o|specializations:
o|  1 (scheme#* integer integer)
o|  1 (scheme#make-string fixnum char)
o|  4 (scheme#/ * *)
o|  3 (scheme#number->string *)
o|  2 (scheme#string-append string string)
o|  1 (scheme#= fixnum fixnum)
o|  1 (scheme#= integer integer)
o|  2 (scheme#- fixnum fixnum)
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#> fixnum fixnum)
o|  1 (scheme#string-length string)
o|  8 (scheme#string=? string string)
o|  1 (scheme#> integer integer)
o|  3 (scheme#eqv? * *)
o|  6 (##sys#check-list (or pair list) *)
o|  24 (scheme#cdr pair)
o|  7 (scheme#car pair)
(o e)|safe calls: 418 
(o e)|assignments to immediate values: 5 
o|dropping redundant toplevel assignment: main#sort-by 
o|removed side-effect free assignment to unused variable: main#partition 
o|removed side-effect free assignment to unused variable: main#span 
o|inlining procedure: k1383 
o|inlining procedure: k1383 
o|removed side-effect free assignment to unused variable: main#drop 
o|removed side-effect free assignment to unused variable: main#split-at 
o|removed side-effect free assignment to unused variable: main#append-map 
o|inlining procedure: k1653 
o|inlining procedure: k1653 
o|inlining procedure: k1684 
o|inlining procedure: k1684 
o|removed side-effect free assignment to unused variable: main#cons* 
o|removed side-effect free assignment to unused variable: main#concatenate 
o|removed side-effect free assignment to unused variable: main#delete-duplicates 
o|inlining procedure: k1901 
o|inlining procedure: k1901 
o|inlining procedure: k1893 
o|inlining procedure: k1893 
o|removed side-effect free assignment to unused variable: main#filter-map 
o|removed side-effect free assignment to unused variable: main#remove 
o|removed side-effect free assignment to unused variable: main#unzip1 
o|removed side-effect free assignment to unused variable: main#last 
o|removed side-effect free assignment to unused variable: main#list-index 
o|removed side-effect free assignment to unused variable: main#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: main#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: main#lset-union/eq? 
o|removed side-effect free assignment to unused variable: main#lset-intersection/eq? 
o|inlining procedure: k2292 
o|inlining procedure: k2292 
o|removed side-effect free assignment to unused variable: main#lset<=/eq? 
o|removed side-effect free assignment to unused variable: main#lset=/eq? 
o|removed side-effect free assignment to unused variable: main#length+ 
o|removed side-effect free assignment to unused variable: main#find 
o|removed side-effect free assignment to unused variable: main#find-tail 
o|removed side-effect free assignment to unused variable: main#iota 
o|removed side-effect free assignment to unused variable: main#make-list 
o|removed side-effect free assignment to unused variable: main#posq 
o|removed side-effect free assignment to unused variable: main#posv 
o|inlining procedure: k2827 
o|inlining procedure: "(chicken-profile.scm:128) main#third" 
o|inlining procedure: "(chicken-profile.scm:128) main#third" 
o|inlining procedure: k2827 
o|inlining procedure: k2846 
o|inlining procedure: k2846 
o|inlining procedure: "(chicken-profile.scm:126) main#second" 
o|inlining procedure: "(chicken-profile.scm:125) main#second" 
o|inlining procedure: k2861 
o|inlining procedure: "(chicken-profile.scm:135) main#second" 
o|inlining procedure: "(chicken-profile.scm:135) main#second" 
o|inlining procedure: k2861 
o|inlining procedure: "(chicken-profile.scm:133) main#third" 
o|inlining procedure: "(chicken-profile.scm:132) main#third" 
o|inlining procedure: k2890 
o|inlining procedure: "(chicken-profile.scm:142) main#third" 
o|inlining procedure: "(chicken-profile.scm:142) main#third" 
o|inlining procedure: k2890 
o|inlining procedure: "(chicken-profile.scm:146) main#first" 
o|inlining procedure: "(chicken-profile.scm:146) main#first" 
o|contracted procedure: "(chicken-profile.scm:181) main#alist-cons" 
o|inlining procedure: k3028 
o|inlining procedure: k3028 
o|inlining procedure: k3084 
o|contracted procedure: "(chicken-profile.scm:175) g648658" 
o|inlining procedure: k3054 
o|inlining procedure: k3054 
o|inlining procedure: k3084 
o|inlining procedure: "(chicken-profile.scm:176) main#first" 
o|inlining procedure: "(chicken-profile.scm:174) main#first" 
o|contracted procedure: "(chicken-profile.scm:168) main#make-symbol-table" 
o|substituted constant variable: main#symbol-table-size 
o|inlining procedure: k3163 
o|inlining procedure: k3163 
o|contracted procedure: "(chicken-profile.scm:262) main#run" 
o|inlining procedure: k2607 
o|contracted procedure: "(chicken-profile.scm:91) main#write-profile" 
o|inlining procedure: k3407 
o|inlining procedure: k3407 
o|inlining procedure: k3457 
o|inlining procedure: k3457 
o|inlining procedure: k3481 
o|inlining procedure: k3481 
o|substituted constant variable: spacing807 
o|substituted constant variable: a3523 
o|substituted constant variable: spacing807 
o|inlining procedure: k3527 
o|inlining procedure: k3527 
o|substituted constant variable: g937940 
o|inlining procedure: k3551 
o|contracted procedure: "(chicken-profile.scm:249) g822823" 
o|inlining procedure: k3591 
o|inlining procedure: k3591 
o|inlining procedure: k3639 
o|inlining procedure: k3639 
o|inlining procedure: k3551 
o|substituted constant variable: spacing807 
o|substituted constant variable: spacing807 
o|substituted constant variable: a3678 
o|inlining procedure: k3682 
o|contracted procedure: "(chicken-profile.scm:232) g781790" 
o|substituted constant variable: a3336 
o|substituted constant variable: a3342 
o|inlining procedure: "(chicken-profile.scm:237) main#first" 
o|contracted procedure: "(chicken-profile.scm:236) main#fifth" 
o|contracted procedure: "(chicken-profile.scm:235) main#fourth" 
o|inlining procedure: "(chicken-profile.scm:234) main#third" 
o|inlining procedure: "(chicken-profile.scm:233) main#second" 
o|inlining procedure: k3682 
o|inlining procedure: "(chicken-profile.scm:243) main#second" 
o|inlining procedure: k3767 
o|inlining procedure: k3767 
o|inlining procedure: k3782 
o|inlining procedure: k3782 
o|inlining procedure: "(chicken-profile.scm:222) main#third" 
o|inlining procedure: "(chicken-profile.scm:221) main#second" 
o|inlining procedure: k3799 
o|inlining procedure: k3799 
o|inlining procedure: k3833 
o|inlining procedure: "(chicken-profile.scm:214) main#third" 
o|inlining procedure: "(chicken-profile.scm:215) main#third" 
o|inlining procedure: k3833 
o|substituted constant variable: g718721 
o|inlining procedure: k2623 
o|inlining procedure: k2623 
o|inlining procedure: "(chicken-profile.scm:87) main#first" 
o|inlining procedure: k2657 
o|inlining procedure: k2657 
o|inlining procedure: k2679 
o|inlining procedure: k2679 
o|inlining procedure: k2607 
o|inlining procedure: k2707 
o|inlining procedure: k2707 
o|substituted constant variable: a2727 
o|substituted constant variable: a2742 
o|inlining procedure: k2738 
o|inlining procedure: k2738 
o|substituted constant variable: a2748 
o|substituted constant variable: a2757 
o|inlining procedure: k2753 
o|inlining procedure: k2753 
o|substituted constant variable: a2763 
o|substituted constant variable: a2769 
o|inlining procedure: k2765 
o|inlining procedure: k2765 
o|substituted constant variable: a2775 
o|substituted constant variable: a2781 
o|inlining procedure: k2777 
o|contracted procedure: "(chicken-profile.scm:117) main#set-decimals" 
o|substituted constant variable: a2942 
o|inlining procedure: k2943 
o|substituted constant variable: a2953 
o|inlining procedure: k2943 
o|inlining procedure: k2961 
o|inlining procedure: k2961 
o|substituted constant variable: a2986 
o|inlining procedure: k2777 
o|inlining procedure: k2798 
o|inlining procedure: k2798 
o|substituted constant variable: a2811 
o|substituted constant variable: a2808 
o|substituted constant variable: a2816 
o|replaced variables: 408 
o|removed binding forms: 139 
o|substituted constant variable: r13843909 
o|removed side-effect free assignment to unused variable: main#every 
o|removed side-effect free assignment to unused variable: main#any 
o|removed side-effect free assignment to unused variable: main#first 
o|removed side-effect free assignment to unused variable: main#second 
o|removed side-effect free assignment to unused variable: main#third 
o|removed side-effect free assignment to unused variable: main#list-tabulate 
o|removed side-effect free assignment to unused variable: main#symbol-table-size 
o|substituted constant variable: r28473934 
o|substituted constant variable: r30553993 
o|substituted constant variable: r34584011 
o|converted assignments to bindings: (print-row885) 
o|contracted procedure: "(chicken-profile.scm:243) main#filter" 
o|substituted constant variable: r18943918 
o|substituted constant variable: r37684046 
o|substituted constant variable: r37684046 
o|substituted constant variable: r37834049 
o|inlining procedure: k2695 
o|inlining procedure: k2695 
o|inlining procedure: k2695 
o|converted assignments to bindings: (arg-digit626) 
o|inlining procedure: k2695 
o|simplifications: ((let . 2)) 
o|replaced variables: 117 
o|removed binding forms: 384 
o|inlining procedure: k3109 
o|inlining procedure: k3109 
o|inlining procedure: k2695 
o|replaced variables: 2 
o|removed binding forms: 127 
o|substituted constant variable: r31104162 
o|substituted constant variable: r31104163 
o|inlining procedure: "(mini-srfi-1.scm:131) a3716" 
o|inlining procedure: k2682 
o|removed binding forms: 3 
o|contracted procedure: "(mini-srfi-1.scm:131) g286287" 
o|substituted constant variable: r26834224 
o|replaced variables: 2 
o|removed binding forms: 4 
o|removed conditional forms: 1 
o|replaced variables: 6 
o|removed binding forms: 3 
o|removed binding forms: 3 
o|simplifications: ((let . 1) (if . 18) (##core#call . 193)) 
o|  call simplifications:
o|    scheme#member
o|    scheme#string=?
o|    ##sys#size
o|    chicken.fixnum#fx>
o|    scheme#string-ref
o|    scheme#char->integer
o|    scheme#<=
o|    scheme#eq?	2
o|    scheme#<
o|    scheme#cddddr
o|    scheme#not
o|    scheme#list	9
o|    scheme#length	2
o|    scheme#-
o|    scheme#*	2
o|    scheme#null?	7
o|    scheme#string-length	3
o|    chicken.fixnum#fxmax
o|    scheme#symbol?	2
o|    scheme#eof-object?
o|    scheme#cdr	4
o|    ##sys#check-list	12
o|    scheme#pair?	15
o|    scheme#+	5
o|    ##sys#setslot	6
o|    ##sys#slot	36
o|    scheme#cadddr	3
o|    scheme#=
o|    scheme#cadr	7
o|    scheme#caddr	10
o|    scheme#>	11
o|    chicken.fixnum#fx<=
o|    scheme#car	13
o|    chicken.fixnum#fx-	2
o|    scheme#cons	27
o|contracted procedure: k1386 
o|contracted procedure: k1393 
o|contracted procedure: k1403 
o|contracted procedure: k2595 
o|contracted procedure: k2591 
o|contracted procedure: k2587 
o|contracted procedure: k2583 
o|contracted procedure: k2579 
o|contracted procedure: k2575 
o|contracted procedure: k2571 
o|contracted procedure: k2821 
o|contracted procedure: k2824 
o|contracted procedure: k2836 
o|contracted procedure: k2840 
o|contracted procedure: k2855 
o|contracted procedure: k2858 
o|contracted procedure: k2864 
o|contracted procedure: k2871 
o|contracted procedure: k2875 
o|contracted procedure: k2884 
o|contracted procedure: k2887 
o|contracted procedure: k2899 
o|contracted procedure: k2903 
o|contracted procedure: k2924 
o|contracted procedure: k2928 
o|contracted procedure: k3139 
o|contracted procedure: k3002 
o|contracted procedure: k1878 
o|contracted procedure: k3018 
o|contracted procedure: k3031 
o|contracted procedure: k3045 
o|contracted procedure: k3049 
o|contracted procedure: k3066 
o|contracted procedure: k3069 
o|contracted procedure: k3072 
o|contracted procedure: k3075 
o|contracted procedure: k3123 
o|contracted procedure: k3087 
o|contracted procedure: k3093 
o|contracted procedure: k3101 
o|contracted procedure: k3105 
o|contracted procedure: k3113 
o|contracted procedure: k3117 
o|contracted procedure: k3109 
o|contracted procedure: k3130 
o|contracted procedure: k3133 
o|contracted procedure: k3202 
o|contracted procedure: k3145 
o|contracted procedure: k3196 
o|contracted procedure: k3148 
o|contracted procedure: k3190 
o|contracted procedure: k3151 
o|contracted procedure: k3184 
o|contracted procedure: k3154 
o|contracted procedure: k3157 
o|contracted procedure: k3181 
o|contracted procedure: k3177 
o|contracted procedure: k3257 
o|contracted procedure: k3222 
o|contracted procedure: k3234 
o|contracted procedure: k3246 
o|contracted procedure: k2610 
o|contracted procedure: k3274 
o|contracted procedure: k3278 
o|contracted procedure: k3291 
o|contracted procedure: k3357 
o|contracted procedure: k3363 
o|contracted procedure: k3366 
o|contracted procedure: k3372 
o|contracted procedure: k3375 
o|contracted procedure: k3392 
o|contracted procedure: k3395 
o|contracted procedure: k3398 
o|contracted procedure: k3413 
o|contracted procedure: k3416 
o|contracted procedure: k3424 
o|contracted procedure: k3428 
o|contracted procedure: k3432 
o|contracted procedure: k3440 
o|contracted procedure: k3444 
o|contracted procedure: k3448 
o|contracted procedure: k3454 
o|contracted procedure: k3460 
o|contracted procedure: k3472 
o|contracted procedure: k3484 
o|contracted procedure: k3494 
o|contracted procedure: k3498 
o|contracted procedure: k3510 
o|contracted procedure: k3520 
o|contracted procedure: k3506 
o|contracted procedure: k3530 
o|contracted procedure: k3537 
o|contracted procedure: k3545 
o|contracted procedure: k3541 
o|contracted procedure: k3554 
o|contracted procedure: k3561 
o|contracted procedure: k3674 
o|contracted procedure: k3567 
o|contracted procedure: k3570 
o|contracted procedure: k3573 
o|contracted procedure: k3579 
o|contracted procedure: k3582 
o|contracted procedure: k3630 
o|contracted procedure: k3594 
o|contracted procedure: k3597 
o|contracted procedure: k3600 
o|contracted procedure: k3608 
o|contracted procedure: k3612 
o|contracted procedure: k3620 
o|contracted procedure: k3624 
o|contracted procedure: k3642 
o|contracted procedure: k3664 
o|contracted procedure: k3660 
o|contracted procedure: k3645 
o|contracted procedure: k3648 
o|contracted procedure: k3656 
o|contracted procedure: k3685 
o|contracted procedure: k3707 
o|contracted procedure: k3296 
o|contracted procedure: k3299 
o|contracted procedure: k3302 
o|contracted procedure: k1833 
o|contracted procedure: k3305 
o|contracted procedure: k3703 
o|contracted procedure: k3688 
o|contracted procedure: k3691 
o|contracted procedure: k3699 
o|contracted procedure: k3343 
o|contracted procedure: k3351 
o|contracted procedure: k1884 
o|contracted procedure: k1896 
o|contracted procedure: k1914 
o|contracted procedure: k37234217 
o|contracted procedure: k1904 
o|contracted procedure: k1922 
o|contracted procedure: k3734 
o|contracted procedure: k3738 
o|contracted procedure: k3747 
o|contracted procedure: k3750 
o|contracted procedure: k3760 
o|contracted procedure: k3753 
o|contracted procedure: k3770 
o|contracted procedure: k3785 
o|contracted procedure: k3802 
o|contracted procedure: k3805 
o|contracted procedure: k3808 
o|contracted procedure: k3816 
o|contracted procedure: k3824 
o|contracted procedure: k3836 
o|contracted procedure: k3843 
o|contracted procedure: k3857 
o|contracted procedure: k3847 
o|contracted procedure: k3866 
o|contracted procedure: k3875 
o|contracted procedure: k3854 
o|contracted procedure: k2626 
o|inlining procedure: k2623 
o|contracted procedure: k2650 
o|contracted procedure: k2660 
o|contracted procedure: k2666 
o|contracted procedure: k2670 
o|contracted procedure: k2682 
o|contracted procedure: k2701 
o|contracted procedure: k2710 
o|inlining procedure: k2695 
o|inlining procedure: k2695 
o|contracted procedure: k2958 
o|contracted procedure: k2939 
o|contracted procedure: k2983 
o|contracted procedure: k2964 
o|contracted procedure: k2813 
o|contracted procedure: k2805 
o|contracted procedure: k2792 
o|contracted procedure: k3898 
o|contracted procedure: k3902 
o|contracted procedure: k3906 
o|simplifications: ((##core#call . 2) (if . 4) (let . 56)) 
o|  call simplifications:
o|    scheme#-	2
o|removed binding forms: 173 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest689692 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest689692 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest689692 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest689692 0 
o|contracted procedure: k3250 
o|substituted constant variable: r3899 
o|substituted constant variable: r3903 
o|substituted constant variable: r3907 
o|replaced variables: 3 
o|removed binding forms: 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3149 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3149 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3149 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3149 1 
o|removed binding forms: 4 
o|removed binding forms: 2 
o|customizable procedures: (arg-digit626 next-number594 main#print-usage loop581 next-arg593 k2613 foldl719723 g743752 map-loop737766 k3764 k3287 foldr281284 main#format-real map-loop775798 map-loop849866 map-loop828873 foldl815819 foldl938942 print-row885 for-each-loop888949 k3410 map-loop899920 va4337 k3090 map-loop642668 doloop637638 main#take) 
o|calls to known targets: 69 
o|identified direct recursive calls: f_1381 1 
o|unused rest argument: rest689692 f_3143 
o|identified direct recursive calls: f_3525 1 
o|identified direct recursive calls: f_3637 1 
o|identified direct recursive calls: f_1891 1 
o|identified direct recursive calls: f_2605 5 
o|fast box initializations: 14 
o|fast global references: 29 
o|fast global assignments: 28 
o|dropping unused closure argument: f_1381 
o|dropping unused closure argument: f_2558 
o|dropping unused closure argument: f_3209 
*/
/* end of file */
