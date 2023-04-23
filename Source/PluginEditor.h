/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "AudioPlaybackDemo.h"

//==============================================================================
/**
*/
class AudioWaveformsDemoAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    AudioWaveformsDemoAudioProcessorEditor (AudioWaveformsDemoAudioProcessor&);
    ~AudioWaveformsDemoAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    AudioWaveformsDemoAudioProcessor& audioProcessor;

    std::unique_ptr<AudioPlaybackDemo> playbackDemo;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioWaveformsDemoAudioProcessorEditor)
};
