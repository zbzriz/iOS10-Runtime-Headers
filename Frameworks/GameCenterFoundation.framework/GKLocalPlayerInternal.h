/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSNumber, NSString, NSArray;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal  {
    NSString *_accountName;
    NSArray *_emailAddresses;
    NSString *_facebookUserID;
    NSNumber *_iCloudUserID;
    unsigned short _numberOfRequests;
    unsigned short _numberOfTurns;
    unsigned short _numberOfChallenges;
}

+ (id)secureCodedPropertyKeys;

- (id)emailAddresses;
- (void)setEmailAddresses:(id)arg1;
- (void)setAccountName:(id)arg1;
- (id)accountName;
- (BOOL)isPurpleBuddyAccount;
- (void)setNumberOfTurns:(unsigned short)arg1;
- (void)setNumberOfRequests:(unsigned short)arg1;
- (void)setPhotoPending:(BOOL)arg1;
- (BOOL)isPhotoPending;
- (void)setFindable:(BOOL)arg1;
- (BOOL)isFindable;
- (void)setUnderage:(BOOL)arg1;
- (void)setICloudUserID:(id)arg1;
- (id)iCloudUserID;
- (void)setFacebookUserID:(id)arg1;
- (id)facebookUserID;
- (BOOL)isFriend;
- (unsigned short)numberOfTurns;
- (unsigned short)numberOfRequests;
- (BOOL)isUnderage;
- (BOOL)isLocalPlayer;
- (void)setPurpleBuddyAccount:(BOOL)arg1;
- (void)setNumberOfChallenges:(unsigned short)arg1;
- (unsigned short)numberOfChallenges;
- (void)dealloc;

@end