/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, <ABStyleProvider>, UIImage;

@interface ABClippingImageView : UIView  {
    UIImage *_clippingImage;
    UIImage *_image;
    NSArray *_labelLines;
    <ABStyleProvider> *_styleProvider;
}

@property(retain) <ABStyleProvider> * styleProvider;
@property(retain) UIImage * image;


- (void)setClippingImage:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void)dealloc;
- (void)setLabel:(id)arg1;
- (BOOL)_canDrawContent;

@end