/* Generated from chicken.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.2.0 (rev 317468e4)
   macosx-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: chicken.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -no-warnings -specialize -consult-types-file ./types.db -no-lambda-info -no-trace -emit-import-library chicken.compiler.chicken -output-file chicken.c
   uses: library eval expand chicken-syntax chicken-ffi-syntax srfi-4 extras data-structures lolevel support compiler optimizer lfa2 compiler-syntax scrutinizer batch-driver c-platform c-backend user-pass
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_externimport void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_externimport void C_ccall C_srfi_2d4_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_externimport void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_externimport void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_externimport void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_toplevel)
C_externimport void C_ccall C_compiler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_externimport void C_ccall C_optimizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lfa2_toplevel)
C_externimport void C_ccall C_lfa2_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_2dsyntax_toplevel)
C_externimport void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_scrutinizer_toplevel)
C_externimport void C_ccall C_scrutinizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_batch_2ddriver_toplevel)
C_externimport void C_ccall C_batch_2ddriver_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_c_2dplatform_toplevel)
C_externimport void C_ccall C_c_2dplatform_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_c_2dbackend_toplevel)
C_externimport void C_ccall C_c_2dbackend_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_user_2dpass_toplevel)
C_externimport void C_ccall C_user_2dpass_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[45];
static double C_possibly_force_alignment;


C_noret_decl(f_1012)
static void C_fcall f_1012(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1030)
static void C_ccall f_1030(C_word c,C_word *av) C_noret;
C_noret_decl(f_1044)
static C_word C_fcall f_1044(C_word t0,C_word t1);
C_noret_decl(f_1337)
static void C_fcall f_1337(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1343)
static void C_fcall f_1343(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1357)
static void C_ccall f_1357(C_word c,C_word *av) C_noret;
C_noret_decl(f_2187)
static void C_ccall f_2187(C_word c,C_word *av) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189(C_word c,C_word *av) C_noret;
C_noret_decl(f_2195)
static void C_fcall f_2195(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2209)
static void C_ccall f_2209(C_word c,C_word *av) C_noret;
C_noret_decl(f_2247)
static void C_ccall f_2247(C_word c,C_word *av) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251(C_word c,C_word *av) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word *av) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word *av) C_noret;
C_noret_decl(f_2295)
static void C_ccall f_2295(C_word c,C_word *av) C_noret;
C_noret_decl(f_2299)
static void C_ccall f_2299(C_word c,C_word *av) C_noret;
C_noret_decl(f_2307)
static void C_ccall f_2307(C_word c,C_word *av) C_noret;
C_noret_decl(f_2311)
static void C_ccall f_2311(C_word c,C_word *av) C_noret;
C_noret_decl(f_2314)
static void C_ccall f_2314(C_word c,C_word *av) C_noret;
C_noret_decl(f_2319)
static void C_fcall f_2319(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2339)
static void C_ccall f_2339(C_word c,C_word *av) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word *av) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word *av) C_noret;
C_noret_decl(f_2374)
static void C_ccall f_2374(C_word c,C_word *av) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word *av) C_noret;
C_noret_decl(f_2394)
static void C_ccall f_2394(C_word c,C_word *av) C_noret;
C_noret_decl(f_2404)
static void C_ccall f_2404(C_word c,C_word *av) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word *av) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word *av) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word *av) C_noret;
C_noret_decl(f_2517)
static void C_ccall f_2517(C_word c,C_word *av) C_noret;
C_noret_decl(f_2524)
static void C_ccall f_2524(C_word c,C_word *av) C_noret;
C_noret_decl(f_2540)
static void C_ccall f_2540(C_word c,C_word *av) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word *av) C_noret;
C_noret_decl(f_2552)
static void C_ccall f_2552(C_word c,C_word *av) C_noret;
C_noret_decl(f_2559)
static void C_ccall f_2559(C_word c,C_word *av) C_noret;
C_noret_decl(f_848)
static void C_ccall f_848(C_word c,C_word *av) C_noret;
C_noret_decl(f_851)
static void C_ccall f_851(C_word c,C_word *av) C_noret;
C_noret_decl(f_854)
static void C_ccall f_854(C_word c,C_word *av) C_noret;
C_noret_decl(f_857)
static void C_ccall f_857(C_word c,C_word *av) C_noret;
C_noret_decl(f_860)
static void C_ccall f_860(C_word c,C_word *av) C_noret;
C_noret_decl(f_863)
static void C_ccall f_863(C_word c,C_word *av) C_noret;
C_noret_decl(f_866)
static void C_ccall f_866(C_word c,C_word *av) C_noret;
C_noret_decl(f_869)
static void C_ccall f_869(C_word c,C_word *av) C_noret;
C_noret_decl(f_872)
static void C_ccall f_872(C_word c,C_word *av) C_noret;
C_noret_decl(f_875)
static void C_ccall f_875(C_word c,C_word *av) C_noret;
C_noret_decl(f_878)
static void C_ccall f_878(C_word c,C_word *av) C_noret;
C_noret_decl(f_881)
static void C_ccall f_881(C_word c,C_word *av) C_noret;
C_noret_decl(f_884)
static void C_ccall f_884(C_word c,C_word *av) C_noret;
C_noret_decl(f_887)
static void C_ccall f_887(C_word c,C_word *av) C_noret;
C_noret_decl(f_890)
static void C_ccall f_890(C_word c,C_word *av) C_noret;
C_noret_decl(f_893)
static void C_ccall f_893(C_word c,C_word *av) C_noret;
C_noret_decl(f_896)
static void C_ccall f_896(C_word c,C_word *av) C_noret;
C_noret_decl(f_899)
static void C_ccall f_899(C_word c,C_word *av) C_noret;
C_noret_decl(f_902)
static void C_ccall f_902(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1012)
static void C_ccall trf_1012(C_word c,C_word *av) C_noret;
static void C_ccall trf_1012(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1012(t0,t1,t2);}

C_noret_decl(trf_1337)
static void C_ccall trf_1337(C_word c,C_word *av) C_noret;
static void C_ccall trf_1337(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1337(t0,t1,t2);}

C_noret_decl(trf_1343)
static void C_ccall trf_1343(C_word c,C_word *av) C_noret;
static void C_ccall trf_1343(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1343(t0,t1,t2,t3);}

C_noret_decl(trf_2195)
static void C_ccall trf_2195(C_word c,C_word *av) C_noret;
static void C_ccall trf_2195(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2195(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2319)
static void C_ccall trf_2319(C_word c,C_word *av) C_noret;
static void C_ccall trf_2319(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2319(t0,t1,t2);}

/* chicken.compiler.chicken#take in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_fcall f_1012(C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_1012,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1030,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:56: take */
t7=t5;
t8=C_u_i_cdr(t2);
t9=C_fixnum_difference(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k1028 in chicken.compiler.chicken#take in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_1030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1030,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k2542 in k2538 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in ... */
static C_word C_fcall f_1044(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
return(t1);}
else{
t4=C_i_cdr(t1);
t5=C_fixnum_difference(t2,C_fix(1));
t1=t4;
t2=t5;
goto loop;}}

