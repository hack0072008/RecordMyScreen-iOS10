/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"
#import <Availability2.h>

@interface SBCFBundle : NSObject {
	CFBundleRef _cfBundle;
}
-(instancetype)initWithPath:(id)path;
-(instancetype)initWithCFBundle:(CFBundleRef)cfbundle;
// inherited: -(void)dealloc;
-(id)executablePath;
-(id)bundleIdentifier;
-(id)pathForResource:(id)resource ofType:(id)type;
-(id)localizedStringForKey:(id)key value:(id)value table:(id)table;
-(id)infoDictionary;
-(id)localizedInfoDictionary;
-(CFBundleRef)cfBundle __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);
@end

