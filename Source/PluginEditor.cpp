/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
AudioWaveformsDemoAudioProcessorEditor::AudioWaveformsDemoAudioProcessorEditor (AudioWaveformsDemoAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    playbackDemo = std::make_unique<AudioPlaybackDemo>();

    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.

    addAndMakeVisible(playbackDemo.get());

    setSize (1000, 500);
}

AudioWaveformsDemoAudioProcessorEditor::~AudioWaveformsDemoAudioProcessorEditor()
{
}

//==============================================================================
void AudioWaveformsDemoAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

void AudioWaveformsDemoAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
