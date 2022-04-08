#pragma once
#if 0

     BEGIN_JUCE_MODULE_DECLARATION

      ID:               raw_keyboard_input
      vendor:           Eyal Amir & Izmar
      version:          0.0.1
      name:             raw_keyboard_input
      description:      raw_keyboard_input
      license:          GPL/Commercial
      dependencies:     juce_gui_basics

     END_JUCE_MODULE_DECLARATION

#endif

/* Basic usage *\

MyComponent::MyComponent()
{
  keyboard = KeyboardFactory::instance();

  // Optionally install callbacks
  keyboard->onKeyDownFn = [&](int keyCode){ keyEvent(juce::KeyEvent(keyCode, true)); };
  keyboard->onKeyUpFn = [&](int keyCode){ keyEvent(juce::KeyEvent(keyCode, false)); };

  // We need access to the ComponentPeer in order to distinguish
  // between multiple instances in a DAW.
  addAndMakeVisible(keyboard);

  // or call this in a juce::Timer instead
  keyboard->isKeyDown(keyCode);
}

*/

#include "src/Keyboard.h"
#include "src/KeyboardFactory.h"
