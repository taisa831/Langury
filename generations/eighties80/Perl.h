#include "../fifties50/Lisp.h"
#include "../seventies70/C.h"
#include "../seventies70/Awk.h"
#include "../seventies70/Pascal.h"
#include "../eighties80/CPlusPlus.h"

class Perl : public Lisp, public C, public Awk, public Pascal, public CPlusPlus
{

};