/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UITapGestureRecognizer, MKMapView, GEOPDFlyover;

@interface MKPlaceHeaderBackgroundView_Flyover : MKPlaceHeaderBackgroundView  {
    bool_animationPaused;
    UITapGestureRecognizer *_interactionTapRecognizer;
    MKMapView *_mapView;
    GEOPDFlyover *_flyover;
}


- (void)_pauseTour;
- (void)prepareForPresentation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mapItem:(id)arg2;
- (void)setMapView:(id)arg1;
- (id)mapView;
- (void)setFlyover:(id)arg1;
- (id)flyover;
- (void)pause;
- (void)restart;
- (void).cxx_destruct;
- (void)reset;
- (void)present;

@end