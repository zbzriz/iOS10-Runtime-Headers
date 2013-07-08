/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, NSArray;

@interface SAMPSearch : SADomainCommand  {
}

@property(copy) NSURL * targetAppId;
@property(copy) NSArray * constraints;
@property int maxResults;
@property(copy) NSArray * searchProperties;
@property(copy) NSArray * searchTypes;
@property(copy) NSString * searchValue;
@property BOOL strict;

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;

- (void)setConstraints:(id)arg1;
- (id)searchTypes;
- (void)setSearchTypes:(id)arg1;
- (void)setStrict:(BOOL)arg1;
- (BOOL)strict;
- (void)setSearchValue:(id)arg1;
- (id)searchValue;
- (void)setSearchProperties:(id)arg1;
- (id)searchProperties;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setMaxResults:(int)arg1;
- (int)maxResults;
- (id)constraints;
- (id)groupIdentifier;

@end