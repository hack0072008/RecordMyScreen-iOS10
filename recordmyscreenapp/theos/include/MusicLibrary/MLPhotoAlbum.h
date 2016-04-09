/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>
#import "MLPhotoAlbum.h"
#import "MusicLibrary-Structs.h"

@class NSArray, NSString, NSDictionary;

@interface MLPhotoAlbum : NSObject {
@private
	int _albumID;
	int _filter;
	NSString* _albumName;
	NSString* _uuid;
	NSArray* _imagesAndVideos;
	NSArray* _filteredImages;
	int _cachedCount;
	id _posterImage;
	BOOL _imagesLoaded;
	BOOL _isLibrary;
	unsigned char _albumKind;
	unsigned long long _playlistID;
	unsigned long long _songID;
	int _imageCount;
	int _videoCount;
	NSDictionary* _slideshowSettings;
	int _keyPhotoKeyITunes;
	int _keyPhotoFaceIndexITunes;
	int _posterImageIndex;
	unsigned _didSetPosterImageIndex : 1;
}
+(id)libraryAlbum;
-(instancetype)init;
-(instancetype)initWithAlbumID:(unsigned)albumID albumName:(id)name;
-(void)dealloc;
-(id)description;
-(id)faceImageWithSize:(CGSize)size returnLocationInImage:(CGRect*)image;
-(id)_posterImage;
-(void)_setPosterImage:(id)image;
-(unsigned)albumID;
-(id)name;
-(void)setName:(id)name;
-(id)uuid;
-(void)setUuid:(id)uuid;
-(int)albumKind;
-(void)setAlbumKind:(int)kind;
-(BOOL)isLibrary;
-(void)setLibrary:(BOOL)library;
-(BOOL)isEmpty;
-(BOOL)isEditable;
-(BOOL)deletedWhenEmpty;
-(id)images;
-(id)imagesAndVideos;
-(BOOL)containsUnknownItems;
-(id)imagesWithoutUnknownItems;
-(void)setImages:(id)images;
-(void)insertImage:(id)image atIndex:(unsigned)index;
-(void)addImage:(id)image;
-(unsigned)insertImageByDate:(id)date;
-(void)removeImage:(id)image;
-(id)imageWithImageID:(int)imageID;
-(int)indexOfPhoto:(id)photo;
-(int)count;
-(int)imageCount;
-(int)videoCount;
-(void)deleteImageAtIndex:(int)index;
-(void)deleteImagesAtIndexes:(id)indexes;
-(unsigned long long)slideshowPlaylistID;
-(void)setSlideshowPlaylistID:(unsigned long long)anId;
-(unsigned long long)slideshowSongID;
-(void)setSlideshowSongID:(unsigned long long)anId;
-(id)slideshowSettings;
-(void)setSlideshowSettings:(id)settings;
-(BOOL)imagesLoaded;
-(void)setImagesLoaded:(BOOL)loaded;
-(int)cachedCount;
-(void)setCachedCount:(int)count;
-(int)filter;
-(void)setFilter:(int)filter;
-(int)keyPhotoKey;
-(void)setKeyPhotoKey:(int)key;
-(int)keyPhotoFaceIndex;
-(void)setKeyPhotoFaceIndex:(int)index;
-(int)indexOfPosterImage;
-(id)photoAlbumSlideshowSettings;
-(void)setPhotoAlbumSlideshowSettings:(id)settings;
@end

@interface MLPhotoAlbum (Internal)
-(void)_reloadFilteredImages;
-(void)_invalidateFilteredImages;
-(void)_setFilteredImages:(id)images;
@end

