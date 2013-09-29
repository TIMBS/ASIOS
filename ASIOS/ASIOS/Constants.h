//
//  Constants.h
//  ASIOS
//
//  Created by  Nick Pershin on 9/29/13.
//  Copyright (c) 2013  Nick Pershin. All rights reserved.
//

#ifndef ASIOS_Constants_h
#define ASIOS_Constants_h

#pragma mark WBXML constants (tokens)

#define SWITCH_PAGE 0x00
#define END         0x01
#define ENTITY      0x02
#define STR_I       0x03
#define LITERAL     0x04
#define EXT_I_0     0x40
#define EXT_I_1     0x41
#define EXT_I_2     0x42
#define PI          0x43
#define LITERAL_C   0x44
#define EXT_T_0     0x80
#define EXT_T_1     0x81
#define EXT_T_2     0x82
#define STR_T       0x83
#define LITERAL_A   0x84
#define EXT_0       0xC0
#define EXT_1       0xC1
#define EXT_2       0xC2
#define OPAQUE      0xC3
#define LITERAL_AC  0xC4
//#define WITH_CONTENT  0x40 // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< !!! ???

#pragma mark EAS WBXML tags (tokens)

// Wbxml page definitions for EAS
#define AIRSYNC  	0x00
#define CONTACTS  	0x01
#define EMAIL  		0x02
#define CALENDAR  	0x04
#define MOVE  		0x05
#define GIE  		0x06
#define FOLDER  	0x07
#define MREQ  		0x08
#define TASK  		0x09
#define CONTACTS2  	0x0C
#define PING  		0x0D
#define PROVISION  	0x0E
#define SEARCH  	0x0F
#define GAL  		0x10
#define BASE  		0x11
#define SETTINGS  	0x12
#define DOCS  		0x13
#define ITEMS  		0x14
// 14.0
#define COMPOSE  	0x15
#define EMAIL2  	0x16
// 14.1
#define NOTES  		0x17
#define RIGHTS  	0x18

// Shift applied to page numbers to generate tag
#define PAGESHIFT 	6
#define PAGEMASK  	0x3F // 6 bits


const int SYNC_PAGE	= 0 << PAGESHIFT;
const int SYNC_SYNC 			= SYNC_PAGE + 5;
const int SYNC_RESPONSES		= SYNC_PAGE + 6;
const int SYNC_ADD 				= SYNC_PAGE + 7;
const int SYNC_CHANGE 			= SYNC_PAGE + 8;
const int SYNC_DELETE 			= SYNC_PAGE + 9;
const int SYNC_FETCH 			= SYNC_PAGE + 0xA;
const int SYNC_SYNC_KEY 		= SYNC_PAGE + 0xB;
const int SYNC_CLIENT_ID 		= SYNC_PAGE + 0xC;
const int SYNC_SERVER_ID 		= SYNC_PAGE + 0xD;
const int SYNC_STATUS 			= SYNC_PAGE + 0xE;
const int SYNC_COLLECTION 		= SYNC_PAGE + 0xF;
const int SYNC_CLASS 			= SYNC_PAGE + 0x10;
const int SYNC_VERSION 			= SYNC_PAGE + 0x11;
const int SYNC_COLLECTION_ID 	= SYNC_PAGE + 0x12;
const int SYNC_GET_CHANGES 		= SYNC_PAGE + 0x13;
const int SYNC_MORE_AVAILABLE 	= SYNC_PAGE + 0x14;
const int SYNC_WINDOW_SIZE 		= SYNC_PAGE + 0x15;
const int SYNC_COMMANDS 		= SYNC_PAGE + 0x16;
const int SYNC_OPTIONS 			= SYNC_PAGE + 0x17;
const int SYNC_FILTER_TYPE 		= SYNC_PAGE + 0x18;
const int SYNC_TRUNCATION 		= SYNC_PAGE + 0x19;
const int SYNC_RTF_TRUNCATION 	= SYNC_PAGE + 0x1A;
const int SYNC_CONFLICT 		= SYNC_PAGE + 0x1B;
const int SYNC_COLLECTIONS 		= SYNC_PAGE + 0x1C;
const int SYNC_APPLICATION_DATA = SYNC_PAGE + 0x1D;
const int SYNC_DELETES_AS_MOVES = SYNC_PAGE + 0x1E;
const int SYNC_NOTIFY_GUID 		= SYNC_PAGE + 0x1F;
const int SYNC_SUPPORTED 		= SYNC_PAGE + 0x20;
const int SYNC_SOFT_DELETE 		= SYNC_PAGE + 0x21;
const int SYNC_MIME_SUPPORT 	= SYNC_PAGE + 0x22;
const int SYNC_MIME_TRUNCATION 	= SYNC_PAGE + 0x23;
const int SYNC_WAIT 			= SYNC_PAGE + 0x24;
const int SYNC_LIMIT 			= SYNC_PAGE + 0x25;
const int SYNC_PARTIAL 			= SYNC_PAGE + 0x26;


const int GIE_PAGE = GIE << PAGESHIFT;
const int GIE_GET_ITEM_ESTIMATE = GIE_PAGE + 5;
const int GIE_VERSION 			= GIE_PAGE + 6;
const int GIE_COLLECTIONS 		= GIE_PAGE + 7;
const int GIE_COLLECTION 		= GIE_PAGE + 8;
const int GIE_CLASS 			= GIE_PAGE + 9;
const int GIE_COLLECTION_ID 	= GIE_PAGE + 0xA;
const int GIE_DATE_TIME 		= GIE_PAGE + 0xB;
const int GIE_ESTIMATE 			= GIE_PAGE + 0xC;
const int GIE_RESPONSE 			= GIE_PAGE + 0xD;
const int GIE_STATUS 			= GIE_PAGE + 0xE;