/* chicken.compiler.chicken#cons* in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_fcall f_1337(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_1337,3,t1,t2,t3);}
a=C_alloc(5);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1343,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_1343(t7,t1,t2,t3);}

/* loop in chicken.compiler.chicken#cons* in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_fcall f_1343(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1343,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1357,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:95: loop */
t6=t4;
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
t1=t6;
t2=t7;
t3=t8;
goto loop;}}

/* k1355 in loop in chicken.compiler.chicken#cons* in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 in ... */
static void C_ccall f_1357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1357,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_2187(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_2187,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[3] /* (set! chicken.compiler.chicken#compiler-arguments ...) */,t1);
t3=C_mutate(&lf[4] /* (set! chicken.compiler.chicken#process-command-line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2189,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2287,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2295,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2307,tmp=(C_word)a,a+=2,tmp);
/* chicken.scm:85: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t4;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}

/* chicken.compiler.chicken#process-command-line in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 in ... */
static void C_ccall f_2189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_2189,c,av);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2195,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_2195(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in chicken.compiler.chicken#process-command-line in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in ... */
static void C_fcall f_2195(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2195,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2209,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm:70: scheme#reverse */
t6=*((C_word*)lf[5]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
t6=C_i_string_length(t5);
t7=C_i_string_ref(t5,C_fix(0));
t8=(C_truep(C_u_i_char_equalp(C_make_character(45),t7))?C_fixnum_greaterp(t6,C_fix(1)):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_fixnum_greaterp(t6,C_fix(1));
t10=(C_truep(t9)?C_u_i_char_equalp(C_make_character(58),C_i_string_ref(t5,C_fix(1))):C_SCHEME_FALSE);
if(C_truep(t10)){
/* chicken.scm:76: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t18=t4;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
goto loop;}
else{
t11=C_u_i_cdr(t2);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2247,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t11,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2251,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:77: scheme#substring */
t14=*((C_word*)lf[7]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=t5;
av2[3]=C_fix(1);
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}
else{
if(C_truep(t4)){
t9=C_u_i_cdr(t2);
t10=C_a_i_cons(&a,2,t5,t3);
/* chicken.scm:79: loop */
t15=t1;
t16=t9;
t17=t10;
t18=t4;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
goto loop;}
else{
/* chicken.scm:80: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t18=t5;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
goto loop;}}}}

/* k2207 in loop in chicken.compiler.chicken#process-command-line in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in ... */
static void C_ccall f_2209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2209,c,av);}
/* chicken.scm:70: scheme#values */{
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
C_values(4,av2);}}

/* k2245 in loop in chicken.compiler.chicken#process-command-line in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in ... */
static void C_ccall f_2247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2247,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken.scm:77: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2195(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2,((C_word*)t0)[6]);}

/* k2249 in loop in chicken.compiler.chicken#process-command-line in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in ... */
static void C_ccall f_2251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2251,c,av);}
/* chicken.scm:77: scheme#string->symbol */
t2=*((C_word*)lf[6]+1);{
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

/* k2285 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 in ... */
static void C_ccall f_2287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2287,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2293,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base#implicit-exit-handler */
t3=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2291 in k2285 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in ... */
static void C_ccall f_2293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2293,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2294 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 in ... */
static void C_ccall f_2295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2295,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2299,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:85: chicken.compiler.user-pass#user-options-pass */
t3=*((C_word*)lf[9]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2297 in a2294 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in ... */
static void C_ccall f_2299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2299,c,av);}
if(C_truep(t1)){
/* chicken.scm:85: g577 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=lf[4];
t3=lf[4];
/* chicken.scm:85: g577 */
t4=lf[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[3];
f_2189(3,av2);}}}

