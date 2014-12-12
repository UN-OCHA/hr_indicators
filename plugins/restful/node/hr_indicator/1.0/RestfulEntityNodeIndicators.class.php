<?php

/**
 * @file
 * Contains \RestfulEntityNodeIndicators.
 */

class RestfulEntityNodeIndicators extends \RestfulEntityBaseNode {

  /**
   * Overrides RestfulEntityBaseNode::addExtraInfoToQuery()
   * 
   * Adds proper query tags
   */
  protected function addExtraInfoToQuery($query) {
    parent::addExtraInfoToQuery($query);
    $filters = $this->parseRequestForListFilter();
    if (!empty($filters)) {
      foreach ($query->tags as $i => $tag) {
        if ($tag == 'node_access') {
          unset($query->tags[$i]);
        }
      }
      $query->addTag('entity_field_access');
    }
  }

  /**
   * Overrides \RestfulEntityBase::publicFieldsInfo().
   */
  public function publicFieldsInfo() {
    $public_fields = parent::publicFieldsInfo();

    $public_fields['global_clusters'] = array(
      'property' => 'field_sectors',
      'resource' => array(
        'hr_sector' => 'global_clusters',
      ),
    );

    $public_fields['code'] = array(
      'property' => 'field_ind_code',
    );

    $public_fields['domain'] = array(
      'property' => 'field_ind_domain',
      'resource' => array(
        'hr_indicator_domain' => 'indicator_domains',
      ),
    );

    $public_fields['description'] = array(
      'property' => 'body',
    );

    $public_fields['unit'] = array(
      'property' => 'field_ind_unit',
      'resource' => array(
        'hr_indicator_unit' => 'indicator_units',
      ),
    );

    $public_fields['unit_description'] = array(
      'property' => 'field_ind_unit_desc',
    );

    /*$public_fields['homepage'] = array(
      'property' => 'field_website',
      'sub_property' => 'url',
    );

    $public_fields['email'] = array(
      'property' => 'field_email',
    );

    $public_fields['type'] = array(
      'property' => 'field_operation_type',
    );

    $public_fields['status'] = array(
      'property' => 'field_operation_status',
    );

    $public_fields['country'] = array(
      'property' => 'field_country',
      'resource' => array(
        'hr_location' => 'locations',
      ),
    );

    $public_fields['launch_date'] = array(
      'property' => 'field_launch_date',
    );

    $public_fields['url'] = array(
      'property' => 'url',
    );*/

    return $public_fields;
  }

}