const int CONTACTS_PAGE = CONTACTS << PAGESHIFT;
const int CONTACTS_ANNIVERSARY 					= CONTACTS_PAGE + 5;
const int CONTACTS_ASSISTANT_NAME 				= CONTACTS_PAGE + 6;
const int CONTACTS_ASSISTANT_TELEPHONE_NUMBER 	= CONTACTS_PAGE + 7;
const int CONTACTS_BIRTHDAY 					= CONTACTS_PAGE + 8;
const int CONTACTS_BODY 						= CONTACTS_PAGE + 9;
const int CONTACTS_BODY_SIZE 					= CONTACTS_PAGE + 0xA;
const int CONTACTS_BODY_TRUNCATED 				= CONTACTS_PAGE + 0xB;
const int CONTACTS_BUSINESS2_TELEPHONE_NUMBER 	= CONTACTS_PAGE + 0xC;
const int CONTACTS_BUSINESS_ADDRESS_CITY 		= CONTACTS_PAGE + 0xD;
const int CONTACTS_BUSINESS_ADDRESS_COUNTRY 	= CONTACTS_PAGE + 0xE;
const int CONTACTS_BUSINESS_ADDRESS_POSTAL_CODE = CONTACTS_PAGE + 0xF;
const int CONTACTS_BUSINESS_ADDRESS_STATE 		= CONTACTS_PAGE + 0x10;
const int CONTACTS_BUSINESS_ADDRESS_STREET 		= CONTACTS_PAGE + 0x11;
const int CONTACTS_BUSINESS_FAX_NUMBER 			= CONTACTS_PAGE + 0x12;
const int CONTACTS_BUSINESS_TELEPHONE_NUMBER 	= CONTACTS_PAGE + 0x13;
const int CONTACTS_CAR_TELEPHONE_NUMBER 		= CONTACTS_PAGE + 0x14;
const int CONTACTS_CATEGORIES 					= CONTACTS_PAGE + 0x15;
const int CONTACTS_CATEGORY 					= CONTACTS_PAGE + 0x16;
const int CONTACTS_CHILDREN 					= CONTACTS_PAGE + 0x17;
const int CONTACTS_CHILD 						= CONTACTS_PAGE + 0x18;
const int CONTACTS_COMPANY_NAME 				= CONTACTS_PAGE + 0x19;
const int CONTACTS_DEPARTMENT 					= CONTACTS_PAGE + 0x1A;
const int CONTACTS_EMAIL1_ADDRESS 				= CONTACTS_PAGE + 0x1B;
const int CONTACTS_EMAIL2_ADDRESS 				= CONTACTS_PAGE + 0x1C;
const int CONTACTS_EMAIL3_ADDRESS 				= CONTACTS_PAGE + 0x1D;
const int CONTACTS_FILE_AS 						= CONTACTS_PAGE + 0x1E;
const int CONTACTS_FIRST_NAME 					= CONTACTS_PAGE + 0x1F;
const int CONTACTS_HOME2_TELEPHONE_NUMBER 		= CONTACTS_PAGE + 0x20;
const int CONTACTS_HOME_ADDRESS_CITY 			= CONTACTS_PAGE + 0x21;
const int CONTACTS_HOME_ADDRESS_COUNTRY 		= CONTACTS_PAGE + 0x22;
const int CONTACTS_HOME_ADDRESS_POSTAL_CODE 	= CONTACTS_PAGE + 0x23;
const int CONTACTS_HOME_ADDRESS_STATE 			= CONTACTS_PAGE + 0x24;
const int CONTACTS_HOME_ADDRESS_STREET 			= CONTACTS_PAGE + 0x25;
const int CONTACTS_HOME_FAX_NUMBER 				= CONTACTS_PAGE + 0x26;
const int CONTACTS_HOME_TELEPHONE_NUMBER 		= CONTACTS_PAGE + 0x27;
const int CONTACTS_JOB_TITLE 					= CONTACTS_PAGE + 0x28;
const int CONTACTS_LAST_NAME 					= CONTACTS_PAGE + 0x29;
const int CONTACTS_MIDDLE_NAME 					= CONTACTS_PAGE + 0x2A;
const int CONTACTS_MOBILE_TELEPHONE_NUMBER 		= CONTACTS_PAGE + 0x2B;
const int CONTACTS_OFFICE_LOCATION 				= CONTACTS_PAGE + 0x2C;
const int CONTACTS_OTHER_ADDRESS_CITY 			= CONTACTS_PAGE + 0x2D;
const int CONTACTS_OTHER_ADDRESS_COUNTRY 		= CONTACTS_PAGE + 0x2E;
const int CONTACTS_OTHER_ADDRESS_POSTAL_CODE 	= CONTACTS_PAGE + 0x2F;
const int CONTACTS_OTHER_ADDRESS_STATE 			= CONTACTS_PAGE + 0x30;
const int CONTACTS_OTHER_ADDRESS_STREET 		= CONTACTS_PAGE + 0x31;
const int CONTACTS_PAGER_NUMBER 				= CONTACTS_PAGE + 0x32;
const int CONTACTS_RADIO_TELEPHONE_NUMBER 		= CONTACTS_PAGE + 0x33;
const int CONTACTS_SPOUSE 						= CONTACTS_PAGE + 0x34;
const int CONTACTS_SUFFIX 						= CONTACTS_PAGE + 0x35;
const int CONTACTS_TITLE 						= CONTACTS_PAGE + 0x36;
const int CONTACTS_WEBPAGE 						= CONTACTS_PAGE + 0x37;
const int CONTACTS_YOMI_COMPANY_NAME 			= CONTACTS_PAGE + 0x38;
const int CONTACTS_YOMI_FIRST_NAME 				= CONTACTS_PAGE + 0x39;
const int CONTACTS_YOMI_LAST_NAME 				= CONTACTS_PAGE + 0x3A;
const int CONTACTS_COMPRESSED_RTF 				= CONTACTS_PAGE + 0x3B;
const int CONTACTS_PICTURE 						= CONTACTS_PAGE + 0x3C;


