/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, NSString, NSURL, GSPermanentStorage, NSMutableDictionary, NSMutableArray, <BRNonLocalVersionSending>;

@interface BRListNonLocalVersionsOperation : NSOperation <BRNonLocalVersionReceiving> {
    NSURL *_documentURL;
    NSMutableArray *_versions;
    NSMutableDictionary *_versionsByEtag;
    GSPermanentStorage *_versionsStore;
    <BRNonLocalVersionSending> *_sender;
    bool_executing;
    bool_finished;
    BOOL _state;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchingVersionsDoneBlock;

}

@property(readonly) NSMutableArray * versions;
@property(retain) NSError * error;
@property(copy) id fetchingVersionsDoneBlock;
@property(getter=isExecuting) bool executing;
@property(getter=isFinished) bool finished;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (oneway void)versionsDone;
- (oneway void)newVersionAtURL:(id)arg1 faultURL:(id)arg2 faultExtension:(id)arg3 etag:(id)arg4 hasThumbnail:(bool)arg5 lastEditorDeviceName:(id)arg6;
- (oneway void)newThumbnailForVersionWithEtag:(id)arg1;
- (id)fetchingVersionsDoneBlock;
- (bool)_setVersionStoreForDocumentAtURL:(id)arg1 error:(id*)arg2;
- (bool)_advanceToState:(BOOL)arg1 result:(id)arg2 error:(id)arg3;
- (bool)__advanceToState:(BOOL)arg1 result:(id)arg2 error:(id)arg3;
- (bool)__finishIfCancelled;
- (void)_senderInvalidate;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)start;
- (void)setError:(id)arg1;
- (id)error;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)versions;
- (void)setFetchingVersionsDoneBlock:(id)arg1;
- (id)initWithDocumentURL:(id)arg1;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;

@end