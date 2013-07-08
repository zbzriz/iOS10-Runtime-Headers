/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSManagedObjectID, NSMutableSet, NSArray, PLLoadRequestKey, PLImageSource, NSMutableArray;

@interface PLImageLoadRequest : NSObject  {
    NSManagedObjectID *_assetID;
    PLImageSource *_source;
    NSMutableSet *_queues;
    int _priority;
    NSMutableArray *_completionBlocks;
    PLLoadRequestKey *_key;
}

@property int priority;
@property(readonly) NSArray * completionBlocks;
@property(readonly) PLImageSource * source;
@property(readonly) PLLoadRequestKey * key;

+ (id)requestWithAsset:(id)arg1 source:(id)arg2 priority:(int)arg3 completion:(id)arg4 loadingQueue:(id)arg5;

- (id)completionBlocks;
- (id)initWithAsset:(id)arg1 source:(id)arg2 priority:(int)arg3;
- (id)assetInPhotoLibrary:(id)arg1;
- (void)notifyImageLoadingQueuesOfImageAvailability:(id)arg1;
- (void)registerImageLoadingQueue:(id)arg1;
- (void)addCompletionBlock:(id)arg1;
- (BOOL)someImageLoadingQueuesRegistered;
- (void)deregisterImageLoadingQueue:(id)arg1;
- (BOOL)isImageLoadingQueueRegistered:(id)arg1;
- (id)source;
- (id)debugDescription;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)setPriority:(int)arg1;
- (int)priority;
- (id)key;

@end