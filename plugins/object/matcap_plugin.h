#include <afFramework.h>

using namespace std;
using namespace ambf;

class afMatCapPlugin: public afObjectPlugin{
    virtual int init(const afBaseObjectPtr a_afObjectPtr, const afBaseObjectAttribsPtr a_objectAttribs) override;
    virtual void graphicsUpdate() override;
    virtual void physicsUpdate(double dt) override;
    virtual void reset() override;
    virtual bool close() override;

    private:
    afInertialObject* m_inertialObject;
};


AF_REGISTER_OBJECT_PLUGIN(afMatCapPlugin)
