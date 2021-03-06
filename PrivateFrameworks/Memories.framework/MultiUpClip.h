/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MultiUpClip : MovieClip <CompoundClipInformation> {
    NSArray * _containedClips;
    PVEffect * _multiUpEffect;
    NSMutableDictionary * _multiUpEffectSettings;
    int  _type;
}

@property (nonatomic, retain) NSArray *containedClips;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PVEffect *multiUpEffect;
@property (nonatomic, retain) NSMutableDictionary *multiUpEffectSettings;
@property (readonly) Class superclass;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)containedClips;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)expandsEditList;
- (id)init;
- (id)initWithClip:(id)arg1;
- (bool)isMultiUp;
- (int)maxDuration;
- (id)movie;
- (id)multiUpEffect;
- (id)multiUpEffectSettings;
- (id)plistRepresentationFromProject:(id)arg1;
- (void)setContainedClips:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)setDuration:(int)arg1;
- (void)setMultiUpEffectSettings:(id)arg1;
- (void)setStartOffset:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)validateEffectRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 inProject:(id)arg2;

@end
