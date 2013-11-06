//
//  NBPhoneNumber.h
//  libPhoneNumber
//  
//  Created by NHN Corp. Last Edited by BAND dev team (band_dev@nhn.com)
//

#import <Foundation/Foundation.h>
#import "NBPhoneNumberDefines.h"

@interface NBPhoneNumber : NSObject <NSCopying>

// from phonemetadata.pb.js
/* 1 */ @property (nonatomic, assign, readwrite) UInt32 countryCode;
/* 2 */ @property (nonatomic, assign, readwrite) UInt64 nationalNumber;
/* 3 */ @property (nonatomic, retain, readwrite) NSString *extension;
/* 4 */ @property (nonatomic, assign, readwrite) BOOL italianLeadingZero;
/* 5 */ @property (nonatomic, retain, readwrite) NSString *rawInput;
/* 6 */ @property (nonatomic, retain, readwrite) NSNumber *countryCodeSource;
/* 7 */ @property (nonatomic, retain, readwrite) NSString *preferredDomesticCarrierCode;

- (void)clearCountryCodeSource;
- (NBECountryCodeSource)getCountryCodeSourceOrDefault;

+ (instancetype)number;

@end