const int CALENDAR_PAGE = CALENDAR << PAGESHIFT;
const int CALENDAR_TIME_ZONE 					= CALENDAR_PAGE + 5;
const int CALENDAR_ALL_DAY_EVENT 				= CALENDAR_PAGE + 6;
const int CALENDAR_ATTENDEES 					= CALENDAR_PAGE + 7;
const int CALENDAR_ATTENDEE 					= CALENDAR_PAGE + 8;
const int CALENDAR_ATTENDEE_EMAIL 				= CALENDAR_PAGE + 9;
const int CALENDAR_ATTENDEE_NAME 				= CALENDAR_PAGE + 0xA;
const int CALENDAR_BODY 						= CALENDAR_PAGE + 0xB;
const int CALENDAR_BODY_TRUNCATED 				= CALENDAR_PAGE + 0xC;
const int CALENDAR_BUSY_STATUS 					= CALENDAR_PAGE + 0xD;
const int CALENDAR_CATEGORIES 					= CALENDAR_PAGE + 0xE;
const int CALENDAR_CATEGORY 					= CALENDAR_PAGE + 0xF;
const int CALENDAR_COMPRESSED_RTF 				= CALENDAR_PAGE + 0x10;
const int CALENDAR_DTSTAMP 						= CALENDAR_PAGE + 0x11;
const int CALENDAR_END_TIME 					= CALENDAR_PAGE + 0x12;
const int CALENDAR_EXCEPTION 					= CALENDAR_PAGE + 0x13;
const int CALENDAR_EXCEPTIONS 					= CALENDAR_PAGE + 0x14;
const int CALENDAR_EXCEPTION_IS_DELETED 		= CALENDAR_PAGE + 0x15;
const int CALENDAR_EXCEPTION_START_TIME 		= CALENDAR_PAGE + 0x16;
const int CALENDAR_LOCATION 					= CALENDAR_PAGE + 0x17;
const int CALENDAR_MEETING_STATUS 				= CALENDAR_PAGE + 0x18;
const int CALENDAR_ORGANIZER_EMAIL 				= CALENDAR_PAGE + 0x19;
const int CALENDAR_ORGANIZER_NAME 				= CALENDAR_PAGE + 0x1A;
const int CALENDAR_RECURRENCE 					= CALENDAR_PAGE + 0x1B;
const int CALENDAR_RECURRENCE_TYPE 				= CALENDAR_PAGE + 0x1C;
const int CALENDAR_RECURRENCE_UNTIL 			= CALENDAR_PAGE + 0x1D;
const int CALENDAR_RECURRENCE_OCCURRENCES 		= CALENDAR_PAGE + 0x1E;
const int CALENDAR_RECURRENCE_INTERVAL 			= CALENDAR_PAGE + 0x1F;
const int CALENDAR_RECURRENCE_DAYOFWEEK 		= CALENDAR_PAGE + 0x20;
const int CALENDAR_RECURRENCE_DAYOFMONTH 		= CALENDAR_PAGE + 0x21;
const int CALENDAR_RECURRENCE_WEEKOFMONTH 		= CALENDAR_PAGE + 0x22;
const int CALENDAR_RECURRENCE_MONTHOFYEAR 		= CALENDAR_PAGE + 0x23;
const int CALENDAR_REMINDER_MINS_BEFORE 		= CALENDAR_PAGE + 0x24;
const int CALENDAR_SENSITIVITY 					= CALENDAR_PAGE + 0x25;
const int CALENDAR_SUBJECT 						= CALENDAR_PAGE + 0x26;
const int CALENDAR_START_TIME 					= CALENDAR_PAGE + 0x27;
const int CALENDAR_UID 							= CALENDAR_PAGE + 0x28;
const int CALENDAR_ATTENDEE_STATUS 				= CALENDAR_PAGE + 0x29;
const int CALENDAR_ATTENDEE_TYPE 				= CALENDAR_PAGE + 0x2A;
const int CALENDAR_ATTACHMENT 					= CALENDAR_PAGE + 0x2B;
const int CALENDAR_ATTACHMENTS 					= CALENDAR_PAGE + 0x2C;
const int CALENDAR_ATT_NAME 					= CALENDAR_PAGE + 0x2D;
const int CALENDAR_ATT_SIZE 					= CALENDAR_PAGE + 0x2E;
const int CALENDAR_ATT_OID 						= CALENDAR_PAGE + 0x2F;
const int CALENDAR_ATT_METHOD 					= CALENDAR_PAGE + 0x30;
const int CALENDAR_ATT_REMOVED 					= CALENDAR_PAGE + 0x31;
const int CALENDAR_DISPLAY_NAME 				= CALENDAR_PAGE + 0x32;
const int CALENDAR_DISALLOW_NEW_TIME_PROPOSAL 	= CALENDAR_PAGE + 0x33;
const int CALENDAR_RESPONSE_REQUESTED 			= CALENDAR_PAGE + 0x34;
const int CALENDAR_APPOINTMENT_REPLY_TIME 		= CALENDAR_PAGE + 0x35;
const int CALENDAR_RESPONSE_TYPE 				= CALENDAR_PAGE + 0x36;
const int CALENDAR_CALENDAR_TYPE 				= CALENDAR_PAGE + 0x37;
const int CALENDAR_IS_LEAP_MONTH 				= CALENDAR_PAGE + 0x38;
const int CALENDAR_FIRST_DAY_OF_WEEK 			= CALENDAR_PAGE + 0x39;
const int CALENDAR_ONLINE_MEETING_CONFLINK 		= CALENDAR_PAGE + 0x3A;
const int CALENDAR_ONLINE_MEETING_EXTERNAL_LINK = CALENDAR_PAGE + 0x3B;


const int FOLDER_PAGE = FOLDER << PAGESHIFT;
const int FOLDER_FOLDERS 		= FOLDER_PAGE + 5;
const int FOLDER_FOLDER 		= FOLDER_PAGE + 6;
const int FOLDER_DISPLAY_NAME 	= FOLDER_PAGE + 7;
const int FOLDER_SERVER_ID 		= FOLDER_PAGE + 8;
const int FOLDER_PARENT_ID 		= FOLDER_PAGE + 9;
const int FOLDER_TYPE 			= FOLDER_PAGE + 0xA;
const int FOLDER_RESPONSE 		= FOLDER_PAGE + 0xB;
const int FOLDER_STATUS 		= FOLDER_PAGE + 0xC;
const int FOLDER_CONTENT_CLASS 	= FOLDER_PAGE + 0xD;
const int FOLDER_CHANGES 		= FOLDER_PAGE + 0xE;
const int FOLDER_ADD 			= FOLDER_PAGE + 0xF;
const int FOLDER_DELETE 		= FOLDER_PAGE + 0x10;
const int FOLDER_UPDATE 		= FOLDER_PAGE + 0x11;
const int FOLDER_SYNC_KEY 		= FOLDER_PAGE + 0x12;
const int FOLDER_FOLDER_CREATE 	= FOLDER_PAGE + 0x13;
const int FOLDER_FOLDER_DELETE	= FOLDER_PAGE + 0x14;
const int FOLDER_FOLDER_UPDATE 	= FOLDER_PAGE + 0x15;
const int FOLDER_FOLDER_SYNC 	= FOLDER_PAGE + 0x16;
const int FOLDER_COUNT 			= FOLDER_PAGE + 0x17;
const int FOLDER_VERSION 		= FOLDER_PAGE + 0x18;


const int MREQ_PAGE = MREQ << PAGESHIFT;
const int MREQ_CAL_ID 			= MREQ_PAGE + 5;
const int MREQ_COLLECTION_ID 	= MREQ_PAGE + 6;
const int MREQ_MEETING_RESPONSE = MREQ_PAGE + 7;
const int MREQ_REQ_ID 			= MREQ_PAGE + 8;
const int MREQ_REQUEST 			= MREQ_PAGE + 9;
const int MREQ_RESULT 			= MREQ_PAGE + 0xA;
const int MREQ_STATUS 			= MREQ_PAGE + 0xB;
const int MREQ_USER_RESPONSE 	= MREQ_PAGE + 0xC;
const int MREQ_VERSION 			= MREQ_PAGE + 0xD;


