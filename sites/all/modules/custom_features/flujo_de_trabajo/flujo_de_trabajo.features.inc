<?php
/**
 * @file
 * flujo_de_trabajo.features.inc
 */

/**
 * Implements hook_workflow_features_default_workflow().
 */
function flujo_de_trabajo_workflow_features_default_workflow() {
  return array(
    'Publicación de contenido' => array(
      'name' => 'Publicación de contenido',
      'tab_roles' => 'author,3,7,8',
      'options' => 'a:3:{s:16:"comment_log_node";i:1;s:15:"comment_log_tab";i:1;s:13:"name_as_title";i:1;}',
      'states' => array(
        0 => array(
          'state' => '(creation)',
          'weight' => '-50',
          'sysid' => '1',
          'status' => '1',
        ),
        1 => array(
          'state' => 'borrador',
          'weight' => '0',
          'sysid' => '0',
          'status' => '1',
        ),
        2 => array(
          'state' => 'aceptado',
          'weight' => '0',
          'sysid' => '0',
          'status' => '1',
        ),
        3 => array(
          'state' => 'descartado',
          'weight' => '0',
          'sysid' => '0',
          'status' => '1',
        ),
      ),
      'transitions' => array(
        0 => array(
          'sid' => '(creation)',
          'target_sid' => 'borrador',
          'roles' => 'author',
        ),
        1 => array(
          'sid' => 'borrador',
          'target_sid' => 'aceptado',
          'roles' => '7,8',
        ),
        2 => array(
          'sid' => 'aceptado',
          'target_sid' => 'descartado',
          'roles' => '7,8',
        ),
        3 => array(
          'sid' => 'descartado',
          'target_sid' => 'borrador',
          'roles' => 'author,7,8',
        ),
      ),
      'node_types' => array(
        0 => array(
          'type' => 'anuncio',
          'wid' => '1',
        ),
        1 => array(
          'type' => 'critica_disco',
          'wid' => '1',
        ),
        2 => array(
          'type' => 'cronica',
          'wid' => '1',
        ),
        3 => array(
          'type' => 'disco',
          'wid' => '1',
        ),
        4 => array(
          'type' => 'entrevista',
          'wid' => '1',
        ),
        5 => array(
          'type' => 'evento',
          'wid' => '1',
        ),
        6 => array(
          'type' => 'foto',
          'wid' => '1',
        ),
        7 => array(
          'type' => 'lanzamiento_disco',
          'wid' => '1',
        ),
        8 => array(
          'type' => 'noticia',
          'wid' => '1',
        ),
        9 => array(
          'type' => 'page',
          'wid' => '1',
        ),
        10 => array(
          'type' => 'video',
          'wid' => '1',
        ),
      ),
    ),
    'Publicación de establecimiento' => array(
      'name' => 'Publicación de establecimiento',
      'tab_roles' => 'author,3',
      'options' => 'a:3:{s:16:"comment_log_node";i:1;s:15:"comment_log_tab";i:1;s:13:"name_as_title";i:1;}',
      'states' => array(
        0 => array(
          'state' => '(creation)',
          'weight' => '-50',
          'sysid' => '1',
          'status' => '1',
        ),
        1 => array(
          'state' => 'borrador de establecimiento',
          'weight' => '0',
          'sysid' => '0',
          'status' => '1',
        ),
        2 => array(
          'state' => 'establecimiento aceptado',
          'weight' => '0',
          'sysid' => '0',
          'status' => '1',
        ),
        3 => array(
          'state' => 'establecimiento descartado',
          'weight' => '0',
          'sysid' => '0',
          'status' => '1',
        ),
      ),
      'transitions' => array(
        0 => array(
          'sid' => '(creation)',
          'target_sid' => 'borrador de establecimiento',
          'roles' => 'author',
        ),
        1 => array(
          'sid' => 'borrador de establecimiento',
          'target_sid' => 'establecimiento aceptado',
          'roles' => '3',
        ),
        2 => array(
          'sid' => 'borrador de establecimiento',
          'target_sid' => 'establecimiento descartado',
          'roles' => '3',
        ),
        3 => array(
          'sid' => 'establecimiento aceptado',
          'target_sid' => 'borrador de establecimiento',
          'roles' => 'author,6',
        ),
        4 => array(
          'sid' => 'establecimiento aceptado',
          'target_sid' => 'establecimiento descartado',
          'roles' => '3',
        ),
        5 => array(
          'sid' => 'establecimiento descartado',
          'target_sid' => 'borrador de establecimiento',
          'roles' => ',3,author',
        ),
        6 => array(
          'sid' => 'establecimiento descartado',
          'target_sid' => 'establecimiento aceptado',
          'roles' => '3',
        ),
      ),
      'node_types' => array(
        0 => array(
          'type' => 'establecimiento',
          'wid' => '7',
        ),
      ),
    ),
    'Publicación de grupo/artista' => array(
      'name' => 'Publicación de grupo/artista',
      'tab_roles' => 'author,3,5',
      'options' => 'a:3:{s:16:"comment_log_node";i:1;s:15:"comment_log_tab";i:1;s:13:"name_as_title";i:1;}',
      'states' => array(
        0 => array(
          'state' => '(creation)',
          'weight' => '-50',
          'sysid' => '1',
          'status' => '1',
        ),
        1 => array(
          'state' => 'borrador de grupo',
          'weight' => '0',
          'sysid' => '0',
          'status' => '1',
        ),
        2 => array(
          'state' => 'grupo aceptado',
          'weight' => '0',
          'sysid' => '0',
          'status' => '1',
        ),
        3 => array(
          'state' => 'grupo descartado',
          'weight' => '0',
          'sysid' => '0',
          'status' => '1',
        ),
      ),
      'transitions' => array(
        0 => array(
          'sid' => '(creation)',
          'target_sid' => 'borrador de grupo',
          'roles' => 'author,5',
        ),
        1 => array(
          'sid' => 'borrador de grupo',
          'target_sid' => 'grupo aceptado',
          'roles' => '3',
        ),
        2 => array(
          'sid' => 'borrador de grupo',
          'target_sid' => 'grupo descartado',
          'roles' => '3',
        ),
        3 => array(
          'sid' => 'grupo aceptado',
          'target_sid' => 'borrador de grupo',
          'roles' => 'author,5',
        ),
        4 => array(
          'sid' => 'grupo aceptado',
          'target_sid' => 'grupo descartado',
          'roles' => '3',
        ),
        5 => array(
          'sid' => 'grupo descartado',
          'target_sid' => 'borrador de grupo',
          'roles' => '3',
        ),
        6 => array(
          'sid' => 'grupo descartado',
          'target_sid' => 'grupo aceptado',
          'roles' => '3',
        ),
      ),
      'node_types' => array(
        0 => array(
          'type' => 'grupo_artista',
          'wid' => '6',
        ),
      ),
    ),
  );
}
