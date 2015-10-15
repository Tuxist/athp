#ifndef	__LINUX_COMPAT_H__
#define	__LINUX_COMPAT_H__

#include <sys/libkern.h>

typedef uint8_t		u8;
typedef uint16_t	u16;
typedef uint32_t	u32;
typedef uint64_t	u64;

typedef uint16_t	__le16;
typedef uint32_t	__le32;
typedef uint64_t	__le64;

#define	__cpu_to_le32(a)	htole32(a)
#define	__cpu_to_le16(a)	htole16(a)

#define	__le32_to_cpu(a)	le32toh(a)
#define	__le16_to_cpu(a)	le16toh(a)

//#define	PTR_ALIGN(ptr, a)

static inline unsigned long
roundup_pow_of_two(unsigned long n)
{

	return 1UL << flsl(n - 1);
}

#define BUILD_BUG_ON(x) CTASSERT(!(x))

#define	unlikely(x)	(x)

/* XXX TODO: should really implement this */
#define	WARN_ON(x) (0)
#define	WARN_ON_ONCE(x) (x)

#define	might_sleep()

#endif	/* __LINUX_COMPAT_H__ */
