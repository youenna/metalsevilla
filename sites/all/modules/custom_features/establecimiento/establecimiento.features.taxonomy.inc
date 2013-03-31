<?php
/**
 * @file
 * establecimiento.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function establecimiento_taxonomy_default_vocabularies() {
  return array(
    'tipo_establecimiento' => array(
      'name' => 'Tipo de Establecimiento',
      'machine_name' => 'tipo_establecimiento',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