const int EMAIL_PAGE = EMAIL << PAGESHIFT;
const int EMAIL_ATTACHMENT 					= EMAIL_PAGE + 5;
const int EMAIL_ATTACHMENTS 				= EMAIL_PAGE + 6;
const int EMAIL_ATT_NAME 					= EMAIL_PAGE + 7;
const int EMAIL_ATT_SIZE 					= EMAIL_PAGE + 8;
const int EMAIL_ATT0ID 						= EMAIL_PAGE + 9;
const int EMAIL_ATT_METHOD 					= EMAIL_PAGE + 0xA;
const int EMAIL_ATT_REMOVED 				= EMAIL_PAGE + 0xB;
const int EMAIL_BODY 						= EMAIL_PAGE + 0xC;
const int EMAIL_BODY_SIZE 					= EMAIL_PAGE + 0xD;
const int EMAIL_BODY_TRUNCATED 				= EMAIL_PAGE + 0xE;
const int EMAIL_DATE_RECEIVED 				= EMAIL_PAGE + 0xF;
const int EMAIL_DISPLAY_NAME 				= EMAIL_PAGE + 0x10;
const int EMAIL_DISPLAY_TO 					= EMAIL_PAGE + 0x11;
const int EMAIL_IMPORTANCE 					= EMAIL_PAGE + 0x12;
const int EMAIL_MESSAGE_CLASS 				= EMAIL_PAGE + 0x13;
const int EMAIL_SUBJECT 					= EMAIL_PAGE + 0x14;
const int EMAIL_READ 						= EMAIL_PAGE + 0x15;
const int EMAIL_TO 							= EMAIL_PAGE + 0x16;
const int EMAIL_CC 							= EMAIL_PAGE + 0x17;
const int EMAIL_FROM 						= EMAIL_PAGE + 0x18;
const int EMAIL_REPLY_TO 					= EMAIL_PAGE + 0x19;
const int EMAIL_ALL_DAY_EVENT 				= EMAIL_PAGE + 0x1A;
const int EMAIL_CATEGORIES 					= EMAIL_PAGE + 0x1B;
const int EMAIL_CATEGORY 					= EMAIL_PAGE + 0x1C;
const int EMAIL_DTSTAMP 					= EMAIL_PAGE + 0x1D;
const int EMAIL_END_TIME 					= EMAIL_PAGE + 0x1E;
const int EMAIL_INSTANCE_TYPE 				= EMAIL_PAGE + 0x1F;
const int EMAIL_INTD_BUSY_STATUS 			= EMAIL_PAGE + 0x20;
const int EMAIL_LOCATION 					= EMAIL_PAGE + 0x21;
const int EMAIL_MEETING_REQUEST 			= EMAIL_PAGE + 0x22;
const int EMAIL_ORGANIZER 					= EMAIL_PAGE + 0x23;
const int EMAIL_RECURRENCE_ID 				= EMAIL_PAGE + 0x24;
const int EMAIL_REMINDER 					= EMAIL_PAGE + 0x25;
const int EMAIL_RESPONSE_REQUESTED 			= EMAIL_PAGE + 0x26;
const int EMAIL_RECURRENCES 				= EMAIL_PAGE + 0x27;
const int EMAIL_RECURRENCE 					= EMAIL_PAGE + 0x28;
const int EMAIL_RECURRENCE_TYPE 			= EMAIL_PAGE + 0x29;
const int EMAIL_RECURRENCE_UNTIL 			= EMAIL_PAGE + 0x2A;
const int EMAIL_RECURRENCE_OCCURRENCES 		= EMAIL_PAGE + 0x2B;
const int EMAIL_RECURRENCE_INTERVAL 		= EMAIL_PAGE + 0x2C;
const int EMAIL_RECURRENCE_DAYOFWEEK 		= EMAIL_PAGE + 0x2D;
const int EMAIL_RECURRENCE_DAYOFMONTH 		= EMAIL_PAGE + 0x2E;
const int EMAIL_RECURRENCE_WEEKOFMONTH 		= EMAIL_PAGE + 0x2F;
const int EMAIL_RECURRENCE_MONTHOFYEAR 		= EMAIL_PAGE + 0x30;
const int EMAIL_START_TIME 					= EMAIL_PAGE + 0x31;
const int EMAIL_SENSITIVITY 				= EMAIL_PAGE + 0x32;
const int EMAIL_TIME_ZONE 					= EMAIL_PAGE + 0x33;
const int EMAIL_GLOBAL_OBJID 				= EMAIL_PAGE + 0x34;
const int EMAIL_THREAD_TOPIC 				= EMAIL_PAGE + 0x35;
const int EMAIL_MIME_DATA 					= EMAIL_PAGE + 0x36;
const int EMAIL_MIME_TRUNCATED 				= EMAIL_PAGE + 0x37;
const int EMAIL_MIME_SIZE 					= EMAIL_PAGE + 0x38;
const int EMAIL_INTERNET_CPID 				= EMAIL_PAGE + 0x39;
const int EMAIL_FLAG 						= EMAIL_PAGE + 0x3A;
const int EMAIL_FLAG_STATUS 				= EMAIL_PAGE + 0x3B;
const int EMAIL_CONTENT_CLASS 				= EMAIL_PAGE + 0x3C;
const int EMAIL_FLAG_TYPE 					= EMAIL_PAGE + 0x3D;
const int EMAIL_COMPLETE_TIME 				= EMAIL_PAGE + 0x3E;
const int EMAIL_DISALLOW_NEW_TIME_PROPOSAL 	= EMAIL_PAGE + 0x3F;


