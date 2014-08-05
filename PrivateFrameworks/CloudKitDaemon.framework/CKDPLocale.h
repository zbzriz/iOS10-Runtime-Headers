/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, NSMutableArray;

@interface CKDPLocale : PBCodable <NSCopying> {
    NSString *_activeKeyboard;
    NSMutableArray *_enabledKeyboards;
    NSString *_languageCode;
    NSString *_regionCode;
}

@property(readonly) bool hasLanguageCode;
@property(retain) NSString * languageCode;
@property(readonly) bool hasRegionCode;
@property(retain) NSString * regionCode;
@property(retain) NSMutableArray * enabledKeyboards;
@property(readonly) bool hasActiveKeyboard;
@property(retain) NSString * activeKeyboard;


- (void)setEnabledKeyboards:(id)arg1;
- (bool)hasActiveKeyboard;
- (bool)hasRegionCode;
- (void)setActiveKeyboard:(id)arg1;
- (id)enabledKeyboardsAtIndex:(unsigned long long)arg1;
- (void)clearEnabledKeyboards;
- (unsigned long long)enabledKeyboardsCount;
- (void)addEnabledKeyboards:(id)arg1;
- (id)enabledKeyboards;
- (void)setRegionCode:(id)arg1;
- (id)regionCode;
- (bool)hasLanguageCode;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (id)languageCode;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)activeKeyboard;

@end