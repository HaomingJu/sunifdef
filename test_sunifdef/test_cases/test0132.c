/**ARGS: --constant eval,del -DFOO1 -UFOO2 */
/**SYSCODE: = 1 | 16 */
/* Left(false,elim) && Right(unk) := Elim */
#if 0 && defined(UNKNOWN)
DELETE ME
#else
KEEP ME
#endif
