extern void __VERIFIER_error() __attribute__((noreturn));
void __VERIFIER_assert (int cond) { if (!cond) __VERIFIER_error (); }
unsigned int __VERIFIER_nondet_uint();
void errorFn() {ERROR: goto ERROR;}
# 1 "MAP/SAFE-exbench/TRACER-testloop1.tmp.c"
# 1 "<command-line>"
# 1 "MAP/SAFE-exbench/TRACER-testloop1.tmp.c"
# 23 "MAP/SAFE-exbench/TRACER-testloop1.tmp.c"
void main(){

  int NONDET;
  int i,N;
  int a;
  int x;


  x=0;
  i=0;


  if (NONDET > 0) a=1; else a=2;

  while (i<N){
    i=i+1;
  }

  __VERIFIER_assert(!( x >0 ));
  return;
}
