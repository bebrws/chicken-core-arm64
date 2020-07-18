/* Generated from chicken-uninstall.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.2.0 (rev 317468e4)
   macosx-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: chicken-uninstall.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -output-file chicken-uninstall.c
   uses: library eval expand file extras irregex port pathname posix data-structures
*/
#include "chicken.h"

#ifndef STATICBUILD
# define STATIC_CHICKEN 0
#else
# define STATIC_CHICKEN 1
#endif
#ifndef DEBUGBUILD
# define DEBUG_CHICKEN 0
#else
# define DEBUG_CHICKEN 1
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_externimport void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_externimport void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_externimport void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_externimport void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_externimport void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[114];
static double C_possibly_force_alignment;


C_noret_decl(f4454)
static void C_ccall f4454(C_word c,C_word *av) C_noret;
C_noret_decl(f4459)
static void C_ccall f4459(C_word c,C_word *av) C_noret;
C_noret_decl(f4466)
static void C_ccall f4466(C_word c,C_word *av) C_noret;
C_noret_decl(f4473)
static void C_ccall f4473(C_word c,C_word *av) C_noret;
C_noret_decl(f_1479)
static void C_ccall f_1479(C_word c,C_word *av) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word *av) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485(C_word c,C_word *av) C_noret;
C_noret_decl(f_1488)
static void C_ccall f_1488(C_word c,C_word *av) C_noret;
C_noret_decl(f_1491)
static void C_ccall f_1491(C_word c,C_word *av) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word *av) C_noret;
C_noret_decl(f_1497)
static void C_ccall f_1497(C_word c,C_word *av) C_noret;
C_noret_decl(f_1500)
static void C_ccall f_1500(C_word c,C_word *av) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503(C_word c,C_word *av) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word *av) C_noret;
C_noret_decl(f_1509)
static void C_ccall f_1509(C_word c,C_word *av) C_noret;
C_noret_decl(f_1886)
static C_word C_fcall f_1886(C_word t0);
C_noret_decl(f_1920)
static C_word C_fcall f_1920(C_word t0,C_word t1);
C_noret_decl(f_1978)
static void C_fcall f_1978(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word *av) C_noret;
C_noret_decl(f_2006)
static void C_fcall f_2006(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word *av) C_noret;
C_noret_decl(f_2081)
static void C_fcall f_2081(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word *av) C_noret;
C_noret_decl(f_2108)
static void C_ccall f_2108(C_word c,C_word *av) C_noret;
C_noret_decl(f_2120)
static void C_fcall f_2120(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2129)
static void C_fcall f_2129(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2137)
static void C_fcall f_2137(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2144)
static void C_ccall f_2144(C_word c,C_word *av) C_noret;
C_noret_decl(f_2158)
static void C_ccall f_2158(C_word c,C_word *av) C_noret;
C_noret_decl(f_2793)
static void C_ccall f_2793(C_word c,C_word *av) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word *av) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word *av) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word *av) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word *av) C_noret;
C_noret_decl(f_2815)
static void C_ccall f_2815(C_word c,C_word *av) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word *av) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word *av) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word *av) C_noret;
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word *av) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word *av) C_noret;
C_noret_decl(f_2839)
static void C_ccall f_2839(C_word c,C_word *av) C_noret;
C_noret_decl(f_2843)
static void C_ccall f_2843(C_word c,C_word *av) C_noret;
C_noret_decl(f_2847)
static void C_ccall f_2847(C_word c,C_word *av) C_noret;
C_noret_decl(f_2851)
static void C_ccall f_2851(C_word c,C_word *av) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859(C_word c,C_word *av) C_noret;
C_noret_decl(f_2863)
static void C_ccall f_2863(C_word c,C_word *av) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word *av) C_noret;
C_noret_decl(f_2871)
static void C_ccall f_2871(C_word c,C_word *av) C_noret;
C_noret_decl(f_2875)
static void C_ccall f_2875(C_word c,C_word *av) C_noret;
C_noret_decl(f_2879)
static void C_ccall f_2879(C_word c,C_word *av) C_noret;
C_noret_decl(f_2883)
static void C_ccall f_2883(C_word c,C_word *av) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word *av) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word *av) C_noret;
C_noret_decl(f_2895)
static void C_ccall f_2895(C_word c,C_word *av) C_noret;
C_noret_decl(f_2899)
static void C_ccall f_2899(C_word c,C_word *av) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903(C_word c,C_word *av) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word *av) C_noret;
C_noret_decl(f_2911)
static void C_ccall f_2911(C_word c,C_word *av) C_noret;
C_noret_decl(f_2915)
static void C_ccall f_2915(C_word c,C_word *av) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word *av) C_noret;
C_noret_decl(f_2923)
static void C_ccall f_2923(C_word c,C_word *av) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word *av) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word *av) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word *av) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word *av) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word *av) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000(C_word c,C_word *av) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003(C_word c,C_word *av) C_noret;
C_noret_decl(f_3009)
static void C_ccall f_3009(C_word c,C_word *av) C_noret;
C_noret_decl(f_3015)
static void C_ccall f_3015(C_word c,C_word *av) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word *av) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word *av) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word *av) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word *av) C_noret;
C_noret_decl(f_3389)
static void C_ccall f_3389(C_word c,C_word *av) C_noret;
C_noret_decl(f_3394)
static void C_fcall f_3394(C_word t0) C_noret;
C_noret_decl(f_3402)
static void C_fcall f_3402(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416(C_word c,C_word *av) C_noret;
C_noret_decl(f_3429)
static void C_ccall f_3429(C_word c,C_word *av) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word *av) C_noret;
C_noret_decl(f_3435)
static void C_ccall f_3435(C_word c,C_word *av) C_noret;
C_noret_decl(f_3446)
static void C_fcall f_3446(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3454)
static void C_ccall f_3454(C_word c,C_word *av) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word *av) C_noret;
C_noret_decl(f_3464)
static void C_ccall f_3464(C_word c,C_word *av) C_noret;
C_noret_decl(f_3466)
static void C_fcall f_3466(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3491)
static void C_ccall f_3491(C_word c,C_word *av) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word *av) C_noret;
C_noret_decl(f_3509)
static C_word C_fcall f_3509(C_word t0,C_word t1);
C_noret_decl(f_3515)
static void C_fcall f_3515(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word *av) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word *av) C_noret;
C_noret_decl(f_3555)
static void C_ccall f_3555(C_word c,C_word *av) C_noret;
C_noret_decl(f_3561)
static void C_ccall f_3561(C_word c,C_word *av) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word *av) C_noret;
C_noret_decl(f_3575)
static void C_fcall f_3575(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word *av) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word *av) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word *av) C_noret;
C_noret_decl(f_3588)
static void C_ccall f_3588(C_word c,C_word *av) C_noret;
C_noret_decl(f_3591)
static void C_ccall f_3591(C_word c,C_word *av) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word *av) C_noret;
C_noret_decl(f_3622)
static void C_ccall f_3622(C_word c,C_word *av) C_noret;
C_noret_decl(f_3641)
static void C_ccall f_3641(C_word c,C_word *av) C_noret;
C_noret_decl(f_3643)
static void C_fcall f_3643(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word *av) C_noret;
C_noret_decl(f_3680)
static void C_fcall f_3680(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3707)
static void C_ccall f_3707(C_word c,C_word *av) C_noret;
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word *av) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word *av) C_noret;
C_noret_decl(f_3728)
static void C_ccall f_3728(C_word c,C_word *av) C_noret;
C_noret_decl(f_3732)
static void C_ccall f_3732(C_word c,C_word *av) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word *av) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word *av) C_noret;
C_noret_decl(f_3748)
static void C_fcall f_3748(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word *av) C_noret;
C_noret_decl(f_3768)
static void C_ccall f_3768(C_word c,C_word *av) C_noret;
C_noret_decl(f_3773)
static void C_fcall f_3773(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3783)
static void C_ccall f_3783(C_word c,C_word *av) C_noret;
C_noret_decl(f_3798)
static void C_ccall f_3798(C_word c,C_word *av) C_noret;
C_noret_decl(f_3802)
static void C_ccall f_3802(C_word c,C_word *av) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word *av) C_noret;
C_noret_decl(f_3808)
static void C_fcall f_3808(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3827)
static void C_ccall f_3827(C_word c,C_word *av) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word *av) C_noret;
C_noret_decl(f_3845)
static void C_ccall f_3845(C_word c,C_word *av) C_noret;
C_noret_decl(f_3851)
static void C_ccall f_3851(C_word c,C_word *av) C_noret;
C_noret_decl(f_3864)
static void C_ccall f_3864(C_word c,C_word *av) C_noret;
C_noret_decl(f_3870)
static void C_ccall f_3870(C_word c,C_word *av) C_noret;
C_noret_decl(f_3885)
static void C_ccall f_3885(C_word c,C_word *av) C_noret;
C_noret_decl(f_3890)
static void C_ccall f_3890(C_word c,C_word *av) C_noret;
C_noret_decl(f_3901)
static void C_fcall f_3901(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word *av) C_noret;
C_noret_decl(f_3943)
static void C_fcall f_3943(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953(C_word c,C_word *av) C_noret;
C_noret_decl(f_3956)
static void C_ccall f_3956(C_word c,C_word *av) C_noret;
C_noret_decl(f_3963)
static void C_ccall f_3963(C_word c,C_word *av) C_noret;
C_noret_decl(f_3981)
static void C_fcall f_3981(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3992)
static void C_ccall f_3992(C_word c,C_word *av) C_noret;
C_noret_decl(f_3999)
static void C_ccall f_3999(C_word c,C_word *av) C_noret;
C_noret_decl(f_4072)
static void C_ccall f_4072(C_word c,C_word *av) C_noret;
C_noret_decl(f_4085)
static void C_ccall f_4085(C_word c,C_word *av) C_noret;
C_noret_decl(f_4097)
static void C_ccall f_4097(C_word c,C_word *av) C_noret;
C_noret_decl(f_4101)
static void C_fcall f_4101(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4146)
static void C_ccall f_4146(C_word c,C_word *av) C_noret;
C_noret_decl(f_4185)
static void C_ccall f_4185(C_word c,C_word *av) C_noret;
C_noret_decl(f_4191)
static void C_ccall f_4191(C_word c,C_word *av) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word *av) C_noret;
C_noret_decl(f_4202)
static void C_ccall f_4202(C_word c,C_word *av) C_noret;
C_noret_decl(f_4205)
static void C_ccall f_4205(C_word c,C_word *av) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word *av) C_noret;
C_noret_decl(f_4217)
static void C_ccall f_4217(C_word c,C_word *av) C_noret;
C_noret_decl(f_4222)
static void C_ccall f_4222(C_word c,C_word *av) C_noret;
C_noret_decl(f_4226)
static void C_ccall f_4226(C_word c,C_word *av) C_noret;
C_noret_decl(f_4230)
static void C_ccall f_4230(C_word c,C_word *av) C_noret;
C_noret_decl(f_4237)
static void C_ccall f_4237(C_word c,C_word *av) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1978)
static void C_ccall trf_1978(C_word c,C_word *av) C_noret;
static void C_ccall trf_1978(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1978(t0,t1,t2);}

