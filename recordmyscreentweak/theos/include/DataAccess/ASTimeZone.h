/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <Foundation/NSTimeZone.h>
#import "ASParsingLeafNode.h"


@interface ASTimeZone : NSTimeZone <ASParsingLeafNode> {
	int _gmtOffset;
	int _dstOffset;
	SYSTEMTIME* _standardDate;
	SYSTEMTIME* _daylightDate;
	NSTimeZone* _wrappedTimeZone;
}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(id)gmt;
// in a protocol: +(BOOL)expectsContent;
-(instancetype)initWithTZNameFromCalDB:(id)calDB;
-(BOOL)_dateIsValidTransitionDate:(id)date inYear:(int)year withTimeZone:(id)timeZone;
-(id)_bestGuessedNameFromPossibilities:(id)possibilities firstTransitionDate:(SYSTEMTIME*)date secondTransitionDate:(SYSTEMTIME*)date3;
-(id)_bestGuessAtOlsonTimeZoneForOffsetInMinutes:(int)minutes firstTransitionDate:(SYSTEMTIME*)date secondTransitionDate:(SYSTEMTIME*)date3;
// in a protocol: -(instancetype)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;
// inherited: -(id)description;
// inherited: -(void)dealloc;
// in a protocol: -(int)parsingState;
-(id)dateForRule:(SYSTEMTIME*)rule inYear:(int)year;
-(int)secondsFromGMTForDate:(id)date;
-(BOOL)isDaylightSavingTimeForDate:(id)date;
-(double)daylightSavingTimeOffsetForDate:(id)date;
-(BOOL)_dateIsValidTransitionDate:(id)date inYear:(int)year outDaylightBias:(int*)bias;
-(SYSTEMTIME)_ruleForDate:(id)date;
-(XXStruct_wS5jrA*)mallocTZIForDate:(id)date;
-(id)name;
-(id)data;
-(id)abbreviationForDate:(id)date;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)date;
-(instancetype)initWithName:(id)name;
-(instancetype)initWithName:(id)name data:(id)data;
-(instancetype)initWithCodingDict:(id)codingDict;
-(id)dictForCoding;
@end

