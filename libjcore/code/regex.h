// JX regex backend selector.
// JRegex supports two backends: PCRE (via #ifdef PCRE2_MAJOR) and
// POSIX regex with Henry Spencer's GNU extensions. The POSIX path
// requires REG_PEND/re_endp which modern glibc no longer provides,
// so PCRE is the only viable backend. This header was originally a
// symlink to the bundled misc/pcre/pcre.h; now it includes the
// system pcre2.h directly, since current distributions no longer
// ship the original PCRE library.

#ifndef _J_REGEX_H
#define _J_REGEX_H

#define PCRE2_CODE_UNIT_WIDTH 8
#include <pcre2.h>

#endif