C_noret_decl(trf_2006)
static void C_ccall trf_2006(C_word c,C_word *av) C_noret;
static void C_ccall trf_2006(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2006(t0,t1,t2);}

C_noret_decl(trf_2081)
static void C_ccall trf_2081(C_word c,C_word *av) C_noret;
static void C_ccall trf_2081(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2081(t0,t1,t2);}

C_noret_decl(trf_2120)
static void C_ccall trf_2120(C_word c,C_word *av) C_noret;
static void C_ccall trf_2120(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2120(t0,t1,t2);}

C_noret_decl(trf_2129)
static void C_ccall trf_2129(C_word c,C_word *av) C_noret;
static void C_ccall trf_2129(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2129(t0,t1,t2);}

C_noret_decl(trf_2137)
static void C_ccall trf_2137(C_word c,C_word *av) C_noret;
static void C_ccall trf_2137(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2137(t0,t1,t2,t3);}

C_noret_decl(trf_3394)
static void C_ccall trf_3394(C_word c,C_word *av) C_noret;
static void C_ccall trf_3394(C_word c,C_word *av){
C_word t0=av[0];
f_3394(t0);}

C_noret_decl(trf_3402)
static void C_ccall trf_3402(C_word c,C_word *av) C_noret;
static void C_ccall trf_3402(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3402(t0,t1);}

C_noret_decl(trf_3446)
static void C_ccall trf_3446(C_word c,C_word *av) C_noret;
static void C_ccall trf_3446(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3446(t0,t1,t2);}

C_noret_decl(trf_3466)
static void C_ccall trf_3466(C_word c,C_word *av) C_noret;
static void C_ccall trf_3466(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3466(t0,t1,t2);}

C_noret_decl(trf_3515)
static void C_ccall trf_3515(C_word c,C_word *av) C_noret;
static void C_ccall trf_3515(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3515(t0,t1,t2);}

C_noret_decl(trf_3575)
static void C_ccall trf_3575(C_word c,C_word *av) C_noret;
static void C_ccall trf_3575(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3575(t0,t1);}

C_noret_decl(trf_3643)
static void C_ccall trf_3643(C_word c,C_word *av) C_noret;
static void C_ccall trf_3643(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3643(t0,t1,t2);}

C_noret_decl(trf_3680)
static void C_ccall trf_3680(C_word c,C_word *av) C_noret;
static void C_ccall trf_3680(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3680(t0,t1,t2);}

C_noret_decl(trf_3748)
static void C_ccall trf_3748(C_word c,C_word *av) C_noret;
static void C_ccall trf_3748(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3748(t0,t1);}

C_noret_decl(trf_3773)
static void C_ccall trf_3773(C_word c,C_word *av) C_noret;
static void C_ccall trf_3773(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3773(t0,t1,t2);}

C_noret_decl(trf_3808)
static void C_ccall trf_3808(C_word c,C_word *av) C_noret;
static void C_ccall trf_3808(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3808(t0,t1);}

C_noret_decl(trf_3901)
static void C_ccall trf_3901(C_word c,C_word *av) C_noret;
static void C_ccall trf_3901(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3901(t0,t1,t2);}

C_noret_decl(trf_3943)
static void C_ccall trf_3943(C_word c,C_word *av) C_noret;
static void C_ccall trf_3943(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3943(t0,t1,t2,t3);}

C_noret_decl(trf_3981)
static void C_ccall trf_3981(C_word c,C_word *av) C_noret;
static void C_ccall trf_3981(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3981(t0,t1);}

C_noret_decl(trf_4101)
static void C_ccall trf_4101(C_word c,C_word *av) C_noret;
static void C_ccall trf_4101(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4101(t0,t1,t2);}

/* f4454 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in ... */
static void C_ccall f4454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4454,c,av);}
/* chicken-uninstall.scm:153: chicken.base#exit */
t2=C_fast_retrieve(lf[56]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f4459 in k3979 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in ... */
static void C_ccall f4459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4459,c,av);}
/* chicken-uninstall.scm:153: chicken.base#exit */
t2=C_fast_retrieve(lf[56]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f4466 in k4070 in k3979 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in ... */
static void C_ccall f4466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4466,c,av);}
/* chicken-uninstall.scm:153: chicken.base#exit */
t2=C_fast_retrieve(lf[56]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f4473 in k3979 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in ... */
static void C_ccall f4473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4473,c,av);}
/* chicken-uninstall.scm:153: chicken.base#exit */
t2=C_fast_retrieve(lf[56]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1477 */
static void C_ccall f_1479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1479,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1482,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1480 in k1477 */
static void C_ccall f_1482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1482,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1485,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k1483 in k1480 in k1477 */
static void C_ccall f_1485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1485,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1488,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_1488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1488,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1491,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_1491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1491,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1494,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_1494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1494,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1497,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_1497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1497,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1500,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_1500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1500,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1503,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_1503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1503,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1506,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_1506(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1506,c,av);}
a=C_alloc(13);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1509,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4239,tmp=(C_word)a,a+=2,tmp);
/* chicken-uninstall.scm:27: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[113]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[113]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_1509(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1509,c,av);}
a=C_alloc(5);
t2=C_mutate(&lf[1] /* (set! main#filter ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2120,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate(&lf[3] /* (set! main#staticbuild ...) */,C_mk_bool(STATIC_CHICKEN));
t4=C_mutate(&lf[4] /* (set! main#debugbuild ...) */,C_mk_bool(DEBUG_CHICKEN));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2793,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:43: chicken.platform#feature? */
t6=C_fast_retrieve(lf[109]);{
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

/* loop in k4070 in k3979 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in ... */
static C_word C_fcall f_1886(C_word t1){
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
t4=C_i_memq(t3,lf[92]);
if(C_truep(C_i_not(t4))){
return(C_SCHEME_FALSE);}
else{
t6=C_u_i_cdr(t1);
t1=t6;
goto loop;}}}

/* loop in a3502 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in ... */
static C_word C_fcall f_1920(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=(
/* mini-srfi-1.scm:88: pred */
  f_3509(((C_word*)t0)[2],C_i_car(t1))
);
if(C_truep(t2)){
return(t2);}
else{
t4=C_u_i_cdr(t1);
t1=t4;
goto loop;}}}

/* loop in k3462 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in ... */
static void C_fcall f_1978(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1978,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1996,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:101: loop */
t6=t4;
t7=C_u_i_cdr(t2);
t1=t6;
t2=t7;
goto loop;}}

/* k1994 in loop in k3462 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in ... */
static void C_ccall f_1996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1996,c,av);}
/* mini-srfi-1.scm:101: scheme#append */
t2=*((C_word*)lf[71]+1);{
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

/* loop in loop in k3433 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in ... */
static void C_fcall f_2006(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2006,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(C_i_string_equal_p(((C_word*)t0)[2],t3))){
/* mini-srfi-1.scm:107: loop */
t7=t1;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}
else{
t4=C_u_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2033,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:109: loop */
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}}

/* k2031 in loop in loop in k3433 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in ... */
static void C_ccall f_2033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2033,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k3433 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in ... */
static void C_fcall f_2081(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_2081,3,t0,t1,t2);}
a=C_alloc(16);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2095,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2108,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2006,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_2006(t10,t6,t4);}}

