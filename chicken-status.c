/* Generated from chicken-status.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.2.0 (rev 317468e4)
   macosx-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: chicken-status.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -output-file chicken-status.c
   uses: library eval expand file extras irregex port pathname data-structures
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
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[141];
static double C_possibly_force_alignment;


C_noret_decl(f5225)
static void C_ccall f5225(C_word c,C_word *av) C_noret;
C_noret_decl(f5232)
static void C_ccall f5232(C_word c,C_word *av) C_noret;
C_noret_decl(f5239)
static void C_ccall f5239(C_word c,C_word *av) C_noret;
C_noret_decl(f_1649)
static void C_ccall f_1649(C_word c,C_word *av) C_noret;
C_noret_decl(f_1652)
static void C_ccall f_1652(C_word c,C_word *av) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word *av) C_noret;
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word *av) C_noret;
C_noret_decl(f_1661)
static void C_ccall f_1661(C_word c,C_word *av) C_noret;
C_noret_decl(f_1664)
static void C_ccall f_1664(C_word c,C_word *av) C_noret;
C_noret_decl(f_1667)
static void C_ccall f_1667(C_word c,C_word *av) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word *av) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word *av) C_noret;
C_noret_decl(f_1676)
static void C_ccall f_1676(C_word c,C_word *av) C_noret;
C_noret_decl(f_1877)
static void C_fcall f_1877(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1892)
static void C_fcall f_1892(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1900)
static void C_fcall f_1900(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word *av) C_noret;
C_noret_decl(f_1919)
static void C_ccall f_1919(C_word c,C_word *av) C_noret;
C_noret_decl(f_1932)
static void C_fcall f_1932(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1939)
static void C_ccall f_1939(C_word c,C_word *av) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word *av) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word *av) C_noret;
C_noret_decl(f_1962)
static void C_ccall f_1962(C_word c,C_word *av) C_noret;
C_noret_decl(f_1964)
static void C_fcall f_1964(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2011)
static void C_ccall f_2011(C_word c,C_word *av) C_noret;
C_noret_decl(f_2013)
static void C_fcall f_2013(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2053)
static C_word C_fcall f_2053(C_word t0);
C_noret_decl(f_2081)
static void C_fcall f_2081(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2087)
static void C_fcall f_2087(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2097)
static void C_ccall f_2097(C_word c,C_word *av) C_noret;
C_noret_decl(f_2145)
static void C_fcall f_2145(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word *av) C_noret;
C_noret_decl(f_2173)
static void C_fcall f_2173(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2186)
static void C_ccall f_2186(C_word c,C_word *av) C_noret;
C_noret_decl(f_2200)
static void C_ccall f_2200(C_word c,C_word *av) C_noret;
C_noret_decl(f_2242)
static void C_fcall f_2242(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2248)
static void C_fcall f_2248(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2262)
static void C_ccall f_2262(C_word c,C_word *av) C_noret;
C_noret_decl(f_2275)
static void C_ccall f_2275(C_word c,C_word *av) C_noret;
C_noret_decl(f_2287)
static void C_fcall f_2287(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2296)
static void C_fcall f_2296(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2304)
static void C_fcall f_2304(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2311)
static void C_ccall f_2311(C_word c,C_word *av) C_noret;
C_noret_decl(f_2325)
static void C_ccall f_2325(C_word c,C_word *av) C_noret;
C_noret_decl(f_2960)
static void C_ccall f_2960(C_word c,C_word *av) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word *av) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word *av) C_noret;
C_noret_decl(f_2974)
static void C_ccall f_2974(C_word c,C_word *av) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word *av) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word *av) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word *av) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word *av) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word *av) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word *av) C_noret;
C_noret_decl(f_3002)
static void C_ccall f_3002(C_word c,C_word *av) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word *av) C_noret;
C_noret_decl(f_3010)
static void C_ccall f_3010(C_word c,C_word *av) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word *av) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word *av) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word *av) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030(C_word c,C_word *av) C_noret;
C_noret_decl(f_3034)
static void C_ccall f_3034(C_word c,C_word *av) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word *av) C_noret;
C_noret_decl(f_3042)
static void C_ccall f_3042(C_word c,C_word *av) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word *av) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word *av) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word *av) C_noret;
C_noret_decl(f_3058)
static void C_ccall f_3058(C_word c,C_word *av) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word *av) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word *av) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070(C_word c,C_word *av) C_noret;
C_noret_decl(f_3074)
static void C_ccall f_3074(C_word c,C_word *av) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word *av) C_noret;
C_noret_decl(f_3082)
static void C_ccall f_3082(C_word c,C_word *av) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word *av) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word *av) C_noret;
C_noret_decl(f_3094)
static void C_ccall f_3094(C_word c,C_word *av) C_noret;
C_noret_decl(f_3098)
static void C_ccall f_3098(C_word c,C_word *av) C_noret;
C_noret_decl(f_3167)
static void C_ccall f_3167(C_word c,C_word *av) C_noret;
C_noret_decl(f_3170)
static void C_ccall f_3170(C_word c,C_word *av) C_noret;
C_noret_decl(f_3176)
static void C_ccall f_3176(C_word c,C_word *av) C_noret;
C_noret_decl(f_3182)
static void C_ccall f_3182(C_word c,C_word *av) C_noret;
C_noret_decl(f_3186)
static void C_ccall f_3186(C_word c,C_word *av) C_noret;
C_noret_decl(f_3190)
static void C_ccall f_3190(C_word c,C_word *av) C_noret;
C_noret_decl(f_3194)
static void C_ccall f_3194(C_word c,C_word *av) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word *av) C_noret;
C_noret_decl(f_3209)
static C_word C_fcall f_3209(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3233)
static C_word C_fcall f_3233(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3552)
static void C_fcall f_3552(C_word t0) C_noret;
C_noret_decl(f_3559)
static void C_ccall f_3559(C_word c,C_word *av) C_noret;
C_noret_decl(f_3562)
static void C_ccall f_3562(C_word c,C_word *av) C_noret;
C_noret_decl(f_3565)
static void C_ccall f_3565(C_word c,C_word *av) C_noret;
C_noret_decl(f_3574)
static void C_ccall f_3574(C_word c,C_word *av) C_noret;
C_noret_decl(f_3580)
static void C_ccall f_3580(C_word c,C_word *av) C_noret;
C_noret_decl(f_3586)
static void C_ccall f_3586(C_word c,C_word *av) C_noret;
C_noret_decl(f_3589)
static void C_ccall f_3589(C_word c,C_word *av) C_noret;
C_noret_decl(f_3595)
static void C_ccall f_3595(C_word c,C_word *av) C_noret;
C_noret_decl(f_3601)
static void C_ccall f_3601(C_word c,C_word *av) C_noret;
C_noret_decl(f_3607)
static void C_ccall f_3607(C_word c,C_word *av) C_noret;
C_noret_decl(f_3613)
static void C_ccall f_3613(C_word c,C_word *av) C_noret;
C_noret_decl(f_3619)
static void C_ccall f_3619(C_word c,C_word *av) C_noret;
C_noret_decl(f_3629)
static void C_fcall f_3629(C_word t0) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word *av) C_noret;
C_noret_decl(f_3663)
static void C_fcall f_3663(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3667)
static void C_ccall f_3667(C_word c,C_word *av) C_noret;
C_noret_decl(f_3679)
static void C_ccall f_3679(C_word c,C_word *av) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word *av) C_noret;
C_noret_decl(f_3718)
static void C_fcall f_3718(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3722)
static void C_ccall f_3722(C_word c,C_word *av) C_noret;
C_noret_decl(f_3739)
static void C_fcall f_3739(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3747)
static void C_ccall f_3747(C_word c,C_word *av) C_noret;
C_noret_decl(f_3751)
static void C_ccall f_3751(C_word c,C_word *av) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word *av) C_noret;
C_noret_decl(f_3759)
static void C_fcall f_3759(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3784)
static void C_ccall f_3784(C_word c,C_word *av) C_noret;
C_noret_decl(f_3796)
static void C_ccall f_3796(C_word c,C_word *av) C_noret;
C_noret_decl(f_3802)
static void C_ccall f_3802(C_word c,C_word *av) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word *av) C_noret;
C_noret_decl(f_3818)
static void C_ccall f_3818(C_word c,C_word *av) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word *av) C_noret;
C_noret_decl(f_3830)
static void C_fcall f_3830(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3855)
static void C_ccall f_3855(C_word c,C_word *av) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word *av) C_noret;
C_noret_decl(f_3870)
static void C_ccall f_3870(C_word c,C_word *av) C_noret;
C_noret_decl(f_3872)
static void C_fcall f_3872(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3891)
static void C_ccall f_3891(C_word c,C_word *av) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word *av) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word *av) C_noret;
C_noret_decl(f_3952)
static void C_fcall f_3952(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3959)
static void C_ccall f_3959(C_word c,C_word *av) C_noret;
C_noret_decl(f_3967)
static void C_fcall f_3967(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3977)
static void C_ccall f_3977(C_word c,C_word *av) C_noret;
C_noret_decl(f_4017)
static void C_ccall f_4017(C_word c,C_word *av) C_noret;
C_noret_decl(f_4021)
static void C_ccall f_4021(C_word c,C_word *av) C_noret;
C_noret_decl(f_4027)
static void C_fcall f_4027(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4034)
static void C_ccall f_4034(C_word c,C_word *av) C_noret;
C_noret_decl(f_4038)
static void C_ccall f_4038(C_word c,C_word *av) C_noret;
C_noret_decl(f_4042)
static void C_ccall f_4042(C_word c,C_word *av) C_noret;
C_noret_decl(f_4047)
static void C_ccall f_4047(C_word c,C_word *av) C_noret;
C_noret_decl(f_4051)
static void C_ccall f_4051(C_word c,C_word *av) C_noret;
C_noret_decl(f_4054)
static void C_ccall f_4054(C_word c,C_word *av) C_noret;
C_noret_decl(f_4057)
static void C_ccall f_4057(C_word c,C_word *av) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075(C_word c,C_word *av) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word *av) C_noret;
C_noret_decl(f_4087)
static void C_ccall f_4087(C_word c,C_word *av) C_noret;
C_noret_decl(f_4095)
static void C_fcall f_4095(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4105)
static void C_ccall f_4105(C_word c,C_word *av) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word *av) C_noret;
C_noret_decl(f_4124)
static void C_ccall f_4124(C_word c,C_word *av) C_noret;
C_noret_decl(f_4126)
static void C_fcall f_4126(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4132)
static void C_ccall f_4132(C_word c,C_word *av) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word *av) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word *av) C_noret;
C_noret_decl(f_4295)
static void C_fcall f_4295(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4299)
static void C_ccall f_4299(C_word c,C_word *av) C_noret;
C_noret_decl(f_4308)
static void C_ccall f_4308(C_word c,C_word *av) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314(C_word c,C_word *av) C_noret;
C_noret_decl(f_4323)
static void C_ccall f_4323(C_word c,C_word *av) C_noret;
C_noret_decl(f_4327)
static void C_ccall f_4327(C_word c,C_word *av) C_noret;
C_noret_decl(f_4351)
static void C_ccall f_4351(C_word c,C_word *av) C_noret;
C_noret_decl(f_4359)
static void C_ccall f_4359(C_word c,C_word *av) C_noret;
C_noret_decl(f_4371)
static void C_fcall f_4371(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4381)
static void C_ccall f_4381(C_word c,C_word *av) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word *av) C_noret;
C_noret_decl(f_4403)
static void C_ccall f_4403(C_word c,C_word *av) C_noret;
C_noret_decl(f_4407)
static void C_ccall f_4407(C_word c,C_word *av) C_noret;
C_noret_decl(f_4412)
static void C_ccall f_4412(C_word c,C_word *av) C_noret;
C_noret_decl(f_4416)
static void C_ccall f_4416(C_word c,C_word *av) C_noret;
C_noret_decl(f_4427)
static void C_fcall f_4427(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4437)
static void C_ccall f_4437(C_word c,C_word *av) C_noret;
C_noret_decl(f_4456)
static void C_ccall f_4456(C_word c,C_word *av) C_noret;
C_noret_decl(f_4458)
static void C_ccall f_4458(C_word c,C_word *av) C_noret;
C_noret_decl(f_4462)
static void C_ccall f_4462(C_word c,C_word *av) C_noret;
C_noret_decl(f_4470)
static void C_fcall f_4470(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word *av) C_noret;
C_noret_decl(f_4495)
static void C_ccall f_4495(C_word c,C_word *av) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497(C_word c,C_word *av) C_noret;
C_noret_decl(f_4505)
static void C_ccall f_4505(C_word c,C_word *av) C_noret;
C_noret_decl(f_4507)
static void C_ccall f_4507(C_word c,C_word *av) C_noret;
C_noret_decl(f_4524)
static void C_ccall f_4524(C_word c,C_word *av) C_noret;
C_noret_decl(f_4535)
static void C_ccall f_4535(C_word c,C_word *av) C_noret;
C_noret_decl(f_4543)
static void C_fcall f_4543(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4553)
static void C_ccall f_4553(C_word c,C_word *av) C_noret;
C_noret_decl(f_4582)
static void C_fcall f_4582(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4595)
static void C_fcall f_4595(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4598)
static void C_ccall f_4598(C_word c,C_word *av) C_noret;
C_noret_decl(f_4603)
static void C_ccall f_4603(C_word c,C_word *av) C_noret;
C_noret_decl(f_4616)
static void C_fcall f_4616(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4623)
static void C_ccall f_4623(C_word c,C_word *av) C_noret;
C_noret_decl(f_4627)
static void C_ccall f_4627(C_word c,C_word *av) C_noret;
C_noret_decl(f_4740)
static void C_ccall f_4740(C_word c,C_word *av) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word *av) C_noret;
C_noret_decl(f_4762)
static void C_ccall f_4762(C_word c,C_word *av) C_noret;
C_noret_decl(f_4775)
static void C_ccall f_4775(C_word c,C_word *av) C_noret;
C_noret_decl(f_4787)
static void C_ccall f_4787(C_word c,C_word *av) C_noret;
C_noret_decl(f_4791)
static void C_fcall f_4791(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4836)
static void C_ccall f_4836(C_word c,C_word *av) C_noret;
C_noret_decl(f_4870)
static void C_ccall f_4870(C_word c,C_word *av) C_noret;
C_noret_decl(f_4876)
static void C_ccall f_4876(C_word c,C_word *av) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word *av) C_noret;
C_noret_decl(f_4888)
static void C_ccall f_4888(C_word c,C_word *av) C_noret;
C_noret_decl(f_4895)
static void C_ccall f_4895(C_word c,C_word *av) C_noret;
C_noret_decl(f_4898)
static void C_ccall f_4898(C_word c,C_word *av) C_noret;
C_noret_decl(f_4905)
static void C_ccall f_4905(C_word c,C_word *av) C_noret;
C_noret_decl(f_4910)
static void C_ccall f_4910(C_word c,C_word *av) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word *av) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word *av) C_noret;
C_noret_decl(f_4923)
static void C_ccall f_4923(C_word c,C_word *av) C_noret;
C_noret_decl(f_4930)
static void C_ccall f_4930(C_word c,C_word *av) C_noret;
C_noret_decl(f_4932)
static void C_ccall f_4932(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1877)
static void C_ccall trf_1877(C_word c,C_word *av) C_noret;
static void C_ccall trf_1877(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1877(t0,t1,t2,t3);}

C_noret_decl(trf_1892)
static void C_ccall trf_1892(C_word c,C_word *av) C_noret;
static void C_ccall trf_1892(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1892(t0,t1,t2);}

C_noret_decl(trf_1900)
static void C_ccall trf_1900(C_word c,C_word *av) C_noret;
static void C_ccall trf_1900(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1900(t0,t1,t2,t3);}

C_noret_decl(trf_1932)
static void C_ccall trf_1932(C_word c,C_word *av) C_noret;
static void C_ccall trf_1932(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1932(t0,t1,t2);}

C_noret_decl(trf_1964)
static void C_ccall trf_1964(C_word c,C_word *av) C_noret;
static void C_ccall trf_1964(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1964(t0,t1,t2);}

C_noret_decl(trf_2013)
static void C_ccall trf_2013(C_word c,C_word *av) C_noret;
static void C_ccall trf_2013(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2013(t0,t1,t2);}

C_noret_decl(trf_2081)
static void C_ccall trf_2081(C_word c,C_word *av) C_noret;
static void C_ccall trf_2081(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2081(t0,t1,t2);}

C_noret_decl(trf_2087)
static void C_ccall trf_2087(C_word c,C_word *av) C_noret;
static void C_ccall trf_2087(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2087(t0,t1,t2);}

C_noret_decl(trf_2145)
static void C_ccall trf_2145(C_word c,C_word *av) C_noret;
static void C_ccall trf_2145(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2145(t0,t1,t2);}

C_noret_decl(trf_2173)
static void C_ccall trf_2173(C_word c,C_word *av) C_noret;
static void C_ccall trf_2173(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2173(t0,t1,t2);}

C_noret_decl(trf_2242)
static void C_ccall trf_2242(C_word c,C_word *av) C_noret;
static void C_ccall trf_2242(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2242(t0,t1,t2);}

C_noret_decl(trf_2248)
static void C_ccall trf_2248(C_word c,C_word *av) C_noret;
static void C_ccall trf_2248(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2248(t0,t1,t2);}

C_noret_decl(trf_2287)
static void C_ccall trf_2287(C_word c,C_word *av) C_noret;
static void C_ccall trf_2287(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2287(t0,t1,t2);}

C_noret_decl(trf_2296)
static void C_ccall trf_2296(C_word c,C_word *av) C_noret;
static void C_ccall trf_2296(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2296(t0,t1,t2);}

C_noret_decl(trf_2304)
static void C_ccall trf_2304(C_word c,C_word *av) C_noret;
static void C_ccall trf_2304(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2304(t0,t1,t2,t3);}

C_noret_decl(trf_3552)
static void C_ccall trf_3552(C_word c,C_word *av) C_noret;
static void C_ccall trf_3552(C_word c,C_word *av){
C_word t0=av[0];
f_3552(t0);}

C_noret_decl(trf_3629)
static void C_ccall trf_3629(C_word c,C_word *av) C_noret;
static void C_ccall trf_3629(C_word c,C_word *av){
C_word t0=av[0];
f_3629(t0);}

C_noret_decl(trf_3663)
static void C_ccall trf_3663(C_word c,C_word *av) C_noret;
static void C_ccall trf_3663(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3663(t0,t1,t2);}

C_noret_decl(trf_3718)
static void C_ccall trf_3718(C_word c,C_word *av) C_noret;
static void C_ccall trf_3718(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3718(t0,t1,t2,t3);}

C_noret_decl(trf_3739)
static void C_ccall trf_3739(C_word c,C_word *av) C_noret;
static void C_ccall trf_3739(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3739(t0,t1,t2);}

C_noret_decl(trf_3759)
static void C_ccall trf_3759(C_word c,C_word *av) C_noret;
static void C_ccall trf_3759(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3759(t0,t1,t2);}

C_noret_decl(trf_3830)
static void C_ccall trf_3830(C_word c,C_word *av) C_noret;
static void C_ccall trf_3830(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3830(t0,t1,t2);}

C_noret_decl(trf_3872)
static void C_ccall trf_3872(C_word c,C_word *av) C_noret;
static void C_ccall trf_3872(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3872(t0,t1,t2,t3);}

C_noret_decl(trf_3952)
static void C_ccall trf_3952(C_word c,C_word *av) C_noret;
static void C_ccall trf_3952(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3952(t0,t1,t2);}

C_noret_decl(trf_3967)
static void C_ccall trf_3967(C_word c,C_word *av) C_noret;
static void C_ccall trf_3967(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3967(t0,t1,t2);}

C_noret_decl(trf_4027)
static void C_ccall trf_4027(C_word c,C_word *av) C_noret;
static void C_ccall trf_4027(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4027(t0,t1);}

C_noret_decl(trf_4095)
static void C_ccall trf_4095(C_word c,C_word *av) C_noret;
static void C_ccall trf_4095(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4095(t0,t1,t2);}

C_noret_decl(trf_4126)
static void C_ccall trf_4126(C_word c,C_word *av) C_noret;
static void C_ccall trf_4126(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4126(t0,t1,t2);}

C_noret_decl(trf_4295)
static void C_ccall trf_4295(C_word c,C_word *av) C_noret;
static void C_ccall trf_4295(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4295(t0,t1,t2);}

C_noret_decl(trf_4371)
static void C_ccall trf_4371(C_word c,C_word *av) C_noret;
static void C_ccall trf_4371(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4371(t0,t1,t2);}

C_noret_decl(trf_4427)
static void C_ccall trf_4427(C_word c,C_word *av) C_noret;
static void C_ccall trf_4427(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4427(t0,t1,t2);}

C_noret_decl(trf_4470)
static void C_ccall trf_4470(C_word c,C_word *av) C_noret;
static void C_ccall trf_4470(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4470(t0,t1,t2);}

C_noret_decl(trf_4543)
static void C_ccall trf_4543(C_word c,C_word *av) C_noret;
static void C_ccall trf_4543(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4543(t0,t1,t2);}

C_noret_decl(trf_4582)
static void C_ccall trf_4582(C_word c,C_word *av) C_noret;
static void C_ccall trf_4582(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4582(t0,t1,t2,t3);}

C_noret_decl(trf_4595)
static void C_ccall trf_4595(C_word c,C_word *av) C_noret;
static void C_ccall trf_4595(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4595(t0,t1);}

C_noret_decl(trf_4616)
static void C_ccall trf_4616(C_word c,C_word *av) C_noret;
static void C_ccall trf_4616(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4616(t0,t1);}

C_noret_decl(trf_4791)
static void C_ccall trf_4791(C_word c,C_word *av) C_noret;
static void C_ccall trf_4791(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4791(t0,t1,t2);}

/* f5225 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f5225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f5225,c,av);}
/* chicken-status.scm:206: chicken.base#exit */
t2=C_fast_retrieve(lf[95]);{
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

/* f5232 in k4760 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f5232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f5232,c,av);}
/* chicken-status.scm:206: chicken.base#exit */
t2=C_fast_retrieve(lf[95]);{
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

/* f5239 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f5239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f5239,c,av);}
/* chicken-status.scm:206: chicken.base#exit */
t2=C_fast_retrieve(lf[95]);{
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

/* k1647 */
static void C_ccall f_1649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1649,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1652,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1650 in k1647 */
static void C_ccall f_1652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1652,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1655,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k1653 in k1650 in k1647 */
static void C_ccall f_1655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1655,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1658,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_1658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1658,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1661,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_1661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1661,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1664,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_1664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1664,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1667,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_1667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1667,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1670,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_1670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1670,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1673,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_1673(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1673,c,av);}
a=C_alloc(13);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4932,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:26: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[140]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[140]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_1676(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_1676,c,av);}
a=C_alloc(11);
t2=C_mutate(&lf[1] /* (set! main#append-map ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1877,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate(&lf[5] /* (set! main#any ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2081,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[7] /* (set! main#delete-duplicates ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2242,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[8] /* (set! main#filter ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2287,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[9] /* (set! main#staticbuild ...) */,C_mk_bool(STATIC_CHICKEN));
t7=C_mutate(&lf[10] /* (set! main#debugbuild ...) */,C_mk_bool(DEBUG_CHICKEN));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2960,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:43: chicken.platform#feature? */
t9=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[137];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* main#append-map in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_fcall f_1877(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_1877,4,t1,t2,t3,t4);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t4))){
t5=C_i_check_list_2(t3,lf[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1892,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_1892(t9,t1,t3);}
else{
t5=C_a_i_cons(&a,2,t3,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1932,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_1932(t9,t1,t5);}}

/* foldr179 in main#append-map in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_fcall f_1892(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1892,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1900,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1919,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g184 in foldr179 in main#append-map in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_fcall f_1900(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1900,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1908,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:72: proc */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k1906 in g184 in foldr179 in main#append-map in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_1908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1908,c,av);}
/* mini-srfi-1.scm:72: scheme#append */
t2=*((C_word*)lf[3]+1);{
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

/* k1917 in foldr179 in main#append-map in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_1919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1919,c,av);}
/* mini-srfi-1.scm:72: g184 */
t2=((C_word*)t0)[2];
f_1900(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in main#append-map in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_fcall f_1932(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1932,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1939,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* mini-srfi-1.scm:74: any */
f_2081(t3,*((C_word*)lf[6]+1),t2);}

/* k1937 in loop in main#append-map in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_1939(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_1939,c,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[4]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2011,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2013,a[2]=t5,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_2013(t12,t8,((C_word*)t0)[4]);}}

/* k1944 in k1937 in loop in main#append-map in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_1946(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_1946,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1950,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1962,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1964,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_1964(t11,t7,((C_word*)t0)[4]);}

/* k1948 in k1944 in k1937 in loop in main#append-map in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_1950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1950,c,av);}
/* mini-srfi-1.scm:76: scheme#append */
t2=*((C_word*)lf[3]+1);{
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

/* k1960 in k1944 in k1937 in loop in main#append-map in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_1962(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1962,c,av);}
/* mini-srfi-1.scm:77: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1932(t2,((C_word*)t0)[3],t1);}

/* map-loop221 in k1944 in k1937 in loop in main#append-map in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_fcall f_1964(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1964,3,t0,t1,t2);}
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

/* k2009 in k1937 in loop in main#append-map in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2011,c,av);}{
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

/* map-loop194 in k1937 in loop in main#append-map in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_fcall f_2013(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2013,3,t0,t1,t2);}
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

/* loop in k4760 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static C_word C_fcall f_2053(C_word t1){
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
t4=C_i_memq(t3,lf[120]);
if(C_truep(C_i_not(t4))){
return(C_SCHEME_FALSE);}
else{
t6=C_u_i_cdr(t1);
t1=t6;
goto loop;}}}

/* main#any in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_fcall f_2081(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2081,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2087,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2087(t7,t1,t3);}

/* loop in main#any in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_fcall f_2087(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2087,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2097,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:88: pred */
t4=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}

/* k2095 in loop in main#any in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2097,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* mini-srfi-1.scm:89: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2087(t2,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[4]));}}

/* loop in k3755 in main#filter-egg-names in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_fcall f_2145(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2145,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2163,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:101: loop */
t6=t4;
t7=C_u_i_cdr(t2);
t1=t6;
t2=t7;
goto loop;}}

/* k2161 in loop in k3755 in main#filter-egg-names in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_2163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2163,c,av);}
/* mini-srfi-1.scm:101: scheme#append */
t2=*((C_word*)lf[3]+1);{
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

/* loop in loop in main#delete-duplicates in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_fcall f_2173(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2173,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2186,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:106: test */
t4=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k2184 in loop in loop in main#delete-duplicates in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2186,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* mini-srfi-1.scm:107: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2173(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}
else{
t2=C_u_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2200,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:109: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2173(t4,t3,C_u_i_cdr(((C_word*)t0)[4]));}}

/* k2198 in k2184 in loop in loop in main#delete-duplicates in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2200,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* main#delete-duplicates in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_fcall f_2242(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2242,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2248,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2248(t7,t1,t2);}

/* loop in main#delete-duplicates in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_fcall f_2248(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2248,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2262,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2275,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2173,a[2]=t8,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2173(t10,t6,t4);}}

/* k2260 in loop in main#delete-duplicates in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2262,c,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2273 in loop in main#delete-duplicates in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2275,c,av);}
/* mini-srfi-1.scm:123: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2248(t2,((C_word*)t0)[3],t1);}

/* main#filter in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_fcall f_2287(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2287,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_check_list_2(t3,lf[2]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2296,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2296(t8,t1,t3);}

/* foldr326 in main#filter in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_fcall f_2296(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2296,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2304,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2325,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g331 in foldr326 in main#filter in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_fcall f_2304(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2304,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2311,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:131: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k2309 in g331 in foldr326 in main#filter in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2311,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]):((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2323 in foldr326 in main#filter in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2325,c,av);}
/* mini-srfi-1.scm:131: g331 */
t2=((C_word*)t0)[2];
f_2304(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2960(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2960,c,av);}
a=C_alloc(6);
t2=lf[11] /* main#cross-chicken */ =t1;;
t3=lf[12] /* main#binary-version */ =C_fix((C_word)C_BINARY_VERSION);;
t4=lf[13] /* main#major-version */ =C_fix((C_word)C_MAJOR_VERSION);;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2966,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[132]+1);{
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

/* k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2966,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2970,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2970,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2974,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2974,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2978,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2978,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2982,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2982,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2986,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2986,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2990,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2994,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2994,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2998,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_2998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2998,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[14] /* (set! main#default-libdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3002,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[132]+1);{
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

/* k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_3002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3002,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[15] /* (set! main#default-runlibdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3006,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[132]+1);{
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

/* k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 in ... */
static void C_ccall f_3006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3006,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3010,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in ... */
static void C_ccall f_3010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3010,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3014,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in ... */
static void C_ccall f_3014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3014,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[16] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3018,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[132]+1);{
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

/* k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in ... */
static void C_ccall f_3018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3018,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4930,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:63: chicken.platform#software-type */
t3=C_fast_retrieve(lf[135]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in ... */
static void C_ccall f_3026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3026,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3030,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in ... */
static void C_ccall f_3030(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3030,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[16] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3034,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4923,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[132]+1);{
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

/* k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in ... */
static void C_ccall f_3034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3034,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3038,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4919,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[132]+1);{
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

/* k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in ... */
static void C_ccall f_3038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3038,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3042,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4915,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[132]+1);{
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

/* k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in ... */
static void C_ccall f_3042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3042,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3046,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in ... */
static void C_ccall f_3046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3046,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3050,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in ... */
static void C_ccall f_3050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3050,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3054,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in ... */
static void C_ccall f_3054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3054,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3058,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in ... */
static void C_ccall f_3058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3058,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3062,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in ... */
static void C_ccall f_3062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3062,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3066,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in ... */
static void C_ccall f_3066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3066,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3070,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in ... */
static void C_ccall f_3070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3070,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3074,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in ... */
static void C_ccall f_3074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3074,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3078,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in ... */
static void C_ccall f_3078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3078,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3082,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in ... */
static void C_ccall f_3082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3082,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3086,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in ... */
static void C_ccall f_3086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3086,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3090,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[132]+1);{
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

/* k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in ... */
static void C_ccall f_3090(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3090,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3094,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4910,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[12],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t5=C_fast_retrieve(lf[130]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=C_retrieve2(lf[12],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in ... */
static void C_ccall f_3094(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3094,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[19] /* (set! main#target-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3098,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4905,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[12],C_text("main#binary-version"));
/* ##sys#fixnum->string */
t6=C_fast_retrieve(lf[130]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=C_retrieve2(lf[12],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in ... */
static void C_ccall f_3098(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3098,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[20] /* (set! main#target-run-repo ...) */,t1);
t3=C_mutate(&lf[21] /* (set! main#+egg-info-extension+ ...) */,lf[22]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3167,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:120: chicken.process-context#get-environment-variable */
t5=C_fast_retrieve(lf[127]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[128];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in ... */
static void C_ccall f_3167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3167,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3170,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_3170(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4895,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* egg-environment.scm:121: chicken.platform#system-cache-directory */
t4=C_fast_retrieve(lf[126]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in ... */
static void C_ccall f_3170(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3170,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[23] /* (set! main#cache-directory ...) */,t1);
t3=C_mutate(&lf[24] /* (set! main#get-egg-property ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3209,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[25] /* (set! main#get-egg-property* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3233,tmp=(C_word)a,a+=2,tmp));
t5=lf[26] /* main#host-extensions */ =C_SCHEME_TRUE;;
t6=lf[27] /* main#target-extensions */ =C_SCHEME_TRUE;;
t7=C_mutate(&lf[28] /* (set! main#get-terminal-width ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3552,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4888,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:62: get-terminal-width */
f_3552(t8);}

/* k3174 in k3677 in k3665 in main#read-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_3176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3176,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3182,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:34: chicken.file#file-exists? */
t3=C_fast_retrieve(lf[42]);{
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

/* k3180 in k3174 in k3677 in k3665 in main#read-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_3182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3182,c,av);}
if(C_truep(t1)){
/* egg-information.scm:38: scheme#with-input-from-file */
t2=C_fast_retrieve(lf[40]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* egg-information.scm:38: scheme#with-input-from-file */
t2=C_fast_retrieve(lf[40]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k3184 in k3677 in k3665 in main#read-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_3186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3186,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3190,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:32: chicken.pathname#pathname-file */
t3=C_fast_retrieve(lf[45]);{
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

/* k3188 in k3184 in k3677 in k3665 in main#read-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_3190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3190,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* egg-information.scm:33: chicken.pathname#pathname-extension */
t3=C_fast_retrieve(lf[44]);{
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

/* k3192 in k3188 in k3184 in k3677 in k3665 in main#read-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_ccall f_3194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3194,c,av);}
/* egg-information.scm:30: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[43]);{
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

/* k3196 in k3677 in k3665 in main#read-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_3198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3198,c,av);}
/* egg-information.scm:30: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[43]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[46];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* main#get-egg-property in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in ... */
static C_word C_fcall f_3209(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_assq(t2,t1);
if(C_truep(t6)){
t7=C_i_cadr(t6);
return((C_truep(t7)?t7:t5));}
else{
return(t5);}}

/* main#get-egg-property* in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in ... */
static C_word C_fcall f_3233(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_END_OF_LIST:C_i_car(t3));
t6=C_i_assq(t2,t1);
if(C_truep(t6)){
t7=C_i_cdr(t6);
return((C_truep(t7)?t7:t5));}
else{
return(t5);}}

/* main#get-terminal-width in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in ... */
static void C_fcall f_3552(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3552,1,t1);}
a=C_alloc(4);
t2=*((C_word*)lf[29]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3559,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:55: chicken.port#terminal-port? */
t4=C_fast_retrieve(lf[34]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[29]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3557 in main#get-terminal-width in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in ... */
static void C_ccall f_3559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3559,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3562,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3574,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:56: scheme#call-with-current-continuation */
t4=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(79);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3560 in k3557 in main#get-terminal-width in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_ccall f_3562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3562,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3565,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:56: g916 */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k3563 in k3560 in k3557 in main#get-terminal-width in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_3565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3565,c,av);}
if(C_truep(C_i_zerop(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(79);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-status.scm:59: scheme#min */
t2=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(79);
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* a3573 in k3557 in main#get-terminal-width in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_ccall f_3574(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3574,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3580,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3589,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:56: chicken.condition#with-exception-handler */
t5=C_fast_retrieve(lf[32]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a3579 in a3573 in k3557 in main#get-terminal-width in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_3580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,2)))){
C_save_and_reclaim((void *)f_3580,c,av);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3586,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:56: k913 */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a3585 in a3579 in a3573 in k3557 in main#get-terminal-width in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_3586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3586,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3588 in a3573 in k3557 in main#get-terminal-width in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_3589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3589,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3595,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3613,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:56: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a3594 in a3588 in a3573 in k3557 in main#get-terminal-width in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_3595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3595,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3601,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3607,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:56: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a3600 in a3594 in a3588 in a3573 in k3557 in main#get-terminal-width in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_3601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3601,c,av);}
/* chicken-status.scm:56: chicken.port#terminal-size */
t2=C_fast_retrieve(lf[31]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a3606 in a3594 in a3588 in a3573 in k3557 in main#get-terminal-width in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_3607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,1)))){
C_save_and_reclaim((void*)f_3607,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_list_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a3612 in a3588 in a3573 in k3557 in main#get-terminal-width in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_3613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_3613,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3619,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:56: k913 */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a3618 in a3612 in a3588 in a3573 in k3557 in main#get-terminal-width in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_3619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3619,c,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* main#repo-path in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in ... */
static void C_fcall f_3629(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_3629,1,t1);}
t2=(C_truep(C_retrieve2(lf[11],C_text("main#cross-chicken")))?C_i_not(C_retrieve2(lf[26],C_text("main#host-extensions"))):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_SCHEME_END_OF_LIST;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
if(C_truep(t5)){
t6=C_retrieve2(lf[20],C_text("main#target-run-repo"));
/* chicken-status.scm:66: ##sys#split-path */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word av2[3];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t1;
av2[2]=C_retrieve2(lf[20],C_text("main#target-run-repo"));
tp(3,av2);}}
else{
t6=C_retrieve2(lf[19],C_text("main#target-repo"));
/* chicken-status.scm:66: ##sys#split-path */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word av2[3];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t1;
av2[2]=C_retrieve2(lf[19],C_text("main#target-repo"));
tp(3,av2);}}}
else{
/* chicken-status.scm:67: chicken.platform#repository-path */
t3=C_fast_retrieve(lf[38]);{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a3656 in k3745 in g974 in main#filter-egg-names in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_3657(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3657,c,av);}
t3=C_fast_retrieve(lf[51]);
/* chicken-status.scm:70: g936 */
t4=C_fast_retrieve(lf[51]);{
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

/* main#read-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in ... */
static void C_fcall f_3663(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3663,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3667,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
/* chicken-status.scm:72: repo-path */
f_3629(t4);}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_i_car(t3);
f_3667(2,av2);}}}

/* k3665 in main#read-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_ccall f_3667(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3667,c,av);}
a=C_alloc(7);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_retrieve2(lf[21],C_text("main#+egg-info-extension+")):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3679,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3689,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:73: chicken.pathname#make-pathname */
t10=C_fast_retrieve(lf[43]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[4];
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k3677 in k3665 in main#read-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_3679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3679,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3176,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3186,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3198,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* egg-information.scm:30: chicken.pathname#pathname-directory */
t5=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3687 in k3665 in main#read-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_3689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3689,c,av);}
/* chicken-status.scm:73: chicken.load#find-file */
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
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* main#filter-egg-names in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in ... */
static void C_fcall f_3718(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_3718,4,t1,t2,t3,t4);}
a=C_alloc(22);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3722,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t3))){
/* chicken-status.scm:88: delete-duplicates */
f_2242(t1,t2,*((C_word*)lf[50]+1));}
else{
if(C_truep(t4)){
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3739,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t11=C_i_check_list_2(t3,lf[4]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3757,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3759,a[2]=t8,a[3]=t14,a[4]=t10,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_3759(t16,t12,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3796,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:84: filter */
f_2287(t5,t6,t2);}}}

/* k3720 in main#filter-egg-names in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_ccall f_3722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3722,c,av);}
/* chicken-status.scm:88: delete-duplicates */
f_2242(((C_word*)t0)[2],t1,*((C_word*)lf[50]+1));}

/* g974 in main#filter-egg-names in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_fcall f_3739(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3739,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3747,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3751,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:81: chicken.irregex#glob->sre */
t5=C_fast_retrieve(lf[53]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3745 in g974 in main#filter-egg-names in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_3747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3747,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3657,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:70: filter */
f_2287(((C_word*)t0)[2],t2,((C_word*)t0)[3]);}

/* k3749 in g974 in main#filter-egg-names in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_3751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3751,c,av);}
/* chicken-status.scm:81: chicken.irregex#irregex */
t2=C_fast_retrieve(lf[52]);{
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

/* k3755 in main#filter-egg-names in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_ccall f_3757(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3757,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2145,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2145(t5,((C_word*)t0)[2],t1);}

/* map-loop968 in main#filter-egg-names in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_fcall f_3759(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3759,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3784,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-status.scm:80: g974 */
t4=((C_word*)t0)[4];
f_3739(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3782 in map-loop968 in main#filter-egg-names in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_3784(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3784,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3759(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* a3795 in main#filter-egg-names in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_ccall f_3796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3796,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3802,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:86: any */
f_2081(t1,t3,((C_word*)t0)[2]);}

/* a3801 in a3795 in main#filter-egg-names in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_3802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3802,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_string_equal_p(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3814 in k4614 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_3816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3816,c,av);}
/* chicken-status.scm:91: delete-duplicates */
f_2242(((C_word*)t0)[2],t1,*((C_word*)lf[102]+1));}

/* a3817 in k4614 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_3818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_3818,c,av);}
a=C_alloc(14);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_fast_retrieve(lf[45]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3825,a[2]=t5,a[3]=t7,a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3866,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:95: chicken.pathname#make-pathname */
t10=C_fast_retrieve(lf[43]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[104];
av2[4]=C_retrieve2(lf[21],C_text("main#+egg-info-extension+"));
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k3823 in a3817 in k4614 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_ccall f_3825(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3825,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3830,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3830(t5,((C_word*)t0)[5],t1);}

/* map-loop1006 in k3823 in a3817 in k4614 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_fcall f_3830(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3830,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-status.scm:94: g1012 */
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

/* k3853 in map-loop1006 in k3823 in a3817 in k4614 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_3855(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3855,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3830(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k3864 in a3817 in k4614 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_ccall f_3866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3866,c,av);}
/* chicken-status.scm:95: chicken.file#glob */
t2=C_fast_retrieve(lf[103]);{
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

/* k3868 in k4614 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_3870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3870,c,av);}
/* chicken-status.scm:92: append-map */
f_1877(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* main#format-string in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in ... */
static void C_fcall f_3872(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3872,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_make_character(32):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_string_length(t2);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3891,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t15=C_fixnum_difference(t3,t13);
/* chicken-status.scm:101: scheme#make-string */
t16=*((C_word*)lf[56]+1);{
C_word av2[4];
av2[0]=t16;
av2[1]=t14;
av2[2]=C_i_fixnum_max(C_fix(0),t15);
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t16+1)))(4,av2);}}

/* k3889 in main#format-string in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_ccall f_3891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3891,c,av);}
if(C_truep(((C_word*)t0)[2])){
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[55]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[55]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
tp(4,av2);}}}

/* main#list-installed-eggs in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in ... */
static void C_ccall f_3938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_3938,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3942,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
/* chicken-status.scm:106: repo-path */
f_3629(t4);}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_car(t3);
f_3942(2,av2);}}}

/* k3940 in main#list-installed-eggs in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_ccall f_3942(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3942,c,av);}
a=C_alloc(8);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_retrieve2(lf[21],C_text("main#+egg-info-extension+")):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3952,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3959,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:109: chicken.sort#sort */
t10=C_fast_retrieve(lf[60]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[4];
av2[3]=*((C_word*)lf[61]+1);
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* g1070 in k3940 in main#list-installed-eggs in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_fcall f_3952(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3952,3,t0,t1,t2);}
t3=C_retrieve2(lf[58],C_text("main#list-egg-info"));
/* chicken-status.scm:108: g1085 */
t4=C_retrieve2(lf[58],C_text("main#list-egg-info"));{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
av2[4]=((C_word*)t0)[3];
f_4017(5,av2);}}

/* k3957 in k3940 in main#list-installed-eggs in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_3959(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3959,c,av);}
a=C_alloc(6);
t2=C_i_check_list_2(t1,lf[59]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3967,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3967(t6,((C_word*)t0)[3],t1);}

/* for-each-loop1069 in k3957 in k3940 in main#list-installed-eggs in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_fcall f_3967(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3967,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3977,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:108: g1070 */
t4=((C_word*)t0)[3];
f_3952(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3975 in for-each-loop1069 in k3957 in k3940 in main#list-installed-eggs in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_3977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3977,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3967(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* main#list-egg-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in ... */
static void C_ccall f_4017(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_4017,c,av);}
a=C_alloc(11);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4021,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:113: read-info */
f_3663(t5,t2,C_a_i_list(&a,2,t3,t4));}

/* k4019 in main#list-egg-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_ccall f_4021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4021,c,av);}
a=C_alloc(7);
t2=(C_truep(t1)?(
/* chicken-status.scm:114: get-egg-property */
  f_3209(t1,lf[62],C_SCHEME_END_OF_LIST)
):C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_4027(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4054,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:115: chicken.load#find-file */
t5=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[69];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k4025 in k4019 in main#list-egg-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_fcall f_4027(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_4027,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4034,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4051,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:118: scheme#string-append */
t4=*((C_word*)lf[66]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[67];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4032 in k4025 in k4019 in main#list-egg-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_4034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4034,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4038,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4042,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4047,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:121: chicken.string#->string */
t5=C_fast_retrieve(lf[65]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4036 in k4032 in k4025 in k4019 in main#list-egg-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_4038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4038,c,av);}
/* chicken-status.scm:118: chicken.base#print */
t2=*((C_word*)lf[63]+1);{
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

/* k4040 in k4032 in k4025 in k4019 in main#list-egg-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_4042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4042,c,av);}
a=C_alloc(6);
/* chicken-status.scm:120: format-string */
f_3872(((C_word*)t0)[2],t1,C_retrieve2(lf[35],C_text("main#list-width")),C_a_i_list(&a,2,C_SCHEME_TRUE,C_make_character(46)));}

/* k4045 in k4032 in k4025 in k4019 in main#list-egg-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_4047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4047,c,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[55]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[64];
av2[3]=t1;
tp(4,av2);}}

/* k4049 in k4025 in k4019 in main#list-egg-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_4051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4051,c,av);}
a=C_alloc(6);
/* chicken-status.scm:118: format-string */
f_3872(((C_word*)t0)[2],t1,C_retrieve2(lf[35],C_text("main#list-width")),C_a_i_list(&a,2,C_SCHEME_FALSE,C_make_character(46)));}

/* k4052 in k4019 in main#list-egg-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_4054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4054,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4057,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* chicken-status.scm:116: scheme#with-input-from-file */
t3=C_fast_retrieve(lf[40]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=*((C_word*)lf[41]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=((C_word*)t0)[2];
f_4027(t3,lf[68]);}}

/* k4055 in k4052 in k4019 in main#list-egg-info in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_4057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4057,c,av);}
t2=((C_word*)t0)[2];
f_4027(t2,(C_truep(t1)?t1:lf[68]));}

/* k4073 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_4075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4075,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4087,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4120,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4124,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:129: chicken.file#directory */
t5=C_fast_retrieve(lf[100]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_retrieve2(lf[23],C_text("main#cache-directory"));
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4082 in for-each-loop1112 in k4085 in k4073 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_4084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4084,c,av);}
/* chicken-status.scm:128: list-egg-info */
t2=C_retrieve2(lf[58],C_text("main#list-egg-info"));{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=lf[99];
f_4017(5,av2);}}

/* k4085 in k4073 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_4087(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4087,c,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[59]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4095,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4095(t6,((C_word*)t0)[2],t1);}

/* for-each-loop1112 in k4085 in k4073 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_fcall f_4095(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4095,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4105,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4084,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:128: chicken.pathname#make-pathname */
t6=C_fast_retrieve(lf[43]);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_retrieve2(lf[23],C_text("main#cache-directory"));
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4103 in for-each-loop1112 in k4085 in k4073 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_ccall f_4105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4105,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4095(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4118 in k4073 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_4120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4120,c,av);}
/* chicken-status.scm:129: chicken.sort#sort */
t2=C_fast_retrieve(lf[60]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[61]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4122 in k4073 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_4124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4124,c,av);}
/* chicken-status.scm:129: filter-egg-names */
f_3718(((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* main#gather-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in ... */
static void C_fcall f_4126(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4126,3,t1,t2,t3);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4132,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:132: append-map */
f_1877(t1,t4,t2,C_SCHEME_END_OF_LIST);}

/* a4131 in main#gather-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_ccall f_4132(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4132,c,av);}
t3=C_retrieve2(lf[71],C_text("main#gather-components-rec"));
/* chicken-status.scm:132: g1137 */
t4=C_retrieve2(lf[71],C_text("main#gather-components-rec"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
f_4138(4,av2);}}

/* main#gather-components-rec in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in ... */
static void C_ccall f_4138(C_word c,C_word *av){
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
C_word t14;
C_word t15;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_4138,c,av);}
a=C_alloc(12);
t4=C_i_car(t2);
t5=C_eqp(t4,lf[72]);
if(C_truep(t5)){
if(C_truep(C_retrieve2(lf[26],C_text("main#host-extensions")))){
/* chicken-status.scm:137: gather-components */
f_4126(t1,C_u_i_cdr(t2),lf[72]);}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t6=C_eqp(t4,lf[73]);
if(C_truep(t6)){
if(C_truep(C_retrieve2(lf[27],C_text("main#target-extensions")))){
/* chicken-status.scm:139: gather-components */
f_4126(t1,C_u_i_cdr(t2),lf[73]);}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t7=C_eqp(t4,lf[74]);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=C_a_i_list3(&a,3,lf[74],t3,t8);
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_a_i_list1(&a,1,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=C_eqp(t4,lf[75]);
if(C_truep(t8)){
t9=C_i_cadr(t2);
t10=C_a_i_list3(&a,3,lf[75],t3,t9);
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_a_i_list1(&a,1,t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t9=C_eqp(t4,lf[76]);
if(C_truep(t9)){
t10=C_i_cadr(t2);
t11=C_a_i_list3(&a,3,lf[76],t3,t10);
t12=t1;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_a_i_list1(&a,1,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t10=C_eqp(t4,lf[77]);
if(C_truep(t10)){
t11=C_i_cadr(t2);
t12=C_a_i_list3(&a,3,lf[77],t3,t11);
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_a_i_list1(&a,1,t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t11=C_eqp(t4,lf[78]);
if(C_truep(t11)){
t12=C_i_cadr(t2);
t13=C_a_i_list3(&a,3,lf[78],t3,t12);
t14=t1;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_a_i_list1(&a,1,t13);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t12=C_eqp(t4,lf[79]);
if(C_truep(t12)){
t13=C_i_cadr(t2);
t14=C_a_i_list3(&a,3,lf[79],t3,t13);
t15=t1;{
C_word *av2=av;
av2[0]=t15;
av2[1]=C_a_i_list1(&a,1,t14);
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}}}}}}}}

/* main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in ... */
static void C_ccall f_4290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4290,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4456,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:148: get-terminal-width */
f_3552(t3);}

/* g1154 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_fcall f_4295(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4295,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4299,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:151: read-info */
f_3663(t3,t2,C_SCHEME_END_OF_LIST);}

/* k4297 in g1154 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_4299(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4299,c,av);}
a=C_alloc(13);
t2=(
/* chicken-status.scm:152: get-egg-property */
  f_3209(t1,lf[62],C_SCHEME_END_OF_LIST)
);
t3=(
/* chicken-status.scm:153: get-egg-property* */
  f_3233(t1,lf[81],C_SCHEME_END_OF_LIST)
);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4308,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4399,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4416,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:155: scheme#string-append */
t7=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[88];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* chicken-status.scm:159: chicken.base#print */
t5=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k4306 in k4297 in g1154 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_4308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4308,c,av);}
a=C_alloc(3);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4314,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:161: gather-components */
f_4126(t2,((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4312 in k4306 in k4297 in g1154 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_ccall f_4314(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4314,c,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[59]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4371,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4371(t6,((C_word*)t0)[2],t1);}

/* k4321 in for-each-loop1170 in k4312 in k4306 in k4297 in g1154 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_4323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4323,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4351,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:165: chicken.string#->string */
t4=C_fast_retrieve(lf[65]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_caddr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4325 in k4321 in for-each-loop1170 in k4312 in k4306 in k4297 in g1154 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_4327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4327,c,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[72]);
if(C_truep(t3)){
/* chicken-status.scm:164: chicken.base#print */
t4=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[82];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[83];
av2[5]=t1;
av2[6]=lf[84];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}
else{
t4=C_eqp(t2,lf[73]);
if(C_truep(t4)){
/* chicken-status.scm:164: chicken.base#print */
t5=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[82];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[83];
av2[5]=t1;
av2[6]=lf[85];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}
else{
/* chicken-status.scm:164: chicken.base#print */
t5=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[82];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[83];
av2[5]=t1;
av2[6]=lf[86];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}}}

/* k4349 in k4321 in for-each-loop1170 in k4312 in k4306 in k4297 in g1154 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in ... */
static void C_ccall f_4351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4351,c,av);}
/* chicken-status.scm:165: format-string */
f_3872(((C_word*)t0)[2],t1,C_fix(32),C_SCHEME_END_OF_LIST);}

/* k4357 in for-each-loop1170 in k4312 in k4306 in k4297 in g1154 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_4359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4359,c,av);}
/* chicken-status.scm:164: format-string */
f_3872(((C_word*)t0)[2],t1,C_fix(32),C_SCHEME_END_OF_LIST);}

/* for-each-loop1170 in k4312 in k4306 in k4297 in g1154 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in ... */
static void C_fcall f_4371(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4371,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4381,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4323,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4359,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:164: chicken.string#->string */
t7=C_fast_retrieve(lf[65]);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_i_car(t4);
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4379 in for-each-loop1170 in k4312 in k4306 in k4297 in g1154 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in ... */
static void C_ccall f_4381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4381,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4371(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4397 in k4297 in g1154 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_4399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4399,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4403,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4407,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4412,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:157: chicken.string#->string */
t5=C_fast_retrieve(lf[65]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4401 in k4397 in k4297 in g1154 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_ccall f_4403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4403,c,av);}
/* chicken-status.scm:155: chicken.base#print */
t2=*((C_word*)lf[63]+1);{
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

/* k4405 in k4397 in k4297 in g1154 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_ccall f_4407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4407,c,av);}
a=C_alloc(6);
/* chicken-status.scm:156: format-string */
f_3872(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,2,C_SCHEME_TRUE,C_make_character(46)));}

/* k4410 in k4397 in k4297 in g1154 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in ... */
static void C_ccall f_4412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4412,c,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[55]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[87];
av2[3]=t1;
tp(4,av2);}}

/* k4414 in k4297 in g1154 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_4416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4416,c,av);}
a=C_alloc(6);
/* chicken-status.scm:155: format-string */
f_3872(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,2,C_SCHEME_FALSE,C_make_character(46)));}

/* for-each-loop1153 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_fcall f_4427(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4427,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4437,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:149: g1154 */
t4=((C_word*)t0)[3];
f_4295(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4435 in for-each-loop1153 in k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_4437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4437,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4427(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4454 in main#list-installed-components in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_ccall f_4456(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(43,c,3)))){
C_save_and_reclaim((void *)f_4456,c,av);}
a=C_alloc(43);
t2=C_s_a_i_minus(&a,2,t1,C_fix(2));
t3=C_s_a_i_quotient(&a,2,t2,C_fix(2));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4295,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_list_2(((C_word*)t0)[2],lf[59]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4427,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4427(t9,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* main#list-installed-files in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in ... */
static void C_ccall f_4458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4458,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4462,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4495,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4497,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:177: append-map */
f_1877(t4,t5,t2,C_SCHEME_END_OF_LIST);}

/* k4460 in main#list-installed-files in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_ccall f_4462(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4462,c,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[59]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4470,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4470(t6,((C_word*)t0)[2],t1);}

/* for-each-loop1202 in k4460 in main#list-installed-files in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_fcall f_4470(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4470,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4480,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:174: g1203 */
t4=*((C_word*)lf[63]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4478 in for-each-loop1202 in k4460 in main#list-installed-files in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_4480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4480,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4470(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4493 in main#list-installed-files in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_ccall f_4495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4495,c,av);}
/* chicken-status.scm:176: chicken.sort#sort */
t2=C_fast_retrieve(lf[60]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[61]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a4496 in main#list-installed-files in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_ccall f_4497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4497,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4505,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:179: read-info */
f_3663(t3,t2,C_SCHEME_END_OF_LIST);}

/* k4503 in a4496 in main#list-installed-files in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_4505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4505,c,av);}
/* chicken-status.scm:179: get-egg-property* */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
/* chicken-status.scm:179: get-egg-property* */
  f_3233(t1,lf[90],C_SCHEME_END_OF_LIST)
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* main#dump-installed-versions in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in ... */
static void C_ccall f_4507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4507,c,av);}
a=C_alloc(5);
t3=C_i_check_list_2(t2,lf[59]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4543,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4543(t7,t1,t2);}

/* k4522 in k4533 in for-each-loop1222 in main#dump-installed-versions in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_4524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4524,c,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
/* chicken-status.scm:187: chicken.pretty-print#pp */
t4=C_fast_retrieve(lf[92]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
/* chicken-status.scm:187: chicken.pretty-print#pp */
t3=C_fast_retrieve(lf[92]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4533 in for-each-loop1222 in main#dump-installed-versions in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_4535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4535,c,av);}
a=C_alloc(4);
t2=(
/* chicken-status.scm:186: get-egg-property */
  f_3209(t1,lf[62],C_SCHEME_END_OF_LIST)
);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4524,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:187: scheme#string->symbol */
t4=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* for-each-loop1222 in main#dump-installed-versions in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_fcall f_4543(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4543,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4553,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4535,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:186: read-info */
f_3663(t5,t4,C_SCHEME_END_OF_LIST);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4551 in for-each-loop1222 in main#dump-installed-versions in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_4553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4553,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4543(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_fcall f_4582(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4582,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4595,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t5=((C_word*)((C_word*)t0)[4])[1];
if(C_truep(t5)){
t6=t4;
f_4595(t6,t5);}
else{
t6=((C_word*)((C_word*)t0)[5])[1];
t7=t4;
f_4595(t7,t6);}}
else{
t5=t4;
f_4595(t5,C_SCHEME_FALSE);}}
else{
t4=C_i_car(t2);
if(C_truep((C_truep(C_i_equalp(t4,lf[105]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[106]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[107]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5225,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:192: chicken.base#print */
t6=*((C_word*)lf[63]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[108];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
if(C_truep(C_i_string_equal_p(t4,lf[109]))){
t5=lf[27] /* main#target-extensions */ =C_SCHEME_FALSE;;
/* chicken-status.scm:234: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[110]))){
t5=lf[26] /* main#host-extensions */ =C_SCHEME_FALSE;;
/* chicken-status.scm:237: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[111]))){
t5=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
/* chicken-status.scm:240: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[112]))){
t5=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
/* chicken-status.scm:243: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[113]))){
t5=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
/* chicken-status.scm:246: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
t5=C_u_i_string_equal_p(t4,lf[114]);
t6=(C_truep(t5)?t5:C_u_i_string_equal_p(t4,lf[115]));
if(C_truep(t6)){
t7=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_TRUE);
/* chicken-status.scm:249: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
t7=C_u_i_string_equal_p(t4,lf[116]);
t8=(C_truep(t7)?t7:C_u_i_string_equal_p(t4,lf[117]));
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[6],0,C_SCHEME_TRUE);
/* chicken-status.scm:252: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t1=t15;
t2=t16;
t3=t17;
goto loop;}
else{
if(C_truep(C_u_i_string_equal_p(t4,lf[118]))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4740,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4747,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:254: chicken.platform#chicken-version */
t11=C_fast_retrieve(lf[119]);{
C_word av2[2];
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t9=C_block_size(t4);
t10=(C_truep(C_i_fixnum_positivep(t9))?C_u_i_char_equalp(C_make_character(45),C_i_string_ref(t4,C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=C_block_size(t4);
if(C_truep(C_fixnum_greaterp(t11,C_fix(2)))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4762,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4836,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:259: scheme#substring */
t14=*((C_word*)lf[122]+1);{
C_word av2[4];
av2[0]=t14;
av2[1]=t13;
av2[2]=t4;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5239,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:192: chicken.base#print */
t13=*((C_word*)lf[63]+1);{
C_word av2[3];
av2[0]=t13;
av2[1]=t12;
av2[2]=lf[108];
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}}
else{
t11=C_u_i_cdr(t2);
t12=C_a_i_cons(&a,2,t4,t3);
/* chicken-status.scm:265: loop */
t15=t1;
t16=t11;
t17=t12;
t1=t15;
t2=t16;
t3=t17;
goto loop;}}}}}}}}}}}}

/* k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_fcall f_4595(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4595,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4598,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4603,tmp=(C_word)a,a+=2,tmp);
/* chicken-status.scm:219: chicken.port#with-output-to-port */
t4=C_fast_retrieve(lf[97]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=*((C_word*)lf[98]+1);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t2=((C_word*)((C_word*)t0)[4])[1];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-status.scm:125: chicken.file#directory-exists? */
t4=C_fast_retrieve(lf[101]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[23],C_text("main#cache-directory"));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=t2;
f_4616(t3,C_retrieve2(lf[91],C_text("main#dump-installed-versions")));}
else{
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t3=C_retrieve2(lf[89],C_text("main#list-installed-files"));
t4=t2;
f_4616(t4,C_retrieve2(lf[89],C_text("main#list-installed-files")));}
else{
t3=t2;
f_4616(t3,(C_truep(((C_word*)((C_word*)t0)[8])[1])?C_retrieve2(lf[80],C_text("main#list-installed-components")):C_retrieve2(lf[57],C_text("main#list-installed-eggs"))));}}}}}

/* k4596 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_4598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4598,c,av);}
/* chicken-status.scm:221: chicken.base#exit */
t2=C_fast_retrieve(lf[95]);{
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

/* a4602 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_4603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4603,c,av);}
/* chicken-status.scm:220: g1264 */
t2=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[96];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4614 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_fcall f_4616(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_4616,2,t0,t1);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4623,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4627,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3816,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3818,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3870,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-status.scm:96: repo-path */
f_3629(t6);}

/* k4621 in k4614 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_4623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4623,c,av);}
/* chicken-status.scm:218: g1267 */
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

/* k4625 in k4614 in k4593 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in ... */
static void C_ccall f_4627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4627,c,av);}
/* chicken-status.scm:228: filter-egg-names */
f_3718(((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k4738 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_4740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4740,c,av);}
/* chicken-status.scm:255: chicken.base#exit */
t2=C_fast_retrieve(lf[95]);{
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

/* k4745 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_4747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4747,c,av);}
/* chicken-status.scm:254: chicken.base#print */
t2=*((C_word*)lf[63]+1);{
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

/* k4760 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_4762(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4762,c,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2053,tmp=(C_word)a,a+=2,tmp);
t3=(
  f_2053(t1)
);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4775,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4787,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4791,a[2]=t7,a[3]=t11,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_4791(t13,t9,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5232,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:192: chicken.base#print */
t5=*((C_word*)lf[63]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[108];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k4773 in k4760 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_4775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4775,c,av);}
/* chicken-status.scm:261: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4582(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k4785 in k4760 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_ccall f_4787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4787,c,av);}
/* chicken-status.scm:261: scheme#append */
t2=*((C_word*)lf[3]+1);{
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

/* map-loop1303 in k4760 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in ... */
static void C_fcall f_4791(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4791,3,t0,t1,t2);}
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

/* k4834 in loop in k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in ... */
static void C_ccall f_4836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4836,c,av);}
/* ##sys#string->list */
t2=C_fast_retrieve(lf[121]);{
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

/* k4868 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in ... */
static void C_ccall f_4870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4870,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4876,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base#implicit-exit-handler */
t3=C_fast_retrieve(lf[94]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4874 in k4868 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in ... */
static void C_ccall f_4876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4876,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4878 in k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in ... */
static void C_ccall f_4880(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_4880,c,av);}
a=C_alloc(20);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4582,a[2]=t9,a[3]=t11,a[4]=t7,a[5]=t3,a[6]=t5,a[7]=t13,tmp=(C_word)a,a+=8,tmp));
t15=((C_word*)t13)[1];
f_4582(t15,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4886 in k3168 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in ... */
static void C_ccall f_4888(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(62,c,5)))){
C_save_and_reclaim((void *)f_4888,c,av);}
a=C_alloc(62);
t2=C_s_a_i_minus(&a,2,t1,C_fix(2));
t3=C_s_a_i_quotient(&a,2,t2,C_fix(2));
t4=C_mutate(&lf[35] /* (set! main#list-width ...) */,t3);
t5=C_mutate(&lf[36] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3629,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[39] /* (set! main#read-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3663,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[49] /* (set! main#filter-egg-names ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3718,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[54] /* (set! main#format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3872,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[57] /* (set! main#list-installed-eggs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3938,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[58] /* (set! main#list-egg-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4017,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate(&lf[70] /* (set! main#gather-components ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4126,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate(&lf[71] /* (set! main#gather-components-rec ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4138,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate(&lf[80] /* (set! main#list-installed-components ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4290,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate(&lf[89] /* (set! main#list-installed-files ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4458,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate(&lf[91] /* (set! main#dump-installed-versions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4507,tmp=(C_word)a,a+=2,tmp));
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4870,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4880,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
/* chicken-status.scm:267: chicken.process-context#command-line-arguments */
t18=C_fast_retrieve(lf[123]);{
C_word *av2=av;
av2[0]=t18;
av2[1]=t17;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}

/* k4893 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in ... */
static void C_ccall f_4895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4895,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4898,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* egg-environment.scm:121: chicken.pathname#make-pathname */
t3=C_fast_retrieve(lf[43]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[124];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
/* egg-environment.scm:122: chicken.process-context#current-directory */
t3=C_fast_retrieve(lf[125]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4896 in k4893 in k3165 in k3096 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in ... */
static void C_ccall f_4898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4898,c,av);}
/* egg-environment.scm:121: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[43]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[124];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4903 in k3092 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in ... */
static void C_ccall f_4905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4905,c,av);}
/* egg-environment.scm:97: scheme#string-append */
t2=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[15],C_text("main#default-runlibdir"));
av2[3]=lf[129];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4908 in k3088 in k3084 in k3080 in k3076 in k3072 in k3068 in k3064 in k3060 in k3056 in k3052 in k3048 in k3044 in k3040 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in ... */
static void C_ccall f_4910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4910,c,av);}
/* egg-environment.scm:94: scheme#string-append */
t2=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[14],C_text("main#default-libdir"));
av2[3]=lf[131];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4913 in k3036 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in ... */
static void C_ccall f_4915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4915,c,av);}
/* egg-environment.scm:77: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[43]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[16],C_text("main#default-bindir"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4917 in k3032 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in ... */
static void C_ccall f_4919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4919,c,av);}
/* egg-environment.scm:74: scheme#string-append */
t2=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[16],C_text("main#default-bindir"));
av2[3]=lf[133];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4921 in k3028 in k3024 in k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in ... */
static void C_ccall f_4923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4923,c,av);}
/* egg-environment.scm:71: scheme#string-append */
t2=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[16],C_text("main#default-bindir"));
av2[3]=lf[134];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4928 in k3016 in k3012 in k3008 in k3004 in k3000 in k2996 in k2992 in k2988 in k2984 in k2980 in k2976 in k2972 in k2968 in k2964 in k2958 in k1674 in k1671 in k1668 in k1665 in k1662 in k1659 in ... */
static void C_ccall f_4930(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4930,c,av);}
a=C_alloc(6);
t2=C_eqp(t1,lf[17]);
t3=(C_truep(t2)?C_mk_bool(C_WINDOWS_SHELL):lf[18]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3026,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[132]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a4931 in k1671 in k1668 in k1665 in k1662 in k1659 in k1656 in k1653 in k1650 in k1647 */
static void C_ccall f_4932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4932,c,av);}
/* chicken-status.scm:26: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[138]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[138]+1);
av2[1]=t1;
av2[2]=lf[139];
av2[3]=lf[139];
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
if(C_unlikely(!C_demand_2(509))){
C_save(t1);
C_rereclaim2(509*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,141);
lf[0]=C_h_intern(&lf[0],5, C_text("main#"));
lf[2]=C_h_intern(&lf[2],5, C_text("foldr"));
lf[3]=C_h_intern(&lf[3],13, C_text("scheme#append"));
lf[4]=C_h_intern(&lf[4],3, C_text("map"));
lf[6]=C_h_intern(&lf[6],12, C_text("scheme#null\077"));
lf[17]=C_h_intern(&lf[17],7, C_text("windows"));
lf[18]=C_h_intern(&lf[18],4, C_text("unix"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010egg-info"));
lf[29]=C_h_intern(&lf[29],21, C_text("##sys#standard-output"));
lf[30]=C_h_intern(&lf[30],10, C_text("scheme#min"));
lf[31]=C_h_intern(&lf[31],26, C_text("chicken.port#terminal-size"));
lf[32]=C_h_intern(&lf[32],40, C_text("chicken.condition#with-exception-handler"));
lf[33]=C_h_intern(&lf[33],37, C_text("scheme#call-with-current-continuation"));
lf[34]=C_h_intern(&lf[34],27, C_text("chicken.port#terminal-port\077"));
lf[37]=C_h_intern(&lf[37],16, C_text("##sys#split-path"));
lf[38]=C_h_intern(&lf[38],32, C_text("chicken.platform#repository-path"));
lf[40]=C_h_intern(&lf[40],27, C_text("scheme#with-input-from-file"));
lf[41]=C_h_intern(&lf[41],11, C_text("scheme#read"));
lf[42]=C_h_intern(&lf[42],25, C_text("chicken.file#file-exists\077"));
lf[43]=C_h_intern(&lf[43],30, C_text("chicken.pathname#make-pathname"));
lf[44]=C_h_intern(&lf[44],35, C_text("chicken.pathname#pathname-extension"));
lf[45]=C_h_intern(&lf[45],30, C_text("chicken.pathname#pathname-file"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007chicken"));
lf[47]=C_h_intern(&lf[47],35, C_text("chicken.pathname#pathname-directory"));
lf[48]=C_h_intern(&lf[48],22, C_text("chicken.load#find-file"));
lf[50]=C_h_intern(&lf[50],15, C_text("scheme#string=\077"));
lf[51]=C_h_intern(&lf[51],30, C_text("chicken.irregex#irregex-search"));
lf[52]=C_h_intern(&lf[52],23, C_text("chicken.irregex#irregex"));
lf[53]=C_h_intern(&lf[53],25, C_text("chicken.irregex#glob->sre"));
lf[55]=C_h_intern(&lf[55],19, C_text("##sys#string-append"));
lf[56]=C_h_intern(&lf[56],18, C_text("scheme#make-string"));
lf[59]=C_h_intern(&lf[59],8, C_text("for-each"));
lf[60]=C_h_intern(&lf[60],17, C_text("chicken.sort#sort"));
lf[61]=C_h_intern(&lf[61],15, C_text("scheme#string<\077"));
lf[62]=C_h_intern(&lf[62],7, C_text("version"));
lf[63]=C_h_intern(&lf[63],18, C_text("chicken.base#print"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012 version: "));
lf[65]=C_h_intern(&lf[65],23, C_text("chicken.string#->string"));
lf[66]=C_h_intern(&lf[66],20, C_text("scheme#string-append"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[68]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007unknown"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007VERSION"));
lf[72]=C_h_intern(&lf[72],4, C_text("host"));
lf[73]=C_h_intern(&lf[73],6, C_text("target"));
lf[74]=C_h_intern(&lf[74],9, C_text("extension"));
lf[75]=C_h_intern(&lf[75],4, C_text("data"));
lf[76]=C_h_intern(&lf[76],21, C_text("generated-source-file"));
lf[77]=C_h_intern(&lf[77],9, C_text("c-include"));
lf[78]=C_h_intern(&lf[78],14, C_text("scheme-include"));
lf[79]=C_h_intern(&lf[79],7, C_text("program"));
lf[81]=C_h_intern(&lf[81],10, C_text("components"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[83]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002  "));
lf[84]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007 (host)"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011 (target)"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376B\000\000\012 version: "));
lf[88]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[90]=C_h_intern(&lf[90],15, C_text("installed-files"));
lf[92]=C_h_intern(&lf[92],23, C_text("chicken.pretty-print#pp"));
lf[93]=C_h_intern(&lf[93],21, C_text("scheme#string->symbol"));
lf[94]=C_h_intern(&lf[94],34, C_text("chicken.base#implicit-exit-handler"));
lf[95]=C_h_intern(&lf[95],17, C_text("chicken.base#exit"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376B\000\000&-components cannot be used with -list."));
lf[97]=C_h_intern(&lf[97],32, C_text("chicken.port#with-output-to-port"));
lf[98]=C_h_intern(&lf[98],20, C_text("##sys#standard-error"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376B\000\000\003egg"));
lf[100]=C_h_intern(&lf[100],22, C_text("chicken.file#directory"));
lf[101]=C_h_intern(&lf[101],30, C_text("chicken.file#directory-exists\077"));
lf[102]=C_h_intern(&lf[102],13, C_text("scheme#equal\077"));
lf[103]=C_h_intern(&lf[103],17, C_text("chicken.file#glob"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\052"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-help"));
lf[106]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-h"));
lf[107]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006--help"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376B\000\002wusage: chicken-status [OPTION ...] [NAME ...]\012\012  -h   -help                "
"    show this message\012       -version                 show version and exit\012  -c"
"   -components              list installed components\012       -cached            "
"      list eggs in cache\012  -f   -files                   list installed files\012  "
"     -list                    dump installed extensions and their versions in \042o"
"verride\042 format\012       -match                   treat NAME as glob pattern\012     "
"  -host                    when cross-compiling, only show host extensions\012     "
"  -target                  when cross-compiling, only show target extensions"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-host"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-target"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-match"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376B\000\000\007-cached"));
lf[113]=C_decode_literal(C_heaptop,C_text("\376B\000\000\005-list"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-f"));
lf[115]=C_decode_literal(C_heaptop,C_text("\376B\000\000\006-files"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376B\000\000\002-c"));
lf[117]=C_decode_literal(C_heaptop,C_text("\376B\000\000\013-components"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376B\000\000\010-version"));
lf[119]=C_h_intern(&lf[119],32, C_text("chicken.platform#chicken-version"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000h\376\003\000\000\002\376\377\012\000\000f\376\003\000\000\002\376\377\012\000\000c\376\003\000\000\002\376\377\012\000\000a\376\377\016"));
lf[121]=C_h_intern(&lf[121],18, C_text("##sys#string->list"));
lf[122]=C_h_intern(&lf[122],16, C_text("scheme#substring"));
lf[123]=C_h_intern(&lf[123],46, C_text("chicken.process-context#command-line-arguments"));
lf[124]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017chicken-install"));
lf[125]=C_h_intern(&lf[125],41, C_text("chicken.process-context#current-directory"));
lf[126]=C_h_intern(&lf[126],39, C_text("chicken.platform#system-cache-directory"));
lf[127]=C_h_intern(&lf[127],48, C_text("chicken.process-context#get-environment-variable"));
lf[128]=C_decode_literal(C_heaptop,C_text("\376B\000\000\021CHICKEN_EGG_CACHE"));
lf[129]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[130]=C_h_intern(&lf[130],20, C_text("##sys#fixnum->string"));
lf[131]=C_decode_literal(C_heaptop,C_text("\376B\000\000\011/chicken/"));
lf[132]=C_h_intern(&lf[132],19, C_text("##sys#peek-c-string"));
lf[133]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[134]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001/"));
lf[135]=C_h_intern(&lf[135],30, C_text("chicken.platform#software-type"));
lf[136]=C_h_intern(&lf[136],25, C_text("chicken.platform#feature\077"));
lf[137]=C_h_intern_kw(&lf[137],13, C_text("cross-chicken"));
lf[138]=C_h_intern(&lf[138],30, C_text("##sys#register-compiled-module"));
lf[139]=C_h_intern(&lf[139],4, C_text("main"));
lf[140]=C_h_intern(&lf[140],22, C_text("##sys#with-environment"));
C_register_lf2(lf,141,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1649,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[212] = {
{C_text("f5225:chicken_2dstatus_2escm"),(void*)f5225},
{C_text("f5232:chicken_2dstatus_2escm"),(void*)f5232},
{C_text("f5239:chicken_2dstatus_2escm"),(void*)f5239},
{C_text("f_1649:chicken_2dstatus_2escm"),(void*)f_1649},
{C_text("f_1652:chicken_2dstatus_2escm"),(void*)f_1652},
{C_text("f_1655:chicken_2dstatus_2escm"),(void*)f_1655},
{C_text("f_1658:chicken_2dstatus_2escm"),(void*)f_1658},
{C_text("f_1661:chicken_2dstatus_2escm"),(void*)f_1661},
{C_text("f_1664:chicken_2dstatus_2escm"),(void*)f_1664},
{C_text("f_1667:chicken_2dstatus_2escm"),(void*)f_1667},
{C_text("f_1670:chicken_2dstatus_2escm"),(void*)f_1670},
{C_text("f_1673:chicken_2dstatus_2escm"),(void*)f_1673},
{C_text("f_1676:chicken_2dstatus_2escm"),(void*)f_1676},
{C_text("f_1877:chicken_2dstatus_2escm"),(void*)f_1877},
{C_text("f_1892:chicken_2dstatus_2escm"),(void*)f_1892},
{C_text("f_1900:chicken_2dstatus_2escm"),(void*)f_1900},
{C_text("f_1908:chicken_2dstatus_2escm"),(void*)f_1908},
{C_text("f_1919:chicken_2dstatus_2escm"),(void*)f_1919},
{C_text("f_1932:chicken_2dstatus_2escm"),(void*)f_1932},
{C_text("f_1939:chicken_2dstatus_2escm"),(void*)f_1939},
{C_text("f_1946:chicken_2dstatus_2escm"),(void*)f_1946},
{C_text("f_1950:chicken_2dstatus_2escm"),(void*)f_1950},
{C_text("f_1962:chicken_2dstatus_2escm"),(void*)f_1962},
{C_text("f_1964:chicken_2dstatus_2escm"),(void*)f_1964},
{C_text("f_2011:chicken_2dstatus_2escm"),(void*)f_2011},
{C_text("f_2013:chicken_2dstatus_2escm"),(void*)f_2013},
{C_text("f_2053:chicken_2dstatus_2escm"),(void*)f_2053},
{C_text("f_2081:chicken_2dstatus_2escm"),(void*)f_2081},
{C_text("f_2087:chicken_2dstatus_2escm"),(void*)f_2087},
{C_text("f_2097:chicken_2dstatus_2escm"),(void*)f_2097},
{C_text("f_2145:chicken_2dstatus_2escm"),(void*)f_2145},
{C_text("f_2163:chicken_2dstatus_2escm"),(void*)f_2163},
{C_text("f_2173:chicken_2dstatus_2escm"),(void*)f_2173},
{C_text("f_2186:chicken_2dstatus_2escm"),(void*)f_2186},
{C_text("f_2200:chicken_2dstatus_2escm"),(void*)f_2200},
{C_text("f_2242:chicken_2dstatus_2escm"),(void*)f_2242},
{C_text("f_2248:chicken_2dstatus_2escm"),(void*)f_2248},
{C_text("f_2262:chicken_2dstatus_2escm"),(void*)f_2262},
{C_text("f_2275:chicken_2dstatus_2escm"),(void*)f_2275},
{C_text("f_2287:chicken_2dstatus_2escm"),(void*)f_2287},
{C_text("f_2296:chicken_2dstatus_2escm"),(void*)f_2296},
{C_text("f_2304:chicken_2dstatus_2escm"),(void*)f_2304},
{C_text("f_2311:chicken_2dstatus_2escm"),(void*)f_2311},
{C_text("f_2325:chicken_2dstatus_2escm"),(void*)f_2325},
{C_text("f_2960:chicken_2dstatus_2escm"),(void*)f_2960},
{C_text("f_2966:chicken_2dstatus_2escm"),(void*)f_2966},
{C_text("f_2970:chicken_2dstatus_2escm"),(void*)f_2970},
{C_text("f_2974:chicken_2dstatus_2escm"),(void*)f_2974},
{C_text("f_2978:chicken_2dstatus_2escm"),(void*)f_2978},
{C_text("f_2982:chicken_2dstatus_2escm"),(void*)f_2982},
{C_text("f_2986:chicken_2dstatus_2escm"),(void*)f_2986},
{C_text("f_2990:chicken_2dstatus_2escm"),(void*)f_2990},
{C_text("f_2994:chicken_2dstatus_2escm"),(void*)f_2994},
{C_text("f_2998:chicken_2dstatus_2escm"),(void*)f_2998},
{C_text("f_3002:chicken_2dstatus_2escm"),(void*)f_3002},
{C_text("f_3006:chicken_2dstatus_2escm"),(void*)f_3006},
{C_text("f_3010:chicken_2dstatus_2escm"),(void*)f_3010},
{C_text("f_3014:chicken_2dstatus_2escm"),(void*)f_3014},
{C_text("f_3018:chicken_2dstatus_2escm"),(void*)f_3018},
{C_text("f_3026:chicken_2dstatus_2escm"),(void*)f_3026},
{C_text("f_3030:chicken_2dstatus_2escm"),(void*)f_3030},
{C_text("f_3034:chicken_2dstatus_2escm"),(void*)f_3034},
{C_text("f_3038:chicken_2dstatus_2escm"),(void*)f_3038},
{C_text("f_3042:chicken_2dstatus_2escm"),(void*)f_3042},
{C_text("f_3046:chicken_2dstatus_2escm"),(void*)f_3046},
{C_text("f_3050:chicken_2dstatus_2escm"),(void*)f_3050},
{C_text("f_3054:chicken_2dstatus_2escm"),(void*)f_3054},
{C_text("f_3058:chicken_2dstatus_2escm"),(void*)f_3058},
{C_text("f_3062:chicken_2dstatus_2escm"),(void*)f_3062},
{C_text("f_3066:chicken_2dstatus_2escm"),(void*)f_3066},
{C_text("f_3070:chicken_2dstatus_2escm"),(void*)f_3070},
{C_text("f_3074:chicken_2dstatus_2escm"),(void*)f_3074},
{C_text("f_3078:chicken_2dstatus_2escm"),(void*)f_3078},
{C_text("f_3082:chicken_2dstatus_2escm"),(void*)f_3082},
{C_text("f_3086:chicken_2dstatus_2escm"),(void*)f_3086},
{C_text("f_3090:chicken_2dstatus_2escm"),(void*)f_3090},
{C_text("f_3094:chicken_2dstatus_2escm"),(void*)f_3094},
{C_text("f_3098:chicken_2dstatus_2escm"),(void*)f_3098},
{C_text("f_3167:chicken_2dstatus_2escm"),(void*)f_3167},
{C_text("f_3170:chicken_2dstatus_2escm"),(void*)f_3170},
{C_text("f_3176:chicken_2dstatus_2escm"),(void*)f_3176},
{C_text("f_3182:chicken_2dstatus_2escm"),(void*)f_3182},
{C_text("f_3186:chicken_2dstatus_2escm"),(void*)f_3186},
{C_text("f_3190:chicken_2dstatus_2escm"),(void*)f_3190},
{C_text("f_3194:chicken_2dstatus_2escm"),(void*)f_3194},
{C_text("f_3198:chicken_2dstatus_2escm"),(void*)f_3198},
{C_text("f_3209:chicken_2dstatus_2escm"),(void*)f_3209},
{C_text("f_3233:chicken_2dstatus_2escm"),(void*)f_3233},
{C_text("f_3552:chicken_2dstatus_2escm"),(void*)f_3552},
{C_text("f_3559:chicken_2dstatus_2escm"),(void*)f_3559},
{C_text("f_3562:chicken_2dstatus_2escm"),(void*)f_3562},
{C_text("f_3565:chicken_2dstatus_2escm"),(void*)f_3565},
{C_text("f_3574:chicken_2dstatus_2escm"),(void*)f_3574},
{C_text("f_3580:chicken_2dstatus_2escm"),(void*)f_3580},
{C_text("f_3586:chicken_2dstatus_2escm"),(void*)f_3586},
{C_text("f_3589:chicken_2dstatus_2escm"),(void*)f_3589},
{C_text("f_3595:chicken_2dstatus_2escm"),(void*)f_3595},
{C_text("f_3601:chicken_2dstatus_2escm"),(void*)f_3601},
{C_text("f_3607:chicken_2dstatus_2escm"),(void*)f_3607},
{C_text("f_3613:chicken_2dstatus_2escm"),(void*)f_3613},
{C_text("f_3619:chicken_2dstatus_2escm"),(void*)f_3619},
{C_text("f_3629:chicken_2dstatus_2escm"),(void*)f_3629},
{C_text("f_3657:chicken_2dstatus_2escm"),(void*)f_3657},
{C_text("f_3663:chicken_2dstatus_2escm"),(void*)f_3663},
{C_text("f_3667:chicken_2dstatus_2escm"),(void*)f_3667},
{C_text("f_3679:chicken_2dstatus_2escm"),(void*)f_3679},
{C_text("f_3689:chicken_2dstatus_2escm"),(void*)f_3689},
{C_text("f_3718:chicken_2dstatus_2escm"),(void*)f_3718},
{C_text("f_3722:chicken_2dstatus_2escm"),(void*)f_3722},
{C_text("f_3739:chicken_2dstatus_2escm"),(void*)f_3739},
{C_text("f_3747:chicken_2dstatus_2escm"),(void*)f_3747},
{C_text("f_3751:chicken_2dstatus_2escm"),(void*)f_3751},
{C_text("f_3757:chicken_2dstatus_2escm"),(void*)f_3757},
{C_text("f_3759:chicken_2dstatus_2escm"),(void*)f_3759},
{C_text("f_3784:chicken_2dstatus_2escm"),(void*)f_3784},
{C_text("f_3796:chicken_2dstatus_2escm"),(void*)f_3796},
{C_text("f_3802:chicken_2dstatus_2escm"),(void*)f_3802},
{C_text("f_3816:chicken_2dstatus_2escm"),(void*)f_3816},
{C_text("f_3818:chicken_2dstatus_2escm"),(void*)f_3818},
{C_text("f_3825:chicken_2dstatus_2escm"),(void*)f_3825},
{C_text("f_3830:chicken_2dstatus_2escm"),(void*)f_3830},
{C_text("f_3855:chicken_2dstatus_2escm"),(void*)f_3855},
{C_text("f_3866:chicken_2dstatus_2escm"),(void*)f_3866},
{C_text("f_3870:chicken_2dstatus_2escm"),(void*)f_3870},
{C_text("f_3872:chicken_2dstatus_2escm"),(void*)f_3872},
{C_text("f_3891:chicken_2dstatus_2escm"),(void*)f_3891},
{C_text("f_3938:chicken_2dstatus_2escm"),(void*)f_3938},
{C_text("f_3942:chicken_2dstatus_2escm"),(void*)f_3942},
{C_text("f_3952:chicken_2dstatus_2escm"),(void*)f_3952},
{C_text("f_3959:chicken_2dstatus_2escm"),(void*)f_3959},
{C_text("f_3967:chicken_2dstatus_2escm"),(void*)f_3967},
{C_text("f_3977:chicken_2dstatus_2escm"),(void*)f_3977},
{C_text("f_4017:chicken_2dstatus_2escm"),(void*)f_4017},
{C_text("f_4021:chicken_2dstatus_2escm"),(void*)f_4021},
{C_text("f_4027:chicken_2dstatus_2escm"),(void*)f_4027},
{C_text("f_4034:chicken_2dstatus_2escm"),(void*)f_4034},
{C_text("f_4038:chicken_2dstatus_2escm"),(void*)f_4038},
{C_text("f_4042:chicken_2dstatus_2escm"),(void*)f_4042},
{C_text("f_4047:chicken_2dstatus_2escm"),(void*)f_4047},
{C_text("f_4051:chicken_2dstatus_2escm"),(void*)f_4051},
{C_text("f_4054:chicken_2dstatus_2escm"),(void*)f_4054},
{C_text("f_4057:chicken_2dstatus_2escm"),(void*)f_4057},
{C_text("f_4075:chicken_2dstatus_2escm"),(void*)f_4075},
{C_text("f_4084:chicken_2dstatus_2escm"),(void*)f_4084},
{C_text("f_4087:chicken_2dstatus_2escm"),(void*)f_4087},
{C_text("f_4095:chicken_2dstatus_2escm"),(void*)f_4095},
{C_text("f_4105:chicken_2dstatus_2escm"),(void*)f_4105},
{C_text("f_4120:chicken_2dstatus_2escm"),(void*)f_4120},
{C_text("f_4124:chicken_2dstatus_2escm"),(void*)f_4124},
{C_text("f_4126:chicken_2dstatus_2escm"),(void*)f_4126},
{C_text("f_4132:chicken_2dstatus_2escm"),(void*)f_4132},
{C_text("f_4138:chicken_2dstatus_2escm"),(void*)f_4138},
{C_text("f_4290:chicken_2dstatus_2escm"),(void*)f_4290},
{C_text("f_4295:chicken_2dstatus_2escm"),(void*)f_4295},
{C_text("f_4299:chicken_2dstatus_2escm"),(void*)f_4299},
{C_text("f_4308:chicken_2dstatus_2escm"),(void*)f_4308},
{C_text("f_4314:chicken_2dstatus_2escm"),(void*)f_4314},
{C_text("f_4323:chicken_2dstatus_2escm"),(void*)f_4323},
{C_text("f_4327:chicken_2dstatus_2escm"),(void*)f_4327},
{C_text("f_4351:chicken_2dstatus_2escm"),(void*)f_4351},
{C_text("f_4359:chicken_2dstatus_2escm"),(void*)f_4359},
{C_text("f_4371:chicken_2dstatus_2escm"),(void*)f_4371},
{C_text("f_4381:chicken_2dstatus_2escm"),(void*)f_4381},
{C_text("f_4399:chicken_2dstatus_2escm"),(void*)f_4399},
{C_text("f_4403:chicken_2dstatus_2escm"),(void*)f_4403},
{C_text("f_4407:chicken_2dstatus_2escm"),(void*)f_4407},
{C_text("f_4412:chicken_2dstatus_2escm"),(void*)f_4412},
{C_text("f_4416:chicken_2dstatus_2escm"),(void*)f_4416},
{C_text("f_4427:chicken_2dstatus_2escm"),(void*)f_4427},
{C_text("f_4437:chicken_2dstatus_2escm"),(void*)f_4437},
{C_text("f_4456:chicken_2dstatus_2escm"),(void*)f_4456},
{C_text("f_4458:chicken_2dstatus_2escm"),(void*)f_4458},
{C_text("f_4462:chicken_2dstatus_2escm"),(void*)f_4462},
{C_text("f_4470:chicken_2dstatus_2escm"),(void*)f_4470},
{C_text("f_4480:chicken_2dstatus_2escm"),(void*)f_4480},
{C_text("f_4495:chicken_2dstatus_2escm"),(void*)f_4495},
{C_text("f_4497:chicken_2dstatus_2escm"),(void*)f_4497},
{C_text("f_4505:chicken_2dstatus_2escm"),(void*)f_4505},
{C_text("f_4507:chicken_2dstatus_2escm"),(void*)f_4507},
{C_text("f_4524:chicken_2dstatus_2escm"),(void*)f_4524},
{C_text("f_4535:chicken_2dstatus_2escm"),(void*)f_4535},
{C_text("f_4543:chicken_2dstatus_2escm"),(void*)f_4543},
{C_text("f_4553:chicken_2dstatus_2escm"),(void*)f_4553},
{C_text("f_4582:chicken_2dstatus_2escm"),(void*)f_4582},
{C_text("f_4595:chicken_2dstatus_2escm"),(void*)f_4595},
{C_text("f_4598:chicken_2dstatus_2escm"),(void*)f_4598},
{C_text("f_4603:chicken_2dstatus_2escm"),(void*)f_4603},
{C_text("f_4616:chicken_2dstatus_2escm"),(void*)f_4616},
{C_text("f_4623:chicken_2dstatus_2escm"),(void*)f_4623},
{C_text("f_4627:chicken_2dstatus_2escm"),(void*)f_4627},
{C_text("f_4740:chicken_2dstatus_2escm"),(void*)f_4740},
{C_text("f_4747:chicken_2dstatus_2escm"),(void*)f_4747},
{C_text("f_4762:chicken_2dstatus_2escm"),(void*)f_4762},
{C_text("f_4775:chicken_2dstatus_2escm"),(void*)f_4775},
{C_text("f_4787:chicken_2dstatus_2escm"),(void*)f_4787},
{C_text("f_4791:chicken_2dstatus_2escm"),(void*)f_4791},
{C_text("f_4836:chicken_2dstatus_2escm"),(void*)f_4836},
{C_text("f_4870:chicken_2dstatus_2escm"),(void*)f_4870},
{C_text("f_4876:chicken_2dstatus_2escm"),(void*)f_4876},
{C_text("f_4880:chicken_2dstatus_2escm"),(void*)f_4880},
{C_text("f_4888:chicken_2dstatus_2escm"),(void*)f_4888},
{C_text("f_4895:chicken_2dstatus_2escm"),(void*)f_4895},
{C_text("f_4898:chicken_2dstatus_2escm"),(void*)f_4898},
{C_text("f_4905:chicken_2dstatus_2escm"),(void*)f_4905},
{C_text("f_4910:chicken_2dstatus_2escm"),(void*)f_4910},
{C_text("f_4915:chicken_2dstatus_2escm"),(void*)f_4915},
{C_text("f_4919:chicken_2dstatus_2escm"),(void*)f_4919},
{C_text("f_4923:chicken_2dstatus_2escm"),(void*)f_4923},
{C_text("f_4930:chicken_2dstatus_2escm"),(void*)f_4930},
{C_text("f_4932:chicken_2dstatus_2escm"),(void*)f_4932},
{C_text("toplevel:chicken_2dstatus_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: main#get-terminal-width 
o|hiding unexported module binding: main#list-width 
o|hiding unexported module binding: main#repo-path 
o|hiding unexported module binding: main#grep 
o|hiding unexported module binding: main#read-info 
o|hiding unexported module binding: main#filter-egg-names 
o|hiding unexported module binding: main#gather-eggs 
o|hiding unexported module binding: main#format-string 
o|hiding unexported module binding: main#list-installed-eggs 
o|hiding unexported module binding: main#list-egg-info 
o|hiding unexported module binding: main#list-cached-eggs 
o|hiding unexported module binding: main#gather-components 
o|hiding unexported module binding: main#gather-components-rec 
o|hiding unexported module binding: main#list-installed-components 
o|hiding unexported module binding: main#list-installed-files 
o|hiding unexported module binding: main#dump-installed-versions 
o|hiding unexported module binding: main#usage 
o|hiding unexported module binding: main#short-options 
o|hiding unexported module binding: main#main 
S|applied compiler syntax:
S|  scheme#for-each		6
S|  chicken.base#foldl		3
S|  scheme#map		6
S|  chicken.base#foldr		3
o|eliminated procedure checks: 81 
o|specializations:
o|  1 (scheme#> fixnum fixnum)
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#positive? fixnum)
o|  2 (scheme#string-length string)
o|  9 (scheme#string=? string string)
o|  1 (chicken.base#current-error-port)
o|  4 (scheme#string-append string string)
o|  1 (scheme#zero? *)
o|  1 (scheme#current-output-port)
o|  2 (scheme#cdar (pair pair *))
o|  15 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  2 (scheme#number->string fixnum)
o|  1 (scheme#eqv? * *)
o|  5 (##sys#check-list (or pair list) *)
o|  39 (scheme#cdr pair)
o|  8 (scheme#car pair)
(o e)|safe calls: 484 
(o e)|assignments to immediate values: 3 
o|removed side-effect free assignment to unused variable: main#partition 
o|removed side-effect free assignment to unused variable: main#span 
o|removed side-effect free assignment to unused variable: main#drop 
o|removed side-effect free assignment to unused variable: main#split-at 
o|merged explicitly consed rest parameter: lsts174 
o|inlining procedure: k1879 
o|inlining procedure: k1894 
o|inlining procedure: k1894 
o|inlining procedure: k1879 
o|inlining procedure: k1934 
o|inlining procedure: k1934 
o|inlining procedure: k1966 
o|contracted procedure: "(mini-srfi-1.scm:77) g227236" 
o|inlining procedure: k1966 
o|inlining procedure: k2015 
o|contracted procedure: "(mini-srfi-1.scm:76) g200209" 
o|inlining procedure: k2015 
o|inlining procedure: k2058 
o|inlining procedure: k2058 
o|inlining procedure: k2089 
o|inlining procedure: k2089 
o|removed side-effect free assignment to unused variable: main#cons* 
o|removed side-effect free assignment to unused variable: main#first 
o|removed side-effect free assignment to unused variable: main#second 
o|removed side-effect free assignment to unused variable: main#third 
o|removed side-effect free assignment to unused variable: main#fourth 
o|removed side-effect free assignment to unused variable: main#fifth 
o|inlining procedure: k2250 
o|inlining procedure: k2250 
o|contracted procedure: "(mini-srfi-1.scm:123) main#delete" 
o|inlining procedure: k2175 
o|inlining procedure: k2175 
o|removed side-effect free assignment to unused variable: main#alist-cons 
o|inlining procedure: k2306 
o|inlining procedure: k2306 
o|inlining procedure: k2298 
o|inlining procedure: k2298 
o|removed side-effect free assignment to unused variable: main#filter-map 
o|removed side-effect free assignment to unused variable: main#remove 
o|removed side-effect free assignment to unused variable: main#unzip1 
o|removed side-effect free assignment to unused variable: main#last 
o|removed side-effect free assignment to unused variable: main#list-index 
o|removed side-effect free assignment to unused variable: main#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: main#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: main#lset-union/eq? 
o|removed side-effect free assignment to unused variable: main#lset-intersection/eq? 
o|inlining procedure: k2697 
o|inlining procedure: k2697 
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
o|removed side-effect free assignment to unused variable: main#default-platform 
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
o|removed side-effect free assignment to unused variable: main#+timestamp-file+ 
o|removed side-effect free assignment to unused variable: main#+status-file+ 
o|removed side-effect free assignment to unused variable: main#validate-environment 
o|removed side-effect free assignment to unused variable: main#probe-dir 
o|merged explicitly consed rest parameter: rest782785 
o|inlining procedure: k3220 
o|inlining procedure: k3220 
o|merged explicitly consed rest parameter: rest800803 
o|inlining procedure: k3244 
o|inlining procedure: k3244 
o|inlining procedure: k3262 
o|inlining procedure: k3280 
o|inlining procedure: k3280 
o|inlining procedure: k3297 
o|inlining procedure: k3297 
o|substituted constant variable: a3338 
o|substituted constant variable: a3340 
o|inlining procedure: k3262 
o|inlining procedure: k3348 
o|inlining procedure: k3348 
o|inlining procedure: k3358 
o|inlining procedure: k3376 
o|inlining procedure: k3376 
o|inlining procedure: k3393 
o|inlining procedure: k3393 
o|inlining procedure: k3423 
o|inlining procedure: k3423 
o|substituted constant variable: a3452 
o|substituted constant variable: a3454 
o|substituted constant variable: a3456 
o|inlining procedure: k3358 
o|removed side-effect free assignment to unused variable: main#get-extension-property 
o|removed side-effect free assignment to unused variable: main#get-extension-property* 
o|inlining procedure: k3554 
o|substituted constant variable: default-width910 
o|substituted constant variable: default-width910 
o|inlining procedure: k3554 
o|substituted constant variable: default-width910 
o|propagated global variable: cop911 ##sys#standard-output 
o|inlining procedure: k3631 
o|contracted procedure: "(chicken-status.scm:66) main#destination-repository" 
o|inlining procedure: k3131 
o|inlining procedure: k3131 
o|inlining procedure: k3631 
o|merged explicitly consed rest parameter: rest942944 
o|inlining procedure: k3680 
o|contracted procedure: "(chicken-status.scm:74) main#load-egg-info" 
o|contracted procedure: "(egg-information.scm:37) main#locate-egg-file" 
o|inlining procedure: k3177 
o|inlining procedure: k3177 
o|inlining procedure: k3680 
o|inlining procedure: k3720 
o|inlining procedure: k3720 
o|contracted procedure: "(chicken-status.scm:81) main#grep" 
o|propagated global variable: g936937 chicken.irregex#irregex-search 
o|contracted procedure: "(chicken-status.scm:79) main#concatenate" 
o|inlining procedure: k2147 
o|inlining procedure: k2147 
o|inlining procedure: k3761 
o|inlining procedure: k3761 
o|merged explicitly consed rest parameter: rest10341037 
o|inlining procedure: k3892 
o|inlining procedure: k3892 
o|inlining procedure: k3969 
o|inlining procedure: k3969 
o|consed rest parameter at call site: "(chicken-status.scm:120) main#format-string" 3 
o|substituted constant variable: a4043 
o|consed rest parameter at call site: "(chicken-status.scm:118) main#format-string" 3 
o|inlining procedure: k4058 
o|inlining procedure: k4058 
o|substituted constant variable: main#+version-file+ 
o|consed rest parameter at call site: "(chicken-status.scm:114) main#get-egg-property" 3 
o|consed rest parameter at call site: "(chicken-status.scm:113) main#read-info" 2 
o|consed rest parameter at call site: "(chicken-status.scm:132) main#append-map" 3 
o|inlining procedure: k4143 
o|inlining procedure: k4143 
o|inlining procedure: k4163 
o|inlining procedure: k4163 
o|inlining procedure: k4171 
o|inlining procedure: k4171 
o|inlining procedure: k4205 
o|inlining procedure: k4205 
o|inlining procedure: k4239 
o|inlining procedure: k4239 
o|substituted constant variable: a4274 
o|substituted constant variable: a4276 
o|substituted constant variable: a4278 
o|substituted constant variable: a4280 
o|substituted constant variable: a4282 
o|substituted constant variable: a4284 
o|substituted constant variable: a4286 
o|substituted constant variable: a4288 
o|inlining procedure: k4309 
o|inlining procedure: k4373 
o|contracted procedure: "(chicken-status.scm:162) g11711178" 
o|inlining procedure: k4332 
o|inlining procedure: k4332 
o|substituted constant variable: a4345 
o|substituted constant variable: a4347 
o|consed rest parameter at call site: "(chicken-status.scm:165) main#format-string" 3 
o|consed rest parameter at call site: "(chicken-status.scm:164) main#format-string" 3 
o|inlining procedure: k4373 
o|inlining procedure: k4309 
o|consed rest parameter at call site: "(chicken-status.scm:156) main#format-string" 3 
o|substituted constant variable: a4408 
o|consed rest parameter at call site: "(chicken-status.scm:155) main#format-string" 3 
o|consed rest parameter at call site: "(chicken-status.scm:153) main#get-egg-property*" 3 
o|consed rest parameter at call site: "(chicken-status.scm:152) main#get-egg-property" 3 
o|consed rest parameter at call site: "(chicken-status.scm:151) main#read-info" 2 
o|inlining procedure: k4429 
o|inlining procedure: k4429 
o|inlining procedure: k4472 
o|inlining procedure: k4472 
o|consed rest parameter at call site: "(chicken-status.scm:179) main#get-egg-property*" 3 
o|consed rest parameter at call site: "(chicken-status.scm:179) main#read-info" 2 
o|consed rest parameter at call site: "(chicken-status.scm:177) main#append-map" 3 
o|inlining procedure: k4545 
o|contracted procedure: "(chicken-status.scm:184) g12231230" 
o|inlining procedure: k4526 
o|inlining procedure: k4526 
o|consed rest parameter at call site: "(chicken-status.scm:186) main#get-egg-property" 3 
o|consed rest parameter at call site: "(chicken-status.scm:186) main#read-info" 2 
o|inlining procedure: k4545 
o|contracted procedure: "(chicken-status.scm:267) main#main" 
o|inlining procedure: k4584 
o|inlining procedure: k4608 
o|contracted procedure: "(chicken-status.scm:222) main#list-cached-eggs" 
o|inlining procedure: k4070 
o|inlining procedure: k4097 
o|contracted procedure: "(chicken-status.scm:126) g11131120" 
o|substituted constant variable: main#+egg-extension+ 
o|inlining procedure: k4097 
o|inlining procedure: k4070 
o|inlining procedure: k4608 
o|contracted procedure: "(chicken-status.scm:228) main#gather-eggs" 
o|inlining procedure: k3832 
o|inlining procedure: k3832 
o|consed rest parameter at call site: "(chicken-status.scm:92) main#append-map" 3 
o|inlining procedure: k4628 
o|propagated global variable: r46295060 main#list-installed-files 
o|inlining procedure: k4628 
o|inlining procedure: k4634 
o|inlining procedure: k4634 
o|inlining procedure: k4584 
o|inlining procedure: k4649 
o|inlining procedure: k4649 
o|substituted constant variable: a4665 
o|substituted constant variable: a4676 
o|inlining procedure: k4672 
o|inlining procedure: k4672 
o|substituted constant variable: a4687 
o|substituted constant variable: a4698 
o|inlining procedure: k4694 
o|inlining procedure: k4694 
o|substituted constant variable: a4709 
o|substituted constant variable: a4723 
o|inlining procedure: k4719 
o|inlining procedure: k4719 
o|substituted constant variable: a4737 
o|inlining procedure: k4748 
o|inlining procedure: k4763 
o|inlining procedure: k4793 
o|contracted procedure: "(chicken-status.scm:261) g13091318" 
o|inlining procedure: k4793 
o|inlining procedure: k4763 
o|substituted constant variable: main#short-options 
o|substituted constant variable: a4844 
o|inlining procedure: k4748 
o|substituted constant variable: a4862 
o|substituted constant variable: a4859 
o|substituted constant variable: a4865 
o|substituted constant variable: a4867 
o|inlining procedure: k4896 
o|inlining procedure: k4896 
o|replaced variables: 617 
o|removed binding forms: 200 
o|substituted constant variable: r18954951 
o|substituted constant variable: r19354953 
o|substituted constant variable: r20904961 
o|substituted constant variable: r22994970 
o|removed side-effect free assignment to unused variable: main#list-tabulate 
o|removed side-effect free assignment to unused variable: main#+version-file+ 
o|removed side-effect free assignment to unused variable: main#+egg-extension+ 
o|removed side-effect free assignment to unused variable: main#get-extension-property/internal 
o|substituted constant variable: r35554994 
o|substituted constant variable: mode704 
o|folded constant expression: (scheme#eq? (quote target) (quote target)) 
o|substituted constant variable: r36815002 
o|substituted constant variable: r21485013 
o|substituted constant variable: r40595022 
o|substituted constant variable: r41645026 
o|substituted constant variable: r43335035 
o|substituted constant variable: r43335035 
o|inlining procedure: k4332 
o|inlining procedure: k4332 
o|substituted constant variable: r45275048 
o|substituted constant variable: r45275048 
o|removed side-effect free assignment to unused variable: main#short-options 
o|contracted procedure: "(chicken-status.scm:260) main#every" 
o|replaced variables: 63 
o|removed binding forms: 544 
o|inlining procedure: k3217 
o|inlining procedure: k3241 
o|contracted procedure: k3134 
o|inlining procedure: k3641 
o|propagated global variable: r36425191 main#target-run-repo 
o|inlining procedure: k3641 
o|propagated global variable: r36425192 main#target-repo 
o|inlining procedure: k3641 
o|inlining procedure: k3641 
o|propagated global variable: r36425194 main#host-repo 
o|inlining procedure: k3202 
o|inlining procedure: k3202 
o|inlining procedure: k4055 
o|inlining procedure: "(chicken-status.scm:231) main#usage" 
o|inlining procedure: "(chicken-status.scm:263) main#usage" 
o|inlining procedure: "(chicken-status.scm:264) main#usage" 
o|replaced variables: 3 
o|removed binding forms: 72 
o|substituted constant variable: r32185185 
o|substituted constant variable: r32185185 
o|substituted constant variable: r32425188 
o|substituted constant variable: r32425188 
o|substituted constant variable: r3135 
o|substituted constant variable: r40565207 
o|substituted constant variable: r40565207 
o|substituted constant variable: r43335121 
o|substituted constant variable: r43335123 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: code12405223 
o|substituted constant variable: code12405230 
o|inlining procedure: "(mini-srfi-1.scm:82) a4827" 
o|substituted constant variable: code12405237 
o|replaced variables: 6 
o|removed binding forms: 11 
o|removed conditional forms: 4 
o|removed side-effect free assignment to unused variable: main#host-repo 
o|replaced variables: 2 
o|removed binding forms: 16 
o|removed binding forms: 3 
o|simplifications: ((if . 24) (let . 16) (##core#call . 187)) 
o|  call simplifications:
o|    scheme#member
o|    ##sys#size	2
o|    chicken.fixnum#fx>
o|    scheme#string->list
o|    scheme#memq
o|    scheme#string
o|    scheme#-	2
o|    scheme#quotient	2
o|    scheme#caddr
o|    scheme#eq?	11
o|    scheme#list	16
o|    scheme#string-length
o|    chicken.fixnum#fx-
o|    chicken.fixnum#fxmax
o|    scheme#string=?	2
o|    scheme#not	2
o|    ##sys#apply
o|    ##sys#call-with-values	2
o|    scheme#list-ref
o|    scheme#assq	2
o|    scheme#cadr	8
o|    scheme#equal?
o|    scheme#null?	23
o|    scheme#car	18
o|    scheme#apply
o|    scheme#cdr	8
o|    scheme#cons	17
o|    ##sys#setslot	5
o|    ##sys#check-list	10
o|    scheme#pair?	13
o|    ##sys#slot	31
o|contracted procedure: k1882 
o|contracted procedure: k1885 
o|contracted procedure: k1897 
o|contracted procedure: k1913 
o|contracted procedure: k1921 
o|contracted procedure: k1928 
o|contracted procedure: k1952 
o|contracted procedure: k1969 
o|contracted procedure: k1991 
o|contracted procedure: k1987 
o|contracted procedure: k1972 
o|contracted procedure: k1975 
o|contracted procedure: k1983 
o|contracted procedure: k1998 
o|contracted procedure: k2006 
o|contracted procedure: k2018 
o|contracted procedure: k2040 
o|contracted procedure: k2036 
o|contracted procedure: k2021 
o|contracted procedure: k2024 
o|contracted procedure: k2032 
o|contracted procedure: k2092 
o|contracted procedure: k2107 
o|contracted procedure: k2253 
o|contracted procedure: k2256 
o|contracted procedure: k2266 
o|contracted procedure: k2178 
o|contracted procedure: k2204 
o|contracted procedure: k2289 
o|contracted procedure: k2301 
o|contracted procedure: k2319 
o|contracted procedure: k2327 
o|contracted procedure: k4924 
o|contracted procedure: k3020 
o|contracted procedure: k3226 
o|contracted procedure: k3211 
o|contracted procedure: k3214 
o|contracted procedure: k3217 
o|contracted procedure: k3250 
o|contracted procedure: k3235 
o|contracted procedure: k3238 
o|contracted procedure: k3241 
o|contracted procedure: k4882 
o|contracted procedure: k3625 
o|contracted procedure: k3634 
o|contracted procedure: k3146 
o|contracted procedure: k3128 
o|contracted procedure: k3702 
o|contracted procedure: k3668 
o|contracted procedure: k3696 
o|contracted procedure: k3671 
o|contracted procedure: k3690 
o|contracted procedure: k3674 
o|contracted procedure: k3708 
o|contracted procedure: k3726 
o|contracted procedure: k3736 
o|contracted procedure: k3752 
o|contracted procedure: k2150 
o|contracted procedure: k2157 
o|contracted procedure: k3764 
o|contracted procedure: k3767 
o|contracted procedure: k3770 
o|contracted procedure: k3778 
o|contracted procedure: k3786 
o|contracted procedure: k3931 
o|contracted procedure: k3874 
o|contracted procedure: k3925 
o|contracted procedure: k3877 
o|contracted procedure: k3919 
o|contracted procedure: k3880 
o|contracted procedure: k3913 
o|contracted procedure: k3883 
o|contracted procedure: k3886 
o|contracted procedure: k3910 
o|contracted procedure: k3906 
o|contracted procedure: k4001 
o|contracted procedure: k3943 
o|contracted procedure: k3995 
o|contracted procedure: k3946 
o|contracted procedure: k3989 
o|contracted procedure: k3949 
o|contracted procedure: k3960 
o|contracted procedure: k3972 
o|contracted procedure: k3982 
o|contracted procedure: k3986 
o|contracted procedure: k4007 
o|contracted procedure: k4140 
o|contracted procedure: k4146 
o|contracted procedure: k4160 
o|contracted procedure: k4174 
o|contracted procedure: k4185 
o|contracted procedure: k4181 
o|contracted procedure: k4191 
o|contracted procedure: k4202 
o|contracted procedure: k4198 
o|contracted procedure: k4208 
o|contracted procedure: k4219 
o|contracted procedure: k4215 
o|contracted procedure: k4225 
o|contracted procedure: k4236 
o|contracted procedure: k4232 
o|contracted procedure: k4242 
o|contracted procedure: k4253 
o|contracted procedure: k4249 
o|contracted procedure: k4259 
o|contracted procedure: k4270 
o|contracted procedure: k4266 
o|contracted procedure: k4450 
o|contracted procedure: k4292 
o|contracted procedure: k4364 
o|contracted procedure: k4376 
o|contracted procedure: k4386 
o|contracted procedure: k4390 
o|contracted procedure: k4329 
o|contracted procedure: k4335 
o|contracted procedure: k4341 
o|contracted procedure: k4353 
o|contracted procedure: k4361 
o|contracted procedure: k4420 
o|contracted procedure: k4432 
o|contracted procedure: k4442 
o|contracted procedure: k4446 
o|contracted procedure: k4463 
o|contracted procedure: k4475 
o|contracted procedure: k4485 
o|contracted procedure: k4489 
o|contracted procedure: k4536 
o|contracted procedure: k4548 
o|contracted procedure: k4558 
o|contracted procedure: k4562 
o|contracted procedure: k4526 
o|inlining procedure: k4518 
o|inlining procedure: k4518 
o|contracted procedure: k4587 
o|contracted procedure: k4088 
o|contracted procedure: k4100 
o|contracted procedure: k4110 
o|contracted procedure: k4114 
o|contracted procedure: k3820 
o|contracted procedure: k3835 
o|contracted procedure: k3838 
o|contracted procedure: k3841 
o|contracted procedure: k3849 
o|contracted procedure: k3857 
o|contracted procedure: k4637 
o|contracted procedure: k4643 
o|contracted procedure: k4652 
o|contracted procedure: k4710 
o|contracted procedure: k4724 
o|contracted procedure: k4856 
o|contracted procedure: k4751 
o|contracted procedure: k4841 
o|contracted procedure: k4757 
o|contracted procedure: k4777 
o|contracted procedure: k4796 
o|contracted procedure: k4818 
o|contracted procedure: k4814 
o|contracted procedure: k4799 
o|contracted procedure: k4802 
o|contracted procedure: k4810 
o|contracted procedure: k2055 
o|contracted procedure: k2077 
o|contracted procedure: k2073 
o|contracted procedure: k2064 
o|contracted procedure: k4852 
o|contracted procedure: k4938 
o|contracted procedure: k4942 
o|contracted procedure: k4946 
o|simplifications: ((if . 1) (let . 49)) 
o|removed binding forms: 166 
o|substituted constant variable: r4939 
o|substituted constant variable: r4943 
o|substituted constant variable: r4947 
o|replaced variables: 3 
o|removed binding forms: 1 
o|removed binding forms: 4 
o|direct leaf routine/allocation: main#get-egg-property 0 
o|direct leaf routine/allocation: main#get-egg-property* 0 
o|direct leaf routine/allocation: loop250 0 
o|contracted procedure: "(chicken-status.scm:152) k4300" 
o|contracted procedure: "(chicken-status.scm:153) k4303" 
o|contracted procedure: "(chicken-status.scm:186) k4511" 
o|contracted procedure: k4766 
o|converted assignments to bindings: (loop250) 
o|simplifications: ((let . 1) (if . 1)) 
o|removed binding forms: 4 
o|contracted procedure: "(chicken-status.scm:114) k4022" 
o|removed binding forms: 1 
o|customizable procedures: (map-loop13031328 loop1250 k4593 k4614 map-loop10061023 main#filter-egg-names for-each-loop11121123 for-each-loop12221234 for-each-loop12021213 main#get-terminal-width g11541161 for-each-loop11531193 for-each-loop11701187 main#gather-components main#append-map main#read-info k4025 main#format-string g10701077 for-each-loop10691087 g974983 map-loop968986 loop282 main#filter main#delete-duplicates main#repo-path foldr326329 g331332 loop289 loop309 loop263 main#any map-loop194212 map-loop221239 loop190 foldr179182 g184185) 
o|calls to known targets: 97 
o|identified direct recursive calls: f_1892 1 
o|identified direct recursive calls: f_1964 1 
o|identified direct recursive calls: f_2013 1 
o|identified direct recursive calls: f_2296 1 
o|identified direct recursive calls: f_2145 1 
o|identified direct recursive calls: f_2053 1 
o|identified direct recursive calls: f_4791 1 
o|identified direct recursive calls: f_4582 8 
o|fast box initializations: 19 
o|fast global references: 70 
o|fast global assignments: 36 
o|dropping unused closure argument: f_1877 
o|dropping unused closure argument: f_2053 
o|dropping unused closure argument: f_2081 
o|dropping unused closure argument: f_2242 
o|dropping unused closure argument: f_2287 
o|dropping unused closure argument: f_3209 
o|dropping unused closure argument: f_3233 
o|dropping unused closure argument: f_3552 
o|dropping unused closure argument: f_3629 
o|dropping unused closure argument: f_3663 
o|dropping unused closure argument: f_3718 
o|dropping unused closure argument: f_3872 
o|dropping unused closure argument: f_4126 
*/
/* end of file */
