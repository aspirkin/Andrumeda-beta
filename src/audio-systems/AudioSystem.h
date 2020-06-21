#ifndef AudioSystem_h_
#define AudioSystem_h_

#include <audio-systems/MusicNode.h>
#include <Audio.h>
#include <parameters/AbstractParameter.h>
#include <vector>

class AudioSystem
{
protected:
  std::vector <MusicNode*> _ptrSynthMusicNodes;
  int _numberOfMusicNodes;

  const static int NUMBER_OF_NOTES = 88;

  const float NOTE_FREQS[NUMBER_OF_NOTES] = { 27.5, 29.1353, 30.8677, 32.7032,  34.6479, 36.7081, 38.8909, 41.2035, 43.6536, 46.2493, 48.9995, 51.913,
                                              55,   58.2705, 61.7354, 65.4064,  69.2957, 73.4162, 77.7817, 82.4069, 87.3071, 92.4986, 97.9989, 103.826,
                                              110,  116.541, 123.471, 130.813,  138.591, 146.832, 155.563, 164.814, 174.614, 184.997, 195.998, 207.652,
                                              220,  233.082, 246.942, 261.626,  277.183, 293.665, 311.127, 329.628, 349.228, 369.994, 391.995, 415.305,
                                              440,  466.164, 493.883, 523.251,  554.365, 587.33,  622.254, 659.255, 698.456, 739.989, 783.991, 830.609,
                                              880,  932.328, 987.767, 1046.5,   1108.73, 1174.66, 1244.51, 1318.51, 1396.91, 1479.98, 1567.98, 1661.22,
                                              1760, 1864.66, 1975.53, 2093,     2217.46, 2349.32, 2489.02, 2637.02, 2793.83, 2959.96, 3135.96, 3322.44,
                                              3520, 3729.31, 3951.07, 4186.01};
  const String NOTE_NAMES[NUMBER_OF_NOTES] = {"A0", "A#0", "B0", "C1", "C#1", "D1", "D#1", "E1", "F1", "F#1", "G1", "G#1",
                                              "A1", "A#1", "B1", "C2", "C#2", "D2", "D#2", "E2", "F2", "F#2", "G2", "G#2",
                                              "A2", "A#2", "B2", "C3", "C#3", "D3", "D#3", "E3", "F3", "F#3", "G3", "G#3",
                                              "A3", "A#3", "B3", "C4", "C#4", "D4", "D#4", "E4", "F4", "F#4", "G4", "G#4",
                                              "A4", "A#4", "B4", "C5", "C#5", "D5", "D#5", "E5", "F5", "F#5", "G5", "G#5",
                                              "A5", "A#5", "B5", "C6", "C#6", "D6", "D#6", "E6", "F6", "F#6", "G6", "G#6",
                                              "A6", "A#6", "B6", "C7", "C#7", "D7", "D#7", "E7", "F7", "F#7", "G7", "G#7",
                                              "A7", "A#7", "B7", "C8"};

public:
  // vector <MusicNode*> _ptrActiveMusicNodes;
  // vector <MusicNode*> _ptrSamplerMusicNodes;

  AudioSystem(int numberOfMusicNodes);
  MusicNode* getMusicNode(int index);
  virtual void activateSampler() = 0;
  virtual void activateSynth() = 0;
  int getNumberOfMusicNodes();
  int getNumberOfNotes();
  String getNoteName(int index);
};

#endif //AudioSystem_h_