/* k2093 in loop in k3433 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in ... */
static void C_ccall f_2095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2095,c,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2106 in loop in k3433 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in ... */
static void C_ccall f_2108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2108,c,av);}
/* mini-srfi-1.scm:123: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2081(t2,((C_word*)t0)[3],t1);}

/* main#filter in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_fcall f_2120(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2120,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_check_list_2(t3,lf[2]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2129,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2129(t8,t1,t3);}

/* foldr317 in main#filter in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_fcall f_2129(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_2129,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2137,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2158,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g322 in foldr317 in main#filter in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_fcall f_2137(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2137,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2144,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:131: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k2142 in g322 in foldr317 in main#filter in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_2144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2144,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]):((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2156 in foldr317 in main#filter in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_2158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2158,c,av);}
/* mini-srfi-1.scm:131: g322 */
t2=((C_word*)t0)[2];
f_2137(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_2793(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2793,c,av);}
a=C_alloc(6);
t2=lf[5] /* main#cross-chicken */ =t1;;
t3=lf[6] /* main#binary-version */ =C_fix((C_word)C_BINARY_VERSION);;
t4=lf[7] /* main#major-version */ =C_fix((C_word)C_MAJOR_VERSION);;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2799,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_2799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2799,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2803,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_2803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2803,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2807,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_2807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2807,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2811,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_2811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2811,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2815,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_2815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2815,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2819,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM_EXECUTABLE_OPTIONS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_2819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2819,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2823,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM_FILE_OPTIONS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_2823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2823,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2827,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_2827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2827,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2831,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_2831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2831,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[8] /* (set! main#default-libdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2835,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 in ... */
static void C_ccall f_2835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2835,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[9] /* (set! main#default-runlibdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2839,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_STATIC_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in ... */
static void C_ccall f_2839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2839,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2843,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INCLUDE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in ... */
static void C_ccall f_2843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2843,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2847,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in ... */
static void C_ccall f_2847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2847,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[10] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2851,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_SHARE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in ... */
static void C_ccall f_2851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2851,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4237,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:63: chicken.platform#software-type */
t3=C_fast_retrieve(lf[108]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in ... */
static void C_ccall f_2859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2859,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2863,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in ... */
static void C_ccall f_2863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2863,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[10] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2867,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4230,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_CSC_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in ... */
static void C_ccall f_2867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2867,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4226,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CSI_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in ... */
static void C_ccall f_2871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2871,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2875,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4222,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_DO_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in ... */
static void C_ccall f_2875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2875,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2879,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIBRARIAN);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in ... */
static void C_ccall f_2879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2879,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2883,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIBRARIAN_FLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in ... */
static void C_ccall f_2883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2883,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2887,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_EGG_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in ... */
static void C_ccall f_2887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2887,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[14] /* (set! main#host-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2891,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in ... */
static void C_ccall f_2891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2891,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2895,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in ... */
static void C_ccall f_2895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2895,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2899,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in ... */
static void C_ccall f_2899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2899,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2903,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in ... */
static void C_ccall f_2903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2903,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2907,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in ... */
static void C_ccall f_2907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2907,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2911,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in ... */
static void C_ccall f_2911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2911,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2915,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in ... */
static void C_ccall f_2915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2915,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2919,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in ... */
static void C_ccall f_2919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2919,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2923,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in ... */
static void C_ccall f_2923(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2923,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2927,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4217,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[6],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t5=C_fast_retrieve(lf[103]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=C_retrieve2(lf[6],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in ... */
static void C_ccall f_2927(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2927,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[15] /* (set! main#target-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2931,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4212,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[6],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t6=C_fast_retrieve(lf[103]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=C_retrieve2(lf[6],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in ... */
static void C_ccall f_2931(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2931,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[16] /* (set! main#target-run-repo ...) */,t1);
t3=C_mutate(&lf[17] /* (set! main#+egg-info-extension+ ...) */,lf[18]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3000,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:120: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[101];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2940 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in ... */
static void C_ccall f_2942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2942,c,av);}
a=C_alloc(4);
t2=C_i_not(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2951,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
if(C_truep(t2)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_3956(2,av2);}}
else{
/* egg-environment.scm:108: chicken.base#error */
t4=*((C_word*)lf[61]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[79];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}
else{
/* egg-environment.scm:107: chicken.pathname#absolute-pathname? */
t4=C_fast_retrieve(lf[80]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2949 in k2940 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in ... */
static void C_ccall f_2951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2951,c,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_3956(2,av2);}}
else{
/* egg-environment.scm:108: chicken.base#error */
t2=*((C_word*)lf[61]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[79];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2973 in k3400 in main#repo-path in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in ... */
static void C_ccall f_2975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2975,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?t1:C_retrieve2(lf[14],C_text("main#host-repo")));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in ... */
static void C_ccall f_3000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3000,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3003,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_3003(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4202,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:121: chicken.platform#system-cache-directory */
t4=C_fast_retrieve(lf[100]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in ... */
static void C_ccall f_3003(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3003,c,av);}
a=C_alloc(3);
t2=lf[19] /* main#host-extensions */ =C_SCHEME_TRUE;;
t3=lf[20] /* main#force-uninstall */ =C_SCHEME_FALSE;;
t4=lf[21] /* main#sudo-uninstall */ =C_SCHEME_FALSE;;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3389,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:53: chicken.process-context#get-environment-variable */
t6=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[97];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3007 in k3740 in k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in ... */
static void C_ccall f_3009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3009,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3015,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:34: chicken.file#file-exists? */
t3=C_fast_retrieve(lf[40]);{
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

/* k3013 in k3007 in k3740 in k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in ... */
static void C_ccall f_3015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3015,c,av);}
if(C_truep(t1)){
/* egg-information.scm:38: scheme#with-input-from-file */
t2=C_fast_retrieve(lf[46]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[47]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* egg-information.scm:38: scheme#with-input-from-file */
t2=C_fast_retrieve(lf[46]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=*((C_word*)lf[47]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k3017 in k3740 in k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in ... */
static void C_ccall f_3019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3019,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3023,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:32: chicken.pathname#pathname-file */
t3=C_fast_retrieve(lf[50]);{
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

/* k3021 in k3017 in k3740 in k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in ... */
static void C_ccall f_3023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3023,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:33: chicken.pathname#pathname-extension */
t3=C_fast_retrieve(lf[49]);{
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

/* k3025 in k3021 in k3017 in k3740 in k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in ... */
static void C_ccall f_3027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3027,c,av);}
/* egg-information.scm:30: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[48]);{
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

/* k3029 in k3740 in k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in ... */
static void C_ccall f_3031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3031,c,av);}
/* egg-information.scm:30: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[51];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in ... */
static void C_ccall f_3389(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3389,c,av);}
a=C_alloc(10);
t2=(C_truep(t1)?t1:lf[22]);
t3=C_mutate(&lf[23] /* (set! main#sudo-program ...) */,t2);
t4=C_mutate(&lf[24] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3394,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[29] /* (set! main#delete-installed-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3808,tmp=(C_word)a,a+=2,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4185,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4195,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:199: chicken.process-context#command-line-arguments */
t8=C_fast_retrieve(lf[96]);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* main#repo-path in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in ... */
static void C_fcall f_3394(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3394,1,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3402,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[5],C_text("main#cross-chicken")))){
t3=C_i_not(C_retrieve2(lf[19],C_text("main#host-extensions")));
t4=t2;
f_3402(t4,(C_truep(t3)?lf[25]:lf[28]));}
else{
t3=t2;
f_3402(t3,lf[28]);}}

/* k3400 in main#repo-path in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in ... */
static void C_fcall f_3402(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3402,2,t0,t1);}
a=C_alloc(3);
t2=C_SCHEME_END_OF_LIST;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_eqp(lf[25],t1);
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=(C_truep(t4)?C_retrieve2(lf[16],C_text("main#target-run-repo")):C_retrieve2(lf[15],C_text("main#target-repo")));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2975,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:113: chicken.process-context#get-environment-variable */
t7=C_fast_retrieve(lf[26]);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[27];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* a3415 in k3452 in g958 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in ... */
static void C_ccall f_3416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3416,c,av);}
t3=C_fast_retrieve(lf[74]);
/* chicken-uninstall.scm:63: g917 */
t4=C_fast_retrieve(lf[74]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in ... */
static void C_ccall f_3429(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3429,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3432,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3515,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3515(t6,t2,t1);}

/* k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in ... */
static void C_ccall f_3432(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_3432,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3435,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3446,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[70]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3464,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3466,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3466(t13,t9,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3503,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:73: filter */
f_2120(t2,t3,t1);}}

/* k3433 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in ... */
static void C_ccall f_3435(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3435,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2081,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2081(t5,((C_word*)t0)[2],t1);}

/* g958 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in ... */
static void C_fcall f_3446(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3446,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3454,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3458,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:71: chicken.irregex#glob->sre */
t5=C_fast_retrieve(lf[76]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3452 in g958 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in ... */
static void C_ccall f_3454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3454,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3416,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:63: filter */
f_2120(((C_word*)t0)[2],t2,((C_word*)t0)[3]);}

/* k3456 in g958 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in ... */
static void C_ccall f_3458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3458,c,av);}
/* chicken-uninstall.scm:71: chicken.irregex#irregex */
t2=C_fast_retrieve(lf[75]);{
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

/* k3462 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in ... */
static void C_ccall f_3464(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3464,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1978,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_1978(t5,((C_word*)t0)[2],t1);}

/* map-loop952 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in ... */
static void C_fcall f_3466(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3466,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3491,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-uninstall.scm:70: g958 */
t4=((C_word*)t0)[4];
f_3446(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3489 in map-loop952 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in ... */
static void C_ccall f_3491(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3491,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3466(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* a3502 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in ... */
static void C_ccall f_3503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3503,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3509,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1920,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=(
  f_1920(t4,((C_word*)t0)[2])
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a3508 in a3502 in k3430 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in ... */
static C_word C_fcall f_3509(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_string_equal_p(t1,((C_word*)t0)[2]));}

/* map-loop925 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in ... */
static void C_fcall f_3515(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3515,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-uninstall.scm:66: g931 */
t4=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3538 in map-loop925 in k3427 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in ... */
static void C_ccall f_3540(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3540,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3515(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k3549 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in ... */
static void C_ccall f_3551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3551,c,av);}
/* chicken-uninstall.scm:67: chicken.file#glob */
t2=C_fast_retrieve(lf[77]);{
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

/* k3553 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in ... */
static void C_ccall f_3555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3555,c,av);}
/* chicken-uninstall.scm:67: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[78];
av2[4]=C_retrieve2(lf[17],C_text("main#+egg-info-extension+"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3559 in k3589 in k3586 in k3583 in k3580 in k3577 in loop in k3568 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in ... */
static void C_ccall f_3561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3561,c,av);}
/* chicken-uninstall.scm:81: chicken.base#exit */
t2=C_fast_retrieve(lf[56]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3568 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in ... */
static void C_ccall f_3570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3570,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3575,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3575(t5,((C_word*)t0)[2]);}

/* loop in k3568 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in ... */
static void C_fcall f_3575(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3575,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3579,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:89: scheme#display */
t3=*((C_word*)lf[65]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[66];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3577 in loop in k3568 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in ... */
static void C_ccall f_3579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3579,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3582,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:90: chicken.base#flush-output */
t3=*((C_word*)lf[64]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3580 in k3577 in loop in k3568 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in ... */
static void C_ccall f_3582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3582,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:91: chicken.io#read-line */
t3=C_fast_retrieve(lf[63]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3583 in k3580 in k3577 in loop in k3568 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in ... */
static void C_ccall f_3585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3585,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_eofp(t1))){
/* chicken-uninstall.scm:93: chicken.base#error */
t3=*((C_word*)lf[61]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[62];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_3588(2,av2);}}}

/* k3586 in k3583 in k3580 in k3577 in loop in k3568 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in ... */
static void C_ccall f_3588(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_3588,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3591,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3680,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3720,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3724,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3728,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3732,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3736,a[2]=t4,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string->list */
t11=C_fast_retrieve(lf[60]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* k3589 in k3586 in k3583 in k3580 in k3577 in loop in k3568 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in ... */
static void C_ccall f_3591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3591,c,av);}
a=C_alloc(3);
t2=C_i_string_equal_p(t1,lf[54]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(t1,lf[55]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3561,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:80: chicken.base#print */
t4=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[57];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
/* chicken-uninstall.scm:97: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3575(t3,((C_word*)t0)[2]);}}}

/* k3616 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in ... */
static void C_ccall f_3618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3618,c,av);}
/* chicken-uninstall.scm:84: chicken.base#print */
t2=*((C_word*)lf[42]+1);{
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

/* k3620 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in ... */
static void C_ccall f_3622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3622,c,av);}
/* chicken-uninstall.scm:84: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[67]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[68];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3639 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in ... */
static void C_ccall f_3641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3641,c,av);}
/* chicken-uninstall.scm:85: scheme#append */
t2=*((C_word*)lf[71]+1);{
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

/* map-loop993 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in ... */
static void C_fcall f_3643(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3643,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-uninstall.scm:86: g1016 */
t4=*((C_word*)lf[34]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[72];
av2[3]=C_slot(t2,C_fix(0));
av2[4]=lf[73];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3666 in map-loop993 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in ... */
static void C_ccall f_3668(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3668,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3643(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* left in k3586 in k3583 in k3580 in k3577 in loop in k3568 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in ... */
static void C_fcall f_3680(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3680,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(C_u_i_char_whitespacep(t3))){
/* chicken-uninstall.scm:102: left */
t7=t1;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}
else{
t4=C_u_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3707,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:103: left */
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}}

/* k3705 in left in k3586 in k3583 in k3580 in k3577 in loop in k3568 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in ... */
static void C_ccall f_3707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3707,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3718 in k3586 in k3583 in k3580 in k3577 in loop in k3568 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in ... */
static void C_ccall f_3720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3720,c,av);}
/* ##sys#list->string */
t2=C_fast_retrieve(lf[58]);{
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

/* k3722 in k3586 in k3583 in k3580 in k3577 in loop in k3568 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in ... */
static void C_ccall f_3724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3724,c,av);}
/* chicken-uninstall.scm:104: scheme#reverse */
t2=*((C_word*)lf[59]+1);{
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

/* k3726 in k3586 in k3583 in k3580 in k3577 in loop in k3568 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in ... */
static void C_ccall f_3728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3728,c,av);}
/* chicken-uninstall.scm:104: left */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3680(t2,((C_word*)t0)[3],t1);}

/* k3730 in k3586 in k3583 in k3580 in k3577 in loop in k3568 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in ... */
static void C_ccall f_3732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3732,c,av);}
/* chicken-uninstall.scm:104: scheme#reverse */
t2=*((C_word*)lf[59]+1);{
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

/* k3734 in k3586 in k3583 in k3580 in k3577 in loop in k3568 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in ... */
static void C_ccall f_3736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3736,c,av);}
/* chicken-uninstall.scm:104: left */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3680(t2,((C_word*)t0)[3],t1);}

