//
//  ButtonParameter.hpp
//  vmpc-workspace
//
//  Created by Izmar on 20/02/2021.
//

#ifndef ButtonParameter_hpp
#define ButtonParameter_hpp

#include <juce_audio_utils/juce_audio_utils.h>

namespace mpc { class Mpc; }

class ButtonParameter : public juce::AudioParameterBool {
public:
    ButtonParameter(mpc::Mpc&, std::string label);
    void valueChanged (bool newValue) override;
    
private:
    mpc::Mpc& mpc;
};

#endif /* ButtonParameter_hpp */
