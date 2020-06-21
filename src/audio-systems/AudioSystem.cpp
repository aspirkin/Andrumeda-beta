#include <audio-systems/AudioSystem.h>

AudioSystem::AudioSystem(int numberOfMusicNodes) {
  _numberOfMusicNodes = numberOfMusicNodes;
  _ptrSynthMusicNodes.reserve(_numberOfMusicNodes);
}

MusicNode* AudioSystem::getMusicNode(int index) {
  return (_ptrSynthMusicNodes[index]);
}

int AudioSystem::getNumberOfMusicNodes() {
  return _numberOfMusicNodes;
}

int AudioSystem::getNumberOfNotes() {
  return NUMBER_OF_NOTES;
}

String AudioSystem::getNoteName(int index) {
  return NOTE_NAMES[index];
}

void AudioSystem::activateSampler() {
  for (int i = 0; i < _numberOfMusicNodes; i++)
  {
    // _ptrActiveMusicNodes[i]->deactivate();
    // _ptrActiveMusicNodes[i] = _ptrSamplerMusicNodes[i];
    // _ptrActiveMusicNodes[i]->activate();
  }
  
}

void AudioSystem::activateSynth() {
  for (int i = 0; i < _numberOfMusicNodes; i++)
  {
    // _ptrActiveMusicNodes[i]->deactivate();
    // _ptrActiveMusicNodes[i] = _ptrSynthMusicNodes[i];
    // _ptrActiveMusicNodes[i]->activate();
  }
  
}