/* a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 in ... */
static void C_ccall f_2307(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2307,c,av);}
a=C_alloc(13);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2311,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2319,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_2319(t9,t5,((C_word*)t4)[1]);}

/* k2309 in a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in ... */
static void C_ccall f_2311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2311,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2314,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[11]+1);
av2[3]=((C_word*)t0)[3];
av2[4]=lf[3];
av2[5]=((C_word*)((C_word*)t0)[4])[1];
C_apply(6,av2);}}

/* k2312 in k2309 in a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in ... */
static void C_ccall f_2314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2314,c,av);}
/* chicken.scm:165: chicken.base#exit */
t2=*((C_word*)lf[10]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in ... */
static void C_fcall f_2319(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2319,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=C_eqp(lf[12],t3);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2339,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:92: scheme#string->number */
t7=*((C_word*)lf[27]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_i_car(t4);
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=C_eqp(lf[28],t3);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2427,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:147: scheme#string->number */
t8=*((C_word*)lf[27]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_i_car(t4);
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
if(C_truep(C_i_memq(t3,*((C_word*)lf[32]+1)))){
/* chicken.scm:154: loop */
t10=t1;
t11=t4;
t1=t10;
t2=t11;
goto loop;}
else{
if(C_truep(C_i_memq(t3,*((C_word*)lf[33]+1)))){
if(C_truep(C_i_pairp(t4))){
/* chicken.scm:157: loop */
t10=t1;
t11=C_u_i_cdr(t4);
t1=t10;
t2=t11;
goto loop;}
else{
/* chicken.scm:158: chicken.compiler.support#quit-compiling */
t7=*((C_word*)lf[30]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[34];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2517,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2524,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t3))){
/* chicken.scm:160: chicken.base#warning */
t9=*((C_word*)lf[35]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=lf[36];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
/* chicken.scm:162: chicken.string#conc */
t9=*((C_word*)lf[37]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[38];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}}}}}}

/* k2337 in loop in a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in ... */
static void C_ccall f_2339(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(45,c,3)))){
C_save_and_reclaim((void *)f_2339,c,av);}
a=C_alloc(45);
switch(t1){
case C_fix(0):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:96: cons* */
f_1337(t2,lf[13],C_a_i_list(&a,2,lf[14],((C_word*)((C_word*)t0)[2])[1]));
case C_fix(1):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2364,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:99: cons* */
f_1337(t2,lf[15],C_a_i_list(&a,1,((C_word*)((C_word*)t0)[2])[1]));
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:103: cons* */
f_1337(t2,lf[15],C_a_i_list(&a,3,lf[16],lf[17],((C_word*)((C_word*)t0)[2])[1]));
case C_fix(3):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:110: cons* */
f_1337(t2,lf[15],C_a_i_list(&a,6,lf[16],lf[18],lf[19],lf[17],lf[20],((C_word*)((C_word*)t0)[2])[1]));
case C_fix(4):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2394,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:120: cons* */
f_1337(t2,lf[15],C_a_i_list(&a,7,lf[16],lf[18],lf[20],lf[17],lf[19],lf[21],((C_word*)((C_word*)t0)[2])[1]));
default:
if(C_truep(C_i_greater_or_equalp(t1,C_fix(5)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:131: cons* */
f_1337(t2,lf[22],C_a_i_list(&a,13,lf[23],lf[21],lf[24],lf[15],lf[25],lf[20],lf[15],lf[25],lf[16],lf[18],lf[26],lf[17],((C_word*)((C_word*)t0)[2])[1]));}
else{
/* chicken.scm:145: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2319(t2,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}}}

/* k2352 in k2337 in loop in a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in ... */
static void C_ccall f_2354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2354,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* chicken.scm:145: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2319(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}

/* k2362 in k2337 in loop in a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in ... */
static void C_ccall f_2364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2364,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* chicken.scm:145: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2319(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}

/* k2372 in k2337 in loop in a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in ... */
static void C_ccall f_2374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2374,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* chicken.scm:145: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2319(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}

/* k2382 in k2337 in loop in a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in ... */
static void C_ccall f_2384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2384,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* chicken.scm:145: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2319(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}

/* k2392 in k2337 in loop in a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in ... */
static void C_ccall f_2394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2394,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* chicken.scm:145: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2319(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}

/* k2402 in k2337 in loop in a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in ... */
static void C_ccall f_2404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2404,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* chicken.scm:145: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2319(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}

/* k2425 in loop in a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in ... */
static void C_ccall f_2427(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_2427,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
switch(t1){
case C_fix(0):
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2442,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm:148: cons* */
f_1337(t3,lf[25],C_a_i_list(&a,2,lf[23],((C_word*)((C_word*)t0)[5])[1]));
case C_fix(1):
t3=C_a_i_cons(&a,2,lf[23],((C_word*)((C_word*)t0)[5])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
/* chicken.scm:153: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2319(t5,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));
case C_fix(2):
/* chicken.scm:153: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2319(t3,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));
case C_fix(3):
t3=C_a_i_cons(&a,2,lf[29],((C_word*)((C_word*)t0)[5])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
/* chicken.scm:153: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2319(t5,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));
default:
/* chicken.scm:152: chicken.compiler.support#quit-compiling */
t3=*((C_word*)lf[30]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[31];
av2[3]=C_u_i_car(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k2428 in k2425 in loop in a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in ... */
static void C_ccall f_2430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2430,c,av);}
/* chicken.scm:153: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2319(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* k2440 in k2425 in loop in a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in ... */
static void C_ccall f_2442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2442,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* chicken.scm:153: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2319(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}

/* k2515 in loop in a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in ... */
static void C_ccall f_2517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2517,c,av);}
/* chicken.scm:163: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2319(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2522 in loop in a2306 in k2185 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in ... */
static void C_ccall f_2524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2524,c,av);}
/* chicken.scm:160: chicken.base#warning */
t2=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[36];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2538 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_2540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2540,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2552,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:57: chicken.process-context#get-environment-variable */
t4=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[43];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2542 in k2538 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 in ... */
static void C_ccall f_2544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_2544,c,av);}
a=C_alloc(2);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1044,tmp=(C_word)a,a+=2,tmp);
t3=(
  f_1044(((C_word*)t0)[2],C_fix(1))
);
/* chicken.scm:56: scheme#append */
t4=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2550 in k2538 in k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 in ... */
static void C_ccall f_2552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2552,c,av);}
if(C_truep(t1)){
/* chicken.scm:57: chicken.string#string-split */
t2=*((C_word*)lf[40]+1);{
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
else{
/* chicken.scm:57: chicken.string#string-split */
t2=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[41];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k2557 in k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_2559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2559,c,av);}
a=C_alloc(7);
t2=C_i_cdr(t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2187,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
f_2187(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2540,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm:56: take */
f_1012(t4,t2,C_fix(1));}}

/* k846 */
static void C_ccall f_848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_848,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_851,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k849 in k846 */
static void C_ccall f_851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_851,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_854,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k852 in k849 in k846 */
static void C_ccall f_854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_854,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_857,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k855 in k852 in k849 in k846 */
static void C_ccall f_857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_857,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_860,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dffi_2dsyntax_toplevel(2,av2);}}

