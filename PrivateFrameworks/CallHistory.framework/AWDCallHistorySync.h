/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCallHistorySync : PBCodable <NSCopying> {
    unsigned int  _downloadRecordCount;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int downloadRecordCount : 1; 
        unsigned int uploadRecordCount : 1; 
    }  _has;
    unsigned long long  _timestamp;
    unsigned int  _uploadRecordCount;
}

@property (nonatomic) unsigned int downloadRecordCount;
@property (nonatomic) bool hasDownloadRecordCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUploadRecordCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int uploadRecordCount;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)downloadRecordCount;
- (bool)hasDownloadRecordCount;
- (bool)hasTimestamp;
- (bool)hasUploadRecordCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDownloadRecordCount:(unsigned int)arg1;
- (void)setHasDownloadRecordCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUploadRecordCount:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUploadRecordCount:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)uploadRecordCount;
- (void)writeTo:(id)arg1;

@end