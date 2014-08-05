/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, NSObject<OS_dispatch_source>, CKDMMCS, NSObject<OS_dispatch_queue>, CKSQLitePool;

@interface CKDAssetCache : NSObject  {
    bool_isUnitTestingAccount;
    bool_isEvictionScheduled;
    int _downloadPathFd;
    CKDMMCS *_MMCS;
    CKSQLitePool *_dbPool;
    NSString *_dbPath;
    NSString *_downloadPath;
    NSString *_applicationBundleID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_expiryTimer;
}

@property CKDMMCS * MMCS;
@property(readonly) CKSQLitePool * dbPool;
@property bool isUnitTestingAccount;
@property int downloadPathFd;
@property(retain) NSString * dbPath;
@property(retain) NSString * downloadPath;
@property(retain) NSString * applicationBundleID;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(retain) NSObject<OS_dispatch_source> * expiryTimer;
@property bool isEvictionScheduled;

+ (int)openFdForDownloadPath:(id)arg1 error:(id*)arg2;
+ (id)_sharedCachesByBundleID;
+ (id)_sharedCachesQueue;
+ (id)assetCacheWithApplicationBundleID:(id)arg1 dbPath:(id)arg2 downloadPath:(id)arg3;

- (void)setDownloadPath:(id)arg1;
- (void)setDbPath:(id)arg1;
- (void)setDownloadPathFd:(int)arg1;
- (void)_evictFetchedFilesWithDatabase:(id)arg1 forced:(bool)arg2;
- (void)setIsEvictionScheduled:(bool)arg1;
- (bool)isEvictionScheduled;
- (void)_unregisterItemIDs:(id)arg1;
- (id)_addAssetHandleForFileURL:(id)arg1 signature:(id)arg2 itemID:(id)arg3 error:(id*)arg4;
- (void)_scheduleExpirationForAssetHandles;
- (void)_scheduleEvictionForFetchedFiles;
- (int)downloadPathFd;
- (id)downloadPath;
- (id)dbPool;
- (void)evictAllFetchedFiles;
- (void)expireAssetHandlesIfNecessary;
- (void)_evictFetchedFilesForced:(bool)arg1;
- (void)_expireAssetHandles;
- (id)initWithApplicationBundleID:(id)arg1 dbPath:(id)arg2 downloadPath:(id)arg3;
- (id)dbPath;
- (void)stopTrackingAssetHandlesByItemIDs:(id)arg1;
- (bool)startTrackingAssetHandles:(id)arg1 error:(id*)arg2;
- (int)openFileDescriptorForItemID:(unsigned long long)arg1 itemType:(id*)arg2 error:(id*)arg3;
- (void)setApplicationBundleID:(id)arg1;
- (id)addAssetHandleForData:(id)arg1 signature:(id)arg2 error:(id*)arg3;
- (id)addAssetHandleForFetchedFileURL:(id)arg1 itemID:(unsigned long long)arg2 signature:(id)arg3 error:(id*)arg4;
- (void)evictFetchedFilesIfNecessary;
- (void)cancelExpiryTimer;
- (void)setMMCS:(id)arg1;
- (id)MMCS;
- (void)setExpiryTimer:(id)arg1;
- (id)expiryTimer;
- (id)applicationBundleID;
- (void)setIsUnitTestingAccount:(bool)arg1;
- (bool)isUnitTestingAccount;
- (void)clear;
- (void)setQueue:(id)arg1;
- (id)queue;
- (void)dealloc;
- (void).cxx_destruct;

@end