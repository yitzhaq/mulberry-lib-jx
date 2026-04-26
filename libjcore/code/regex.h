// JX regex backend selector.
// JRegex supports two backends: PCRE (via #ifdef PCRE_MAJOR) and
// POSIX regex with Henry Spencer's GNU extensions. The POSIX path
// requires REG_PEND/re_endp which modern glibc no longer provides,
// so PCRE is the only viable backend. This header was originally a
// symlink to the bundled misc/pcre/pcre.h; now it includes the
// system pcre.h directly.

#ifndef _J_REGEX_H
#define _J_REGEX_H

#include <pcre.h>

#endif
