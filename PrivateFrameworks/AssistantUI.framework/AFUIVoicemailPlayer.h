/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIVoicemailPlayer : NSObject <AVAudioPlayerDelegate> {
    <AFUIVoicemailPlayerDelegate> *_delegate;
    AVAudioPlayer *_player;
    SAPhonePlayVoiceMail *_voicemail;
    VMVoicemail *_voicemailObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUIVoicemailPlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=_player, setter=_setPlayer:, nonatomic, retain) AVAudioPlayer *player;
@property (readonly) Class superclass;
@property (nonatomic, retain) SAPhonePlayVoiceMail *voicemail;
@property (getter=_voicemailObject, setter=_setVoicemailObject:, nonatomic, retain) VMVoicemail *voicemailObject;

- (void).cxx_destruct;
- (id)_player;
- (void)_setPlayer:(id)arg1;
- (void)_setVoicemailObject:(id)arg1;
- (void)_updateVoicemailPlayedState:(id)arg1 finished:(BOOL)arg2;
- (int)_voicemailID;
- (id)_voicemailObject;
- (id)_voicemailURL;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setVoicemail:(id)arg1;
- (void)startPlaying;
- (void)stopPlaying;
- (id)voicemail;

@end
