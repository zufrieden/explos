<?php
/**
 * @file
 * ligue_site.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ligue_site_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'comment_body'.
  $field_bases['comment_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'comment',
    ),
    'field_name' => 'comment_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_address'.
  $field_bases['field_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_church'.
  $field_bases['field_church'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_church',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_city'.
  $field_bases['field_city'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_city',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_country'.
  $field_bases['field_country'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country',
    'indexes' => array(
      'iso2' => array(
        0 => 'iso2',
      ),
    ),
    'locked' => 0,
    'module' => 'countries',
    'settings' => array(
      'continents' => array(),
      'countries' => array(
        'AD' => 'AD',
        'AE' => 'AE',
        'AF' => 'AF',
        'AG' => 'AG',
        'AI' => 'AI',
        'AL' => 'AL',
        'AM' => 'AM',
        'AN' => 'AN',
        'AO' => 'AO',
        'AQ' => 'AQ',
        'AR' => 'AR',
        'AS' => 'AS',
        'AT' => 'AT',
        'AU' => 'AU',
        'AW' => 'AW',
        'AX' => 'AX',
        'AZ' => 'AZ',
        'BA' => 'BA',
        'BB' => 'BB',
        'BD' => 'BD',
        'BE' => 'BE',
        'BF' => 'BF',
        'BG' => 'BG',
        'BH' => 'BH',
        'BI' => 'BI',
        'BJ' => 'BJ',
        'BL' => 'BL',
        'BM' => 'BM',
        'BN' => 'BN',
        'BO' => 'BO',
        'BQ' => 'BQ',
        'BR' => 'BR',
        'BS' => 'BS',
        'BT' => 'BT',
        'BV' => 'BV',
        'BW' => 'BW',
        'BY' => 'BY',
        'BZ' => 'BZ',
        'CA' => 'CA',
        'CC' => 'CC',
        'CD' => 'CD',
        'CF' => 'CF',
        'CG' => 'CG',
        'CH' => 'CH',
        'CI' => 'CI',
        'CK' => 'CK',
        'CL' => 'CL',
        'CM' => 'CM',
        'CN' => 'CN',
        'CO' => 'CO',
        'CR' => 'CR',
        'CU' => 'CU',
        'CV' => 'CV',
        'CW' => 'CW',
        'CX' => 'CX',
        'CY' => 'CY',
        'CZ' => 'CZ',
        'DE' => 'DE',
        'DJ' => 'DJ',
        'DK' => 'DK',
        'DM' => 'DM',
        'DO' => 'DO',
        'DZ' => 'DZ',
        'EC' => 'EC',
        'EE' => 'EE',
        'EG' => 'EG',
        'EH' => 'EH',
        'ER' => 'ER',
        'ES' => 'ES',
        'ET' => 'ET',
        'FI' => 'FI',
        'FJ' => 'FJ',
        'FK' => 'FK',
        'FM' => 'FM',
        'FO' => 'FO',
        'FR' => 'FR',
        'GA' => 'GA',
        'GB' => 'GB',
        'GD' => 'GD',
        'GE' => 'GE',
        'GF' => 'GF',
        'GG' => 'GG',
        'GH' => 'GH',
        'GI' => 'GI',
        'GL' => 'GL',
        'GM' => 'GM',
        'GN' => 'GN',
        'GP' => 'GP',
        'GQ' => 'GQ',
        'GR' => 'GR',
        'GS' => 'GS',
        'GT' => 'GT',
        'GU' => 'GU',
        'GW' => 'GW',
        'GY' => 'GY',
        'HK' => 'HK',
        'HM' => 'HM',
        'HN' => 'HN',
        'HR' => 'HR',
        'HT' => 'HT',
        'HU' => 'HU',
        'ID' => 'ID',
        'IE' => 'IE',
        'IL' => 'IL',
        'IM' => 'IM',
        'IN' => 'IN',
        'IO' => 'IO',
        'IQ' => 'IQ',
        'IR' => 'IR',
        'IS' => 'IS',
        'IT' => 'IT',
        'JE' => 'JE',
        'JM' => 'JM',
        'JO' => 'JO',
        'JP' => 'JP',
        'KE' => 'KE',
        'KG' => 'KG',
        'KH' => 'KH',
        'KI' => 'KI',
        'KM' => 'KM',
        'KN' => 'KN',
        'KP' => 'KP',
        'KR' => 'KR',
        'KW' => 'KW',
        'KY' => 'KY',
        'KZ' => 'KZ',
        'LA' => 'LA',
        'LB' => 'LB',
        'LC' => 'LC',
        'LI' => 'LI',
        'LK' => 'LK',
        'LR' => 'LR',
        'LS' => 'LS',
        'LT' => 'LT',
        'LU' => 'LU',
        'LV' => 'LV',
        'LY' => 'LY',
        'MA' => 'MA',
        'MC' => 'MC',
        'MD' => 'MD',
        'ME' => 'ME',
        'MF' => 'MF',
        'MG' => 'MG',
        'MH' => 'MH',
        'MK' => 'MK',
        'ML' => 'ML',
        'MM' => 'MM',
        'MN' => 'MN',
        'MO' => 'MO',
        'MP' => 'MP',
        'MQ' => 'MQ',
        'MR' => 'MR',
        'MS' => 'MS',
        'MT' => 'MT',
        'MU' => 'MU',
        'MV' => 'MV',
        'MW' => 'MW',
        'MX' => 'MX',
        'MY' => 'MY',
        'MZ' => 'MZ',
        'NA' => 'NA',
        'NC' => 'NC',
        'NE' => 'NE',
        'NF' => 'NF',
        'NG' => 'NG',
        'NI' => 'NI',
        'NL' => 'NL',
        'NO' => 'NO',
        'NP' => 'NP',
        'NR' => 'NR',
        'NU' => 'NU',
        'NZ' => 'NZ',
        'OM' => 'OM',
        'PA' => 'PA',
        'PE' => 'PE',
        'PF' => 'PF',
        'PG' => 'PG',
        'PH' => 'PH',
        'PK' => 'PK',
        'PL' => 'PL',
        'PM' => 'PM',
        'PN' => 'PN',
        'PR' => 'PR',
        'PS' => 'PS',
        'PT' => 'PT',
        'PW' => 'PW',
        'PY' => 'PY',
        'QA' => 'QA',
        'RE' => 'RE',
        'RO' => 'RO',
        'RS' => 'RS',
        'RU' => 'RU',
        'RW' => 'RW',
        'SA' => 'SA',
        'SB' => 'SB',
        'SC' => 'SC',
        'SD' => 'SD',
        'SE' => 'SE',
        'SG' => 'SG',
        'SH' => 'SH',
        'SI' => 'SI',
        'SJ' => 'SJ',
        'SK' => 'SK',
        'SL' => 'SL',
        'SM' => 'SM',
        'SN' => 'SN',
        'SO' => 'SO',
        'SR' => 'SR',
        'SS' => 'SS',
        'ST' => 'ST',
        'SV' => 'SV',
        'SX' => 'SX',
        'SY' => 'SY',
        'SZ' => 'SZ',
        'TC' => 'TC',
        'TD' => 'TD',
        'TF' => 'TF',
        'TG' => 'TG',
        'TH' => 'TH',
        'TJ' => 'TJ',
        'TK' => 'TK',
        'TL' => 'TL',
        'TM' => 'TM',
        'TN' => 'TN',
        'TO' => 'TO',
        'TR' => 'TR',
        'TT' => 'TT',
        'TV' => 'TV',
        'TW' => 'TW',
        'TZ' => 'TZ',
        'UA' => 'UA',
        'UG' => 'UG',
        'UM' => 'UM',
        'US' => 'US',
        'UY' => 'UY',
        'UZ' => 'UZ',
        'VA' => 'VA',
        'VC' => 'VC',
        'VE' => 'VE',
        'VG' => 'VG',
        'VI' => 'VI',
        'VN' => 'VN',
        'VU' => 'VU',
        'WF' => 'WF',
        'WS' => 'WS',
        'YE' => 'YE',
        'YT' => 'YT',
        'ZA' => 'ZA',
        'ZM' => 'ZM',
        'ZW' => 'ZW',
      ),
      'enabled' => 1,
      'size' => 5,
    ),
    'translatable' => 0,
    'type' => 'country',
  );

  // Exported field_base: 'field_cover_image'.
  $field_bases['field_cover_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cover_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_file_image_alt_text'.
  $field_bases['field_file_image_alt_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_alt_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_file_image_title_text'.
  $field_bases['field_file_image_title_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_title_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_phone'.
  $field_bases['field_phone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_phone',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 20,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_second_body'.
  $field_bases['field_second_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_second_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_subtitle'.
  $field_bases['field_subtitle'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subtitle',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_zip'.
  $field_bases['field_zip'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_zip',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 10,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'title_field'.
  $field_bases['title_field'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'title_field',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  return $field_bases;
}
