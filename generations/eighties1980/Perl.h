#include "../fifties1950/Lisp.h"
#include "../seventies1970/C.h"
#include "../seventies1970/Awk.h"
#include "../seventies1970/Pascal.h"
#include "../eighties1980/CPlusPlus.h"

class Perl : public Lisp, public C, public Awk, public Pascal, public CPlusPlus {

};