#ifndef SQUID_ACL_ANY_OF_H
#define SQUID_ACL_ANY_OF_H

#include "acl/BoolOps.h"

namespace Acl
{

/// Configurable any-of ACL. Each ACL line is a disjuction of ACLs.
class AnyOf: public Acl::OrNode
{
public:
    MEMPROXY_CLASS(AnyOf);

    /* ACL API */
    virtual char const *typeString() const;
    virtual ACL *clone() const;
    virtual void parse();

private:
    static Prototype RegistryProtoype;
    static AnyOf RegistryEntry_;
};
MEMPROXY_CLASS_INLINE(Acl::AnyOf);

} // namespace Acl

#endif /* SQUID_ACL_ANY_OF_H */