/* k3740 in k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in ... */
static void C_ccall f_3742(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_3742,c,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3748,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3798,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3009,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3019,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3031,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* egg-information.scm:30: chicken.pathname#pathname-directory */
t7=C_fast_retrieve(lf[52]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
f_3901(t2,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}}

/* k3746 in k3740 in k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in ... */
static void C_fcall f_3748(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_3748,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_i_check_list_2(t1,lf[44]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3768,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3773,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3773(t7,t3,t1);}
else{
t2=((C_word*)((C_word*)t0)[4])[1];
f_3901(t2,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}}

/* k3757 in for-each-loop1055 in k3746 in k3740 in k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in ... */
static void C_ccall f_3759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3759,c,av);}
if(C_truep(t1)){
/* chicken-uninstall.scm:113: delete-installed-file */
f_3808(((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)((C_word*)t0)[4])[1];
f_3773(t2,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}}

/* k3766 in k3746 in k3740 in k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in ... */
static void C_ccall f_3768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3768,c,av);}
/* chicken-uninstall.scm:115: delete-installed-file */
f_3808(((C_word*)t0)[2],((C_word*)t0)[3]);}

/* for-each-loop1055 in k3746 in k3740 in k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in ... */
static void C_fcall f_3773(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_3773,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3783,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3759,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken-uninstall.scm:113: chicken.file#file-exists? */
t6=C_fast_retrieve(lf[40]);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3781 in for-each-loop1055 in k3746 in k3740 in k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in ... */
static void C_ccall f_3783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3783,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3773(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k3796 in k3740 in k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in ... */
static void C_ccall f_3798(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3798,c,av);}
t2=C_SCHEME_END_OF_LIST;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_car(t2));
t5=C_i_assq(lf[45],t1);
if(C_truep(t5)){
t6=C_i_cdr(t5);
t7=((C_word*)t0)[2];
f_3748(t7,(C_truep(t6)?t6:t4));}
else{
t6=((C_word*)t0)[2];
f_3748(t6,t4);}}

/* k3800 in k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in ... */
static void C_ccall f_3802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3802,c,av);}
/* chicken-uninstall.scm:107: chicken.file#file-exists? */
t2=C_fast_retrieve(lf[40]);{
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

/* k3804 in k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in ... */
static void C_ccall f_3806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3806,c,av);}
/* chicken-uninstall.scm:108: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=C_retrieve2(lf[17],C_text("main#+egg-info-extension+"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* main#delete-installed-file in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in ... */
static void C_fcall f_3808(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3808,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3864,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:118: chicken.file#file-exists? */
t4=C_fast_retrieve(lf[40]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3825 in k3862 in main#delete-installed-file in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in ... */
static void C_ccall f_3827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3827,c,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-uninstall.scm:123: chicken.base#warning */
t3=C_fast_retrieve(lf[30]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[32];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k3839 in k3862 in main#delete-installed-file in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in ... */
static void C_ccall f_3841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3841,c,av);}
/* chicken-uninstall.scm:121: chicken.process#system */
t2=C_fast_retrieve(lf[33]);{
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

/* k3843 in k3862 in main#delete-installed-file in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in ... */
static void C_ccall f_3845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3845,c,av);}
/* chicken-uninstall.scm:121: scheme#string-append */
t2=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[23],C_text("main#sudo-program"));
av2[3]=lf[35];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3849 in k3862 in main#delete-installed-file in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in ... */
static void C_ccall f_3851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3851,c,av);}
if(C_truep(t1)){
/* chicken-uninstall.scm:125: chicken.file#delete-directory */
t2=C_fast_retrieve(lf[37]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* chicken-uninstall.scm:127: chicken.file#delete-file */
t2=C_fast_retrieve(lf[38]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k3862 in main#delete-installed-file in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in ... */
static void C_ccall f_3864(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3864,c,av);}
a=C_alloc(10);
if(C_truep(C_i_not(t1))){
/* chicken-uninstall.scm:119: chicken.base#warning */
t2=C_fast_retrieve(lf[30]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[31];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(C_truep(C_retrieve2(lf[21],C_text("main#sudo-uninstall")))?C_eqp(lf[12],C_retrieve2(lf[13],C_text("main#default-platform"))):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3827,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3841,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3845,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:121: chicken.process#qs */
t6=C_fast_retrieve(lf[36]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3851,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:124: chicken.file#directory-exists? */
t4=C_fast_retrieve(lf[39]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in ... */
static void C_ccall f_3870(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,3)))){
C_save_and_reclaim((void *)f_3870,c,av);}
a=C_alloc(32);
if(C_truep(C_i_nullp(t1))){
/* chicken-uninstall.scm:132: chicken.base#print */
t2=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[43];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_retrieve2(lf[20],C_text("main#force-uninstall"));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3885,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[20],C_text("main#force-uninstall")))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_retrieve2(lf[20],C_text("main#force-uninstall"));
f_3885(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3570,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3618,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3622,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_list1(&a,1,lf[69]);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_i_check_list_2(t1,lf[70]);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3641,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3643,a[2]=t10,a[3]=t15,a[4]=t11,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_3643(t17,t13,t1);}}}

/* k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in ... */
static void C_ccall f_3885(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3885,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_check_list_2(((C_word*)t0)[2],lf[44]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3901,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_3901(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3888 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in ... */
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3890,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3802,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3806,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:108: repo-path */
f_3394(t4);}

/* for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in ... */
static void C_fcall f_3901(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_3901,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3911,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3890,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-uninstall.scm:136: chicken.base#print */
t6=*((C_word*)lf[42]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[53];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3909 in for-each-loop1094 in k3883 in k3868 in k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in ... */
static void C_ccall f_3911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3911,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3901(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in ... */
static void C_fcall f_3943(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3943,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3953,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4454,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:141: chicken.base#print */
t6=*((C_word*)lf[42]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[82];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3953(2,av2);}}}
else{
t4=C_i_car(t2);
t5=C_i_string_equal_p(t4,lf[83]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3981,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t7=t6;
f_3981(t7,t5);}
else{
t7=C_u_i_string_equal_p(t4,lf[94]);
t8=t6;
f_3981(t8,(C_truep(t7)?t7:C_u_i_string_equal_p(t4,lf[95])));}}}

/* k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in ... */
static void C_ccall f_3953(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3953,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3956,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2942,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:106: chicken.process-context#get-environment-variable */
t4=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[81];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in ... */
static void C_ccall f_3956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3956,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-uninstall.scm:163: scheme#reverse */
t3=*((C_word*)lf[59]+1);{
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

/* k3961 in k3954 in k3951 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in ... */
static void C_ccall f_3963(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_3963,c,av);}
a=C_alloc(22);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3870,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_fast_retrieve(lf[50]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3429,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t6,a[6]=t8,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3551,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3555,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:67: repo-path */
f_3394(t11);}

/* k3979 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in ... */
static void C_fcall f_3981(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_3981,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4459,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:141: chicken.base#print */
t3=*((C_word*)lf[42]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[82];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[84]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3992,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3999,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:171: chicken.platform#chicken-version */
t4=C_fast_retrieve(lf[85]);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[86]))){
t2=lf[19] /* main#host-extensions */ =C_SCHEME_FALSE;;
/* chicken-uninstall.scm:175: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3943(t3,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[87]))){
/* chicken-uninstall.scm:178: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3943(t2,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[88]))){
t2=lf[20] /* main#force-uninstall */ =C_SCHEME_TRUE;;
/* chicken-uninstall.scm:181: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3943(t3,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
if(C_truep(C_u_i_string_equal_p(((C_word*)t0)[3],lf[89]))){
t2=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
/* chicken-uninstall.scm:184: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3943(t3,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
t2=C_u_i_string_equal_p(((C_word*)t0)[3],lf[90]);
t3=(C_truep(t2)?t2:C_u_i_string_equal_p(((C_word*)t0)[3],lf[91]));
if(C_truep(t3)){
t4=lf[21] /* main#sudo-uninstall */ =C_SCHEME_TRUE;;
/* chicken-uninstall.scm:187: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3943(t5,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
t4=C_block_size(((C_word*)t0)[3]);
t5=(C_truep(C_i_fixnum_positivep(t4))?C_u_i_char_equalp(C_make_character(45),C_i_string_ref(((C_word*)t0)[3],C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_block_size(((C_word*)t0)[3]);
if(C_truep(C_fixnum_greaterp(t6,C_fix(2)))){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4072,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4146,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:191: scheme#substring */
t9=*((C_word*)lf[93]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4473,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:141: chicken.base#print */
t8=*((C_word*)lf[42]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[82];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}
else{
t6=C_u_i_cdr(((C_word*)t0)[5]);
t7=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[6]);
/* chicken-uninstall.scm:197: loop */
t8=((C_word*)((C_word*)t0)[4])[1];
f_3943(t8,((C_word*)t0)[2],t6,t7);}}}}}}}}}