const int TASK_PAGE = TASK << PAGESHIFT;
const int TASK_BODY 					= TASK_PAGE + 5;
const int TASK_BODY_SIZE 				= TASK_PAGE + 6;
const int TASK_BODY_TRUNCATED 			= TASK_PAGE + 7;
const int TASK_CATEGORIES 				= TASK_PAGE + 8;
const int TASK_CATEGORY 				= TASK_PAGE + 9;
const int TASK_COMPLETE 				= TASK_PAGE + 0xA;
const int TASK_DATE_COMPLETED 			= TASK_PAGE + 0xB;
const int TASK_DUE_DATE 				= TASK_PAGE + 0xC;
const int TASK_UTC_DUE_DATE 			= TASK_PAGE + 0xD;
const int TASK_IMPORTANCE 				= TASK_PAGE + 0xE;
const int TASK_RECURRENCE 				= TASK_PAGE + 0xF;
const int TASK_RECURRENCE_TYPE 			= TASK_PAGE + 0x10;
const int TASK_RECURRENCE_START 		= TASK_PAGE + 0x11;
const int TASK_RECURRENCE_UNTIL 		= TASK_PAGE + 0x12;
const int TASK_RECURRENCE_OCCURRENCES 	= TASK_PAGE + 0x13;
const int TASK_RECURRENCE_INTERVAL 		= TASK_PAGE + 0x14;
const int TASK_RECURRENCE_DAY_OF_MONTH 	= TASK_PAGE + 0x15;
const int TASK_RECURRENCE_DAY_OF_WEEK 	= TASK_PAGE + 0x16;
const int TASK_RECURRENCE_WEEK_OF_MONTH = TASK_PAGE + 0x17;
const int TASK_RECURRENCE_MONTH_OF_YEAR = TASK_PAGE + 0x18;
const int TASK_RECURRENCE_REGENERATE 	= TASK_PAGE + 0x19;
const int TASK_RECURRENCE_DEAD_OCCUR 	= TASK_PAGE + 0x1A;
const int TASK_REMINDER_SET 			= TASK_PAGE + 0x1B;
const int TASK_REMINDER_TIME 			= TASK_PAGE + 0x1C;
const int TASK_SENSITIVITY 				= TASK_PAGE + 0x1D;
const int TASK_START_DATE 				= TASK_PAGE + 0x1E;
const int TASK_UTC_START_DATE 			= TASK_PAGE + 0x1F;
const int TASK_SUBJECT 					= TASK_PAGE + 0x20;
const int COMPRESSED_RTF 				= TASK_PAGE + 0x21;
const int ORDINAL_DATE 					= TASK_PAGE + 0x22;
const int SUBORDINAL_DATE 				= TASK_PAGE + 0x23;


const int MOVE_PAGE = MOVE << PAGESHIFT;
const int MOVE_MOVE_ITEMS 	= MOVE_PAGE + 5;
const int MOVE_MOVE 		= MOVE_PAGE + 6;
const int MOVE_SRCMSGID 	= MOVE_PAGE + 7;
const int MOVE_SRCFLDID 	= MOVE_PAGE + 8;
const int MOVE_DSTFLDID 	= MOVE_PAGE + 9;
const int MOVE_RESPONSE 	= MOVE_PAGE + 0xA;
const int MOVE_STATUS 		= MOVE_PAGE + 0xB;
const int MOVE_DSTMSGID 	= MOVE_PAGE + 0xC;


const int CONTACTS2_PAGE = CONTACTS2 << PAGESHIFT;
const int CONTACTS2_CUSTOMER_ID 		= CONTACTS2_PAGE + 5;
const int CONTACTS2_GOVERNMENT_ID 		= CONTACTS2_PAGE + 6;
const int CONTACTS2_IM_ADDRESS 			= CONTACTS2_PAGE + 7;
const int CONTACTS2_IM_ADDRESS_2 		= CONTACTS2_PAGE + 8;
const int CONTACTS2_IM_ADDRESS_3 		= CONTACTS2_PAGE + 9;
const int CONTACTS2_MANAGER_NAME 		= CONTACTS2_PAGE + 0xA;
const int CONTACTS2_COMPANY_MAIN_PHONE 	= CONTACTS2_PAGE + 0xB;
const int CONTACTS2_ACCOUNT_NAME 		= CONTACTS2_PAGE + 0xC;
const int CONTACTS2_NICKNAME 			= CONTACTS2_PAGE + 0xD;
const int CONTACTS2_MMS 				= CONTACTS2_PAGE + 0xE;


const int PING_PAGE = PING << PAGESHIFT;
const int PING_PING 				= PING_PAGE + 5;
const int PING_AUTD_STATE 			= PING_PAGE + 6;
const int PING_STATUS 				= PING_PAGE + 7;
const int PING_HEARTBEAT_INTERVAL 	= PING_PAGE + 8;
const int PING_FOLDERS 				= PING_PAGE + 9;
const int PING_FOLDER 				= PING_PAGE + 0xA;
const int PING_ID 					= PING_PAGE + 0xB;
const int PING_CLASS 				= PING_PAGE + 0xC;
const int PING_MAX_FOLDERS 			= PING_PAGE + 0xD;


const int SEARCH_PAGE = SEARCH << PAGESHIFT;
const int SEARCH_SEARCH 			= SEARCH_PAGE + 5;
const int SEARCH_STORES 			= SEARCH_PAGE + 6;
const int SEARCH_STORE 				= SEARCH_PAGE + 7;
const int SEARCH_NAME 				= SEARCH_PAGE + 8;
const int SEARCH_QUERY 				= SEARCH_PAGE + 9;
const int SEARCH_OPTIONS 			= SEARCH_PAGE + 0xA;
const int SEARCH_RANGE 				= SEARCH_PAGE + 0xB;
const int SEARCH_STATUS 			= SEARCH_PAGE + 0xC;
const int SEARCH_RESPONSE 			= SEARCH_PAGE + 0xD;
const int SEARCH_RESULT 			= SEARCH_PAGE + 0xE;
const int SEARCH_PROPERTIES 		= SEARCH_PAGE + 0xF;
const int SEARCH_TOTAL 				= SEARCH_PAGE + 0x10;
const int SEARCH_EQUAL_TO 			= SEARCH_PAGE + 0x11;
const int SEARCH_VALUE 				= SEARCH_PAGE + 0x12;
const int SEARCH_AND 				= SEARCH_PAGE + 0x13;
const int SEARCH_OR 				= SEARCH_PAGE + 0x14;
const int SEARCH_FREE_TEXT 			= SEARCH_PAGE + 0x15;
const int SEARCH_SUBSTRING_OP 		= SEARCH_PAGE + 0x16;
const int SEARCH_DEEP_TRAVERSAL 	= SEARCH_PAGE + 0x17;
const int SEARCH_LONG_ID 			= SEARCH_PAGE + 0x18;
const int SEARCH_REBUILD_RESULTS 	= SEARCH_PAGE + 0x19;
const int SEARCH_LESS_THAN 			= SEARCH_PAGE + 0x1A;
const int SEARCH_GREATER_THAN 		= SEARCH_PAGE + 0x1B;
const int SEARCH_SCHEMA 			= SEARCH_PAGE + 0x1C;
const int SEARCH_SUPPORTED 			= SEARCH_PAGE + 0x1D;
const int SEARCH_USER_NAME 			= SEARCH_PAGE + 0x1E;
const int SEARCH_PASSWORD 			= SEARCH_PAGE + 0x1F;
const int SEARCH_CONVERSATION_ID 	= SEARCH_PAGE + 0x20;
// The following tags are supported in MS-AS 14.1 and above
const int SEARCH_PICTURE 			= SEARCH_PAGE + 0x21;
const int SEARCH_MAX_SIZE 			= SEARCH_PAGE + 0x22;
const int SEARCH_MAX_PICTURES 		= SEARCH_PAGE + 0x23;


