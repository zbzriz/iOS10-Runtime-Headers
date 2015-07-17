/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUGridPinchGestureRecognizer : UIPinchGestureRecognizer {
    float  _lastTransitionProgress;
    struct CGPoint { 
        float x; 
        float y; 
    }  _touch0InitialLocation;
    struct CGPoint { 
        float x; 
        float y; 
    }  _touch1InitialLocation;
    unsigned int  _transitionDirection;
}

@property (nonatomic, readonly) struct CGSize { float x1; float x2; } centerOffset;
@property (nonatomic, readonly) unsigned int transitionDirection;
@property (nonatomic, readonly) float transitionProgress;
@property (nonatomic, readonly) BOOL transitionShouldFinish;

- (void)_resetTransitionState;
- (struct CGSize { float x1; float x2; })centerOffset;
- (void)reset;
- (void)setState:(int)arg1;
- (unsigned int)transitionDirection;
- (float)transitionProgress;
- (BOOL)transitionShouldFinish;

@end