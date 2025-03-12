#include <afFramework.h>

using namespace std;
using namespace ambf;

class afModelMatCapPlugin: public afModelPlugin{
    virtual int init(const afModelPtr a_afModel, const afModelAttribsPtr a_modelAttribs) override;
    virtual void graphicsUpdate()  override;
    virtual void physicsUpdate(double dt)  override;
    virtual void reset()override;
    virtual bool close()override;
};


AF_REGISTER_MODEL_PLUGIN(afModelMatCapPlugin)