const int GAL_PAGE = GAL << PAGESHIFT;
const int GAL_DISPLAY_NAME 	= GAL_PAGE + 5;
const int GAL_PHONE 		= GAL_PAGE + 6;
const int GAL_OFFICE 		= GAL_PAGE + 7;
const int GAL_TITLE 		= GAL_PAGE + 8;
const int GAL_COMPANY 		= GAL_PAGE + 9;
const int GAL_ALIAS 		= GAL_PAGE + 0xA;
const int GAL_FIRST_NAME 	= GAL_PAGE + 0xB;
const int GAL_LAST_NAME 	= GAL_PAGE + 0xC;
const int GAL_HOME_PHONE 	= GAL_PAGE + 0xD;
const int GAL_MOBILE_PHONE 	= GAL_PAGE + 0xE;
const int GAL_EMAIL_ADDRESS = GAL_PAGE + 0xF;
// The following tags are supported in MS-AS 14.1 and above
const int GAL_PICTURE 		= GAL_PAGE + 0x10;
const int GAL_STATUS 		= GAL_PAGE + 0x11;
const int GAL_DATA 			= GAL_PAGE + 0x12;


const int PROVISION_PAGE = PROVISION << PAGESHIFT;
// EAS 2.5
const int PROVISION_PROVISION 	= PROVISION_PAGE + 5;
const int PROVISION_POLICIES 	= PROVISION_PAGE + 6;
const int PROVISION_POLICY 		= PROVISION_PAGE + 7;
const int PROVISION_POLICY_TYPE = PROVISION_PAGE + 8;
const int PROVISION_POLICY_KEY 	= PROVISION_PAGE + 9;
const int PROVISION_DATA 		= PROVISION_PAGE + 0xA;
const int PROVISION_STATUS 		= PROVISION_PAGE + 0xB;
const int PROVISION_REMOTE_WIPE = PROVISION_PAGE + 0xC;
// EAS 12.0
const int PROVISION_EAS_PROVISION_DOC 					= PROVISION_PAGE + 0xD;
const int PROVISION_DEVICE_PASSWORD_ENABLED 			= PROVISION_PAGE + 0xE;
const int PROVISION_ALPHA_DEVICE_PASSWORD_ENABLED 		= PROVISION_PAGE + 0xF;
const int PROVISION_DEVICE_ENCRYPTION_ENABLED 			= PROVISION_PAGE + 0x10;
const int PROVISION_PASSWORD_RECOVERY_ENABLED 			= PROVISION_PAGE + 0x11;
const int PROVISION_ATTACHMENTS_ENABLED 				= PROVISION_PAGE + 0x13;
const int PROVISION_MIN_DEVICE_PASSWORD_LENGTH 			= PROVISION_PAGE + 0x14;
const int PROVISION_MAX_INACTIVITY_TIME_DEVICE_LOCK 	= PROVISION_PAGE + 0x15;
const int PROVISION_MAX_DEVICE_PASSWORD_FAILED_ATTEMPTS = PROVISION_PAGE + 0x16;
const int PROVISION_MAX_ATTACHMENT_SIZE 				= PROVISION_PAGE + 0x17;
const int PROVISION_ALLOW_SIMPLE_DEVICE_PASSWORD 		= PROVISION_PAGE + 0x18;
const int PROVISION_DEVICE_PASSWORD_EXPIRATION 			= PROVISION_PAGE + 0x19;
const int PROVISION_DEVICE_PASSWORD_HISTORY 			= PROVISION_PAGE + 0x1A;
const int PROVISION_MAX_SUPPORTED_TAG 					= PROVISION_DEVICE_PASSWORD_HISTORY;
// EAS 12.1
const int PROVISION_ALLOW_STORAGE_CARD 						= PROVISION_PAGE + 0x1B;
const int PROVISION_ALLOW_CAMERA 							= PROVISION_PAGE + 0x1C;
const int PROVISION_REQUIRE_DEVICE_ENCRYPTION 				= PROVISION_PAGE + 0x1D;
const int PROVISION_ALLOW_UNSIGNED_APPLICATIONS 			= PROVISION_PAGE + 0x1E;
const int PROVISION_ALLOW_UNSIGNED_INSTALLATION_PACKAGES 	= PROVISION_PAGE + 0x1F;
const int PROVISION_MIN_DEVICE_PASSWORD_COMPLEX_CHARS 		= PROVISION_PAGE + 0x20;
const int PROVISION_ALLOW_WIFI 								= PROVISION_PAGE + 0x21;
const int PROVISION_ALLOW_TEXT_MESSAGING 					= PROVISION_PAGE + 0x22;
const int PROVISION_ALLOW_POP_IMAP_EMAIL 					= PROVISION_PAGE + 0x23;
const int PROVISION_ALLOW_BLUETOOTH 						= PROVISION_PAGE + 0x24;
const int PROVISION_ALLOW_IRDA 								= PROVISION_PAGE + 0x25;
const int PROVISION_REQUIRE_MANUAL_SYNC_WHEN_ROAMING 		= PROVISION_PAGE + 0x26;
const int PROVISION_ALLOW_DESKTOP_SYNC 						= PROVISION_PAGE + 0x27;
const int PROVISION_MAX_CALENDAR_AGE_FILTER 				= PROVISION_PAGE + 0x28;
const int PROVISION_ALLOW_HTML_EMAIL 						= PROVISION_PAGE + 0x29;
const int PROVISION_MAX_EMAIL_AGE_FILTER 					= PROVISION_PAGE + 0x2A;
const int PROVISION_MAX_EMAIL_BODY_TRUNCATION_SIZE 			= PROVISION_PAGE + 0x2B;
const int PROVISION_MAX_EMAIL_HTML_BODY_TRUNCATION_SIZE 	= PROVISION_PAGE + 0x2C;
const int PROVISION_REQUIRE_SIGNED_SMIME_MESSAGES 			= PROVISION_PAGE + 0x2D;
const int PROVISION_REQUIRE_ENCRYPTED_SMIME_MESSAGES 		= PROVISION_PAGE + 0x2E;
const int PROVISION_REQUIRE_SIGNED_SMIME_ALGORITHM 			= PROVISION_PAGE + 0x2F;
const int PROVISION_REQUIRE_ENCRYPTION_SMIME_ALGORITHM 		= PROVISION_PAGE + 0x30;
const int PROVISION_ALLOW_SMIME_ENCRYPTION_NEGOTIATION 		= PROVISION_PAGE + 0x31;
const int PROVISION_ALLOW_SMIME_SOFT_CERTS 					= PROVISION_PAGE + 0x32;
const int PROVISION_ALLOW_BROWSER 							= PROVISION_PAGE + 0x33;
const int PROVISION_ALLOW_CONSUMER_EMAIL 					= PROVISION_PAGE + 0x34;
const int PROVISION_ALLOW_REMOTE_DESKTOP 					= PROVISION_PAGE + 0x35;
const int PROVISION_ALLOW_INTERNET_SHARING 					= PROVISION_PAGE + 0x36;
const int PROVISION_UNAPPROVED_IN_ROM_APPLICATION_LIST 		= PROVISION_PAGE + 0x37;
const int PROVISION_APPLICATION_NAME 						= PROVISION_PAGE + 0x38;
const int PROVISION_APPROVED_APPLICATION_LIST 				= PROVISION_PAGE + 0x39;
const int PROVISION_HASH 									= PROVISION_PAGE + 0x3A;

