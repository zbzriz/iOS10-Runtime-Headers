/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;

@interface KeychainSyncSMSVerificationController : KeychainSyncTextEntryController  {
    NSString *_phoneNumber;
    NSString *_dialingPrefix;
    unsigned int _verificationCodeLength;
}

@property(retain) NSString * phoneNumber;
@property(retain) NSString * dialingPrefix;
@property unsigned int verificationCodeLength;


- (unsigned int)numberOfPasscodeFields;
- (unsigned int)verificationCodeLength;
- (void)setVerificationCodeLength:(unsigned int)arg1;
- (id)specifiers;
- (id)dialingPrefix;
- (void)setDialingPrefix:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (id)phoneNumber;

@end