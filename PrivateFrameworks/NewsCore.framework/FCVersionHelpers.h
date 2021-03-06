/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCVersionHelpers : NSObject

+ (id)applicationName;
+ (id)applicationVersionString;
+ (id)sharedVersionHelpers;
+ (id)systemVersionString;

- (long long)applicationVersionNumber;
- (id)init;
- (long long)integerRepresentationOfShortVersionString:(id)arg1;
- (bool)isAppUpdateRequired;
- (bool)isDeviceAbandoned;
- (bool)isOSUpdateRequired;
- (bool)isUpdateRequired;
- (long long)minimumOSVersionNumberForUpdate;
- (id)minimumOSVersionStringForUpdate;
- (long long)minimumVersionNumber;
- (id)minimumVersionString;
- (long long)systemVersionNumber;
- (void)updateAppObsolescenceState;
- (id)updateInfos;

@end