const int BASE_PAGE = BASE << PAGESHIFT;
const int BASE_BODY_PREFERENCE 		= BASE_PAGE + 5;
const int BASE_TYPE 				= BASE_PAGE + 6;
const int BASE_TRUNCATION_SIZE 		= BASE_PAGE + 7;
const int BASE_ALL_OR_NONE 			= BASE_PAGE + 8;
const int BASE_RESERVED 			= BASE_PAGE + 9;
const int BASE_BODY 				= BASE_PAGE + 0xA;
const int BASE_DATA 				= BASE_PAGE + 0xB;
const int BASE_ESTIMATED_DATA_SIZE 	= BASE_PAGE + 0xC;
const int BASE_TRUNCATED 			= BASE_PAGE + 0xD;
const int BASE_ATTACHMENTS 			= BASE_PAGE + 0xE;
const int BASE_ATTACHMENT 			= BASE_PAGE + 0xF;
const int BASE_DISPLAY_NAME 		= BASE_PAGE + 0x10;
const int BASE_FILE_REFERENCE 		= BASE_PAGE + 0x11;
const int BASE_METHOD 				= BASE_PAGE + 0x12;
const int BASE_CONTENT_ID 			= BASE_PAGE + 0x13;
const int BASE_CONTENT_LOCATION 	= BASE_PAGE + 0x14;
const int BASE_IS_INLINE 			= BASE_PAGE + 0x15;
const int BASE_NATIVE_BODY_TYPE 	= BASE_PAGE + 0x16;
const int BASE_CONTENT_TYPE 		= BASE_PAGE + 0x17;

const int SETTINGS_PAGE = SETTINGS << PAGESHIFT;
const int SETTINGS_SETTINGS 					= SETTINGS_PAGE + 5;
const int SETTINGS_STATUS 						= SETTINGS_PAGE + 6;
const int SETTINGS_GET 							= SETTINGS_PAGE + 7;
const int SETTINGS_SET 							= SETTINGS_PAGE + 8;
const int SETTINGS_OOF 							= SETTINGS_PAGE + 9;
const int SETTINGS_OOF_STATE 					= SETTINGS_PAGE + 0xA;
const int SETTINGS_START_TIME 					= SETTINGS_PAGE + 0xB;
const int SETTINGS_END_TIME 					= SETTINGS_PAGE + 0xC;
const int SETTINGS_OOF_MESSAGE 					= SETTINGS_PAGE + 0xD;
const int SETTINGS_APPLIES_TO_INTERNAL 			= SETTINGS_PAGE + 0xE;
const int SETTINGS_APPLIES_TO_EXTERNAL_KNOWN 	= SETTINGS_PAGE + 0xF;
const int SETTINGS_APPLIES_TO_EXTERNAL_UNKNOWN 	= SETTINGS_PAGE + 0x10;
const int SETTINGS_ENABLED 						= SETTINGS_PAGE + 0x11;
const int SETTINGS_REPLY_MESSAGE 				= SETTINGS_PAGE + 0x12;
const int SETTINGS_BODY_TYPE 					= SETTINGS_PAGE + 0x13;
const int SETTINGS_DEVICE_PASSWORD 				= SETTINGS_PAGE + 0x14;
const int SETTINGS_PASSWORD 					= SETTINGS_PAGE + 0x15;
const int SETTINGS_DEVICE_INFORMATION 			= SETTINGS_PAGE + 0x16;
const int SETTINGS_MODEL 						= SETTINGS_PAGE + 0x17;
const int SETTINGS_IMEI 						= SETTINGS_PAGE + 0x18;
const int SETTINGS_FRIENDLY_NAME 				= SETTINGS_PAGE + 0x19;
const int SETTINGS_OS 							= SETTINGS_PAGE + 0x1A;
const int SETTINGS_OS_LANGUAGE 					= SETTINGS_PAGE + 0x1B;
const int SETTINGS_PHONE_NUMBER 				= SETTINGS_PAGE + 0x1C;
const int SETTINGS_USER_INFORMATION 			= SETTINGS_PAGE + 0x1D;
const int SETTINGS_EMAIL_ADDRESS 				= SETTINGS_PAGE + 0x1E;
const int SETTINGS_SMTP_ADDRESS 				= SETTINGS_PAGE + 0x1F;
const int SETTINGS_USER_AGENT 					= SETTINGS_PAGE + 0x20;
const int SETTINGS_ENABLE_OUTGOING_SMS 			= SETTINGS_PAGE + 0x21;
const int SETTINGS_MOBILE_OPERATOR 				= SETTINGS_PAGE + 0x22;

