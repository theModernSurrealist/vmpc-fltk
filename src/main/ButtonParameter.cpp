#include "ButtonParameter.hpp"

#include <hardware/Hardware.hpp>
#include <hardware/Button.hpp>

#include <Mpc.hpp>

using namespace std;

ButtonParameter::ButtonParameter(mpc::Mpc& _mpc, string _label)
: juce::AudioParameterBool(_label, _label, false, _label), mpc (_mpc)
{
}

void ButtonParameter::valueChanged(bool newValue)
{
    MLOG("Value changed for button " + label.toStdString());

    auto button = mpc.getHardware().lock()->getButton(label.toStdString()).lock();
    
    if (!button)
        return;
    
    if (newValue)
        button->push();
    else
        button->release();
}
