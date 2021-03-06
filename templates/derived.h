
#ifndef QTAV_%CLASS:u%_H
#define QTAV_%CLASS:u%_H

#include <QtAV/%BASE%.h>

namespace QtAV {

class %CLASS%Private;
class Q_EXPORT %CLASS% : public %BASE%
{
    DPTR_DECLARE_PRIVATE(%CLASS%)
public:
    virtual ~%CLASS%();
protected:
    %CLASS%(%CLASS%Private &d);
};

} //namespace QtAV

#endif // QTAV_%CLASS%_H