const int ITEMS_PAGE = ITEMS << PAGESHIFT;
const int ITEMS_ITEMS 				= ITEMS_PAGE + 5;
const int ITEMS_FETCH 				= ITEMS_PAGE + 6;
const int ITEMS_STORE 				= ITEMS_PAGE + 7;
const int ITEMS_OPTIONS 			= ITEMS_PAGE + 8;
const int ITEMS_RANGE 				= ITEMS_PAGE + 9;
const int ITEMS_TOTAL 				= ITEMS_PAGE + 0xA;
const int ITEMS_PROPERTIES 			= ITEMS_PAGE + 0xB;
const int ITEMS_DATA 				= ITEMS_PAGE + 0xC;
const int ITEMS_STATUS 				= ITEMS_PAGE + 0xD;
const int ITEMS_RESPONSE 			= ITEMS_PAGE + 0xE;
const int ITEMS_VERSION 			= ITEMS_PAGE + 0xF;
const int ITEMS_SCHEMA 				= ITEMS_PAGE + 0x10;
const int ITEMS_PART 				= ITEMS_PAGE + 0x11;
const int ITEMS_EMPTY_FOLDER 		= ITEMS_PAGE + 0x12;
const int ITEMS_DELETE_SUB_FOLDERS 	= ITEMS_PAGE + 0x13;
const int ITEMS_USERNAME 			= ITEMS_PAGE + 0x14;
const int ITEMS_PASSWORD 			= ITEMS_PAGE + 0x15;
const int ITEMS_MOVE 				= ITEMS_PAGE + 0x16;
const int ITEMS_DSTFLDID 			= ITEMS_PAGE + 0x17;
const int ITEMS_CONVERSATION_ID 	= ITEMS_PAGE + 0x18;
const int ITEMS_MOVE_ALWAYS 		= ITEMS_PAGE + 0x19;

const int COMPOSE_PAGE = COMPOSE << PAGESHIFT;
const int COMPOSE_SEND_MAIL 			= COMPOSE_PAGE + 5;
const int COMPOSE_SMART_FORWARD 		= COMPOSE_PAGE + 6;
const int COMPOSE_SMART_REPLY 			= COMPOSE_PAGE + 7;
const int COMPOSE_SAVE_IN_SENT_ITEMS 	= COMPOSE_PAGE + 8;
const int COMPOSE_REPLACE_MIME 			= COMPOSE_PAGE + 9;
// There is no tag for COMPOSE_PAGE + 0xA
const int COMPOSE_SOURCE 				= COMPOSE_PAGE + 0xB;
const int COMPOSE_FOLDER_ID 			= COMPOSE_PAGE + 0xC;
const int COMPOSE_ITEM_ID 				= COMPOSE_PAGE + 0xD;
const int COMPOSE_LONG_ID 				= COMPOSE_PAGE + 0xE;
const int COMPOSE_INSTANCE_ID 			= COMPOSE_PAGE + 0xF;
const int COMPOSE_MIME 					= COMPOSE_PAGE + 0x10;
const int COMPOSE_CLIENT_ID 			= COMPOSE_PAGE + 0x11;
const int COMPOSE_STATUS 				= COMPOSE_PAGE + 0x12;
const int COMPOSE_ACCOUNT_ID 			= COMPOSE_PAGE + 0x13;

const int EMAIL2_PAGE = EMAIL2 << PAGESHIFT;
const int EMAIL2_UM_CALLER_ID 				= EMAIL2_PAGE + 5;
const int EMAIL2_UM_USER_NOTES 				= EMAIL2_PAGE + 6;
const int EMAIL2_UM_ATT_DURATION 			= EMAIL2_PAGE + 7;
const int EMAIL2_UM_ATT_ORDER 				= EMAIL2_PAGE + 8;
const int EMAIL2_CONVERSATION_ID 			= EMAIL2_PAGE + 9;
const int EMAIL2_CONVERSATION_INDEX 		= EMAIL2_PAGE + 0xA;
const int EMAIL2_LAST_VERB_EXECUTED 		= EMAIL2_PAGE + 0xB;
const int EMAIL2_LAST_VERB_EXECUTION_TIME 	= EMAIL2_PAGE + 0xC;
const int EMAIL2_RECEIVED_AS_BCC 			= EMAIL2_PAGE + 0xD;
const int EMAIL2_SENDER 					= EMAIL2_PAGE + 0xE;
const int EMAIL2_CALENDAR_TYPE 				= EMAIL2_PAGE + 0xF;
const int EMAIL2_IS_LEAP_MONTH 				= EMAIL2_PAGE + 0x10;
const int EMAIL2_ACCOUNT_ID 				= EMAIL2_PAGE + 0x11;
const int EMAIL2_FIRST_DAY_OF_WEEK 			= EMAIL2_PAGE + 0x12;
const int EMAIL2_MEETING_MESSAGE_TYPE 		= EMAIL2_PAGE + 0x13;

const int RIGHTS_PAGE = RIGHTS << PAGESHIFT;
const int RIGHTS_SUPPORT 						= RIGHTS_PAGE + 5;
const int RIGHTS_TEMPLATES 						= RIGHTS_PAGE + 6;
const int RIGHTS_TEMPLATE 						= RIGHTS_PAGE + 7;
const int RIGHTS_LICENSE 						= RIGHTS_PAGE + 8;
const int RIGHTS_EDIT_ALLOWED 					= RIGHTS_PAGE + 9;
const int RIGHTS_REPLY_ALLOWED 					= RIGHTS_PAGE + 0xA;
const int RIGHTS_REPLY_ALL_ALLOWED 				= RIGHTS_PAGE + 0xB;
const int RIGHTS_FORWARD_ALLOWED 				= RIGHTS_PAGE + 0xC;
const int RIGHTS_MODIFY_RECIPIENTS_ALLOWED 		= RIGHTS_PAGE + 0xD;
const int RIGHTS_EXTRACT_ALLOWED 				= RIGHTS_PAGE + 0xE;
const int RIGHTS_PRINT_ALLOWED 					= RIGHTS_PAGE + 0xF;
const int RIGHTS_EXPORT_ALLOWED 				= RIGHTS_PAGE + 0x10;
const int RIGHTS_PROGRAMMATIC_ACCESS_ALLOWED 	= RIGHTS_PAGE + 0x11;
const int RIGHTS_OWNER 							= RIGHTS_PAGE + 0x12;
const int RIGHTS_CONTENT_EXPIRY_DATE 			= RIGHTS_PAGE + 0x13;
const int RIGHTS_TEMPLATE_ID 					= RIGHTS_PAGE + 0x14;
const int RIGHTS_TEMPLATE_NAME 					= RIGHTS_PAGE + 0x15;
const int RIGHTS_TEMPLATE_DESCRIPTION 			= RIGHTS_PAGE + 0x16;
const int RIGHTS_CONTENT_OWNER 					= RIGHTS_PAGE + 0x17;
const int RIGHTS_REMOVE_RM_DISTRIBUTION 		= RIGHTS_PAGE + 0x18;

#endif
