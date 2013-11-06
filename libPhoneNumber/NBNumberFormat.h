//
//  NBPhoneNumberFormat.h
//  libPhoneNumber
//
//  Created by NHN Corp. Last Edited by BAND dev team (band_dev@nhn.com)
//

#import <Foundation/Foundation.h>

@interface NBNumberFormat : NSObject

// from phonemetadata.pb.js
/* 1 */ @property (nonatomic, retain, readwrite) NSString *pattern;
/* 2 */ @property (nonatomic, retain, readwrite) NSString *format;
/* 3 */ @property (nonatomic, retain, readwrite) NSMutableArray *leadingDigitsPatterns;
/* 4 */ @property (nonatomic, retain, readwrite) NSString *nationalPrefixFormattingRule;
/* 6 */ @property (nonatomic, assign, readwrite) BOOL nationalPrefixOptionalWhenFormatting;
/* 5 */ @property (nonatomic, retain, readwrite) NSString *domesticCarrierCodeFormattingRule;

- (id)initWithData:(id)data;

@end
