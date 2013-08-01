/* { dg-do run } */
/* APPLE LOCAL testsuite nested functions */
/* { dg-options "-pg -fnested-functions" } */
/* { dg-options "-pg -static" { target hppa*-*-hpux* } } */
/* { dg-require-profiling "-pg" } */

extern void abort(void);

void foo(int i)
{
  void bar(void)
  {
    if (i != 2)
      abort ();
  }

  bar();
}

int main(void)
{
  foo (2);
  return 0;
}