/* k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_860,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_863,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d4_toplevel(2,av2);}}

/* k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_863,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_866,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_866,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_869,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_869,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_872,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lolevel_toplevel(2,av2);}}

/* k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_872,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_875,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_support_toplevel(2,av2);}}

/* k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_875,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_878,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_toplevel(2,av2);}}

/* k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_878,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_881,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_optimizer_toplevel(2,av2);}}

/* k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_881,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_884,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lfa2_toplevel(2,av2);}}

/* k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_884,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_887,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_2dsyntax_toplevel(2,av2);}}

/* k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_887,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_890,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_scrutinizer_toplevel(2,av2);}}

/* k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_890,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_893,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_batch_2ddriver_toplevel(2,av2);}}

/* k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_893,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_896,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_c_2dplatform_toplevel(2,av2);}}

/* k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_896,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_899,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_c_2dbackend_toplevel(2,av2);}}

/* k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_899,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_902,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_user_2dpass_toplevel(2,av2);}}

/* k900 in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k876 in k873 in k870 in k867 in k864 in k861 in k858 in k855 in k852 in k849 in k846 */
static void C_ccall f_902(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_902,c,av);}
a=C_alloc(15);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_mutate(&lf[1] /* (set! chicken.compiler.chicken#take ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1012,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[2] /* (set! chicken.compiler.chicken#cons* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1337,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2559,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm:53: chicken.process-context#argv */
t6=*((C_word*)lf[44]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

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
if(C_unlikely(!C_demand_2(245))){
C_save(t1);
C_rereclaim2(245*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,45);
lf[0]=C_h_intern(&lf[0],25, C_text("chicken.compiler.chicken#"));
lf[5]=C_h_intern(&lf[5],14, C_text("scheme#reverse"));
lf[6]=C_h_intern(&lf[6],21, C_text("scheme#string->symbol"));
lf[7]=C_h_intern(&lf[7],16, C_text("scheme#substring"));
lf[8]=C_h_intern(&lf[8],34, C_text("chicken.base#implicit-exit-handler"));
lf[9]=C_h_intern(&lf[9],44, C_text("chicken.compiler.user-pass#user-options-pass"));
lf[10]=C_h_intern(&lf[10],17, C_text("chicken.base#exit"));
lf[11]=C_h_intern(&lf[11],49, C_text("chicken.compiler.batch-driver#compile-source-file"));
lf[12]=C_h_intern(&lf[12],14, C_text("optimize-level"));
lf[13]=C_h_intern(&lf[13],18, C_text("no-compiler-syntax"));
lf[14]=C_h_intern(&lf[14],21, C_text("no-usual-integrations"));
lf[15]=C_h_intern(&lf[15],22, C_text("optimize-leaf-routines"));
lf[16]=C_h_intern(&lf[16],6, C_text("inline"));
lf[17]=C_h_intern(&lf[17],4, C_text("lfa2"));
lf[18]=C_h_intern(&lf[18],13, C_text("inline-global"));
lf[19]=C_h_intern(&lf[19],5, C_text("local"));
lf[20]=C_h_intern(&lf[20],10, C_text("specialize"));
lf[21]=C_h_intern(&lf[21],6, C_text("unsafe"));
lf[22]=C_h_intern(&lf[22],18, C_text("disable-interrupts"));
lf[23]=C_h_intern(&lf[23],8, C_text("no-trace"));
lf[24]=C_h_intern(&lf[24],5, C_text("block"));
lf[25]=C_h_intern(&lf[25],14, C_text("no-lambda-info"));
lf[26]=C_h_intern(&lf[26],10, C_text("clustering"));
lf[27]=C_h_intern(&lf[27],21, C_text("scheme#string->number"));
lf[28]=C_h_intern(&lf[28],11, C_text("debug-level"));
lf[29]=C_h_intern(&lf[29],10, C_text("debug-info"));
lf[30]=C_h_intern(&lf[30],39, C_text("chicken.compiler.support#quit-compiling"));
lf[31]=C_decode_literal(C_heaptop,C_text("\376B\000\000\027invalid debug level: ~a"));
lf[32]=C_h_intern(&lf[32],50, C_text("chicken.compiler.c-platform#valid-compiler-options"));
lf[33]=C_h_intern(&lf[33],64, C_text("chicken.compiler.c-platform#valid-compiler-options-with-argument"));
lf[34]=C_decode_literal(C_heaptop,C_text("\376B\000\000 missing argument to `-~s\047 option"));
lf[35]=C_h_intern(&lf[35],20, C_text("chicken.base#warning"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376B\000\000!invalid compiler option (ignored)"));
lf[37]=C_h_intern(&lf[37],19, C_text("chicken.string#conc"));
lf[38]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001-"));
lf[39]=C_h_intern(&lf[39],13, C_text("scheme#append"));
lf[40]=C_h_intern(&lf[40],27, C_text("chicken.string#string-split"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[42]=C_h_intern(&lf[42],48, C_text("chicken.process-context#get-environment-variable"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376B\000\000\017CHICKEN_OPTIONS"));
lf[44]=C_h_intern(&lf[44],28, C_text("chicken.process-context#argv"));
C_register_lf2(lf,45,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_848,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[57] = {
{C_text("f_1012:chicken_2escm"),(void*)f_1012},
{C_text("f_1030:chicken_2escm"),(void*)f_1030},
{C_text("f_1044:chicken_2escm"),(void*)f_1044},
{C_text("f_1337:chicken_2escm"),(void*)f_1337},
{C_text("f_1343:chicken_2escm"),(void*)f_1343},
{C_text("f_1357:chicken_2escm"),(void*)f_1357},
{C_text("f_2187:chicken_2escm"),(void*)f_2187},
{C_text("f_2189:chicken_2escm"),(void*)f_2189},
{C_text("f_2195:chicken_2escm"),(void*)f_2195},
{C_text("f_2209:chicken_2escm"),(void*)f_2209},
{C_text("f_2247:chicken_2escm"),(void*)f_2247},
{C_text("f_2251:chicken_2escm"),(void*)f_2251},
{C_text("f_2287:chicken_2escm"),(void*)f_2287},
{C_text("f_2293:chicken_2escm"),(void*)f_2293},
{C_text("f_2295:chicken_2escm"),(void*)f_2295},
{C_text("f_2299:chicken_2escm"),(void*)f_2299},
{C_text("f_2307:chicken_2escm"),(void*)f_2307},
{C_text("f_2311:chicken_2escm"),(void*)f_2311},
{C_text("f_2314:chicken_2escm"),(void*)f_2314},
{C_text("f_2319:chicken_2escm"),(void*)f_2319},
{C_text("f_2339:chicken_2escm"),(void*)f_2339},
{C_text("f_2354:chicken_2escm"),(void*)f_2354},
{C_text("f_2364:chicken_2escm"),(void*)f_2364},
{C_text("f_2374:chicken_2escm"),(void*)f_2374},
{C_text("f_2384:chicken_2escm"),(void*)f_2384},
{C_text("f_2394:chicken_2escm"),(void*)f_2394},
{C_text("f_2404:chicken_2escm"),(void*)f_2404},
{C_text("f_2427:chicken_2escm"),(void*)f_2427},
{C_text("f_2430:chicken_2escm"),(void*)f_2430},
{C_text("f_2442:chicken_2escm"),(void*)f_2442},
{C_text("f_2517:chicken_2escm"),(void*)f_2517},
{C_text("f_2524:chicken_2escm"),(void*)f_2524},
{C_text("f_2540:chicken_2escm"),(void*)f_2540},
{C_text("f_2544:chicken_2escm"),(void*)f_2544},
{C_text("f_2552:chicken_2escm"),(void*)f_2552},
{C_text("f_2559:chicken_2escm"),(void*)f_2559},
{C_text("f_848:chicken_2escm"),(void*)f_848},
{C_text("f_851:chicken_2escm"),(void*)f_851},
{C_text("f_854:chicken_2escm"),(void*)f_854},
{C_text("f_857:chicken_2escm"),(void*)f_857},
{C_text("f_860:chicken_2escm"),(void*)f_860},
{C_text("f_863:chicken_2escm"),(void*)f_863},
{C_text("f_866:chicken_2escm"),(void*)f_866},
{C_text("f_869:chicken_2escm"),(void*)f_869},
{C_text("f_872:chicken_2escm"),(void*)f_872},
{C_text("f_875:chicken_2escm"),(void*)f_875},
{C_text("f_878:chicken_2escm"),(void*)f_878},
{C_text("f_881:chicken_2escm"),(void*)f_881},
{C_text("f_884:chicken_2escm"),(void*)f_884},
{C_text("f_887:chicken_2escm"),(void*)f_887},
{C_text("f_890:chicken_2escm"),(void*)f_890},
{C_text("f_893:chicken_2escm"),(void*)f_893},
{C_text("f_896:chicken_2escm"),(void*)f_896},
{C_text("f_899:chicken_2escm"),(void*)f_899},
{C_text("f_902:chicken_2escm"),(void*)f_902},
{C_text("toplevel:chicken_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: chicken.compiler.chicken#partition 
o|hiding unexported module binding: chicken.compiler.chicken#span 
o|hiding unexported module binding: chicken.compiler.chicken#take 
o|hiding unexported module binding: chicken.compiler.chicken#drop 
o|hiding unexported module binding: chicken.compiler.chicken#split-at 
o|hiding unexported module binding: chicken.compiler.chicken#append-map 
o|hiding unexported module binding: chicken.compiler.chicken#every 
o|hiding unexported module binding: chicken.compiler.chicken#any 
o|hiding unexported module binding: chicken.compiler.chicken#cons* 
o|hiding unexported module binding: chicken.compiler.chicken#concatenate 
o|hiding unexported module binding: chicken.compiler.chicken#delete 
o|hiding unexported module binding: chicken.compiler.chicken#first 
o|hiding unexported module binding: chicken.compiler.chicken#second 
o|hiding unexported module binding: chicken.compiler.chicken#third 
o|hiding unexported module binding: chicken.compiler.chicken#fourth 
o|hiding unexported module binding: chicken.compiler.chicken#fifth 
o|hiding unexported module binding: chicken.compiler.chicken#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.chicken#alist-cons 
o|hiding unexported module binding: chicken.compiler.chicken#filter 
o|hiding unexported module binding: chicken.compiler.chicken#filter-map 
o|hiding unexported module binding: chicken.compiler.chicken#remove 
o|hiding unexported module binding: chicken.compiler.chicken#unzip1 
o|hiding unexported module binding: chicken.compiler.chicken#last 
o|hiding unexported module binding: chicken.compiler.chicken#list-index 
o|hiding unexported module binding: chicken.compiler.chicken#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.chicken#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.chicken#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.chicken#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.chicken#list-tabulate 
o|hiding unexported module binding: chicken.compiler.chicken#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.chicken#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.chicken#length+ 
o|hiding unexported module binding: chicken.compiler.chicken#find 
o|hiding unexported module binding: chicken.compiler.chicken#find-tail 
o|hiding unexported module binding: chicken.compiler.chicken#iota 
o|hiding unexported module binding: chicken.compiler.chicken#make-list 
o|hiding unexported module binding: chicken.compiler.chicken#posq 
o|hiding unexported module binding: chicken.compiler.chicken#posv 
o|hiding unexported module binding: chicken.compiler.chicken#compiler-arguments 
o|hiding unexported module binding: chicken.compiler.chicken#process-command-line 
S|applied compiler syntax:
S|  chicken.base#foldl		3
S|  scheme#map		3
S|  chicken.base#foldr		3
o|eliminated procedure checks: 25 
o|specializations:
o|  9 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  2 (scheme#> fixnum fixnum)
o|  2 (scheme#char=? char char)
o|  2 (scheme#string-ref string fixnum)
o|  1 (scheme#eqv? * *)
o|  3 (##sys#check-list (or pair list) *)
o|  30 (scheme#cdr pair)
o|  8 (scheme#car pair)
(o e)|safe calls: 228 
o|safe globals: (chicken.compiler.chicken#posv chicken.compiler.chicken#posq chicken.compiler.chicken#make-list chicken.compiler.chicken#iota chicken.compiler.chicken#find-tail chicken.compiler.chicken#find chicken.compiler.chicken#length+ chicken.compiler.chicken#lset=/eq? chicken.compiler.chicken#lset<=/eq? chicken.compiler.chicken#list-tabulate chicken.compiler.chicken#lset-intersection/eq? chicken.compiler.chicken#lset-union/eq? chicken.compiler.chicken#lset-difference/eq? chicken.compiler.chicken#lset-adjoin/eq? chicken.compiler.chicken#list-index chicken.compiler.chicken#last chicken.compiler.chicken#unzip1 chicken.compiler.chicken#remove chicken.compiler.chicken#filter-map chicken.compiler.chicken#filter chicken.compiler.chicken#alist-cons chicken.compiler.chicken#delete-duplicates chicken.compiler.chicken#fifth chicken.compiler.chicken#fourth chicken.compiler.chicken#third chicken.compiler.chicken#second chicken.compiler.chicken#first chicken.compiler.chicken#delete chicken.compiler.chicken#concatenate chicken.compiler.chicken#cons* chicken.compiler.chicken#any chicken.compiler.chicken#every chicken.compiler.chicken#append-map chicken.compiler.chicken#split-at chicken.compiler.chicken#drop chicken.compiler.chicken#take chicken.compiler.chicken#span chicken.compiler.chicken#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#partition 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#span 
o|inlining procedure: k1014 
o|inlining procedure: k1014 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#split-at 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#append-map 
o|inlining procedure: k1284 
o|inlining procedure: k1284 
o|inlining procedure: k1315 
o|inlining procedure: k1315 
o|merged explicitly consed rest parameter: xs221 
o|inlining procedure: k1345 
o|inlining procedure: k1345 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#concatenate 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#first 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#third 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#fourth 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#fifth 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#alist-cons 
o|inlining procedure: k1532 
o|inlining procedure: k1532 
o|inlining procedure: k1524 
o|inlining procedure: k1524 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#filter-map 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#remove 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#unzip1 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#last 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#list-index 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#lset-intersection/eq? 
o|inlining procedure: k1923 
o|inlining procedure: k1923 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#length+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#find 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#make-list 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#posq 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#posv 
o|inlining procedure: k2197 
o|substituted constant variable: a2217 
o|inlining procedure: k2197 
o|inlining procedure: k2224 
o|inlining procedure: k2224 
o|substituted constant variable: a2258 
o|substituted constant variable: a2255 
o|substituted constant variable: a2260 
o|inlining procedure: k2261 
o|inlining procedure: k2261 
o|substituted constant variable: a2278 
o|substituted constant variable: a2284 
o|inlining procedure: k2300 
o|inlining procedure: k2300 
o|propagated global variable: r23012585 chicken.compiler.chicken#process-command-line 
o|inlining procedure: k2321 
o|inlining procedure: k2321 
o|consed rest parameter at call site: "(chicken.scm:96) chicken.compiler.chicken#cons*" 2 
o|inlining procedure: k2355 
o|consed rest parameter at call site: "(chicken.scm:99) chicken.compiler.chicken#cons*" 2 
o|inlining procedure: k2355 
o|consed rest parameter at call site: "(chicken.scm:103) chicken.compiler.chicken#cons*" 2 
o|inlining procedure: k2375 
o|consed rest parameter at call site: "(chicken.scm:110) chicken.compiler.chicken#cons*" 2 
o|inlining procedure: k2375 
o|consed rest parameter at call site: "(chicken.scm:120) chicken.compiler.chicken#cons*" 2 
o|inlining procedure: k2395 
o|consed rest parameter at call site: "(chicken.scm:131) chicken.compiler.chicken#cons*" 2 
o|inlining procedure: k2395 
o|substituted constant variable: a2406 
o|substituted constant variable: a2408 
o|substituted constant variable: a2410 
o|substituted constant variable: a2412 
o|substituted constant variable: a2414 
o|inlining procedure: k2419 
o|consed rest parameter at call site: "(chicken.scm:148) chicken.compiler.chicken#cons*" 2 
o|inlining procedure: k2443 
o|inlining procedure: k2443 
o|inlining procedure: k2459 
o|inlining procedure: k2459 
o|substituted constant variable: a2475 
o|substituted constant variable: a2477 
o|substituted constant variable: a2479 
o|substituted constant variable: a2481 
o|inlining procedure: k2419 
o|inlining procedure: k2495 
o|inlining procedure: k2495 
o|inlining procedure: k2522 
o|inlining procedure: k2522 
o|contracted procedure: "(chicken.scm:58) chicken.compiler.chicken#drop" 
o|inlining procedure: k1046 
o|inlining procedure: k1046 
o|inlining procedure: k2553 
o|inlining procedure: k2553 
o|replaced variables: 163 
o|removed binding forms: 74 
o|substituted constant variable: r10152560 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#every 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#any 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#filter 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#list-tabulate 
o|substituted constant variable: n104 
o|substituted constant variable: r25542614 
o|substituted constant variable: r25542614 
o|replaced variables: 18 
o|removed binding forms: 146 
o|inlining procedure: k2340 
o|inlining procedure: k2340 
o|inlining procedure: k2340 
o|inlining procedure: k2340 
o|inlining procedure: k2340 
o|inlining procedure: k2340 
o|inlining procedure: k2340 
o|inlining procedure: k2428 
o|inlining procedure: k2428 
o|inlining procedure: k2428 
o|inlining procedure: k2428 
o|removed binding forms: 25 
o|removed binding forms: 12 
o|removed binding forms: 1 
o|simplifications: ((if . 2) (let . 18) (##core#call . 44)) 
o|  call simplifications:
o|    scheme#cdr	2
o|    ##sys#call-with-values
o|    scheme#memq	2
o|    scheme#string?
o|    scheme#pair?
o|    scheme#eq?	11
o|    scheme#>=
o|    scheme#apply
o|    scheme#string-length
o|    chicken.fixnum#fx>	2
o|    scheme#values
o|    scheme#null?	4
o|    chicken.fixnum#fx<=	2
o|    scheme#car	6
o|    chicken.fixnum#fx-	2
o|    scheme#cons	6
o|contracted procedure: k1017 
o|contracted procedure: k1024 
o|contracted procedure: k1034 
o|contracted procedure: k1348 
o|contracted procedure: k1359 
o|contracted procedure: k2182 
o|contracted procedure: k2200 
o|contracted procedure: k2210 
o|contracted procedure: k2213 
o|contracted procedure: k2221 
o|contracted procedure: k2252 
o|contracted procedure: k2227 
o|contracted procedure: k2241 
o|contracted procedure: k2270 
o|contracted procedure: k2324 
o|contracted procedure: k2327 
o|contracted procedure: k2334 
o|contracted procedure: k2348 
o|contracted procedure: k2358 
o|contracted procedure: k2368 
o|contracted procedure: k2378 
o|contracted procedure: k2388 
o|contracted procedure: k2398 
o|contracted procedure: k2416 
o|contracted procedure: k2422 
o|contracted procedure: k2436 
o|contracted procedure: k2446 
o|contracted procedure: k2450 
o|contracted procedure: k2456 
o|contracted procedure: k2462 
o|contracted procedure: k2466 
o|contracted procedure: k2483 
o|contracted procedure: k2489 
o|contracted procedure: k2498 
o|contracted procedure: k2504 
o|contracted procedure: k2525 
o|contracted procedure: k2531 
o|contracted procedure: k1049 
o|contracted procedure: k1056 
o|contracted procedure: k1060 
o|simplifications: ((let . 25)) 
o|removed binding forms: 40 
o|direct leaf routine/allocation: loop105 0 
o|contracted procedure: k2546 
o|converted assignments to bindings: (loop105) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (chicken.compiler.chicken#cons* loop584 loop567 loop222 chicken.compiler.chicken#take) 
o|calls to known targets: 34 
o|identified direct recursive calls: f_1012 1 
o|identified direct recursive calls: f_1343 1 
o|identified direct recursive calls: f_2195 3 
o|identified direct recursive calls: f_2319 2 
o|identified direct recursive calls: f_1044 1 
o|fast box initializations: 3 
o|fast global references: 15 
o|fast global assignments: 4 
o|dropping unused closure argument: f_1012 
o|dropping unused closure argument: f_1044 
o|dropping unused closure argument: f_1337 
*/
/* end of file */