/* k3990 in k3979 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in ... */
static void C_ccall f_3992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3992,c,av);}
/* chicken-uninstall.scm:172: chicken.base#exit */
t2=C_fast_retrieve(lf[56]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3997 in k3979 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in ... */
static void C_ccall f_3999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3999,c,av);}
/* chicken-uninstall.scm:171: chicken.base#print */
t2=*((C_word*)lf[42]+1);{
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

/* k4070 in k3979 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in ... */
static void C_ccall f_4072(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_4072,c,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1886,tmp=(C_word)a,a+=2,tmp);
t3=(
  f_1886(t1)
);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4097,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4101,a[2]=t7,a[3]=t11,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_4101(t13,t9,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4466,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-uninstall.scm:141: chicken.base#print */
t5=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[82];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k4083 in k4070 in k3979 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in ... */
static void C_ccall f_4085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4085,c,av);}
/* chicken-uninstall.scm:193: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3943(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k4095 in k4070 in k3979 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in ... */
static void C_ccall f_4097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4097,c,av);}
/* chicken-uninstall.scm:193: scheme#append */
t2=*((C_word*)lf[71]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_u_i_cdr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1159 in k4070 in k3979 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in ... */
static void C_fcall f_4101(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4101,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_string(&a,2,C_make_character(45),t3);
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

/* k4144 in k3979 in loop in k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in ... */
static void C_ccall f_4146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4146,c,av);}
/* ##sys#string->list */
t2=C_fast_retrieve(lf[60]);{
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

/* k4183 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in ... */
static void C_ccall f_4185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4185,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4191,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base#implicit-exit-handler */
t3=C_fast_retrieve(lf[41]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4189 in k4183 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in ... */
static void C_ccall f_4191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4191,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4193 in k3387 in k3001 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in ... */
static void C_ccall f_4195(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4195,c,av);}
a=C_alloc(8);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3943,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3943(t7,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4200 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in ... */
static void C_ccall f_4202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4202,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4205,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* egg-environment.scm:121: chicken.pathname#make-pathname */
t3=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[98];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* egg-environment.scm:122: chicken.process-context#current-directory */
t3=C_fast_retrieve(lf[99]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4203 in k4200 in k2998 in k2929 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in ... */
static void C_ccall f_4205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4205,c,av);}
/* egg-environment.scm:121: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[98];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4210 in k2925 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in ... */
static void C_ccall f_4212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4212,c,av);}
/* egg-environment.scm:97: scheme#string-append */
t2=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[9],C_text("main#default-runlibdir"));
av2[3]=lf[102];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4215 in k2921 in k2917 in k2913 in k2909 in k2905 in k2901 in k2897 in k2893 in k2889 in k2885 in k2881 in k2877 in k2873 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in ... */
static void C_ccall f_4217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4217,c,av);}
/* egg-environment.scm:94: scheme#string-append */
t2=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[8],C_text("main#default-libdir"));
av2[3]=lf[104];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4220 in k2869 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in ... */
static void C_ccall f_4222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4222,c,av);}
/* egg-environment.scm:77: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[10],C_text("main#default-bindir"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4224 in k2865 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in ... */
static void C_ccall f_4226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4226,c,av);}
/* egg-environment.scm:74: scheme#string-append */
t2=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[10],C_text("main#default-bindir"));
av2[3]=lf[106];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4228 in k2861 in k2857 in k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in ... */
static void C_ccall f_4230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4230,c,av);}
/* egg-environment.scm:71: scheme#string-append */
t2=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[10],C_text("main#default-bindir"));
av2[3]=lf[107];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4235 in k2849 in k2845 in k2841 in k2837 in k2833 in k2829 in k2825 in k2821 in k2817 in k2813 in k2809 in k2805 in k2801 in k2797 in k2791 in k1507 in k1504 in k1501 in k1498 in k1495 in k1492 in ... */
static void C_ccall f_4237(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4237,c,av);}
a=C_alloc(6);
t2=C_eqp(t1,lf[11]);
t3=(C_truep(t2)?C_mk_bool(C_WINDOWS_SHELL):lf[12]);
t4=C_mutate(&lf[13] /* (set! main#default-platform ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2859,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* a4238 in k1504 in k1501 in k1498 in k1495 in k1492 in k1489 in k1486 in k1483 in k1480 in k1477 */
static void C_ccall f_4239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4239,c,av);}
/* chicken-uninstall.scm:27: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[111]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[111]+1);
av2[1]=t1;
av2[2]=lf[112];
av2[3]=lf[112];
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
if(C_unlikely(!C_demand_2(387))){
C_save(t1);
C_rereclaim2(387*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,114);
lf[0]=C_h_intern(&lf[0],5, C_text("main#"));
lf[2]=C_h_intern(&lf[2],5, C_text("foldr"));
lf[11]=C_h_intern(&lf[11],7, C_text("windows"));
lf[12]=C_h_intern(&lf[12],4, C_text("unix"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010egg-info"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004sudo"));
lf[25]=C_h_intern(&lf[25],6, C_text("target"));
lf[26]=C_h_intern(&lf[26],48, C_text("chicken.process-context#get-environment-variable"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032CHICKEN_INSTALL_REPOSITORY"));
lf[28]=C_h_intern(&lf[28],4, C_text("host"));
lf[30]=C_h_intern(&lf[30],20, C_text("chicken.base#warning"));
lf[31]=C_decode_literal(C_heaptop,C_text("\376B\000\000\023file does not exist"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376B\000\000\024deleting file failed"));
lf[33]=C_h_intern(&lf[33],22, C_text("chicken.process#system"));
lf[34]=C_h_intern(&lf[34],20, C_text("scheme#string-append"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376B\000\000\015 rm -f -r -- "));
lf[36]=C_h_intern(&lf[36],18, C_text("chicken.process#qs"));
lf[37]=C_h_intern(&lf[37],29, C_text("chicken.file#delete-directory"));
lf[38]=C_h_intern(&lf[38],24, C_text("chicken.file#delete-file"));
lf[39]=C_h_intern(&lf[39],30, C_text("chicken.file#directory-exists\077"));
lf[40]=C_h_intern(&lf[40],25, C_text("chicken.file#file-exists\077"));
lf[41]=C_h_intern(&lf[41],34, C_text("chicken.base#implicit-exit-handler"));
lf[42]=C_h_intern(&lf[42],18, C_text("chicken.base#print"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376B\000\000\022nothing to remove."));
lf[44]=C_h_intern(&lf[44],8, C_text("for-each"));
lf[45]=C_h_intern(&lf[45],15, C_text("installed-files"));
lf[46]=C_h_intern(&lf[46],27, C_text("scheme#with-input-from-file"));
lf[47]=C_h_intern(&lf[47],11, C_text("scheme#read"));
lf[48]=C_h_intern(&lf[48],30, C_text("chicken.pathname#make-pathname"));
lf[49]=C_h_intern(&lf[49],35, C_text("chicken.pathname#pathname-extension"));
lf[50]=C_h_intern(&lf[50],30, C_text("chicken.pathname#pathname-file"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007chicken"));
lf[52]=C_h_intern(&lf[52],35, C_text("chicken.pathname#pathname-directory"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011removing "));
lf[54]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003yes"));
lf[55]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002no"));
lf[56]=C_h_intern(&lf[56],17, C_text("chicken.base#exit"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010aborted."));
lf[58]=C_h_intern(&lf[58],18, C_text("##sys#list->string"));
lf[59]=C_h_intern(&lf[59],14, C_text("scheme#reverse"));
lf[60]=C_h_intern(&lf[60],18, C_text("##sys#string->list"));
lf[61]=C_h_intern(&lf[61],18, C_text("chicken.base#error"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376B\000\000$EOF - use `-force\047 to proceed anyway"));
lf[63]=C_h_intern(&lf[63],20, C_text("chicken.io#read-line"));
lf[64]=C_h_intern(&lf[64],25, C_text("chicken.base#flush-output"));
lf[65]=C_h_intern(&lf[65],14, C_text("scheme#display"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376B\000\000!Do you want to proceed\077 (yes/no) "));
lf[67]=C_h_intern(&lf[67],33, C_text("chicken.string#string-intersperse"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000+About to delete the following extensions:\012\012"));
lf[70]=C_h_intern(&lf[70],3, C_text("map"));
lf[71]=C_h_intern(&lf[71],13, C_text("scheme#append"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[73]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\012"));
lf[74]=C_h_intern(&lf[74],30, C_text("chicken.irregex#irregex-search"));
lf[75]=C_h_intern(&lf[75],23, C_text("chicken.irregex#irregex"));
lf[76]=C_h_intern(&lf[76],25, C_text("chicken.irregex#glob->sre"));
lf[77]=C_h_intern(&lf[77],17, C_text("chicken.file#glob"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\052"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376B\000\0007CHICKEN_INSTALL_REPOSITORY must be an absolute pathname"));
lf[80]=C_h_intern(&lf[80],35, C_text("chicken.pathname#absolute-pathname\077"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376B\000\000\032CHICKEN_INSTALL_REPOSITORY"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376B\000\002,usage: chicken-uninstall [OPTION ...] [NAME ...]\012\012  -h   -help             "
"       show this message and exit\012       -version                 show version a"
"nd exit\012       -force                   don\047t ask, delete whatever matches\012     "
"  -match                   treat NAME as a glob pattern\012  -s   -sudo            "
"        use external command to elevate privileges for deleting files\012       -ho"
"st                    when cross-compiling, uninstall host extensions only\012     "
"  -target                  when cross-compiling, uninstall target extensions onl"
"y"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-help"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-version"));
lf[85]=C_h_intern(&lf[85],32, C_text("chicken.platform#chicken-version"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-target"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-host"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-force"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-match"));
lf[90]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-s"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-sudo"));
lf[92]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000s\376\003\000\000\002\376\377\012\000\000p\376\377\016"));
lf[93]=C_h_intern(&lf[93],16, C_text("scheme#substring"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-h"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006--help"));
lf[96]=C_h_intern(&lf[96],46, C_text("chicken.process-context#command-line-arguments"));
lf[97]=C_decode_literal(C_heaptop,C_text("\376B\000\000\004SUDO"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017chicken-install"));
lf[99]=C_h_intern(&lf[99],41, C_text("chicken.process-context#current-directory"));
lf[100]=C_h_intern(&lf[100],39, C_text("chicken.platform#system-cache-directory"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021CHICKEN_EGG_CACHE"));
lf[102]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[103]=C_h_intern(&lf[103],20, C_text("##sys#fixnum->string"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[105]=C_h_intern(&lf[105],19, C_text("##sys#peek-c-string"));
lf[106]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[107]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[108]=C_h_intern(&lf[108],30, C_text("chicken.platform#software-type"));
lf[109]=C_h_intern(&lf[109],25, C_text("chicken.platform#feature\077"));
lf[110]=C_h_intern_kw(&lf[110],13, C_text("cross-chicken"));
lf[111]=C_h_intern(&lf[111],30, C_text("##sys#register-compiled-module"));
lf[112]=C_h_intern(&lf[112],4, C_text("main"));
lf[113]=C_h_intern(&lf[113],22, C_text("##sys#with-environment"));
C_register_lf2(lf,114,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1479,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[159] = {
{C_text("f4454:chicken_2duninstall_2escm"),(void*)f4454},
{C_text("f4459:chicken_2duninstall_2escm"),(void*)f4459},
{C_text("f4466:chicken_2duninstall_2escm"),(void*)f4466},
{C_text("f4473:chicken_2duninstall_2escm"),(void*)f4473},
{C_text("f_1479:chicken_2duninstall_2escm"),(void*)f_1479},
{C_text("f_1482:chicken_2duninstall_2escm"),(void*)f_1482},
{C_text("f_1485:chicken_2duninstall_2escm"),(void*)f_1485},
{C_text("f_1488:chicken_2duninstall_2escm"),(void*)f_1488},
{C_text("f_1491:chicken_2duninstall_2escm"),(void*)f_1491},
{C_text("f_1494:chicken_2duninstall_2escm"),(void*)f_1494},
{C_text("f_1497:chicken_2duninstall_2escm"),(void*)f_1497},
{C_text("f_1500:chicken_2duninstall_2escm"),(void*)f_1500},
{C_text("f_1503:chicken_2duninstall_2escm"),(void*)f_1503},
{C_text("f_1506:chicken_2duninstall_2escm"),(void*)f_1506},
{C_text("f_1509:chicken_2duninstall_2escm"),(void*)f_1509},
{C_text("f_1886:chicken_2duninstall_2escm"),(void*)f_1886},
{C_text("f_1920:chicken_2duninstall_2escm"),(void*)f_1920},
{C_text("f_1978:chicken_2duninstall_2escm"),(void*)f_1978},
{C_text("f_1996:chicken_2duninstall_2escm"),(void*)f_1996},
{C_text("f_2006:chicken_2duninstall_2escm"),(void*)f_2006},
{C_text("f_2033:chicken_2duninstall_2escm"),(void*)f_2033},
{C_text("f_2081:chicken_2duninstall_2escm"),(void*)f_2081},
{C_text("f_2095:chicken_2duninstall_2escm"),(void*)f_2095},
{C_text("f_2108:chicken_2duninstall_2escm"),(void*)f_2108},
{C_text("f_2120:chicken_2duninstall_2escm"),(void*)f_2120},
{C_text("f_2129:chicken_2duninstall_2escm"),(void*)f_2129},
{C_text("f_2137:chicken_2duninstall_2escm"),(void*)f_2137},
{C_text("f_2144:chicken_2duninstall_2escm"),(void*)f_2144},
{C_text("f_2158:chicken_2duninstall_2escm"),(void*)f_2158},
{C_text("f_2793:chicken_2duninstall_2escm"),(void*)f_2793},
{C_text("f_2799:chicken_2duninstall_2escm"),(void*)f_2799},
{C_text("f_2803:chicken_2duninstall_2escm"),(void*)f_2803},
{C_text("f_2807:chicken_2duninstall_2escm"),(void*)f_2807},
{C_text("f_2811:chicken_2duninstall_2escm"),(void*)f_2811},
{C_text("f_2815:chicken_2duninstall_2escm"),(void*)f_2815},
{C_text("f_2819:chicken_2duninstall_2escm"),(void*)f_2819},
{C_text("f_2823:chicken_2duninstall_2escm"),(void*)f_2823},
{C_text("f_2827:chicken_2duninstall_2escm"),(void*)f_2827},
{C_text("f_2831:chicken_2duninstall_2escm"),(void*)f_2831},
{C_text("f_2835:chicken_2duninstall_2escm"),(void*)f_2835},
{C_text("f_2839:chicken_2duninstall_2escm"),(void*)f_2839},
{C_text("f_2843:chicken_2duninstall_2escm"),(void*)f_2843},
{C_text("f_2847:chicken_2duninstall_2escm"),(void*)f_2847},
{C_text("f_2851:chicken_2duninstall_2escm"),(void*)f_2851},
{C_text("f_2859:chicken_2duninstall_2escm"),(void*)f_2859},
{C_text("f_2863:chicken_2duninstall_2escm"),(void*)f_2863},
{C_text("f_2867:chicken_2duninstall_2escm"),(void*)f_2867},
{C_text("f_2871:chicken_2duninstall_2escm"),(void*)f_2871},
{C_text("f_2875:chicken_2duninstall_2escm"),(void*)f_2875},
{C_text("f_2879:chicken_2duninstall_2escm"),(void*)f_2879},
{C_text("f_2883:chicken_2duninstall_2escm"),(void*)f_2883},
{C_text("f_2887:chicken_2duninstall_2escm"),(void*)f_2887},
{C_text("f_2891:chicken_2duninstall_2escm"),(void*)f_2891},
{C_text("f_2895:chicken_2duninstall_2escm"),(void*)f_2895},
{C_text("f_2899:chicken_2duninstall_2escm"),(void*)f_2899},
{C_text("f_2903:chicken_2duninstall_2escm"),(void*)f_2903},
{C_text("f_2907:chicken_2duninstall_2escm"),(void*)f_2907},
{C_text("f_2911:chicken_2duninstall_2escm"),(void*)f_2911},
{C_text("f_2915:chicken_2duninstall_2escm"),(void*)f_2915},
{C_text("f_2919:chicken_2duninstall_2escm"),(void*)f_2919},
{C_text("f_2923:chicken_2duninstall_2escm"),(void*)f_2923},
{C_text("f_2927:chicken_2duninstall_2escm"),(void*)f_2927},
{C_text("f_2931:chicken_2duninstall_2escm"),(void*)f_2931},
{C_text("f_2942:chicken_2duninstall_2escm"),(void*)f_2942},
{C_text("f_2951:chicken_2duninstall_2escm"),(void*)f_2951},
{C_text("f_2975:chicken_2duninstall_2escm"),(void*)f_2975},
{C_text("f_3000:chicken_2duninstall_2escm"),(void*)f_3000},
{C_text("f_3003:chicken_2duninstall_2escm"),(void*)f_3003},
{C_text("f_3009:chicken_2duninstall_2escm"),(void*)f_3009},
{C_text("f_3015:chicken_2duninstall_2escm"),(void*)f_3015},
{C_text("f_3019:chicken_2duninstall_2escm"),(void*)f_3019},
{C_text("f_3023:chicken_2duninstall_2escm"),(void*)f_3023},
{C_text("f_3027:chicken_2duninstall_2escm"),(void*)f_3027},
{C_text("f_3031:chicken_2duninstall_2escm"),(void*)f_3031},
{C_text("f_3389:chicken_2duninstall_2escm"),(void*)f_3389},
{C_text("f_3394:chicken_2duninstall_2escm"),(void*)f_3394},
{C_text("f_3402:chicken_2duninstall_2escm"),(void*)f_3402},
{C_text("f_3416:chicken_2duninstall_2escm"),(void*)f_3416},
{C_text("f_3429:chicken_2duninstall_2escm"),(void*)f_3429},
{C_text("f_3432:chicken_2duninstall_2escm"),(void*)f_3432},
{C_text("f_3435:chicken_2duninstall_2escm"),(void*)f_3435},
{C_text("f_3446:chicken_2duninstall_2escm"),(void*)f_3446},
{C_text("f_3454:chicken_2duninstall_2escm"),(void*)f_3454},
{C_text("f_3458:chicken_2duninstall_2escm"),(void*)f_3458},
{C_text("f_3464:chicken_2duninstall_2escm"),(void*)f_3464},
{C_text("f_3466:chicken_2duninstall_2escm"),(void*)f_3466},
{C_text("f_3491:chicken_2duninstall_2escm"),(void*)f_3491},
{C_text("f_3503:chicken_2duninstall_2escm"),(void*)f_3503},
{C_text("f_3509:chicken_2duninstall_2escm"),(void*)f_3509},
{C_text("f_3515:chicken_2duninstall_2escm"),(void*)f_3515},
{C_text("f_3540:chicken_2duninstall_2escm"),(void*)f_3540},
{C_text("f_3551:chicken_2duninstall_2escm"),(void*)f_3551},
{C_text("f_3555:chicken_2duninstall_2escm"),(void*)f_3555},
{C_text("f_3561:chicken_2duninstall_2escm"),(void*)f_3561},
{C_text("f_3570:chicken_2duninstall_2escm"),(void*)f_3570},
{C_text("f_3575:chicken_2duninstall_2escm"),(void*)f_3575},
{C_text("f_3579:chicken_2duninstall_2escm"),(void*)f_3579},
{C_text("f_3582:chicken_2duninstall_2escm"),(void*)f_3582},
{C_text("f_3585:chicken_2duninstall_2escm"),(void*)f_3585},
{C_text("f_3588:chicken_2duninstall_2escm"),(void*)f_3588},
{C_text("f_3591:chicken_2duninstall_2escm"),(void*)f_3591},
{C_text("f_3618:chicken_2duninstall_2escm"),(void*)f_3618},
{C_text("f_3622:chicken_2duninstall_2escm"),(void*)f_3622},
{C_text("f_3641:chicken_2duninstall_2escm"),(void*)f_3641},
{C_text("f_3643:chicken_2duninstall_2escm"),(void*)f_3643},
{C_text("f_3668:chicken_2duninstall_2escm"),(void*)f_3668},
{C_text("f_3680:chicken_2duninstall_2escm"),(void*)f_3680},
{C_text("f_3707:chicken_2duninstall_2escm"),(void*)f_3707},
{C_text("f_3720:chicken_2duninstall_2escm"),(void*)f_3720},
{C_text("f_3724:chicken_2duninstall_2escm"),(void*)f_3724},
{C_text("f_3728:chicken_2duninstall_2escm"),(void*)f_3728},
{C_text("f_3732:chicken_2duninstall_2escm"),(void*)f_3732},
{C_text("f_3736:chicken_2duninstall_2escm"),(void*)f_3736},
{C_text("f_3742:chicken_2duninstall_2escm"),(void*)f_3742},
{C_text("f_3748:chicken_2duninstall_2escm"),(void*)f_3748},
{C_text("f_3759:chicken_2duninstall_2escm"),(void*)f_3759},
{C_text("f_3768:chicken_2duninstall_2escm"),(void*)f_3768},
{C_text("f_3773:chicken_2duninstall_2escm"),(void*)f_3773},
{C_text("f_3783:chicken_2duninstall_2escm"),(void*)f_3783},
{C_text("f_3798:chicken_2duninstall_2escm"),(void*)f_3798},
{C_text("f_3802:chicken_2duninstall_2escm"),(void*)f_3802},
{C_text("f_3806:chicken_2duninstall_2escm"),(void*)f_3806},
{C_text("f_3808:chicken_2duninstall_2escm"),(void*)f_3808},
{C_text("f_3827:chicken_2duninstall_2escm"),(void*)f_3827},
{C_text("f_3841:chicken_2duninstall_2escm"),(void*)f_3841},
{C_text("f_3845:chicken_2duninstall_2escm"),(void*)f_3845},
{C_text("f_3851:chicken_2duninstall_2escm"),(void*)f_3851},
{C_text("f_3864:chicken_2duninstall_2escm"),(void*)f_3864},
{C_text("f_3870:chicken_2duninstall_2escm"),(void*)f_3870},
{C_text("f_3885:chicken_2duninstall_2escm"),(void*)f_3885},
{C_text("f_3890:chicken_2duninstall_2escm"),(void*)f_3890},
{C_text("f_3901:chicken_2duninstall_2escm"),(void*)f_3901},
{C_text("f_3911:chicken_2duninstall_2escm"),(void*)f_3911},
{C_text("f_3943:chicken_2duninstall_2escm"),(void*)f_3943},
{C_text("f_3953:chicken_2duninstall_2escm"),(void*)f_3953},
{C_text("f_3956:chicken_2duninstall_2escm"),(void*)f_3956},
{C_text("f_3963:chicken_2duninstall_2escm"),(void*)f_3963},
{C_text("f_3981:chicken_2duninstall_2escm"),(void*)f_3981},
{C_text("f_3992:chicken_2duninstall_2escm"),(void*)f_3992},
{C_text("f_3999:chicken_2duninstall_2escm"),(void*)f_3999},
{C_text("f_4072:chicken_2duninstall_2escm"),(void*)f_4072},
{C_text("f_4085:chicken_2duninstall_2escm"),(void*)f_4085},
{C_text("f_4097:chicken_2duninstall_2escm"),(void*)f_4097},
{C_text("f_4101:chicken_2duninstall_2escm"),(void*)f_4101},
{C_text("f_4146:chicken_2duninstall_2escm"),(void*)f_4146},
{C_text("f_4185:chicken_2duninstall_2escm"),(void*)f_4185},
{C_text("f_4191:chicken_2duninstall_2escm"),(void*)f_4191},
{C_text("f_4195:chicken_2duninstall_2escm"),(void*)f_4195},
{C_text("f_4202:chicken_2duninstall_2escm"),(void*)f_4202},
{C_text("f_4205:chicken_2duninstall_2escm"),(void*)f_4205},
{C_text("f_4212:chicken_2duninstall_2escm"),(void*)f_4212},
{C_text("f_4217:chicken_2duninstall_2escm"),(void*)f_4217},
{C_text("f_4222:chicken_2duninstall_2escm"),(void*)f_4222},
{C_text("f_4226:chicken_2duninstall_2escm"),(void*)f_4226},
{C_text("f_4230:chicken_2duninstall_2escm"),(void*)f_4230},
{C_text("f_4237:chicken_2duninstall_2escm"),(void*)f_4237},
{C_text("f_4239:chicken_2duninstall_2escm"),(void*)f_4239},
{C_text("toplevel:chicken_2duninstall_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: main#staticbuild 
o|hiding unexported module binding: main#debugbuild 
o|hiding unexported module binding: main#cross-chicken 
o|hiding unexported module binding: main#binary-version 
o|hiding unexported module binding: main#major-version 
o|hiding unexported module binding: main#default-cc 
o|hiding unexported module binding: main#default-cxx 
o|hiding unexported module binding: main#default-install-program 
o|hiding unexported module binding: main#default-cflags 
o|hiding unexported module binding: main#default-ldflags 
o|hiding unexported module binding: main#default-install-program-executable-flags 
o|hiding unexported module binding: main#default-install-program-data-flags 
o|hiding unexported module binding: main#default-libs 
o|hiding unexported module binding: main#default-libdir 
o|hiding unexported module binding: main#default-runlibdir 
o|hiding unexported module binding: main#default-slibdir 
o|hiding unexported module binding: main#default-incdir 
o|hiding unexported module binding: main#default-bindir 
o|hiding unexported module binding: main#default-sharedir 
o|hiding unexported module binding: main#default-platform 
o|hiding unexported module binding: main#default-prefix 
o|hiding unexported module binding: main#default-bindir 
o|hiding unexported module binding: main#default-csc 
o|hiding unexported module binding: main#default-csi 
o|hiding unexported module binding: main#default-builder 
o|hiding unexported module binding: main#target-librarian 
o|hiding unexported module binding: main#target-librarian-options 
o|hiding unexported module binding: main#host-repo 
o|hiding unexported module binding: main#host-libdir 
o|hiding unexported module binding: main#host-bindir 
o|hiding unexported module binding: main#host-incdir 
o|hiding unexported module binding: main#host-sharedir 
o|hiding unexported module binding: main#host-libs 
o|hiding unexported module binding: main#host-cflags 
o|hiding unexported module binding: main#host-ldflags 
o|hiding unexported module binding: main#host-cc 
o|hiding unexported module binding: main#host-cxx 
o|hiding unexported module binding: main#target-repo 
o|hiding unexported module binding: main#target-run-repo 
o|hiding unexported module binding: main#+egg-info-extension+ 
o|hiding unexported module binding: main#+version-file+ 
o|hiding unexported module binding: main#+timestamp-file+ 
o|hiding unexported module binding: main#+status-file+ 
o|hiding unexported module binding: main#+egg-extension+ 
o|hiding unexported module binding: main#validate-environment 
o|hiding unexported module binding: main#destination-repository 
o|hiding unexported module binding: main#probe-dir 
o|hiding unexported module binding: main#cache-directory 
o|hiding unexported module binding: main#locate-egg-file 
o|hiding unexported module binding: main#load-egg-info 
o|hiding unexported module binding: main#get-egg-property 
o|hiding unexported module binding: main#get-egg-property* 
o|hiding unexported module binding: main#get-extension-property/internal 
o|hiding unexported module binding: main#get-extension-property 
o|hiding unexported module binding: main#get-extension-property* 
o|hiding unexported module binding: main#host-extensions 
o|hiding unexported module binding: main#target-extensions 
o|hiding unexported module binding: main#force-uninstall 
o|hiding unexported module binding: main#sudo-uninstall 
o|hiding unexported module binding: main#sudo-program 
o|hiding unexported module binding: main#repo-path 
o|hiding unexported module binding: main#grep 
o|hiding unexported module binding: main#gather-eggs 
o|hiding unexported module binding: main#fini 
o|hiding unexported module binding: main#ask 
o|hiding unexported module binding: main#trim 
o|hiding unexported module binding: main#remove-extension 
o|hiding unexported module binding: main#delete-installed-file 
o|hiding unexported module binding: main#uninstall 
o|hiding unexported module binding: main#usage 
o|hiding unexported module binding: main#short-options 
o|hiding unexported module binding: main#main 
S|applied compiler syntax:
S|  scheme#for-each		2
S|  chicken.base#foldl		3
S|  scheme#map		7
S|  chicken.base#foldr		3
o|eliminated procedure checks: 75 
o|specializations:
o|  1 (scheme#> fixnum fixnum)
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#positive? fixnum)
o|  2 (scheme#string-length string)
o|  1 (scheme#zero? integer)
o|  10 (scheme#string=? string string)
o|  2 (scheme#cdar (pair pair *))
o|  5 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  2 (scheme#number->string fixnum)
o|  1 (scheme#eqv? * *)
o|  5 (##sys#check-list (or pair list) *)
o|  37 (scheme#cdr pair)
o|  9 (scheme#car pair)
(o e)|safe calls: 389 
(o e)|assignments to immediate values: 3 
o|removed side-effect free assignment to unused variable: main#partition 
o|removed side-effect free assignment to unused variable: main#span 
o|removed side-effect free assignment to unused variable: main#drop 
o|removed side-effect free assignment to unused variable: main#split-at 
o|removed side-effect free assignment to unused variable: main#append-map 
o|inlining procedure: k1891 
o|inlining procedure: k1891 
o|inlining procedure: k1922 
o|inlining procedure: k1922 
o|removed side-effect free assignment to unused variable: main#cons* 
o|removed side-effect free assignment to unused variable: main#first 
o|removed side-effect free assignment to unused variable: main#second 
o|removed side-effect free assignment to unused variable: main#third 
o|removed side-effect free assignment to unused variable: main#fourth 
o|removed side-effect free assignment to unused variable: main#fifth 
o|removed side-effect free assignment to unused variable: main#alist-cons 
o|inlining procedure: k2139 
o|inlining procedure: k2139 
o|inlining procedure: k2131 
o|inlining procedure: k2131 
o|removed side-effect free assignment to unused variable: main#filter-map 
o|removed side-effect free assignment to unused variable: main#remove 
o|removed side-effect free assignment to unused variable: main#unzip1 
o|removed side-effect free assignment to unused variable: main#last 
o|removed side-effect free assignment to unused variable: main#list-index 
o|removed side-effect free assignment to unused variable: main#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: main#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: main#lset-union/eq? 
o|removed side-effect free assignment to unused variable: main#lset-intersection/eq? 
o|inlining procedure: k2530 
o|inlining procedure: k2530 
o|removed side-effect free assignment to unused variable: main#lset<=/eq? 
o|removed side-effect free assignment to unused variable: main#lset=/eq? 
o|removed side-effect free assignment to unused variable: main#length+ 
o|removed side-effect free assignment to unused variable: main#find 
o|removed side-effect free assignment to unused variable: main#find-tail 
o|removed side-effect free assignment to unused variable: main#iota 
o|removed side-effect free assignment to unused variable: main#make-list 
o|removed side-effect free assignment to unused variable: main#posq 
o|removed side-effect free assignment to unused variable: main#posv 
o|removed side-effect free assignment to unused variable: main#default-cc 
o|removed side-effect free assignment to unused variable: main#default-cxx 
o|removed side-effect free assignment to unused variable: main#default-install-program 
o|removed side-effect free assignment to unused variable: main#default-cflags 
o|removed side-effect free assignment to unused variable: main#default-ldflags 
o|removed side-effect free assignment to unused variable: main#default-install-program-executable-flags 
o|removed side-effect free assignment to unused variable: main#default-install-program-data-flags 
o|removed side-effect free assignment to unused variable: main#default-libs 
o|removed side-effect free assignment to unused variable: main#default-slibdir 
o|removed side-effect free assignment to unused variable: main#default-incdir 
o|removed side-effect free assignment to unused variable: main#default-sharedir 
o|removed side-effect free assignment to unused variable: main#default-prefix 
o|removed side-effect free assignment to unused variable: main#default-csc 
o|removed side-effect free assignment to unused variable: main#default-csi 
o|removed side-effect free assignment to unused variable: main#default-builder 
o|removed side-effect free assignment to unused variable: main#target-librarian 
o|removed side-effect free assignment to unused variable: main#target-librarian-options 
o|removed side-effect free assignment to unused variable: main#host-libdir 
o|removed side-effect free assignment to unused variable: main#host-bindir 
o|removed side-effect free assignment to unused variable: main#host-incdir 
o|removed side-effect free assignment to unused variable: main#host-sharedir 
o|removed side-effect free assignment to unused variable: main#host-libs 
o|removed side-effect free assignment to unused variable: main#host-cflags 
o|removed side-effect free assignment to unused variable: main#host-ldflags 
o|removed side-effect free assignment to unused variable: main#host-cc 
o|removed side-effect free assignment to unused variable: main#host-cxx 
o|removed side-effect free assignment to unused variable: main#+version-file+ 
o|removed side-effect free assignment to unused variable: main#+timestamp-file+ 
o|removed side-effect free assignment to unused variable: main#+status-file+ 
o|removed side-effect free assignment to unused variable: main#+egg-extension+ 
o|removed side-effect free assignment to unused variable: main#probe-dir 
o|removed side-effect free assignment to unused variable: main#cache-directory 
o|removed side-effect free assignment to unused variable: main#get-egg-property 
o|inlining procedure: k3095 
o|inlining procedure: k3113 
o|inlining procedure: k3113 
o|inlining procedure: k3130 
o|inlining procedure: k3130 
o|substituted constant variable: a3171 
o|substituted constant variable: a3173 
o|inlining procedure: k3095 
o|inlining procedure: k3181 
o|inlining procedure: k3181 
o|inlining procedure: k3191 
o|inlining procedure: k3209 
o|inlining procedure: k3209 
o|inlining procedure: k3226 
o|inlining procedure: k3226 
o|inlining procedure: k3256 
o|inlining procedure: k3256 
o|substituted constant variable: a3285 
o|substituted constant variable: a3287 
o|substituted constant variable: a3289 
o|inlining procedure: k3191 
o|removed side-effect free assignment to unused variable: main#get-extension-property 
o|removed side-effect free assignment to unused variable: main#get-extension-property* 
o|removed side-effect free assignment to unused variable: main#target-extensions 
o|contracted procedure: "(chicken-uninstall.scm:57) main#destination-repository" 
o|inlining procedure: k2964 
o|inlining procedure: k2964 
o|inlining procedure: k3403 
o|inlining procedure: k3403 
o|inlining procedure: k3810 
o|inlining procedure: k3810 
o|inlining procedure: k3828 
o|inlining procedure: k3828 
o|inlining procedure: k3846 
o|inlining procedure: k3846 
o|contracted procedure: "(chicken-uninstall.scm:199) main#main" 
o|inlining procedure: k3945 
o|contracted procedure: "(chicken-uninstall.scm:163) main#uninstall" 
o|inlining procedure: k3871 
o|inlining procedure: k3871 
o|inlining procedure: k3903 
o|contracted procedure: "(chicken-uninstall.scm:134) g10951102" 
o|contracted procedure: "(chicken-uninstall.scm:137) main#remove-extension" 
o|inlining procedure: k3743 
o|inlining procedure: k3775 
o|contracted procedure: "(chicken-uninstall.scm:111) g10561063" 
o|inlining procedure: k3754 
o|inlining procedure: k3754 
o|inlining procedure: k3775 
o|contracted procedure: "(chicken-uninstall.scm:109) main#get-egg-property*" 
o|inlining procedure: k3077 
o|inlining procedure: k3077 
o|contracted procedure: "(chicken-uninstall.scm:109) main#load-egg-info" 
o|contracted procedure: "(egg-information.scm:37) main#locate-egg-file" 
o|inlining procedure: k3010 
o|inlining procedure: k3010 
o|inlining procedure: k3743 
o|inlining procedure: k3903 
o|propagated global variable: tmp10891091 main#force-uninstall 
o|propagated global variable: tmp10891091 main#force-uninstall 
o|contracted procedure: "(chicken-uninstall.scm:133) main#ask" 
o|inlining procedure: k3595 
o|inlining procedure: k3595 
o|substituted constant variable: a3602 
o|contracted procedure: "(chicken-uninstall.scm:96) main#fini" 
o|contracted procedure: "(chicken-uninstall.scm:94) main#trim" 
o|inlining procedure: k3682 
o|inlining procedure: k3682 
o|inlining procedure: k3645 
o|contracted procedure: "(chicken-uninstall.scm:86) g9991008" 
o|inlining procedure: k3645 
o|contracted procedure: "(chicken-uninstall.scm:130) main#gather-eggs" 
o|contracted procedure: "(chicken-uninstall.scm:77) main#delete-duplicates" 
o|inlining procedure: k2083 
o|inlining procedure: k2083 
o|contracted procedure: "(mini-srfi-1.scm:123) main#delete" 
o|inlining procedure: k2008 
o|inlining procedure: k2008 
o|contracted procedure: "(chicken-uninstall.scm:71) main#grep" 
o|propagated global variable: g917918 chicken.irregex#irregex-search 
o|contracted procedure: "(chicken-uninstall.scm:69) main#concatenate" 
o|inlining procedure: k1980 
o|inlining procedure: k1980 
o|inlining procedure: k3468 
o|inlining procedure: k3468 
o|inlining procedure: k3517 
o|inlining procedure: k3517 
o|contracted procedure: "(chicken-uninstall.scm:162) main#validate-environment" 
o|inlining procedure: k2943 
o|inlining procedure: k2943 
o|inlining procedure: k3945 
o|substituted constant variable: a3989 
o|inlining procedure: k3985 
o|inlining procedure: k3985 
o|substituted constant variable: a4004 
o|substituted constant variable: a4015 
o|removed side-effect free assignment to unused variable: main#target-extensions 
o|inlining procedure: k4011 
o|inlining procedure: k4011 
o|substituted constant variable: a4026 
o|substituted constant variable: a4037 
o|inlining procedure: k4033 
o|inlining procedure: k4033 
o|substituted constant variable: a4048 
o|inlining procedure: k4058 
o|inlining procedure: k4073 
o|inlining procedure: k4103 
o|contracted procedure: "(chicken-uninstall.scm:193) g11651174" 
o|inlining procedure: k4103 
o|inlining procedure: k4073 
o|substituted constant variable: main#short-options 
o|substituted constant variable: a4154 
o|inlining procedure: k4058 
o|substituted constant variable: a4172 
o|substituted constant variable: a4169 
o|substituted constant variable: a4175 
o|substituted constant variable: a4177 
o|inlining procedure: k4178 
o|inlining procedure: k4178 
o|substituted constant variable: a4182 
o|inlining procedure: k4203 
o|inlining procedure: k4203 
o|replaced variables: 406 
o|removed binding forms: 180 
o|substituted constant variable: r21324263 
o|removed side-effect free assignment to unused variable: main#list-tabulate 
o|removed side-effect free assignment to unused variable: main#get-extension-property/internal 
o|substituted constant variable: r34044285 
o|removed side-effect free assignment to unused variable: main#short-options 
o|substituted constant variable: prop793 
o|substituted constant variable: r37444305 
o|substituted constant variable: code987 
o|substituted constant variable: r36834309 
o|substituted constant variable: r19814317 
o|contracted procedure: "(chicken-uninstall.scm:75) main#any" 
o|substituted constant variable: r19234258 
o|contracted procedure: "(chicken-uninstall.scm:192) main#every" 
o|replaced variables: 73 
o|removed binding forms: 375 
o|removed conditional forms: 1 
o|inlining procedure: k3781 
o|inlining procedure: k3909 
o|inlining procedure: k3074 
o|inlining procedure: k3035 
o|inlining procedure: k3035 
o|inlining procedure: k3909 
o|inlining procedure: k2949 
o|inlining procedure: "(chicken-uninstall.scm:161) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:169) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:195) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:196) main#usage" 
o|replaced variables: 6 
o|removed binding forms: 67 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: r30754404 
o|substituted constant variable: r30754404 
o|substituted constant variable: code11124452 
o|substituted constant variable: code11124457 
o|substituted constant variable: code11124464 
o|inlining procedure: "(mini-srfi-1.scm:82) a4137" 
o|substituted constant variable: code11124471 
o|replaced variables: 7 
o|removed binding forms: 13 
o|removed conditional forms: 1 
o|replaced variables: 2 
o|removed binding forms: 15 
o|removed binding forms: 2 
o|simplifications: ((let . 15) (if . 14) (##core#call . 99)) 
o|  call simplifications:
o|    ##sys#size	2
o|    chicken.fixnum#fx>
o|    scheme#memq
o|    scheme#string
o|    scheme#equal?
o|    scheme#list	4
o|    ##sys#setslot	4
o|    scheme#eof-object?
o|    scheme#string->list	2
o|    scheme#list->string
o|    scheme#char-whitespace?
o|    scheme#string=?	4
o|    scheme#assq
o|    scheme#cdr
o|    scheme#not	4
o|    scheme#null?	11
o|    scheme#car	9
o|    scheme#eq?	4
o|    ##sys#check-list	5
o|    scheme#pair?	7
o|    ##sys#slot	21
o|    scheme#cons	13
o|contracted procedure: k2122 
o|contracted procedure: k2134 
o|contracted procedure: k2152 
o|contracted procedure: k2160 
o|contracted procedure: k4231 
o|contracted procedure: k2853 
o|contracted procedure: k3390 
o|contracted procedure: k2979 
o|contracted procedure: k2961 
o|contracted procedure: k2967 
o|contracted procedure: k3403 
o|contracted procedure: k3813 
o|contracted procedure: k3822 
o|contracted procedure: k3831 
o|contracted procedure: k3948 
o|contracted procedure: k3874 
o|contracted procedure: k3894 
o|contracted procedure: k3906 
o|contracted procedure: k3916 
o|contracted procedure: k3920 
o|contracted procedure: k3763 
o|contracted procedure: k3778 
o|contracted procedure: k3788 
o|contracted procedure: k3792 
o|contracted procedure: k37884397 
o|contracted procedure: k39164403 
o|contracted procedure: k3083 
o|contracted procedure: k3068 
o|contracted procedure: k3071 
o|contracted procedure: k3074 
o|contracted procedure: k39164412 
o|contracted procedure: k3592 
o|contracted procedure: k3685 
o|contracted procedure: k3711 
o|contracted procedure: k3691 
o|contracted procedure: k3609 
o|contracted procedure: k3624 
o|contracted procedure: k3628 
o|contracted procedure: k3636 
o|contracted procedure: k3648 
o|contracted procedure: k3651 
o|contracted procedure: k3654 
o|contracted procedure: k3662 
o|contracted procedure: k3670 
o|contracted procedure: k3424 
o|contracted procedure: k2086 
o|contracted procedure: k2089 
o|contracted procedure: k2099 
o|contracted procedure: k2011 
o|contracted procedure: k2037 
o|contracted procedure: k2017 
o|contracted procedure: k3443 
o|contracted procedure: k3459 
o|contracted procedure: k1983 
o|contracted procedure: k1990 
o|contracted procedure: k3471 
o|contracted procedure: k3474 
o|contracted procedure: k3477 
o|contracted procedure: k3485 
o|contracted procedure: k3493 
o|contracted procedure: k1925 
o|contracted procedure: k1940 
o|contracted procedure: k3520 
o|contracted procedure: k3523 
o|contracted procedure: k3526 
o|contracted procedure: k3534 
o|contracted procedure: k3542 
o|contracted procedure: k2946 
o|contracted procedure: k3964 
o|contracted procedure: k3970 
o|contracted procedure: k3976 
o|contracted procedure: k4049 
o|contracted procedure: k4166 
o|contracted procedure: k4061 
o|contracted procedure: k4151 
o|contracted procedure: k4067 
o|contracted procedure: k4087 
o|contracted procedure: k4106 
o|contracted procedure: k4128 
o|contracted procedure: k4124 
o|contracted procedure: k4109 
o|contracted procedure: k4112 
o|contracted procedure: k4120 
o|contracted procedure: k1888 
o|contracted procedure: k1910 
o|contracted procedure: k1906 
o|contracted procedure: k1897 
o|contracted procedure: k4162 
o|contracted procedure: k4245 
o|contracted procedure: k4249 
o|contracted procedure: k4253 
o|simplifications: ((let . 35)) 
o|removed binding forms: 91 
o|substituted constant variable: r4246 
o|substituted constant variable: r4250 
o|substituted constant variable: r4254 
o|removed binding forms: 3 
o|direct leaf routine/allocation: a3508 0 
o|direct leaf routine/allocation: loop241 0 
o|contracted procedure: "(mini-srfi-1.scm:88) k1928" 
o|contracted procedure: k4076 
o|converted assignments to bindings: (loop241) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 2 
o|direct leaf routine/allocation: loop254 0 
o|converted assignments to bindings: (loop254) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (k3979 map-loop11591184 loop1118 map-loop925942 g958967 map-loop952970 loop273 main#filter loop280 loop300 map-loop9931018 left1042 loop1025 main#repo-path k3746 for-each-loop10551066 main#delete-installed-file for-each-loop10941106 k3400 foldr317320 g322323) 
o|calls to known targets: 58 
o|identified direct recursive calls: f_2129 1 
o|identified direct recursive calls: f_3680 2 
o|identified direct recursive calls: f_2006 2 
o|identified direct recursive calls: f_1978 1 
o|identified direct recursive calls: f_1920 1 
o|identified direct recursive calls: f_1886 1 
o|identified direct recursive calls: f_4101 1 
o|fast box initializations: 13 
o|fast global references: 28 
o|fast global assignments: 24 
o|dropping unused closure argument: f_1886 
o|dropping unused closure argument: f_2120 
o|dropping unused closure argument: f_3394 
o|dropping unused closure argument: f_3808 
*/
/* end of file */
