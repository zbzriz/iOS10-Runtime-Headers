/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFCategoryJudgement : NSObject  {
    float score;
    long category;
}

+ (id)categoryJudgementWithCategory:(long)arg1 score:(float)arg2;

- (int)compareByScore:(id)arg1;
- (int)compareByCategory:(id)arg1;
- (void)setScore:(float)arg1;
- (id)description;
- (void)setCategory:(long)arg1;
- (long)category;
- (float)score;

@end